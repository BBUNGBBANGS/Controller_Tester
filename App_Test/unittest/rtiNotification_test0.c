#line 2 "cs_test%rtiNotification_test0%cs_error"
/* rtiNotification_test0.c */
#ifndef __rtiNotification_test0__
#define __rtiNotification_test0__

#include "../factory/factory.h"

#include "rtiNotification_test0.h"

void CS_TEST rtiNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(rtiNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_rtiNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned int notification  = 0; 

	/*Input*/
	g_rtiTick0 = CS_INT_INPUT(int,"g_rtiTick0");
	g_rtiTick1 = CS_INT_INPUT(int,"g_rtiTick1");
	g_rtiTick2 = CS_INT_INPUT(int,"g_rtiTick2");
	g_rtiTick3 = CS_INT_INPUT(int,"g_rtiTick3");
	notification = CS_UINT_INPUT(unsigned int,"notification");



	/* rtiNotification(unsigned int) */
	rtiNotification(notification);




	/*Output*/
	CS_INT_OUTPUT(g_rtiTick0, "g_rtiTick0");
	CS_INT_OUTPUT(g_rtiTick1, "g_rtiTick1");
	CS_INT_OUTPUT(g_rtiTick2, "g_rtiTick2");
	CS_INT_OUTPUT(g_rtiTick3, "g_rtiTick3");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_rtiNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
