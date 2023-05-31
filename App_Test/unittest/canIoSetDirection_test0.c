#line 2 "cs_test%canIoSetDirection_test0%cs_error"
/* canIoSetDirection_test0.c */
#ifndef __canIoSetDirection_test0__
#define __canIoSetDirection_test0__

#include "../factory/factory.h"

#include "canIoSetDirection_test0.h"

void CS_TEST canIoSetDirection_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canIoSetDirection_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canIoSetDirection_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	canBASE_t * node  = 0x0;
	struct canBase node_mem [1]={0,}; 
	unsigned int TxDir  = 0; 
	unsigned int RxDir  = 0; 

	/*Memory assign*/
	node = node_mem;

	/*Input*/
	node_mem[0].TIOC = CS_UINT_INPUT(unsigned int,"node_mem[0].TIOC");
	node_mem[0].RIOC = CS_UINT_INPUT(unsigned int,"node_mem[0].RIOC");
	TxDir = CS_UINT_INPUT(unsigned int,"TxDir");
	RxDir = CS_UINT_INPUT(unsigned int,"RxDir");



	/* canIoSetDirection(volatile struct canBase *, unsigned int, unsigned int) */
	canIoSetDirection(node,TxDir,RxDir);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canIoSetDirection_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
