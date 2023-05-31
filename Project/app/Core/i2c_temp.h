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
#ifndef I2C_TEMP_H
#define I2C_TEMP_H
//========================================================================

#include "sys_common.h"

#define I2C_TEMP_Slave_Address 0x92U //EEPROM Device Address

#define Temp_Pointer 	0x00
#define Config_Pointer 	0x01
#define Thyst_Pointer 	0x02
#define Tos_Pointer 	0x03

void 	InitTemperature( void );

uint8_t *i2c_W(uint8_t add, uint8_t *wdata, uint8_t data_length);
uint8_t *i2c_R(uint8_t add, uint8_t *rdata, uint8_t data_length);

int		GetTemperature( void );

void Test_I2C_Temp( void );

//int cmd_temperature		( int argc, char *argv[] );

//========================================================================
#endif
//========================================================================


