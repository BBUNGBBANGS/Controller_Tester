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

/*

	* Doc : SI2007-200701B_Software Requirements Specification for SCM SIL2 in ER_20220707-RE

		5.3	Diagnosis Requirements for Hardware	92
		5.3.1	Ensuring the Integrity of Program Image	92
		5.3.2	Ensuring the Integrity of Program Data Initialization.	93
		5.3.3	Ensuring the Integrity of CPU Instruction	93
		5.3.4	Ensuring the Integrity of CPU Register	94
		5.3.5	Ensuring the Integrity of CPU Internal RAM	94
		5.3.6	Ensuring the Integrity of EEPROM	95
		5.3.7	Ensuring the Integrity of Digital Input	96
		5.3.8	Ensuring the Integrity of Pulse Input	96
		5.3.9	Ensuring the Integrity of Digital Output	97
		5.3.10	Ensuring Stability of Voltage on SCM	97
		5.3.11	Protecting Stack Memory Area	98
		5.3.12	Ensuring the Stability of Temperature	99
		5.3.13	Ensuring the Stability of System Timer	99
		5.3.14	Halt	100

	* Function List

		1) Booting Time
			Diag_ProgramImage		-		5.3.1	Ensuring the Integrity of Program Image	92
			Diag_ProgramData		-		5.3.2	Ensuring the Integrity of Program Data Initialization.	93
			Diag_CpuInstuction		-		5.3.3	Ensuring the Integrity of CPU Instruction	93
			Diag_CpuRegister		-		5.3.4	Ensuring the Integrity of CPU Register	94
			Diag_CpuSRam_Internal	-		5.3.5	Ensuring the Integrity of CPU Internal RAM	94
			Diag_EEPRom				-		5.3.6	Ensuring the Integrity of EEPROM	95

		2) Process Time

			Diag_DI_Process			-		5.3.7	Ensuring the Integrity of Digital Input	96
			Diag_PI_Process			-		5.3.8	Ensuring the Integrity of Pulse Input	96
			Diag_DO_Process			-		5.3.9	Ensuring the Integrity of Digital Output	97
				Diag_DO_CheckRelayOutput
				Diag_DO_CheckSWReadBack

			Diag_Volt_Process		-		5.3.10	Ensuring Stability of Voltage on SCM	97
				Diag_Volt_Check3V
				Diag_Volt_Check5V
			Diag_Stack_Process		-		5.3.11	Protecting Stack Memory Area	98
				Diag_Stack_Init
			Diag_Temp_Process		-		5.3.12	Ensuring the Stability of Temperature	99
			Diag_SysTimer_Process	-		5.3.13	Ensuring the Stability of System Timer	99
			Diag_Halt_Process		-		5.3.14	Halt	100


		Diag_DisplayFaultCode
		Diag_GetCpuRegister
		Diag_InitFaultLog
		Diag_OnBooting
		Diag_Periodic
		Diag_PrintFaultCode
		Diag_PrintFaultInfo
		Diag_SetIODefault
		Diag_WriteFaultLog
		Diag_Flash_CheckImage
		Diag_Flash_Process
		Diag_Volt_CheckSpai5V
		Diag_Volt_CheckSpcs3V
		Diag_Volt_CheckSpcs5V
		Diag_Volt_CheckSpdi5V
		Diag_Volt_InitLvdSignal
		Diag_Volt_Process
		Diag_SRam_MarchXMemTest
		Diag_SRam_MoveStack
		Diag_SRam_Process
		Diag_SRam_External
		Diag_SRam_Internal
		Diag_Temp_InitTempAlarm

 */

//========================================================================
#ifndef DIAG_H
#define DIAG_H
//========================================================================

#include "typedef.h"


//========================================================================
// Define

//========================================================================
//	SW-Req-Diag-010
//		SCM shall check periodically the low voltage of SCM.
//		If the low voltage (below 0.9V for VCC and below 2.4V for VCCIO)  detected, CPU shall be halted
#define		LOW_VOLTAGE_V5_0_VAL	4.1f
#define		LOW_VOLTAGE_V3_3_VAL	2.4f
#define		LOW_VOLTAGE_V1_2_VAL	0.9f

//========================================================================
//	SW-Req-Diag-013
//		SCM shall check the system clock on self test when system power on and periodically.
//		If fault detected, CPU shall be halted
#define		HALT_SYS_CLOCK_MS		100		//	100 msec 이상 차이나는 경우 Halt

//========================================================================
//	5.3.11	Protecting Stack Memory Area
//		SW Requirement ID	SW-Req-Diag-011
//		SCM shall check periodically stack overflow. If stack overflow detected, CPU shall be halted

//	sys_core.asm - userSp  .word 0x08000000+0x00001000
#define		STACK_TOP_ADDR			0x08000000		//	Stack Top
#define		STACK_SIZE				0x00001500
#define		STACK_BASE_ADDR			(STACK_TOP_ADDR + STACK_SIZE)	//	Stack Top
#define		STACK_GUARD_ADDR		(STACK_TOP_ADDR + 0x10)			//	Stack Overflow Canaries
#define		STACK_GUARD_VAL			0xAA55AA55U						//	Stack Overflow Canaries


//========================================================================
//	5.3.1	Ensuring the Integrity of Program Image	92
//	[0x20000]	0xAA55 0xXCRC 0xIMGSIZEX

#define		IMG_VALID_MGN_ADDR		0x00020000U						//	Image Valid Magic Number Addr
#define		IMG_VALID_CRC_ADDR		0x00020002U						//	Image Valid CRC Addr
#define		IMG_VALID_SIZ_ADDR		0x00020004U						//	Image Valid Size Addr
#define		IMG_CRC_MAGICNUMBER		0xAA55U							//	0xAA55

//========================================================================
// Function

int		DiagInit(void);		//	초기 부팅시 Diag.
int		DiagProc(void);		//	주기적으로 체크.

int		Diag_ProgramImage			( void );	//	-		5.3.1	Ensuring the Integrity of Program Image	92
int		Diag_ProgramData			( void );	//	-		5.3.2	Ensuring the Integrity of Program Data Initialization.	93
//int		Diag_CpuInstuction			( void );	//	-		5.3.3	Ensuring the Integrity of CPU Instruction	93
//int		Diag_CpuRegister			( void );	//	-		5.3.4	Ensuring the Integrity of CPU Register	94
//int		Diag_CpuSRam_Internal		( void );	//	-		5.3.5	Ensuring the Integrity of CPU Internal RAM	94
int		Diag_EEPRom					( void );	//	-		5.3.6	Ensuring the Integrity of EEPROM	95

//logic.h	LogicProcInputCompareDI()
//int		Diag_DI_Process				( void );	//	-		5.3.7	Ensuring the Integrity of Digital Input	96
//logic.h	LogicProcInputComparePI()
//int		Diag_PI_Process				( void );	//	-		5.3.8	Ensuring the Integrity of Pulse Input	96
//logic.h	LogicProcOutputCompareDO()
//int		Diag_DO_Process				( void );	//	-		5.3.9	Ensuring the Integrity of Digital Output	97
//int		Diag_DO_CheckRelayOutput	( void );	//
//int		Diag_DO_CheckSWReadBack 	( void );	//

int		Diag_Volt_Process			( void );	//	-		5.3.10	Ensuring Stability of Voltage on SCM	97
int		Diag_Stack_Process			( void );	//	-		5.3.11	Protecting Stack Memory Area	98
int		Diag_Stack_Init         	( void );	//
int		Diag_Temp_Process			( void );	//	-		5.3.12	Ensuring the Stability of Temperature	99
int		Diag_SysTimer_Process		( void );	//	-		5.3.13	Ensuring the Stability of System Timer	99
int		Diag_Halt_Process			( void );	//	-		5.3.14	Halt	100

//========================================================================
#endif
//========================================================================


