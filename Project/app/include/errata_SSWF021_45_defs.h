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

#ifndef INCLUDE_ERRATA_SSWF021_45_DEFS_H_
#define INCLUDE_ERRATA_SSWF021_45_DEFS_H_

typedef unsigned int uint32_t;
typedef uint32_t uint32;


typedef volatile struct dccBase
{
    uint32 GCTRL;      	    /**< 0x0000: DCC Control Register		*/
    uint32 REV;      		/**< 0x0004: DCC Revision Id Register 	*/
    uint32 CNT0SEED;    	/**< 0x0008: DCC Counter0 Seed Register	*/
    uint32 VALID0SEED;      /**< 0x000C: DCC Valid0 Seed Register 	*/
    uint32 CNT1SEED;		/**< 0x0010: DCC Counter1 Seed Register 	*/
    uint32 STAT; 			/**< 0x0014: DCC Status Register 		*/
    uint32 CNT0;    		/**< 0x0018: DCC Counter0 Value Register 	*/
    uint32 VALID0;    	    /**< 0x001C: DCC Valid0 Value Register 	*/
    uint32 CNT1;      	    /**< 0x0020: DCC Counter1 Value Register	*/
    uint32 CNT1CLKSRC;   	/**< 0x0024: DCC Counter1 Clock Source Selection Register 	*/
    uint32 CNT0CLKSRC;   	/**< 0x0028: DCC Counter0 Clock Source Selection Register 	*/
} dccBASE_t;

enum dcc1clocksource
{
    DCC1_CNT0_HF_LPO    = 0x5U,    /**< Alias for DCC1 CNT 0 CLOCK SOURCE 0*/
    DCC1_CNT0_TCK       = 0xAU,    /**< Alias for DCC1 CNT 0 CLOCK SOURCE 1*/
    DCC1_CNT0_OSCIN     = 0xFU,    /**< Alias for DCC1 CNT 0 CLOCK SOURCE 2*/

    DCC1_CNT1_PLL1      = 0x0U,    /**< Alias for DCC1 CNT 1 CLOCK SOURCE 0*/
    DCC1_CNT1_PLL2      = 0x1U,    /**< Alias for DCC1 CNT 1 CLOCK SOURCE 1*/
    DCC1_CNT1_LF_LPO    = 0x2U,    /**< Alias for DCC1 CNT 1 CLOCK SOURCE 2*/
    DCC1_CNT1_HF_LPO    = 0x3U,    /**< Alias for DCC1 CNT 1 CLOCK SOURCE 3*/
    DCC1_CNT1_EXTCLKIN1 = 0x5U,    /**< Alias for DCC1 CNT 1 CLOCK SOURCE 4*/
    DCC1_CNT1_EXTCLKIN2 = 0x6U,    /**< Alias for DCC1 CNT 1 CLOCK SOURCE 6*/
    DCC1_CNT1_VCLK      = 0x8U,    /**< Alias for DCC1 CNT 1 CLOCK SOURCE 8*/
    DCC1_CNT1_N2HET1_31 = 0xAU     /**< Alias for DCC1 CNT 1 CLOCK SOURCE 9*/
};

#define SYS_CLKSRC_PLL1 0x00000002U
#define SYS_CLKSRC_PLL2 0x00000040U
#define SYS_CLKCNTRL_PENA 0x00000100U
#define ESM_SR1_PLL1SLIP 0x400U
#define ESM_SR4_PLL2SLIP 0x400U
#define PLL1 0x08
#define PLL2 0x80
#define dcc1CNT1_CLKSRC_PLL1 0x0000A000U
#define dcc1CNT1_CLKSRC_PLL2 0x0000A001U

#define systemREG1 ((systemBASE1_t *)0xFFFFFF00U)
#define systemREG2 ((systemBASE2_t *)0xFFFFE100U)
#define esmREG ((esmBASE_t *)0xFFFFF500U)
#define dccREG1   ((dccBASE_t *)0xFFFFEC00U)


#endif /* INCLUDE_ERRATA_SSWF021_45_DEFS_H_ */
