#line 2 "cs_test%i2cDisableNotification_test0%cs_error"
/* i2cDisableNotification_test0.c */
#ifndef __i2cDisableNotification_test0__
#define __i2cDisableNotification_test0__

#include "../factory/factory.h"

#include "i2cDisableNotification_test0.h"

void CS_TEST i2cDisableNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(i2cDisableNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_i2cDisableNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_i2cTransfer_tmp_data_mem [1]={0,}; 
	i2cBASE_t * i2c  = 0x0;
	struct i2cBase i2c_mem [1]={0,}; 
	unsigned int flags  = 0; 

	/*Memory assign*/
	g_i2cTransfer_tmp.data = g_i2cTransfer_tmp_data_mem;
	i2c = i2c_mem;

	/*Input*/
	i2c_mem[0].IMR = CS_UINT_INPUT(unsigned int,"i2c_mem[0].IMR");
	flags = CS_UINT_INPUT(unsigned int,"flags");



	/* i2cDisableNotification(volatile struct i2cBase *, unsigned int) */
	i2cDisableNotification(i2c,flags);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_i2cDisableNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
