#line 2 "cs_test%canEnableloopback_test0%cs_error"
/* canEnableloopback_test0.c */
#ifndef __canEnableloopback_test0__
#define __canEnableloopback_test0__

#include "../factory/factory.h"

#include "canEnableloopback_test0.h"

void CS_TEST canEnableloopback_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canEnableloopback_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canEnableloopback_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	canBASE_t * node  = 0x0;
	struct canBase node_mem [1]={0,}; 
	enum canloopBackType Loopbacktype ; 

	/*Memory assign*/
	node = node_mem;

	/*Input*/
	Loopbacktype = (enum canloopBackType)CS_INT_INPUT(enum canloopBackType,"Loopbacktype");



	/* canEnableloopback(volatile struct canBase *, enum canloopBackType) */
	canEnableloopback(node,Loopbacktype);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canEnableloopback_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
