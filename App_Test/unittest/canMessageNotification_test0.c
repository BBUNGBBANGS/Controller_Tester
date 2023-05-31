#line 2 "cs_test%canMessageNotification_test0%cs_error"
/* canMessageNotification_test0.c */
#ifndef __canMessageNotification_test0__
#define __canMessageNotification_test0__

#include "../factory/factory.h"

#include "canMessageNotification_test0.h"

void CS_TEST canMessageNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canMessageNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canMessageNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct canBase canREG1_tmp_mem [1]={0,}; 
	canBASE_t * node  = 0x0;
	struct canBase node_mem [1]={0,}; 
	unsigned int messageBox  = 0; 

	/*Memory assign*/
	canREG1_tmp = canREG1_tmp_mem;
	node = node_mem;

	/*Input*/
	canREG1_tmp_mem[0].IF1STAT = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF1STAT");
	node_mem[0].TXRQx[0] = CS_UINT_INPUT(unsigned int,"node_mem[0].TXRQx[0]");
	node_mem[0].TXRQx[1] = CS_UINT_INPUT(unsigned int,"node_mem[0].TXRQx[1]");
	node_mem[0].TXRQx[2] = CS_UINT_INPUT(unsigned int,"node_mem[0].TXRQx[2]");
	node_mem[0].TXRQx[3] = CS_UINT_INPUT(unsigned int,"node_mem[0].TXRQx[3]");
	node_mem[0].IF1STAT = CS_UINT_INPUT(unsigned char,"node_mem[0].IF1STAT");
	messageBox = CS_UINT_INPUT(unsigned int,"messageBox");



	/* canMessageNotification(volatile struct canBase *, unsigned int) */
	canMessageNotification(node,messageBox);




	/*Output*/
	CS_INT_OUTPUT(g_canRxComp0, "g_canRxComp0");
	CS_INT_OUTPUT(g_canRxComp1, "g_canRxComp1");
	CS_INT_OUTPUT(g_canRxComp2, "g_canRxComp2");
	CS_INT_OUTPUT(g_canRxComp3, "g_canRxComp3");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canMessageNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
