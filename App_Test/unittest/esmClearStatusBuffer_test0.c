#line 2 "cs_test%esmClearStatusBuffer_test0%cs_error"
/* esmClearStatusBuffer_test0.c */
#ifndef __esmClearStatusBuffer_test0__
#define __esmClearStatusBuffer_test0__

#include "../factory/factory.h"

#include "esmClearStatusBuffer_test0.h"

void CS_TEST esmClearStatusBuffer_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(esmClearStatusBuffer_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_esmClearStatusBuffer_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	unsigned long long channels  = 0; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].SSR2 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SSR2");
	channels = CS_UINT_INPUT(unsigned long long,"channels");



	/* esmClearStatusBuffer(unsigned long long) */
	esmClearStatusBuffer(channels);




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SSR2, "esmREG_tmp_mem[0].SSR2");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_esmClearStatusBuffer_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
