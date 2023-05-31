#line 2 "cs_test%pbistIsTestPassed_test0%cs_error"
/* pbistIsTestPassed_test0.c */
#ifndef __pbistIsTestPassed_test0__
#define __pbistIsTestPassed_test0__

#include "../factory/factory.h"

#include "pbistIsTestPassed_test0.h"

void CS_TEST pbistIsTestPassed_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pbistIsTestPassed_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pbistIsTestPassed_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pbistBase pbistREG_tmp_mem [1]={0,}; 
	_Bool returnVar = 0; 

	/*Memory assign*/
	pbistREG_tmp = pbistREG_tmp_mem;

	/*Input*/
	pbistREG_tmp_mem[0].FSRF0 = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].FSRF0");



	/* _Bool pbistIsTestPassed() */
	returnVar = pbistIsTestPassed();




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pbistIsTestPassed_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
