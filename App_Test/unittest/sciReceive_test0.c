#line 2 "cs_test%sciReceive_test0%cs_error"
/* sciReceive_test0.c */
#ifndef __sciReceive_test0__
#define __sciReceive_test0__

#include "../factory/factory.h"

#include "sciReceive_test0.h"

void CS_TEST sciReceive_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(sciReceive_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_sciReceive_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct sciBase sciREG_tmp_mem [1]={0,}; 
	sciBASE_t * sci  = 0x0;
	struct sciBase sci_mem [1]={0,}; 
	unsigned int length  = 0; 
	uint8 * data  = 0x0;
	unsigned char data_mem [1]={0,}; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	sciREG_tmp = sciREG_tmp_mem;
	sci = sci_mem;
	data = data_mem;

	/*Input*/
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	sciREG_tmp_mem[0].FLR = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].FLR");
	sciREG_tmp_mem[0].SETINT = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].SETINT");
	sciREG_tmp_mem[0].RD = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].RD");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	sci_mem[0].RD = CS_UINT_INPUT(unsigned int,"sci_mem[0].RD");
	sci_mem[0].SETINT = CS_UINT_INPUT(unsigned int,"sci_mem[0].SETINT");
	sci_mem[0].FLR = CS_UINT_INPUT(unsigned int,"sci_mem[0].FLR");
	length = CS_UINT_INPUT(unsigned int,"length");
	data_mem[0] = CS_UINT_INPUT(unsigned char,"data_mem[0]");



	/* sciReceive(volatile struct sciBase *, unsigned int, unsigned char *) */
	sciReceive(sci,length,data);




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_sciReceive_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
