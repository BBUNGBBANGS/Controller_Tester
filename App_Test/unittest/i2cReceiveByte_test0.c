#line 2 "cs_test%i2cReceiveByte_test0%cs_error"
/* i2cReceiveByte_test0.c */
#ifndef __i2cReceiveByte_test0__
#define __i2cReceiveByte_test0__

#include "../factory/factory.h"

#include "i2cReceiveByte_test0.h"

void CS_TEST i2cReceiveByte_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(i2cReceiveByte_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_i2cReceiveByte_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_i2cTransfer_tmp_data_mem [1]={0,}; 
	i2cBASE_t * i2c  = 0x0;
	struct i2cBase i2c_mem [1]={0,}; 
	unsigned char returnVar = 0; 

	/*Memory assign*/
	g_i2cTransfer_tmp.data = g_i2cTransfer_tmp_data_mem;
	i2c = i2c_mem;

	/*Input*/
	g_i2cTransfer_tmp.mode = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.mode");
	g_i2cTransfer_tmp.length = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.length");
	g_i2cTransfer_tmp_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_i2cTransfer_tmp_data_mem[0]");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	i2c_mem[0].DRR = CS_UINT_INPUT(unsigned char,"i2c_mem[0].DRR");
	i2c_mem[0].STR = CS_UINT_INPUT(unsigned int,"i2c_mem[0].STR");
	i2c_mem[0].IMR = CS_UINT_INPUT(unsigned int,"i2c_mem[0].IMR");



	/* unsigned char i2cReceiveByte(volatile struct i2cBase *) */
	returnVar = i2cReceiveByte(i2c);




	/*Output*/
	CS_UINT_OUTPUT(g_i2cTransfer_tmp.mode, "g_i2cTransfer_tmp.mode");
	CS_UINT_OUTPUT(g_i2cTransfer_tmp.length, "g_i2cTransfer_tmp.length");
	CS_UINT_OUTPUT(g_i2cTransfer_tmp_data_mem[0], "g_i2cTransfer_tmp_data_mem[0]");
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_i2cReceiveByte_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
