#line 2 "cs_test%esmSelfTestStatus_test0%cs_error"
/* esmSelfTestStatus_test0.c */
#ifndef __esmSelfTestStatus_test0__
#define __esmSelfTestStatus_test0__

#include "../factory/factory.h"

#include "esmSelfTestStatus_test0.h"

void CS_TEST esmSelfTestStatus_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(esmSelfTestStatus_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_esmSelfTestStatus_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	enum esmSelfTestFlag returnVar; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].EPSR = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].EPSR");
	esmREG_tmp_mem[0].EKR = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].EKR");



	/* enum esmSelfTestFlag esmSelfTestStatus() */
	returnVar = esmSelfTestStatus();




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_esmSelfTestStatus_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
