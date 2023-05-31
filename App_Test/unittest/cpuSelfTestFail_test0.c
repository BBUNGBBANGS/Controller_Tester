#line 2 "cs_test%cpuSelfTestFail_test0%cs_error"
/* cpuSelfTestFail_test0.c */
#ifndef __cpuSelfTestFail_test0__
#define __cpuSelfTestFail_test0__

#include "../factory/factory.h"

#include "cpuSelfTestFail_test0.h"

void CS_TEST cpuSelfTestFail_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(cpuSelfTestFail_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_cpuSelfTestFail_test0_stub_configuration();
	{/*<START TEST>*/


	/*Input*/
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* cpuSelfTestFail() */
	cpuSelfTestFail();




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_cpuSelfTestFail_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
