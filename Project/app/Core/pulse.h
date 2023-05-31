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
#ifndef PULSE_H
#define PULSE_H
//========================================================================

#include "logic.h"	//	MAX_PI
//#include "gio.h"

/*extern uint16_t	PI_STAT[MAX_PI];
extern uint16_t	PI_MON[MAX_PI];*/
#include "het.h"	//	hetSIGNAL_t

//	Pulse Diff 임계값 설정.
#define		LimitPulseDiff		1.0			//	Hz
#define		ChkPulsePeriod		1000		//	msec

#define		ChkPulseTimeout		1100		//	msec

extern hetSIGNAL_t Pulse_Det[4];   //  Pulse Detect 신호를 저장할 변수

//========================================================================
// Function

void UpdatePI( void );

void InitIOPulse( void );

//double GetIOPulse0( void );
//double GetIOPulse1( void );
//double GetIOPulse2( void );
//double GetIOPulse3( void );

double GetIOPulse( int idx );

//void Test_IO_Pulse( void );

//========================================================================
//	DO PWM - Pulse / Impulse
int	PWMImpulse	( int nDO );
int PWMStart	( int nDO );
int PWMStop		( int nDO );
int PWMConfig	( int nDO, int nPolarity, int nPeriod, int nDuty );
//========================================================================

//int cmd_impulse( int argc, char *argv[] );		//	impulse

//int cmd_pulse( int argc, char *argv[] );		//	pulse command

//int cmd_pwm( int argc, char *argv[] );			//	pwm output

//========================================================================
#endif
//========================================================================


