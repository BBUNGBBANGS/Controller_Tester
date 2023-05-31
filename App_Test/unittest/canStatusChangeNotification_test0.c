#line 2 "cs_test%canStatusChangeNotification_test0%cs_error"
/* canStatusChangeNotification_test0.c */
#ifndef __canStatusChangeNotification_test0__
#define __canStatusChangeNotification_test0__

#include "../factory/factory.h"

#include "canStatusChangeNotification_test0.h"

void CS_TEST canStatusChangeNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canStatusChangeNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canStatusChangeNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	canBASE_t * node  = 0x0;
	struct canBase node_mem [1]={0,}; 
	unsigned int notification  = 0; 

	/*Memory assign*/
	node = node_mem;

	/*Input*/
	notification = CS_UINT_INPUT(unsigned int,"notification");



	/* canStatusChangeNotification(volatile struct canBase *, unsigned int) */
	canStatusChangeNotification(node,notification);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canStatusChangeNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
