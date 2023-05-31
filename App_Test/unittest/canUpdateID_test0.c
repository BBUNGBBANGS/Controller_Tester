#line 2 "cs_test%canUpdateID_test0%cs_error"
/* canUpdateID_test0.c */
#ifndef __canUpdateID_test0__
#define __canUpdateID_test0__

#include "../factory/factory.h"

#include "canUpdateID_test0.h"

void CS_TEST canUpdateID_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canUpdateID_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canUpdateID_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	canBASE_t * node  = 0x0;
	struct canBase node_mem [1]={0,}; 
	unsigned int messageBox  = 0; 
	unsigned int msgBoxArbitVal  = 0; 

	/*Memory assign*/
	node = node_mem;

	/*Input*/
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	node_mem[0].IF2STAT = CS_UINT_INPUT(unsigned char,"node_mem[0].IF2STAT");
	messageBox = CS_UINT_INPUT(unsigned int,"messageBox");
	msgBoxArbitVal = CS_UINT_INPUT(unsigned int,"msgBoxArbitVal");



	/* canUpdateID(volatile struct canBase *, unsigned int, unsigned int) */
	canUpdateID(node,messageBox,msgBoxArbitVal);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canUpdateID_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
