#line 2 "cs_test%esmDisableError_test0%cs_error"
/* esmDisableError_test0.c */
#ifndef __esmDisableError_test0__
#define __esmDisableError_test0__

#include "../factory/factory.h"

#include "esmDisableError_test0.h"

void CS_TEST esmDisableError_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(esmDisableError_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_esmDisableError_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	unsigned long long channels  = 0; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].DEPAPR1 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].DEPAPR1");
	esmREG_tmp_mem[0].IEPCR4 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].IEPCR4");
	channels = CS_UINT_INPUT(unsigned long long,"channels");



	/* esmDisableError(unsigned long long) */
	esmDisableError(channels);




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].DEPAPR1, "esmREG_tmp_mem[0].DEPAPR1");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].IEPCR4, "esmREG_tmp_mem[0].IEPCR4");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_esmDisableError_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
