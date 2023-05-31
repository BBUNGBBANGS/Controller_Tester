#line 2 "cs_test%esmSetCounterPreloadValue_test0%cs_error"
/* esmSetCounterPreloadValue_test0.c */
#ifndef __esmSetCounterPreloadValue_test0__
#define __esmSetCounterPreloadValue_test0__

#include "../factory/factory.h"

#include "esmSetCounterPreloadValue_test0.h"

void CS_TEST esmSetCounterPreloadValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(esmSetCounterPreloadValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_esmSetCounterPreloadValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	unsigned int value  = 0; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].LTCPR = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].LTCPR");
	value = CS_UINT_INPUT(unsigned int,"value");



	/* esmSetCounterPreloadValue(unsigned int) */
	esmSetCounterPreloadValue(value);




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].LTCPR, "esmREG_tmp_mem[0].LTCPR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_esmSetCounterPreloadValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
