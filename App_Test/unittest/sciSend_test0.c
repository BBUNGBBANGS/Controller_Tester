#line 2 "cs_test%sciSend_test0%cs_error"
/* sciSend_test0.c */
#ifndef __sciSend_test0__
#define __sciSend_test0__

#include "../factory/factory.h"

#include "sciSend_test0.h"

void CS_TEST sciSend_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(sciSend_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_sciSend_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t1_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t1_rx_data_mem [1]={0,}; 
	sciBASE_t * sci  = 0x0;
	struct sciBase sci_mem [2]={0,}; 
	unsigned int length  = 0; 
	uint8 * data  = 0x0;
	unsigned char data_mem [1]={0,}; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	g_sciTransfer_t[1].tx_data = g_sciTransfer_t1_tx_data_mem;
	g_sciTransfer_t[1].rx_data = g_sciTransfer_t1_rx_data_mem;
	sci = sci_mem;
	data = data_mem;

	/*Input*/
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	g_sciTransfer_t[1].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[1].mode");
	g_sciTransfer_t[1].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[1].tx_length");
	g_sciTransfer_t[1].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[1].rx_length");
	g_sciTransfer_t1_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t1_tx_data_mem[0]");
	g_sciTransfer_t1_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t1_rx_data_mem[0]");
	sci_mem[0].FLR = CS_UINT_INPUT(unsigned int,"sci_mem[0].FLR");
	sci_mem[1].FLR = CS_UINT_INPUT(unsigned int,"sci_mem[1].FLR");
	length = CS_UINT_INPUT(unsigned int,"length");
	data_mem[0] = CS_UINT_INPUT(unsigned char,"data_mem[0]");



	/* sciSend(volatile struct sciBase *, unsigned int, unsigned char *) */
	sciSend(sci,length,data);




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[1].mode, "g_sciTransfer_t[1].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[1].tx_length, "g_sciTransfer_t[1].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[1].rx_length, "g_sciTransfer_t[1].rx_length");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_sciSend_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
