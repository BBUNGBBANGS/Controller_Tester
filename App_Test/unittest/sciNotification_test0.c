#line 2 "cs_test%sciNotification_test0%cs_error"
/* sciNotification_test0.c */
#ifndef __sciNotification_test0__
#define __sciNotification_test0__

#include "../factory/factory.h"

#include "sciNotification_test0.h"

void CS_TEST sciNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(sciNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_sciNotification_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%sciNotification_test0%User code start"
static volatile struct g_sciTransfer
{
    uint32   mode;         /* Used to check for TX interrupt Enable */  
    uint32   tx_length;    /* Transmit data length in number of Bytes */
	uint32   rx_length;    /* Receive data length in number of Bytes */  
    uint8    * tx_data;    /* Transmit data pointer */  	
    uint8    * rx_data;    /* Receive data pointer */  
} g_sciTransfer_t[2U];

uint8_t		dataRx1[8];	
#define QMAX 256
#line 31 "cs_test%sciNotification_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct sciBase sciREG_tmp_mem [1]={0,}; 
	sciBASE_t * sci  = 0x0;
	struct sciBase sci_mem [1]={0,}; 
	unsigned int flags  = 0; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	sciREG_tmp = sciREG_tmp_mem;
	sci = sci_mem;

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
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	flags = CS_UINT_INPUT(unsigned int,"flags");



	/* sciNotification(volatile struct sciBase *, unsigned int) */
	sciNotification(sci,flags);




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].FLR, "sciREG_tmp_mem[0].FLR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_sciNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
