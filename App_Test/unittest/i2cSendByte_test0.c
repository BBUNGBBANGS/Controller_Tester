#line 2 "cs_test%i2cSendByte_test0%cs_error"
/* i2cSendByte_test0.c */
#ifndef __i2cSendByte_test0__
#define __i2cSendByte_test0__

#include "../factory/factory.h"

#include "i2cSendByte_test0.h"

void CS_TEST i2cSendByte_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(i2cSendByte_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_i2cSendByte_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	i2cBASE_t * i2c  = 0x0;
	struct i2cBase i2c_mem [1]={0,}; 
	unsigned char byte  = 0; 

	/*Memory assign*/
	i2c = i2c_mem;

	/*Input*/
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	i2c_mem[0].STR = CS_UINT_INPUT(unsigned int,"i2c_mem[0].STR");
	i2c_mem[0].DXR = CS_UINT_INPUT(unsigned char,"i2c_mem[0].DXR");
	byte = CS_UINT_INPUT(unsigned char,"byte");



	/* i2cSendByte(volatile struct i2cBase *, unsigned char) */
	i2cSendByte(i2c,byte);




	/*Output*/
	CS_UINT_OUTPUT(i2c_mem[0].DXR, "i2c_mem[0].DXR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_i2cSendByte_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
