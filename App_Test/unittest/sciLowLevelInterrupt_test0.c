#line 2 "cs_test%sciLowLevelInterrupt_test0%cs_error"
/* sciLowLevelInterrupt_test0.c */
#ifndef __sciLowLevelInterrupt_test0__
#define __sciLowLevelInterrupt_test0__

#include "../factory/factory.h"

#include "sciLowLevelInterrupt_test0.h"

void CS_TEST sciLowLevelInterrupt_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(sciLowLevelInterrupt_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_sciLowLevelInterrupt_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%sciLowLevelInterrupt_test0%User code start"
uint8_t		dataRx1[8];	
#line 21 "cs_test%sciLowLevelInterrupt_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct sciBase sciREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	sciREG_tmp = sciREG_tmp_mem;

	/*Input*/
	dataRx1[0] = CS_UINT_INPUT(unsigned char,"dataRx1[0]");
	g_qUart1.queue[0] = CS_UINT_INPUT(unsigned char,"g_qUart1.queue[0]");
	g_qUart1.front = CS_INT_INPUT(int,"g_qUart1.front");
	g_qUart1.rear = CS_INT_INPUT(int,"g_qUart1.rear");
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	sciREG_tmp_mem[0].FLR = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].FLR");
	sciREG_tmp_mem[0].SETINT = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].SETINT");
	sciREG_tmp_mem[0].CLEARINT = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].CLEARINT");
	sciREG_tmp_mem[0].INTVECT1 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].INTVECT1");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* sciLowLevelInterrupt() */
	sciLowLevelInterrupt();




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].CLEARINT, "sciREG_tmp_mem[0].CLEARINT");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_sciLowLevelInterrupt_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif