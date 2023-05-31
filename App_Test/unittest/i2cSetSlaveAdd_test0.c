#line 2 "cs_test%i2cSetSlaveAdd_test0%cs_error"
/* i2cSetSlaveAdd_test0.c */
#ifndef __i2cSetSlaveAdd_test0__
#define __i2cSetSlaveAdd_test0__

#include "../factory/factory.h"

#include "i2cSetSlaveAdd_test0.h"

void CS_TEST i2cSetSlaveAdd_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(i2cSetSlaveAdd_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_i2cSetSlaveAdd_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	i2cBASE_t * i2c  = 0x0;
	struct i2cBase i2c_mem [1]={0,}; 
	unsigned int sadd  = 0; 

	/*Memory assign*/
	i2cREG1_tmp = i2cREG1_tmp_mem;
	i2c = i2c_mem;

	/*Input*/
	i2cREG1_tmp_mem[0].SAR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].SAR");
	sadd = CS_UINT_INPUT(unsigned int,"sadd");



	/* i2cSetSlaveAdd(volatile struct i2cBase *, unsigned int) */
	i2cSetSlaveAdd(i2c,sadd);




	/*Output*/
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].SAR, "i2cREG1_tmp_mem[0].SAR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_i2cSetSlaveAdd_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
