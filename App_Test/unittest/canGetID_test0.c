#line 2 "cs_test%canGetID_test0%cs_error"
/* canGetID_test0.c */
#ifndef __canGetID_test0__
#define __canGetID_test0__

#include "../factory/factory.h"

#include "canGetID_test0.h"

void CS_TEST canGetID_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canGetID_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canGetID_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	canBASE_t * node  = 0x0;
	struct canBase node_mem [1]={0,}; 
	unsigned int messageBox  = 0; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	node = node_mem;

	/*Input*/
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	node_mem[0].IF2STAT = CS_UINT_INPUT(unsigned char,"node_mem[0].IF2STAT");
	node_mem[0].IF2ARB = CS_UINT_INPUT(unsigned int,"node_mem[0].IF2ARB");
	messageBox = CS_UINT_INPUT(unsigned int,"messageBox");



	/* unsigned int canGetID(volatile struct canBase *, unsigned int) */
	returnVar = canGetID(node,messageBox);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canGetID_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
