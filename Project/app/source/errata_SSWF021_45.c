/** @file errata_SSWF021_45.c 
*   @brief errata for PLLs 
*   @date 11-Dec-2018
*   @version 04.07.01
*
*/
/* 
* Copyright (C) 2009-2018 Texas Instruments Incorporated - www.ti.com  
* 
* 
*  Redistribution and use in source and binary forms, with or without 
*  modification, are permitted provided that the following conditions 
*  are met:
*
*    Redistributions of source code must retain the above copyright 
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the 
*    documentation and/or other materials provided with the   
*    distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/
#include "errata_SSWF021_45_defs.h"
#include "errata_SSWF021_45.h"
#include "controller_tester.h"
static uint32 check_frequency(uint32 cnt1_clksrc);
static uint32 disable_plls(uint32 plls);
dccBASE_t *dccREG1_tmp = dccREG1;
/** @fn uint32 _errata_SSWF021_45_both_plls(uint32 count)
*   @brief This handles the errata for PLL1 and PLL2. This function is called in device startup
*   
*   @param[in] count : Number of retries until both PLLs are locked successfully
*                      Minimum value recommended is 5
*   
*   @return 0 = Success (the PLL or both PLLs have successfully locked and then been disabled)
*           1 = PLL1 failed to successfully lock in "count" tries
*           2 = PLL2 failed to successfully lock in "count" tries
*           3 = Neither PLL1 nor PLL2 successfully locked in "count" tries
*           4 = The workaround function was not able to disable at least one of the PLLs. The most likely reason
                is that a PLL is already being used as a clock source. This can be caused by the workaround function
                being called from the wrong place in the code.
*/
uint32 _errata_SSWF021_45_both_plls(uint32 count)
{
    uint32 failCode,retries,clkCntlSav;
	/* save CLKCNTL */
    clkCntlSav = systemREG1_tmp->CLKCNTL;
    /* First set VCLK2 = HCLK */ 
    systemREG1_tmp->CLKCNTL = clkCntlSav & 0x000F0100U;
    /* Now set VCLK = HCLK and enable peripherals */
    systemREG1_tmp->CLKCNTL = SYS_CLKCNTRL_PENA;
	failCode = 0U;
    for(retries = 0U;(retries < count);retries++)
    {
        failCode = 0U;
        /* Disable PLL1 and PLL2 */
		failCode = disable_plls(SYS_CLKSRC_PLL1 | SYS_CLKSRC_PLL2); 
        if(failCode != 0U)
        {
            break;
        }

        /* Clear Global Status Register */
        systemREG1_tmp->GBLSTAT = 0x00000301U;
        /* Clear the ESM PLL slip flags */
        esmREG_tmp->SR1[0U] = ESM_SR1_PLL1SLIP;
        esmREG_tmp->SR4[0U] = ESM_SR4_PLL2SLIP;
        /* set both PLLs to OSCIN/1*27/(2*1) */
        systemREG1_tmp->PLLCTL1 = 0x20001A00U;
        systemREG1_tmp->PLLCTL2 = 0x3FC0723DU;
        systemREG2_tmp->PLLCTL3 = 0x20001A00U;
        systemREG1_tmp->CSDISCLR =    SYS_CLKSRC_PLL1 | SYS_CLKSRC_PLL2;
        /* Check for (PLL1 valid or PLL1 slip) and (PLL2 valid or PLL2 slip) */
        while  ((((systemREG1_tmp->CSVSTAT & SYS_CLKSRC_PLL1) == 0U) && ((esmREG_tmp->SR1[0U] & ESM_SR1_PLL1SLIP) == 0U)) ||
                (((systemREG1_tmp->CSVSTAT & SYS_CLKSRC_PLL2) == 0U) && ((esmREG_tmp->SR4[0U] & ESM_SR4_PLL2SLIP) == 0U)))
        {
            /* Wait */
        }
        /* If PLL1 valid, check the frequency */
        if(((esmREG_tmp->SR1[0U] & ESM_SR1_PLL1SLIP) != 0U) || ((systemREG1_tmp->GBLSTAT & 0x00000300U) != 0U))
        {
          failCode |= 1U;
        }
        else
        {
            failCode |= check_frequency(dcc1CNT1_CLKSRC_PLL1);
        }
        /* If PLL2 valid, check the frequency */
        if(((esmREG_tmp->SR4[0U] & ESM_SR4_PLL2SLIP) != 0U) || ((systemREG1_tmp->GBLSTAT & 0x00000300U) != 0U))
        {
          failCode |= 2U;
        }
        else
        {
            failCode |= (check_frequency(dcc1CNT1_CLKSRC_PLL2) << 1U);
        }
        if (failCode == 0U)
        {
            break;
        }
        if(while_break == 1)
        {
        	break;
        }
	}
	/* To avoid MISRA violation 382S 
	   (void)missing for discarded return value */	
    failCode = disable_plls(SYS_CLKSRC_PLL1 | SYS_CLKSRC_PLL2);
	/* restore CLKCNTL, VCLKR and PENA first */
    systemREG1_tmp->CLKCNTL = (clkCntlSav & 0x000F0100U);
    /* restore CLKCNTL, VCLK2R */
    systemREG1_tmp->CLKCNTL = clkCntlSav;
    return failCode;
}
/** @fn uint32 _errata_SSWF021_45_pll1(uint32 count)
*   @brief This handles the errata for PLL1. This function is called in device startup
*   
*   @param[in] count : Number of retries until both PLL1 is locked successfully
*                      Minimum value recommended is 5
*   
*   @return 0 = Success (the PLL or both PLLs have successfully locked and then been disabled)
*           1 = PLL1 failed to successfully lock in "count" tries
*           2 = PLL2 failed to successfully lock in "count" tries
*           3 = Neither PLL1 nor PLL2 successfully locked in "count" tries
*           4 = The workaround function was not able to disable at least one of the PLLs. The most likely reason
                is that a PLL is already being used as a clock source. This can be caused by the workaround function
                being called from the wrong place in the code.
*/
uint32 _errata_SSWF021_45_pll1(uint32 count)
{
    uint32 failCode,retries,clkCntlSav;
	/* save CLKCNTL */
    clkCntlSav = systemREG1_tmp->CLKCNTL;
    /* First set VCLK2 = HCLK */ 
    systemREG1_tmp->CLKCNTL = clkCntlSav & 0x000F0100U;
    /* Now set VCLK = HCLK and enable peripherals */
    systemREG1_tmp->CLKCNTL = SYS_CLKCNTRL_PENA;
	failCode = 0U;
    for(retries = 0U;(retries < count);retries++)
    {
        failCode = 0U;
        /* Disable PLL1 */
        failCode = disable_plls(SYS_CLKSRC_PLL1);
        if(failCode != 0U)
        {
            break;
        }

        /* Clear Global Status Register */
        systemREG1_tmp->GBLSTAT = 0x00000301U;
        /* Clear the ESM PLL slip flags */
        esmREG_tmp->SR1[0U] = ESM_SR1_PLL1SLIP;
        /* set  PLL1 to OSCIN/1*27/(2*1) */
        systemREG1_tmp->PLLCTL1 = 0x20001A00U;
        systemREG1_tmp->PLLCTL2 = 0x3FC0723DU;
        systemREG1_tmp->CSDISCLR =    SYS_CLKSRC_PLL1;
        /* Check for PLL1 valid or PLL1 slip*/
        while(((systemREG1_tmp->CSVSTAT & SYS_CLKSRC_PLL1) == 0U) && ((esmREG_tmp->SR1[0U] & ESM_SR1_PLL1SLIP) == 0U))
        {
            /* Wait */
        }
        /* If PLL1 valid, check the frequency */
        if(((esmREG_tmp->SR1[0U] & ESM_SR1_PLL1SLIP) != 0U) || ((systemREG1_tmp->GBLSTAT & 0x00000300U) != 0U))
        {
          failCode |= 1U;
        }
        else
        {
            failCode |= check_frequency(dcc1CNT1_CLKSRC_PLL1);
        }
        if (failCode == 0U)
        {
            break;
        }
	}
	/* To avoid MISRA violation 382S 
	   (void)missing for discarded return value */	
    failCode = disable_plls(SYS_CLKSRC_PLL1);
	
    /* restore CLKCNTL, VCLKR and PENA first */
    systemREG1_tmp->CLKCNTL = (clkCntlSav & 0x000F0100U);
    /* restore CLKCNTL, VCLK2R */
    systemREG1_tmp->CLKCNTL = clkCntlSav;
    return failCode;
}
/** @fn uint32 _errata_SSWF021_45_pll2(uint32 count)
*   @brief This handles the errata for PLL2. This function is called in device startup
*   
*   @param[in] count : Number of retries until PLL2 is locked successfully
*                      Minimum value recommended is 5
*   
*   @return 0 = Success (the PLL or both PLLs have successfully locked and then been disabled)
*           1 = PLL1 failed to successfully lock in "count" tries
*           2 = PLL2 failed to successfully lock in "count" tries
*           3 = Neither PLL1 nor PLL2 successfully locked in "count" tries
*           4 = The workaround function was not able to disable at least one of the PLLs. The most likely reason
                is that a PLL is already being used as a clock source. This can be caused by the workaround function
                being called from the wrong place in the code.
*/
uint32 _errata_SSWF021_45_pll2(uint32 count)
{
    uint32 failCode,retries,clkCntlSav;
	/* save CLKCNTL */
    clkCntlSav = systemREG1_tmp->CLKCNTL;
    /* First set VCLK2 = HCLK */ 
    systemREG1_tmp->CLKCNTL = clkCntlSav & 0x000F0100U;
    /* Now set VCLK = HCLK and enable peripherals */
    systemREG1_tmp->CLKCNTL = SYS_CLKCNTRL_PENA;
	failCode = 0U;
    for(retries = 0U;(retries < count);retries++)
    {
        failCode = 0U;
        /* Disable PLL2 */
		failCode = disable_plls(SYS_CLKSRC_PLL2);
        if(failCode != 0U)
        {
            break;
        }

        /* Clear Global Status Register */
        systemREG1_tmp->GBLSTAT = 0x00000301U;
        /* Clear the ESM PLL slip flags */
        esmREG_tmp->SR4[0U] = ESM_SR4_PLL2SLIP;
        /* set PLL2 to OSCIN/1*27/(2*1) */
        systemREG2_tmp->PLLCTL3 = 0x20001A00U;
        systemREG1_tmp->CSDISCLR = SYS_CLKSRC_PLL2;
        /* Check for PLL2 valid or PLL2 slip */
        while (((systemREG1_tmp->CSVSTAT & SYS_CLKSRC_PLL2) == 0U) && ((esmREG_tmp->SR4[0U] & ESM_SR4_PLL2SLIP) == 0U))
        {
            /* Wait */
        }
        /* If PLL2 valid, check the frequency */
        if(((esmREG_tmp->SR4[0U] & ESM_SR4_PLL2SLIP) != 0U) || ((systemREG1_tmp->GBLSTAT & 0x00000300U) != 0U))
        {
          failCode |= 2U;
        }
        else
        {
            failCode |= (check_frequency(dcc1CNT1_CLKSRC_PLL2) << 1U);
        }
        if (failCode == 0U)
        {
            break;
        }
	}	
	/* To avoid MISRA violation 382S 
	   (void)missing for discarded return value */	
    failCode = disable_plls(SYS_CLKSRC_PLL2);
	/* restore CLKCNTL, VCLKR and PENA first */
    systemREG1_tmp->CLKCNTL = (clkCntlSav & 0x000F0100U);
    /* restore CLKCNTL, VCLK2R */
    systemREG1_tmp->CLKCNTL = clkCntlSav;
    return failCode;
}
/** @fn uint32 check_frequency(uint32 cnt1_clksrc)
*   @brief This function checks for the PLL frequency.
*   
*   @param[in] cnt1_clksrc : Clock source for Counter1 
*                            0U - PLL1      (clock source 0)
*                            1U - PLL2      (clock source 1)
*   
*   @return   DCC Error status
*             0 - DCC error has not occurred
*             1 - DCC error has occurred
*/
static uint32 check_frequency(uint32 cnt1_clksrc)
{
    /* Setup DCC1 */
   /** DCC1 Global Control register configuration */
    dccREG1_tmp->GCTRL      = (uint32)0x5U |       /** Disable  DCC1 */
                          (uint32)((uint32)0x5U << 4U) | /** No Error Interrupt */
                          (uint32)((uint32)0xAU << 8U) | /** Single Shot mode */
                          (uint32)((uint32)0x5U << 12U); /** No Done Interrupt */
    /* Clear ERR and DONE bits */
    dccREG1_tmp->STAT = 3U;
    /** DCC1 Clock0 Counter Seed value configuration */
    dccREG1_tmp->CNT0SEED   = 68U;
    /** DCC1 Clock0 Valid Counter Seed value configuration */
    dccREG1_tmp->VALID0SEED = 4U;
    /** DCC1 Clock1 Counter Seed value configuration */
    dccREG1_tmp->CNT1SEED   = 972U;
    /** DCC1 Clock1 Source 1 Select */
    dccREG1_tmp->CNT1CLKSRC = (uint32)((uint32)10U << 12U) |     /** DCC Enable / Disable Key */
                          (uint32) cnt1_clksrc;  /** DCC1 Clock Source 1 */

    dccREG1_tmp->CNT0CLKSRC = (uint32)DCC1_CNT0_OSCIN;  /** DCC1 Clock Source 0 */

    /** DCC1 Global Control register configuration */
    dccREG1_tmp->GCTRL      = (uint32)0xAU |       /** Enable  DCC1 */
                          (uint32)((uint32)0x5U << 4U) | /** No Error Interrupt */
                          (uint32)((uint32)0xAU << 8U) | /** Single Shot mode */
                          (uint32)((uint32)0x5U << 12U); /** No Done Interrupt */
    while(dccREG1_tmp->STAT == 0U)
    {
        /* Wait */
    }
    return (dccREG1_tmp->STAT & 0x01U);
}
/** @fn uint32 disable_plls(uint32 plls)
*   @brief This function disables plls and clears the respective ESM flags.
*   
*   @param[in] plls : Clock source for Counter1 
*                            2U - PLL1
*                            40U - PLL2
*   
*   @return   failCode
*             0 = Success (the PLL or both PLLs have successfully locked and then been disabled)
*             4 = The workaround function was not able to disable at least one of the PLLs. The most likely reason
*                 is that a PLL is already being used as a clock source. This can be caused by the workaround function
*                 being called from the wrong place in the code.
*/
static uint32 disable_plls(uint32 plls)
{
    uint32 timeout,failCode;
	
    systemREG1_tmp->CSDISSET = plls;
	failCode = 0U;
    timeout = 0x10U;
	timeout --;
    while(((systemREG1_tmp->CSVSTAT & (plls)) != 0U) && (timeout != 0U))
    {
        /* Clear ESM and GLBSTAT PLL slip flags */
        systemREG1_tmp->GBLSTAT = 0x00000300U;

        if ((plls & SYS_CLKSRC_PLL1) == SYS_CLKSRC_PLL1)
        {
            esmREG_tmp->SR1[0U] = ESM_SR1_PLL1SLIP;
        }
        if ((plls & SYS_CLKSRC_PLL2) == SYS_CLKSRC_PLL2)
        {
            esmREG_tmp->SR4[0U] = ESM_SR4_PLL2SLIP;
        }
		timeout --;
    /* Wait */
    }
    if(timeout == 0U)
    {
        failCode = 4U;
    }
    else
    {
        failCode = 0U;
    }
    return failCode;
}