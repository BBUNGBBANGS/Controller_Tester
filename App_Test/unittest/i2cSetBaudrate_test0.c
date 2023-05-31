#line 2 "cs_test%i2cSetBaudrate_test0%cs_error"
/* i2cSetBaudrate_test0.c */
#ifndef __i2cSetBaudrate_test0__
#define __i2cSetBaudrate_test0__

#include "../factory/factory.h"

#include "i2cSetBaudrate_test0.h"

void CS_TEST i2cSetBaudrate_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(i2cSetBaudrate_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_i2cSetBaudrate_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	i2cBASE_t * i2c  = 0x0;
	struct i2cBase i2c_mem [1]={0,}; 
	unsigned int baud  = 0; 

	/*Memory assign*/
	i2c = i2c_mem;

	/*Input*/
	baud = CS_UINT_INPUT(unsigned int,"baud");



	/* i2cSetBaudrate(volatile struct i2cBase *, unsigned int) */
	i2cSetBaudrate(i2c,baud);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_i2cSetBaudrate_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
