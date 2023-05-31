#line 2 "cs_test%efcSelfTest_test0%cs_error"
/* efcSelfTest_test0.c */
#ifndef __efcSelfTest_test0__
#define __efcSelfTest_test0__

#include "../factory/factory.h"

#include "efcSelfTest_test0.h"

void CS_TEST efcSelfTest_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(efcSelfTest_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_efcSelfTest_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct efcBase efcREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	efcREG_tmp = efcREG_tmp_mem;

	/*Input*/
	efcREG_tmp_mem[0].BOUNDARY = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].BOUNDARY");
	efcREG_tmp_mem[0].SELF_TEST_CYCLES = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].SELF_TEST_CYCLES");
	efcREG_tmp_mem[0].SELF_TEST_SIGN = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].SELF_TEST_SIGN");



	/* efcSelfTest() */
	efcSelfTest();




	/*Output*/
	CS_UINT_OUTPUT(efcREG_tmp_mem[0].BOUNDARY, "efcREG_tmp_mem[0].BOUNDARY");
	CS_UINT_OUTPUT(efcREG_tmp_mem[0].SELF_TEST_CYCLES, "efcREG_tmp_mem[0].SELF_TEST_CYCLES");
	CS_UINT_OUTPUT(efcREG_tmp_mem[0].SELF_TEST_SIGN, "efcREG_tmp_mem[0].SELF_TEST_SIGN");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_efcSelfTest_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
