#line 2 "cs_test%esmEnableError_test0%cs_error"
/* esmEnableError_test0.c */
#ifndef __esmEnableError_test0__
#define __esmEnableError_test0__

#include "../factory/factory.h"

#include "esmEnableError_test0.h"

void CS_TEST esmEnableError_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(esmEnableError_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_esmEnableError_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	unsigned long long channels  = 0; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].EEPAPR1 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].EEPAPR1");
	esmREG_tmp_mem[0].IEPSR4 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].IEPSR4");
	channels = CS_UINT_INPUT(unsigned long long,"channels");



	/* esmEnableError(unsigned long long) */
	esmEnableError(channels);




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].EEPAPR1, "esmREG_tmp_mem[0].EEPAPR1");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].IEPSR4, "esmREG_tmp_mem[0].IEPSR4");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_esmEnableError_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
