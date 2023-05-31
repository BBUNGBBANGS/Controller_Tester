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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "scm.h"

#include "logic.h"
#include "config.h"
#include "protocol.h"
#include "dio.h"			//	SetDO()
#include "i2c_eep.h"		//	i2c eeprom
#include "i2c_temp.h"		//	i2c temperature
#include "diag.h"
#include "controller_tester.h"
//========================================================================
// Define

int			g_bEnHalt;

//========================================================================
// Function


void SCM_Init( void )
{
	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	g_bEnHalt = TRUE;	//	0;

	//========================================================================
	DiagInit();

	InitTemperature();		//	I2C Temperature
	//========================================================================
//	EEPLogInit();
}

void SCM_Process( void )
{
	uint32_t nTick;
	static uint32_t s_nTick;
	uint32_t nDelayMS;

	int nMsec;
	static int s_nMsec;
	static uint32_t s_nTickCAN = 0;
	static uint32_t s_nTickDiag = 0;

	s_nTick = getTick();


	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	SCM_Init();		//  SCM ÃÊ±âÈ­.
	
	InitConfig();	//  Config ¼³Á¤ Loading
	InitLogic();	//  Initial Logic

	while ( 1 )
	{
		//  MainLoop
		nTick = getTick();	 //  0 ~ [RTI_UDCP0_CONFIGVALUE] usec

#if defined(STATIC_SKIP)	//	Debug Mode : Á¤ÀûºÐ¼®½Ã SKIP
		//=============================================================================
		LoopProcCLI();	  //  CLI ( Command Line Interface )
		//=============================================================================
#endif

		//=============================================================================
		//  Tick : 100 msec
		nDelayMS = (nTick - s_nTick);

		if ( nDelayMS >= (uint32_t)10)
		{
			LogicProc(nDelayMS);

			//  sec
//			printf("[%d]\n\r", nTick);
			s_nTick = nTick;
		}
		//=============================================================================

		if ( ( nTick - s_nTickCAN ) >= (uint32_t)200 )
		{
			//	CAN Tx : SCM -> ECPU
			canSendSCM2ECPU0();
			canSendSCM2ECPU1();

			s_nTickCAN = nTick;
		}

		canProcRx();
		//=============================================================================

		if ( ( nTick - s_nTickDiag ) >= (uint32_t)1000 )
		{
			//	Diag Proc
			DiagProc();

			s_nTickDiag = nTick;
		}
		//=============================================================================

		if(while_break == 1)
		{
			break;
		}
	}
}

void SCM_Halt( void )
{
	if ( (boolean)g_bEnHalt )
	{
		printf( "%s(%d) - Halt\n", __FUNCTION__, __LINE__ );

		//	DO Halt
		SetDO( 6, 1 );

		while ( 1 ){
			if(while_break == 1)
			{
				break;
			}
		};
	}
}

//========================================================================