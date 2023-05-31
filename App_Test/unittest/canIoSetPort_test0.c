#line 2 "cs_test%canIoSetPort_test0%cs_error"
/* canIoSetPort_test0.c */
#ifndef __canIoSetPort_test0__
#define __canIoSetPort_test0__

#include "../factory/factory.h"

#include "canIoSetPort_test0.h"

void CS_TEST canIoSetPort_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canIoSetPort_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canIoSetPort_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	canBASE_t * node  = 0x0;
	struct canBase node_mem [1]={0,}; 
	unsigned int TxValue  = 0; 
	unsigned int RxValue  = 0; 

	/*Memory assign*/
	node = node_mem;

	/*Input*/
	node_mem[0].TIOC = CS_UINT_INPUT(unsigned int,"node_mem[0].TIOC");
	node_mem[0].RIOC = CS_UINT_INPUT(unsigned int,"node_mem[0].RIOC");
	TxValue = CS_UINT_INPUT(unsigned int,"TxValue");
	RxValue = CS_UINT_INPUT(unsigned int,"RxValue");



	/* canIoSetPort(volatile struct canBase *, unsigned int, unsigned int) */
	canIoSetPort(node,TxValue,RxValue);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canIoSetPort_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
