#line 2 "cs_test%custom_dabort_test0%cs_error"
/* custom_dabort_test0.c */
#ifndef __custom_dabort_test0__
#define __custom_dabort_test0__

#include "../factory/factory.h"

#include "custom_dabort_test0.h"

void CS_TEST custom_dabort_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(custom_dabort_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_custom_dabort_test0_stub_configuration();
	{/*<START TEST>*/




	/* custom_dabort() */
	custom_dabort();




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_custom_dabort_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
