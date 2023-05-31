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

#if defined(_WIN32)
#include <Windows.h>
#endif

#include "tick.h"

#include "rti.h"            //  Real-Time Interrupt

#include "sci.h"			//	regSci

#include "controller_tester.h"
//========================================================================
// Define

//========================================================================
// Function



uint32_t g_nTick ;	//	´©Àû Tick

uint32_t g_nTickBase ;	//	´©Àû Tick Base ( 0 / 200000 / 400000 / ... )

uint32_t g_s_nTick ;	//	Tick ( 0 ~ 200000 )

uint32_t getTick(void)	//	get tick ( msec )
{
#if defined(_WIN32)

	return GetTickCount();

#else
	uint32_t nTick = 0;
	nTick = rtiGetCurrentTick(rtiCOMPARE0) / (uint32_t)10000;		//	msec
	//	nTick : 0 ~ 200000

	if ( g_s_nTick > nTick )
	{
		g_nTickBase += (RTI_UDCP0_CONFIGVALUE / (uint32_t)10000);
	}

	g_s_nTick = nTick;
	g_nTick = g_nTickBase + nTick;

	return g_nTick;

#endif
}


void delay(uint32_t msTime)
{
	uint32_t tick=getTick();	//	0 ~ 2000000000U
	while(msTime > (getTick()-tick)) {
		if(while_break == 1)
		{
			break;
		}
	}
     //uint32 CurrentTick= rtiGetCurrentTick(rtiCOMPARE0)-tick;
//     rtiStopCounter(rtiCOUNTER_BLOCK0);
}

int		g_rtiTick0;		//	Counter0	200000 msec ( 200 sec )
int		g_rtiTick1;		//	Counter0	1 mesc
int		g_rtiTick2;		//	Counter1	1000 msec ( 1 sec )
int		g_rtiTick3;		//	Counter1	1 msec

void rtiNotification(uint32 notification)
{
    if (notification == rtiNOTIFICATION_COMPARE0)
    {
//        printf("rti0\n");
    	g_rtiTick0++;
    }
    if (notification == rtiNOTIFICATION_COMPARE1)
    {
//        printf("rti1\n");
    	g_rtiTick1++;
    }
    if (notification == rtiNOTIFICATION_COMPARE2)
    {
//        printf("rti2\n");
    	g_rtiTick2++;
    }
    if (notification == rtiNOTIFICATION_COMPARE3)
    {
//        printf("rti3\n");
    	g_rtiTick3++;
    }
}

//========================================================================
