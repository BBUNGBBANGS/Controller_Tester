#line 2 "cs_test%canDisableloopback_test0%cs_error"
/* canDisableloopback_test0.c */
#ifndef __canDisableloopback_test0__
#define __canDisableloopback_test0__

#include "../factory/factory.h"

#include "canDisableloopback_test0.h"

void CS_TEST canDisableloopback_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canDisableloopback_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canDisableloopback_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	canBASE_t * node  = 0x0;
	struct canBase node_mem [1]={0,}; 

	/*Memory assign*/
	node = node_mem;



	/* canDisableloopback(volatile struct canBase *) */
	canDisableloopback(node);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canDisableloopback_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
