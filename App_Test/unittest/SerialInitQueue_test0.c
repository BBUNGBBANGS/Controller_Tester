#line 2 "cs_test%SerialInitQueue_test0%cs_error"
/* SerialInitQueue_test0.c */
#ifndef __SerialInitQueue_test0__
#define __SerialInitQueue_test0__

#include "../factory/factory.h"

#include "SerialInitQueue_test0.h"

void CS_TEST SerialInitQueue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(SerialInitQueue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_SerialInitQueue_test0_stub_configuration();
	{/*<START TEST>*/




	/* SerialInitQueue() */
	SerialInitQueue();




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_SerialInitQueue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
