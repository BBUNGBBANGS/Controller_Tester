#line 2 "cs_test%InitLogic_test0%cs_error"
/* InitLogic_test0.c */
#ifndef __InitLogic_test0__
#define __InitLogic_test0__

#include "../factory/factory.h"

#include "InitLogic_test0.h"

void CS_TEST InitLogic_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(InitLogic_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_InitLogic_test0_stub_configuration();
	{/*<START TEST>*/




	/* InitLogic() */
	InitLogic();




	/*Output*/
	CS_INT_OUTPUT(g_bEnDOMonitor, "g_bEnDOMonitor");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_InitLogic_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
