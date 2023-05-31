#line 2 "cs_test%esmError_test0%cs_error"
/* esmError_test0.c */
#ifndef __esmError_test0__
#define __esmError_test0__

#include "../factory/factory.h"

#include "esmError_test0.h"

void CS_TEST esmError_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(esmError_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_esmError_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].EPSR = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].EPSR");



	/* unsigned int esmError() */
	returnVar = esmError();




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_esmError_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
