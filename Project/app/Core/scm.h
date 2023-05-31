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
#ifndef SCM_H
#define SCM_H
//========================================================================

#include "typedef.h"

#ifdef __cplusplus
extern "C" {
#endif

//========================================================================
//	Define
extern int			g_bEnHalt;

//========================================================================
//	Function
uint32_t getTick(void);
void delay(uint32_t msTime);
void SCM_Init		( void );

void SCM_Process	( void );

void SCM_Halt		( void );

//int cmd_chkhalt		( int argc, char *argv[] );		//	Halt Check En/Disable

//int       atoi(const char *);

#ifdef __cplusplus
}
#endif


//========================================================================
#endif
//========================================================================


