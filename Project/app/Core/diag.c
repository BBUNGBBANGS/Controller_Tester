/*------------------------------------------------------------------------------------------
	Project			: SCM Board
	Description		: 

	Writer			: 
	Revision		: 
	Date			: 2022. 07.
	Copyright		:
	 
	Revision History 
	1. 2022. 07.	: Created
-------------------------------------------------------------------------------------------*/

//========================================================================
// Header

#include "sys_common.h"

#include "rti.h"            //  Real-Time Interrupt

#include "diag.h"

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "i2c_eep.h"

#include "adc_pwr.h"
#include "scm.h"
#include "i2c_temp.h"

#include "crc16.h"		//	CRC16
#include "config.h"
#include "controller_tester.h"

//========================================================================
// Define


//========================================================================
// Function

int		DiagInit()		//	珥덇린 遺��똿�떆 Diag.
{
	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	Diag_ProgramImage();
	Diag_ProgramData();
	Diag_EEPRom();
	Diag_Stack_Init();

	return 1;
}

int		DiagProc()		//	二쇨린�쟻�쑝濡� 泥댄겕.	-	50 msec
{
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	Diag_Volt_Process();
	Diag_Stack_Process();
	Diag_Temp_Process();		//	50 msec
	Diag_SysTimer_Process();

	return 1;
}


int		Diag_ProgramImage			( void )	//	-		5.3.1	Ensuring the Integrity of Program Image	92
{
	uint16_t	*pMgcNo		=	(uint16_t *)IMG_VALID_MGN_ADDR;
	uint16_t	*pCRC		=	(uint16_t *)IMG_VALID_CRC_ADDR;
	uint32_t	*pImgSize	=	(uint32_t *)IMG_VALID_SIZ_ADDR;
//	uint8_t		*pImgAddr	=	(uint8_t *)0;
	uint8_t     *pImgAddr   =   NULL;
	uint16_t	nCrc16;

	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	if( *pMgcNo == IMG_CRC_MAGICNUMBER )
	{
		printf("%s(%d) - Found MagicNo\n", __FUNCTION__, __LINE__ );

		printf("%s(%d) - CRC 0x%04X / Size : %d\n", __FUNCTION__, __LINE__, *pCRC, *pImgSize );

		nCrc16 = (uint16_t)crc16_calc( 0x0000U, (unsigned char *)pImgAddr, (int)*pImgSize );

		printf("%s(%d) - Calc CRC 0x%04X\n", __FUNCTION__, __LINE__, nCrc16 );

		if ( nCrc16 == *pCRC )
		{
			printf("%s(%d) - Image Valid Check : OK\n", __FUNCTION__, __LINE__ );
		}
		else
		{
			printf("%s(%d) - Image Valid Check : Failed\n", __FUNCTION__, __LINE__ );
			SCM_Halt();
		}
	}
	else
	{
		printf("%s(%d) - Not Found MagicNo\n", __FUNCTION__, __LINE__ );
	}

	return 1;
}

int		Diag_ProgramData			( void )	//	-		5.3.2	Ensuring the Integrity of Program Data Initialization.	93
{
	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	return 1;
}

//int		Diag_CpuInstuction			( void )	//	-		5.3.3	Ensuring the Integrity of CPU Instruction	93
//{
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);
//
//	return 1;
//}
//
//int		Diag_CpuRegister			( void )	//	-		5.3.4	Ensuring the Integrity of CPU Register	94
//{
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);
//
//	return 1;
//}
//
//int		Diag_CpuSRam_Internal		( void )	//	-		5.3.5	Ensuring the Integrity of CPU Internal RAM	94
//{
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);
//
//	return 1;
//}

int		Diag_EEPRom					( void )	//	-		5.3.6	Ensuring the Integrity of EEPROM	95
{
	uint8_t i;
	uint8_t j;
	uint16_t eep_add=EPPDiagAddr;
	uint8_t wdata[DATA_COUNT];
	uint8_t rdata[DATA_COUNT];

	int err=0,test_count=0;

	uint8_t *transmit_d, *receive_d;

	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	for(j=(uint8_t)0;j<(uint8_t)EPPDiagPageCnt;j++)
	{
		eep_add = eep_add + (1U<<6);

		for(i=(uint8_t)0;i<(uint8_t)(DATA_COUNT);i++)
		{
			wdata[i]=i;
		}

		for(i=(uint8_t)0;i<(uint8_t)(DATA_COUNT);i++)
		{
			rdata[i]=(uint8_t)0x00;
		}

		transmit_d=i2c_Burst_W_EEP((uint16_t)eep_add, (uint8_t*)wdata, (uint8_t)DATA_COUNT);

		receive_d=i2c_Burst_R_EEP(eep_add, rdata, DATA_COUNT);

		for(i=(uint8_t)0;i<(uint8_t)DATA_COUNT;i++)
		{
			if(transmit_d[i] != receive_d[i])
			{
				err++;
				printf("received_data[%d]=%x, transmit_data[%d]=%x\r\n", i, receive_d[i], i, transmit_d[i]);

				//	EEPRom Error -> Halt
				SCM_Halt();
			}
		}

		test_count++;

		printf("EEP_Page%d has been tested\r\n", eep_add/(uint16_t)0x40);
	}

	printf("Total test_count=%d, Total err=%d\n", test_count, err);
	printf("%s(%d) - EEPRom Check OK\n", __FUNCTION__, __LINE__);

	return 1;
}

//
//int		Diag_DI_Process				( void )	//	-		5.3.7	Ensuring the Integrity of Digital Input	96
//{
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);
//
//	return 1;
//}
//
//int		Diag_PI_Process				( void )	//	-		5.3.8	Ensuring the Integrity of Pulse Input	96
//{
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);
//
//	return 1;
//}
//
//int		Diag_DO_Process				( void )	//	-		5.3.9	Ensuring the Integrity of Digital Output	97
//{
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);
//
//	return 1;
//}
//
//int		Diag_DO_CheckRelayOutput	( void )	//
//{
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);
//
//	return 1;
//}
//
//int		Diag_DO_CheckSWReadBack 	( void )	//
//{
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);
//
//	return 1;
//}

int		Diag_Volt_Process			( void )	//	-		5.3.10	Ensuring Stability of Voltage on SCM	97
{
	//	printf("%s(%d)\n", __FUNCTION__, __LINE__);
	//	SW-Req-Diag-010
	//		SCM shall check periodically the low voltage of SCM.
	//		If the low voltage (below 0.9V for VCC and below 2.4V for VCCIO)  detected, CPU shall be halted

	AdcMeasure();

	if ( AdcGetV1_2() < LOW_VOLTAGE_V1_2_VAL )
	{
		printf("%s(%d) - V1.2 low voltage ( < %.2f ) : %.2f\n", __FUNCTION__, __LINE__, LOW_VOLTAGE_V1_2_VAL, AdcGetV1_2() );
		Diag_Halt_Process();
	}
	else if ( AdcGetV3_3() < LOW_VOLTAGE_V3_3_VAL )
	{
		printf("%s(%d) - V3.3 low voltage ( < %.2f ) : %.2f\n", __FUNCTION__, __LINE__, LOW_VOLTAGE_V3_3_VAL, AdcGetV3_3() );
		Diag_Halt_Process();
	}
	else if ( AdcGetV5_0() < LOW_VOLTAGE_V5_0_VAL )
	{
		printf("%s(%d) - V5.0 low voltage ( < %.2f ) : %.2f\n", __FUNCTION__, __LINE__, LOW_VOLTAGE_V5_0_VAL,  AdcGetV5_0() );
		Diag_Halt_Process();
	}

	return 1;
}

//uint32_t	*GetStackPointer(void)
//{
//	register void *sp asm ("sp");
//	printf("%p", sp);
//}

int		Diag_Stack_Process			( void )	//	-		5.3.11	Protecting Stack Memory Area	98
{
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);
	//uint32_t *pStackGuard = (uint32_t *)STACK_GUARD_ADDR;

	if ( *pStackGuard_tmp != (uint32_t)STACK_GUARD_VAL )
	{
		printf("%s(%d) - Stack Overflow : [0x08X] = 0x%08X ( != 0x%08X )\n", __FUNCTION__, __LINE__, STACK_GUARD_ADDR, *pStackGuard_tmp, STACK_GUARD_VAL );
		Diag_Halt_Process();
	}
#if defined(STATIC_SKIP)
	if ( _getSPValue_() <= STACK_GUARD_ADDR )
#endif
	{
#if defined(STATIC_SKIP)
		printf("%s(%d) - Stack Overflow : [0x08X] > 0x%08X(stack pointer)\n", __FUNCTION__, __LINE__, STACK_GUARD_ADDR, _getSPValue_() );
#endif
		Diag_Halt_Process();
	}

	return 1;
}

int		Diag_Stack_Init         	( void )	//
{

	//	SW-Req-Diag-011
	//		SCM shall check periodically stack overflow. If stack overflow detected, CPU shall be halted

	//	sys_link.cmd
	//	    STACKS  (RW) : origin=0x08000000 length=0x00001500
	//uint32_t *pStackGuard = (uint32_t *)STACK_GUARD_ADDR;

	*pStackGuard_tmp = (uint32_t)STACK_GUARD_VAL;

	printf("%s(%d) - Set Stack Guard : [0x%08X] = 0x%08X\n", __FUNCTION__, __LINE__, STACK_GUARD_ADDR, STACK_GUARD_VAL );

	return 1;
}

int		Diag_Temp_Process			( void )	//	-		5.3.12	Ensuring the Stability of Temperature	99
{
	//	SW-Req-Diag-012
	//	SCM shall check periodically the status of temperature around the CPU. If high temperature(over 85吏퇒) detected, CPU shall be halted
	//	- time required: 50 msec
	//	- check frequency: every 50 msec

	//	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	if ( GetTemperature() > 85 )
	{
		printf("%s(%d) - Detect over 85 degree -> Halt\n", __FUNCTION__, __LINE__);
		Diag_Halt_Process();
	}

	return 1;
}

int		Diag_SysTimer_Process		( void )	//	-		5.3.13	Ensuring the Stability of System Timer	99
{
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);
	uint32 rti0 = rtiGetCurrentTick(rtiCOMPARE0);	//	200 sec 	- 0 ~ 199999999
	uint32 rti1 = rtiGetCurrentTick(rtiCOMPARE1);	//	1 msec 		- 0 ~ 9999
	uint32 rti2 = rtiGetCurrentTick(rtiCOMPARE2);	//	1 sec 		- 0 ~ 9999999
	uint32 rti3 = rtiGetCurrentTick(rtiCOMPARE3);	//	1 msec 		- 0 ~ 9999

	uint32 comp0 = rti0 % 10000000U;
	uint32 comp1 = rti2;

	if ( abs( (int)comp0 - (int)comp1 ) > HALT_SYS_CLOCK_MS )
	{
		printf("%s(%d) - Detect Timer Fault : %d, %d ( %d > %d )\n", __FUNCTION__, __LINE__, comp0, comp1, abs( (int)comp0 - (int)comp1 ), HALT_SYS_CLOCK_MS);
		Diag_Halt_Process();
	}

	return 1;
}

int		Diag_Halt_Process			( void )	//	-		5.3.14	Halt	100
{
	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	SCM_Halt();

	return 1;
}



//========================================================================
