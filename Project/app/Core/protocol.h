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
#ifndef PROTOCOL_H
#define PROTOCOL_H
//========================================================================


enum eCAN_ID
{
	//	SCM -> ECPU
	SCM2ECPU0		=	0x320,		//	DO/DI/PI 정보		/	200 msec	//	CAN Msg#1
	SCM2ECPU1		=	0x321,		//	내부정보			/	200 msec	//	CAN Msg#2

	//	ECPU -> SCM
	ECPU2SCM0		=	0x230,		//	최초 2times		/	-			//	CAN Msg#3
	ECPU2SCM1		=	0x231,		//	Config Group #1	/	500 msec	//	CAN Msg#4
	ECPU2SCM2		=	0x232,		//	Config Group #2	/	500 msec	//	CAN Msg#5
	ECPU2SCM3		=	0x233		//	Config Group #3	/	500 msec	//	CAN Msg#6
};


//	SCM -> ECPU

//	SCM -> ECPU #0 : DO / DI / PI 정보
typedef struct _IntfSCM2ECPU0_t
{
	uint8_t nSeqNo;						//  0. Sequence Number ( 0 ~ 255 )

	uint8_t bActive		:1;				//  1. Status
	uint8_t bSpare1_1	:2;				//
	uint8_t bZV			:1;				//
	uint8_t bConfSaveAckNack:2;			//
	uint8_t bPDUTestRst	:2;				//

	uint8_t bDI1Flt		:1;				//  2. DI Fault
	uint8_t bDI2Flt		:1;				//
	uint8_t bDI3Flt		:1;				//
	uint8_t bDI4Flt		:1;				//
	uint8_t bDI5Flt		:1;				//
	uint8_t bDI6Flt		:1;				//
	uint8_t bDI7Flt		:1;				//
	uint8_t bDI8Flt		:1;				//

	uint8_t bDO1Flt		:1;				//  3. DO Fault
	uint8_t bDO2Flt		:1;				//
	uint8_t bDO3Flt		:1;				//
	uint8_t bDO4Flt		:1;				//
	uint8_t bDO5Flt		:1;				//
	uint8_t bDO6Flt		:1;				//
	uint8_t bDO7Flt		:1;				//
	uint8_t bDO8Flt		:1;				//

	uint8_t nSpeed;						//	4. Speed ( 0 ~ 255 km/h )

	uint8_t bDI1		:1;				//  5. DI Fault
	uint8_t bDI2		:1;				//
	uint8_t bDI3		:1;				//
	uint8_t bDI4		:1;				//
	uint8_t bDI5		:1;				//
	uint8_t bDI8		:1;				//
	uint8_t bDI6		:1;				//
	uint8_t bDI7		:1;				//

	uint8_t bDO1		:1;				//  6. DO Fault
	uint8_t bDO2		:1;				//
	uint8_t bDO3		:1;				//
	uint8_t bDO4		:1;				//
	uint8_t bDO5		:1;				//
	uint8_t bDO6		:1;				//
	uint8_t bDO7		:1;				//
	uint8_t bDO8		:1;				//

	uint8_t bSWVer00_XX	:4;				//	7. SW Version. (0.0 ~ 15.15 )
	uint8_t bSWVerXX_00	:4;				//

} IntfSCM2ECPU0_t, *PIntfSCM2ECPU0_t;

//	SCM -> ECPU #1 : 내부정보
typedef struct _IntfSCM2ECPU1_t
{
	uint8_t nTemperature;				//  0. Temperature ( 0 ~ 255 )

	uint8_t nPulseInputUpper;			//  1. Pulse Input ( 0~4489 Hz ) Upper byte
	uint8_t nPulseInputLower;			//  2. Pulse Input ( 0~4489 Hz ) Lower byte

	uint8_t nVoltage;					//  3. Pulse Input ( 0~4489 Hz ) Lower byte

	uint8_t nSpare4[3];					//  4~6. Spare

	uint8_t bDIFlt:1;					//  7. Fault
	uint8_t bDOFlt:1;					//
	uint8_t bPIFlt:1;					//
	uint8_t bVoltFlt:1;					//
	uint8_t bTempFlt:1;					//
	uint8_t bSpare7_5:3;				//  Spare

} IntfSCM2ECPU1_t, *PIntfSCM2ECPU1_t;


//	ECPU -> SCM

//	ECPU -> SCM #0 : ECPU 정보
typedef struct _IntfECPU2SCM0_t
{
	uint8_t nSeqNo;						//  0. Sequence Number ( 0 ~ 255 )

	uint8_t bActive		:1;				//  1. Status
	uint8_t bSpare1_1	:5;				//
	uint8_t bTestStop	:1;				//
	uint8_t bTestStart	:1;				//

	uint8_t bCPMFlt		:1;				//  2. Fault
	uint8_t bUSBFlt		:1;				//
	uint8_t bMEMFlt		:1;				//
	uint8_t bSpare2_3	:5;				//

	uint8_t nSpare3[4];					//  3. Spare

	uint8_t bSWVer00_XX	:4;				//	7. SW Version. (0.0 ~ 15.15 )
	uint8_t bSWVerXX_00	:4;				//

} IntfECPU2SCM0_t, *PIntfECPU2SCM0_t;

//	ECPU -> SCM #1 : (TBD)
typedef struct _IntfECPU2SCM1_t
{
	uint8_t nConfig0;					//  0. Config #0
	uint8_t nConfig1;					//  1. Config #1
	uint8_t nConfig2;					//  2. Config #2
	uint8_t nConfig3;					//  3. Config #3
	uint8_t nConfig4;					//  4. Config #4
	uint8_t nConfig5;					//  5. Config #5
	uint8_t nConfig6;					//  6. Config #6
	uint8_t nConfig7;					//  7. Config #7
} IntfECPU2SCM1_t, *PIntfECPU2SCM1_t;

//	ECPU -> SCM #2 : (TBD)
typedef struct _IntfECPU2SCM2_t
{
	uint8_t nConfig0;					//  0. Config #0
	uint8_t nConfig1;					//  1. Config #1
	uint8_t nConfig2;					//  2. Config #2
	uint8_t nConfig3;					//  3. Config #3
	uint8_t nConfig4;					//  4. Config #4
	uint8_t nConfig5;					//  5. Config #5
	uint8_t nConfig6;					//  6. Config #6
	uint8_t nConfig7;					//  7. Config #7
} IntfECPU2SCM2_t, *PIntfECPU2SCM2_t;

//	ECPU -> SCM #3 : (TBD)
typedef struct _IntfECPU2SCM3_t
{
	uint8_t nConfig0;					//  0. Config #0
	uint8_t nConfig1;					//  1. Config #1
	uint8_t nConfig2;					//  2. Config #2
	uint8_t nConfig3;					//  3. Config #3
	uint8_t nConfig4;					//  4. Config #4
	uint8_t nConfig5;					//  5. Config #5
	uint8_t nConfig6;					//  6. Config #6
	uint8_t nConfig7;					//  7. Config #7
} IntfECPU2SCM3_t, *PIntfECPU2SCM3_t;


int	canSendSCM2ECPU0( void );
int	canSendSCM2ECPU1( void );

int canProcRx( void );

//========================================================================
#endif
//========================================================================

