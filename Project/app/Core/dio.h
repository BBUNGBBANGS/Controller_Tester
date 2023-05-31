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
#ifndef DIO_H
#define DIO_H
//========================================================================

#include "sys_common.h"


extern uint8_t DIN_STAT[8];
extern uint8_t DIN_MON[8];

extern uint8_t DO_FB[7];


void UpdateDI( void );			//	Update DIN_STAT / DIN_MON

void SetDO( int idx, int bVal );

void UpdateDOFB( void );		//	Update DO Feedback

//void Test_DIO(void);
//void DO_Test(void);
//void DI_Test(void);
//void DO_DI_Aging_Test(void);
//uint8_t DI_Input_state(void);

#define PIN_SET 1
#define PIN_RESET 0


//========================================================================
#endif
//========================================================================


