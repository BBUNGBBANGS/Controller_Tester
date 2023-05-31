#line 2 "cs_test%canIsMessageBoxValid_test0%cs_error"
/* canIsMessageBoxValid_test0.c */
#ifndef __canIsMessageBoxValid_test0__
#define __canIsMessageBoxValid_test0__

#include "../factory/factory.h"

#include "canIsMessageBoxValid_test0.h"

void CS_TEST canIsMessageBoxValid_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canIsMessageBoxValid_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canIsMessageBoxValid_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	canBASE_t * node  = 0x0;
	struct canBase node_mem [1]={0,}; 
	unsigned int messageBox  = 0; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	node = node_mem;

	/*Input*/
	node_mem[0].MSGVALx[0] = CS_UINT_INPUT(unsigned int,"node_mem[0].MSGVALx[0]");
	messageBox = CS_UINT_INPUT(unsigned int,"messageBox");



	/* unsigned int canIsMessageBoxValid(volatile struct canBase *, unsigned int) */
	returnVar = canIsMessageBoxValid(node,messageBox);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canIsMessageBoxValid_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
