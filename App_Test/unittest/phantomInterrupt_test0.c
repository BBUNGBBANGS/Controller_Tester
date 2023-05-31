#line 2 "cs_test%phantomInterrupt_test0%cs_error"
/* phantomInterrupt_test0.c */
#ifndef __phantomInterrupt_test0__
#define __phantomInterrupt_test0__

#include "../factory/factory.h"

#include "phantomInterrupt_test0.h"

void CS_TEST phantomInterrupt_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(phantomInterrupt_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_phantomInterrupt_test0_stub_configuration();
	{/*<START TEST>*/




	/* phantomInterrupt() */
	phantomInterrupt();




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_phantomInterrupt_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
