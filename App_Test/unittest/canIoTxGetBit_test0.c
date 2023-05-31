#line 2 "cs_test%canIoTxGetBit_test0%cs_error"
/* canIoTxGetBit_test0.c */
#ifndef __canIoTxGetBit_test0__
#define __canIoTxGetBit_test0__

#include "../factory/factory.h"

#include "canIoTxGetBit_test0.h"

void CS_TEST canIoTxGetBit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canIoTxGetBit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canIoTxGetBit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	canBASE_t * node  = 0x0;
	struct canBase node_mem [1]={0,}; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	node = node_mem;

	/*Input*/
	node_mem[0].TIOC = CS_UINT_INPUT(unsigned int,"node_mem[0].TIOC");



	/* unsigned int canIoTxGetBit(volatile struct canBase *) */
	returnVar = canIoTxGetBit(node);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canIoTxGetBit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
