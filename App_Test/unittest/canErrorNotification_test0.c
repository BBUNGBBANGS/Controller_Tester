#line 2 "cs_test%canErrorNotification_test0%cs_error"
/* canErrorNotification_test0.c */
#ifndef __canErrorNotification_test0__
#define __canErrorNotification_test0__

#include "../factory/factory.h"

#include "canErrorNotification_test0.h"

void CS_TEST canErrorNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canErrorNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canErrorNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	canBASE_t * node  = 0x0;
	struct canBase node_mem [1]={0,}; 
	unsigned int notification  = 0; 

	/*Memory assign*/
	node = node_mem;

	/*Input*/
	notification = CS_UINT_INPUT(unsigned int,"notification");



	/* canErrorNotification(volatile struct canBase *, unsigned int) */
	canErrorNotification(node,notification);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canErrorNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
