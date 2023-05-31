#line 2 "cs_test%handlePLLLockFail_test0%cs_error"
/* handlePLLLockFail_test0.c */
#ifndef __handlePLLLockFail_test0__
#define __handlePLLLockFail_test0__

#include "../factory/factory.h"

#include "handlePLLLockFail_test0.h"

void CS_TEST handlePLLLockFail_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(handlePLLLockFail_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_handlePLLLockFail_test0_stub_configuration();
	{/*<START TEST>*/


	/*Input*/
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* handlePLLLockFail() */
	handlePLLLockFail();




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_handlePLLLockFail_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
