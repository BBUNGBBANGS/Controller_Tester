/*------------------------------------------------------------------------------------------
	Project			: SCM
	Description		: UART 관련된 함수들

	Writer			:
	Revision		:
	Date			: 2022. 07.
	Copyright		:
	 
	Revision History 
	1. 2022. 07.	: Created
-------------------------------------------------------------------------------------------*/

#ifndef	SERIAL_H
#define	SERIAL_H
#include "typedef.h"

#include "stdio.h"
//#include "QBuf.h"

//uint8_t		dataRx1[8];		//	UART1 - Console	- 115200
int		input_check		( void );



//extern	Queue_t		g_qUart1;

int printf(const char *_format,...);
char getch(void);
void SerialInitQueue( void );
void SerialInit( void );

#endif	/* _SERIAL_H_ */

