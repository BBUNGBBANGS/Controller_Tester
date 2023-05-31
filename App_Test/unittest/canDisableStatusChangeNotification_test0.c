#line 2 "cs_test%canDisableStatusChangeNotification_test0%cs_error"
/* canDisableStatusChangeNotification_test0.c */
#ifndef __canDisableStatusChangeNotification_test0__
#define __canDisableStatusChangeNotification_test0__

#include "../factory/factory.h"

#include "canDisableStatusChangeNotification_test0.h"

void CS_TEST canDisableStatusChangeNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canDisableStatusChangeNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canDisableStatusChangeNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	canBASE_t * node  = 0x0;
	struct canBase node_mem [1]={0,}; 

	/*Memory assign*/
	node = node_mem;



	/* canDisableStatusChangeNotification(volatile struct canBase *) */
	canDisableStatusChangeNotification(node);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canDisableStatusChangeNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
