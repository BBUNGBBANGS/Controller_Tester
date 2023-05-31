#line 2 "cs_test%checkefcSelfTest_test0%cs_error"
/* checkefcSelfTest_test0.c */
#ifndef __checkefcSelfTest_test0__
#define __checkefcSelfTest_test0__

#include "../factory/factory.h"

#include "checkefcSelfTest_test0.h"

void CS_TEST checkefcSelfTest_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(checkefcSelfTest_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_checkefcSelfTest_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct efcBase efcREG_tmp_mem [1]={0,}; 
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	_Bool returnVar = 0; 

	/*Memory assign*/
	efcREG_tmp = efcREG_tmp_mem;
	esmREG_tmp = esmREG_tmp_mem;

	/*Input*/
	efcREG_tmp_mem[0].PINS = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].PINS");
	efcREG_tmp_mem[0].ERROR = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].ERROR");
	esmREG_tmp_mem[0].SR4[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR4[0]");



	/* _Bool checkefcSelfTest() */
	returnVar = checkefcSelfTest();




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_checkefcSelfTest_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif