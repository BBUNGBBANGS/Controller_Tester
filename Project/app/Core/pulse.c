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

#include "pulse.h"
#include "het.h"
#include "mibspi.h"

#include "stdio.h"
#include "string.h"
#include "sci.h"
#include "gio.h"
#include "tick.h"
#include "controller_tester.h"
//========================================================================
// Define

hetSIGNAL_t Pulse_Det[4];   //  Pulse Detect 신호를 저장할 변수
uint8_t SS1_Dir,SS2_Dir;


//uint16_t	PI_STAT[MAX_PI];
//uint16_t	PI_MON[MAX_PI];
double	PI_STAT[MAX_PI];
double	PI_MON[MAX_PI];


uint32_t	g_tickPIEdge[4];	//	Time Stamp PI Edge
uint32_t	g_nOldPI[4];		//	Old PI Value

//========================================================================
// Function
//uint32 gioGetBit(gioPORT_t *port, uint32 bit);

void UpdatePI( void )
{
	uint32_t	currTick = getTick();

	capGetSignal(hetRAM1_tmp, cap0, &Pulse_Det[0]);
	capGetSignal(hetRAM1_tmp, cap1, &Pulse_Det[1]);
	capGetSignal(hetRAM1_tmp, cap2, &Pulse_Det[2]);
	capGetSignal(hetRAM1_tmp, cap3, &Pulse_Det[3]);

	/* 입력된 신호의 주파수를 계산 */

	if ( ( currTick > g_tickPIEdge[0] ) && currTick - g_tickPIEdge[0] > ChkPulseTimeout )	//	1000 )
	{
		if ( g_nOldPI[0] != 0 )
		{
			printf("%s(%d) - currTick[%d] / g_tickPIEdge[0][%d]\n", __FUNCTION__, __LINE__, currTick, g_tickPIEdge[0] );
		}
		PI_STAT[0] = 0;
		g_nOldPI[0] = (int)PI_STAT[0];
	}
	else
	{
		PI_STAT[0]	= (( Pulse_Det[0].period < 0.000001f )? (float64)0 : (((float64)1/Pulse_Det[0].period)*(float64)1000000));
		g_nOldPI[0] = (int)PI_STAT[0];
	}
	if ( ( currTick > g_tickPIEdge[1] ) && currTick - g_tickPIEdge[1] > ChkPulseTimeout )	//	1000 )
	{
		if ( g_nOldPI[1] != 0 )
		{
			printf("%s(%d) - currTick[%d] / g_tickPIEdge[1][%d]\n", __FUNCTION__, __LINE__, currTick, g_tickPIEdge[1] );
		}
		PI_MON[0] = 0;
		g_nOldPI[1] = (int)PI_MON[0];
	}
	else
	{
		PI_MON[0]	= (( Pulse_Det[1].period < 0.000001f )? (float64)0 : (((float64)1/Pulse_Det[1].period)*(float64)1000000));
		g_nOldPI[1] = (int)PI_MON[0];
	}
	if ( ( currTick > g_tickPIEdge[2] ) && currTick - g_tickPIEdge[2] > ChkPulseTimeout )	//	1000 )
	{
		if ( g_nOldPI[2] != 0 )
		{
			printf("%s(%d) - currTick[%d] / g_tickPIEdge[2][%d]\n", __FUNCTION__, __LINE__, currTick, g_tickPIEdge[2] );
		}
		PI_STAT[1] = 0;
		g_nOldPI[2] = (int)PI_STAT[1];
	}
	else
	{
		PI_STAT[1]	= (( Pulse_Det[2].period < 0.000001f )? (float64)0 : (((float64)1/Pulse_Det[2].period)*(float64)1000000));
		g_nOldPI[2] = (int)PI_STAT[1];
	}
	if ( ( currTick > g_tickPIEdge[3] ) && currTick - g_tickPIEdge[3] > ChkPulseTimeout )	//	1000 )
	{
		if ( g_nOldPI[3] != 0 )
		{
			printf("%s(%d) - currTick[%d] / g_tickPIEdge[3][%d]\n", __FUNCTION__, __LINE__, currTick, g_tickPIEdge[3] );
		}
		PI_MON[1] = 0;
		g_nOldPI[3] = (int)PI_MON[1];
	}
	else
	{
		PI_MON[1]	= (( Pulse_Det[3].period < 0.000001f )? (float64)0 : (((float64)1/Pulse_Det[3].period)*(float64)1000000));
		g_nOldPI[3] = (int)PI_MON[1];
	}
}


void edgeNotification(hetBASE_t * hetREG,uint32 edge)
{
	if ( hetREG == hetREG1_tmp )
	{
		switch(edge)
		{
		case 0U:		//	N2HET1[22]
			g_tickPIEdge[0] = getTick();	//	TimeStamp
	//		SS1_Dir=(uint8_t)gioGetBit(hetPORT1, PIN_HET_16); break;
//			SS1_Dir=(uint8_t)gioGetBit(hetPORT1, 16U); break;
		case 1U:		//	N2HET1[16]
			g_tickPIEdge[1] = getTick();	//	TimeStamp
	//		SS2_Dir=(uint8_t)gioGetBit(hetPORT1, (uint32)PIN_HET_20); break;
//			SS2_Dir=(uint8_t)gioGetBit(hetPORT1, 20U); break;
		case 2U:		//	N2HET1[18]
			g_tickPIEdge[2] = getTick();	//	TimeStamp
	//		SS1_Dir=(uint8_t)gioGetBit(hetPORT1, PIN_HET_16); break;
//			SS1_Dir=(uint8_t)gioGetBit(hetPORT1, 16U); break;
		case 3U:		//	N2HET1[20]
			g_tickPIEdge[3] = getTick();	//	TimeStamp
	//		SS2_Dir=(uint8_t)gioGetBit(hetPORT1, (uint32)PIN_HET_20); break;
//			SS2_Dir=(uint8_t)gioGetBit(hetPORT1, 20U); break;
		default:
			SS1_Dir=0;
			SS2_Dir=0;
			break;
		}
	}
}



int PWMStart	( int nDO )
{
	printf( "%s(%d) - %d\n", __FUNCTION__, __LINE__, nDO );

	//	PWM On
	switch( nDO )
	{
	case 1:	pwmStart(hetRAM1_tmp, pwm0);	break;
	case 2:	pwmStart(hetRAM1_tmp, pwm1);	break;
	case 3:	pwmStart(hetRAM1_tmp, pwm2);	break;
	case 4:	pwmStart(hetRAM1_tmp, pwm3);	break;
	case 5:	pwmStart(hetRAM1_tmp, pwm4);	break;
	case 6:	pwmStart(hetRAM2_tmp, pwm0);	break;
	default : printf( "%s(%d) - Invalid No %d\n", __FUNCTION__, __LINE__, nDO ); break;
	}

	return 0;
}

int PWMStop		( int nDO )
{
	printf( "%s(%d) - %d\n", __FUNCTION__, __LINE__, nDO );

	//	PWM Off
	switch( nDO )
	{
	case 1:	pwmStop(hetRAM1_tmp, pwm0);	break;
	case 2:	pwmStop(hetRAM1_tmp, pwm1);	break;
	case 3:	pwmStop(hetRAM1_tmp, pwm2);	break;
	case 4:	pwmStop(hetRAM1_tmp, pwm3);	break;
	case 5:	pwmStop(hetRAM1_tmp, pwm4);	break;
	case 6:	pwmStop(hetRAM2_tmp, pwm0);	break;
	default : printf( "%s(%d) - Invalid No %d\n", __FUNCTION__, __LINE__, nDO );break;
	}

	return 0;
}

int PWMConfig	( int nDO, int nPolarity, int nPeriod, int nDuty )
{
	hetSIGNAL_t	signal;

	printf( "%s(%d) - DO[%d] : Polarity(%d) / %d msec / %d %%\n", __FUNCTION__, __LINE__, nDO, nPolarity, nPeriod, nDuty );

	switch( nDO )
	{
	case 1:	pwmSetPolarity(hetRAM1_tmp, pwm0, nPolarity);	break;
	case 2:	pwmSetPolarity(hetRAM1_tmp, pwm1, nPolarity);	break;
	case 3:	pwmSetPolarity(hetRAM1_tmp, pwm2, nPolarity);	break;
	case 4:	pwmSetPolarity(hetRAM1_tmp, pwm3, nPolarity);	break;
	case 5:	pwmSetPolarity(hetRAM1_tmp, pwm4, nPolarity);	break;
	case 6:	pwmSetPolarity(hetRAM2_tmp, pwm0, nPolarity);	break;
	default : printf( "%s(%d) - Invalid No %d\n", __FUNCTION__, __LINE__, nDO );break;
	}

	//	Setting Period ( msec )
	signal.period = (float64)nPeriod * 1000.0;

	//	Setting Duty ( % )
	signal.duty = (uint32)nDuty;

	switch( nDO )
	{
	case 1:	pwmSetSignal(hetRAM1_tmp, pwm0, signal);	break;
	case 2:	pwmSetSignal(hetRAM1_tmp, pwm1, signal);	break;
	case 3:	pwmSetSignal(hetRAM1_tmp, pwm2, signal);	break;
	case 4:	pwmSetSignal(hetRAM1_tmp, pwm3, signal);	break;
	case 5:	pwmSetSignal(hetRAM1_tmp, pwm4, signal);	break;
	case 6:	pwmSetSignal(hetRAM2_tmp, pwm0, signal);	break;
	default : printf( "%s(%d) - Invalid No %d\n", __FUNCTION__, __LINE__, nDO );break;
	}

	return 0;
}

//========================================================================
