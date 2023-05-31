#line 2 "cs_test%canTransmit_test0%cs_error"
/* canTransmit_test0.c */
#ifndef __canTransmit_test0__
#define __canTransmit_test0__

#include "../factory/factory.h"

#include "canTransmit_test0.h"

void CS_TEST canTransmit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canTransmit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canTransmit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	canBASE_t * node  = 0x0;
	struct canBase node_mem [1]={0,}; 
	unsigned int messageBox  = 0; 
	uint8 * data  = 0x0;
	unsigned char data_mem [1]={0,}; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	node = node_mem;
	data = data_mem;

	/*Input*/
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	node_mem[0].TXRQx[0] = CS_UINT_INPUT(unsigned int,"node_mem[0].TXRQx[0]");
	node_mem[0].IF1STAT = CS_UINT_INPUT(unsigned char,"node_mem[0].IF1STAT");
	messageBox = CS_UINT_INPUT(unsigned int,"messageBox");
	data_mem[0] = CS_UINT_INPUT(unsigned char,"data_mem[0]");



	/* unsigned int canTransmit(volatile struct canBase *, unsigned int, const unsigned char *) */
	returnVar = canTransmit(node,messageBox,data);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canTransmit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
