#line 2 "cs_test%i2cSend_test0%cs_error"
/* i2cSend_test0.c */
#ifndef __i2cSend_test0__
#define __i2cSend_test0__

#include "../factory/factory.h"

#include "i2cSend_test0.h"

void CS_TEST i2cSend_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(i2cSend_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_i2cSend_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_i2cTransfer_tmp_data_mem [1]={0,}; 
	i2cBASE_t * i2c  = 0x0;
	struct i2cBase i2c_mem [1]={0,}; 
	unsigned int length  = 0; 
	uint8 * data  = 0x0;
	unsigned char data_mem [1]={0,}; 

	/*Memory assign*/
	g_i2cTransfer_tmp.data = g_i2cTransfer_tmp_data_mem;
	i2c = i2c_mem;
	data = data_mem;

	/*Input*/
	g_i2cTransfer_tmp.mode = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.mode");
	g_i2cTransfer_tmp.length = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.length");
	g_i2cTransfer_tmp_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_i2cTransfer_tmp_data_mem[0]");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	i2c_mem[0].STR = CS_UINT_INPUT(unsigned int,"i2c_mem[0].STR");
	length = CS_UINT_INPUT(unsigned int,"length");
	data_mem[0] = CS_UINT_INPUT(unsigned char,"data_mem[0]");



	/* i2cSend(volatile struct i2cBase *, unsigned int, unsigned char *) */
	i2cSend(i2c,length,data);




	/*Output*/
	CS_UINT_OUTPUT(g_i2cTransfer_tmp.mode, "g_i2cTransfer_tmp.mode");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_i2cSend_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
