#line 2 "cs_test%i2cIsMasterReady_test0%cs_error"
/* i2cIsMasterReady_test0.c */
#ifndef __i2cIsMasterReady_test0__
#define __i2cIsMasterReady_test0__

#include "../factory/factory.h"

#include "i2cIsMasterReady_test0.h"

void CS_TEST i2cIsMasterReady_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(i2cIsMasterReady_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_i2cIsMasterReady_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	i2cBASE_t * i2c  = 0x0;
	struct i2cBase i2c_mem [1]={0,}; 
	_Bool returnVar = 0; 

	/*Memory assign*/
	i2c = i2c_mem;

	/*Input*/
	i2c_mem[0].MDR = CS_UINT_INPUT(unsigned int,"i2c_mem[0].MDR");



	/* _Bool i2cIsMasterReady(volatile struct i2cBase *) */
	returnVar = i2cIsMasterReady(i2c);




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_i2cIsMasterReady_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
