#line 2 "cs_test%efcStuckZeroTest_test0%cs_error"
/* efcStuckZeroTest_test0.c */
#ifndef __efcStuckZeroTest_test0__
#define __efcStuckZeroTest_test0__

#include "../factory/factory.h"

#include "efcStuckZeroTest_test0.h"

void CS_TEST efcStuckZeroTest_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(efcStuckZeroTest_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_efcStuckZeroTest_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct efcBase efcREG_tmp_mem [1]={0,}; 
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	_Bool returnVar = 0; 

	/*Memory assign*/
	efcREG_tmp = efcREG_tmp_mem;
	esmREG_tmp = esmREG_tmp_mem;

	/*Input*/
	efcREG_tmp_mem[0].BOUNDARY = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].BOUNDARY");
	efcREG_tmp_mem[0].PINS = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].PINS");
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	esmREG_tmp_mem[0].SR1[1] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[1]");
	esmREG_tmp_mem[0].SR1[2] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[2]");
	esmREG_tmp_mem[0].SR4[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR4[0]");



	/* _Bool efcStuckZeroTest() */
	returnVar = efcStuckZeroTest();




	/*Output*/
	CS_UINT_OUTPUT(efcREG_tmp_mem[0].BOUNDARY, "efcREG_tmp_mem[0].BOUNDARY");
	CS_UINT_OUTPUT(efcREG_tmp_mem[0].PINS, "efcREG_tmp_mem[0].PINS");
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_efcStuckZeroTest_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
