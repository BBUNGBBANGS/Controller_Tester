#line 2 "cs_test%EEPLogPrint_test0%cs_error"
/* EEPLogPrint_test0.c */
#ifndef __EEPLogPrint_test0__
#define __EEPLogPrint_test0__

#include "../factory/factory.h"

#include "EEPLogPrint_test0.h"

void CS_TEST EEPLogPrint_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(EEPLogPrint_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_EEPLogPrint_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%EEPLogPrint_test0%User code start"
static struct g_i2cTransfer
{
    uint32  mode;
    uint32  length;
    uint8   * data;
} g_i2cTransfer_t;

static volatile struct g_sciTransfer
{
    uint32   mode;         /* Used to check for TX interrupt Enable */  
    uint32   tx_length;    /* Transmit data length in number of Bytes */
	uint32   rx_length;    /* Receive data length in number of Bytes */  
    uint8    * tx_data;    /* Transmit data pointer */  	
    uint8    * rx_data;    /* Receive data pointer */  
} g_sciTransfer_t[2U];


#line 37 "cs_test%EEPLogPrint_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_i2cTransfer_tmp_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	int returnVar = 0; 

	/*Memory assign*/
	g_i2cTransfer_tmp.data = g_i2cTransfer_tmp_data_mem;
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	i2cREG1_tmp = i2cREG1_tmp_mem;

	/*Input*/
	g_i2cTransfer_tmp.mode = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.mode");
	g_i2cTransfer_tmp.length = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.length");
	g_i2cTransfer_tmp_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_i2cTransfer_tmp_data_mem[0]");
	g_qLog.size = CS_INT_INPUT(int,"g_qLog.size");
	g_qLog.front = CS_INT_INPUT(int,"g_qLog.front");
	g_qLog.rear = CS_INT_INPUT(int,"g_qLog.rear");
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	i2cREG1_tmp_mem[0].STR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].STR");
	i2cREG1_tmp_mem[0].IMR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].IMR");
	s_sLogBuf[0] = CS_UINT_INPUT(unsigned char,"s_sLogBuf[0]");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* int EEPLogPrint() */
	returnVar = EEPLogPrint();




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(s_sLogBuf[0], "s_sLogBuf[0]");
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_EEPLogPrint_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
