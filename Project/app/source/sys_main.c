/** @file sys_main.c 
*   @brief Application main file
*   @date 11-Dec-2018
*   @version 04.07.01
*
*   This file contains an empty main function,
*   which can be used for the application.
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


/* USER CODE BEGIN (0) */
/* USER CODE END */

/* Include Files */

#include "sys_common.h"

/* USER CODE BEGIN (1) */

#include "sci.h"            //  Serial Interface
#include "rti.h"            //  Real-Time Interrupt
#include "i2c.h"
#include "can.h"
#include "adc.h"
#include "scm.h"
#include "serial.h"
#include "stdio.h"
#include "string.h"
#include "het.h"
#include "lin.h"
#include "gio.h"
#include "het.h"
#include "mibspi.h"
#include "controller_tester.h"


/* USER CODE END */

/** @fn void main(void)
*   @brief Application main function
*   @note This function is empty by default.
*
*   This function is called after startup.
*   The user can use this function to implement the application.
*/

/* USER CODE BEGIN (2) */


/**
  * @brief  Get a key from the HyperTerminal
  * @param  None
  * @retval The Key Pressed
  */

char UART_getKey(sciBASE_t *sci);

void MY_Delay(int count) //Delay ÇÔ¼ö
{
	//	Release ¸ðµå¿¡¼­ µ¿ÀÛX
    int i,j;
    i=count*8450;
    for(j=0;j<=i;j++){
            }
}


#if 0
uint8_t command; //Å°º¸µå ÀÔ·Â ÀúÀå º¯¼ö

void sciNotification(sciBASE_t *sci, uint32 flags)
{
    sciSend(sciREG,1,&command);
    sciReceive(sciREG,1,&command);
}

void IO_Test()
{
    printf(" IO Test Start\r\n");
    printf("==================================\r\n");
    printf("== a. Digital Output Test       == \r\n");
    printf("== b. Digital Input  Test       == \r\n");
    printf("== c. Digital In/Out Aging Test == \r\n");
    printf("===================================\r\n");

    do{
        switch(command){
            case 'a': printf("DO_Test();\r\n"); break;
            case 'b': printf("DI_Test();\r\n"); break;
            case 'c': printf("DO_DI_Aging_Test();\r\n"); break;
            default : break;
        }
    }while(command !='q');

}
#endif

/* USER CODE END */

int main(void)
{
/* USER CODE BEGIN (3) */
	uint32 nTick;
	static uint32 s_nTick;

	//  initialize serial
	sciInit();
	//  initialize rti
	hetInit();
	rtiInit();
	mibspiInit();
	linInit();
	gioInit();
	adcInit();
	i2cInit(); //i2c Æ÷Æ® ÃÊ±âÈ­
	canInit();
	adcInit();

	canEnableErrorNotification(canREG1_tmp);
	canEnableStatusChangeNotification(canREG1_tmp);

	edgeEnableNotification(hetREG1_tmp, edge0);
	edgeEnableNotification(hetREG1_tmp, edge1);

    rtiStartCounter(rtiCOUNTER_BLOCK0);     			//  usec
    rtiStartCounter(rtiCOUNTER_BLOCK1);     			//  usec
    rtiEnableNotification(rtiNOTIFICATION_COMPARE0);	//	RTI - rtiNotification()
    rtiEnableNotification(rtiNOTIFICATION_COMPARE1);	//	RTI - rtiNotification()
    rtiEnableNotification(rtiNOTIFICATION_COMPARE2);	//	RTI - rtiNotification()
    rtiEnableNotification(rtiNOTIFICATION_COMPARE3);	//	RTI - rtiNotification()

    //  ÇÑ±ÛÅ×½ºÆ®
    printf("Hello world\r\n");

    printf("%s(%d)\r\n", __FUNCTION__, __LINE__);

#if defined(STATIC_SKIP)
    printf("%s(%d) - Stack Pointer - 0x%p\r\n", __FUNCTION__, __LINE__, _getSPValue_());
#endif
    printf( "MainLoop\r\n" );


    SerialInit();       //  Serial Init
#if defined(STATIC_SKIP)
    _enable_IRQ();      //  MISRA SKIP : Enable Interrupt
#endif

#if 0

	//  initialize serial
//	sciInit();
//	i2cInit(); //i2c Æ÷Æ® ÃÊ±âÈ­
    //  ÇÑ±ÛÅ×½ºÆ®
    printf("Hello world\r\n");
 //   _enable_IRQ();      //  MISRA SKIP : Enable Interrupt

    Test_i2c_eep();		//	eeprom test

	return 0;

#endif


    s_nTick = rtiGetCurrentTick((uint32)rtiCOMPARE0);

    SCM_Process();

    rtiStopCounter(rtiCOUNTER_BLOCK0);

/* USER CODE END */

    return 0;
}


/* USER CODE BEGIN (4) */
/* USER CODE END */
