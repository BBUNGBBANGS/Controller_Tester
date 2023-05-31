#line 2 "cs_test%EEPLogWrite_test0%cs_error"
/* EEPLogWrite_test0.c */
#ifndef __EEPLogWrite_test0__
#define __EEPLogWrite_test0__

#include "../factory/factory.h"

#include "EEPLogWrite_test0.h"

void CS_TEST EEPLogWrite_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(EEPLogWrite_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_EEPLogWrite_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%EEPLogWrite_test0%User code start"
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

uint32_t g_nTick;
uint32_t g_nTickBase;
uint32_t g_s_nTick;
#line 39 "cs_test%EEPLogWrite_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_i2cTransfer_tmp_data_mem [1]={0,}; 
	unsigned char g_qLog_qBuf_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	char * sBuf  = 0x0; 
	int returnVar = 0; 

	/*Memory assign*/
	g_i2cTransfer_tmp.data = g_i2cTransfer_tmp_data_mem;
	g_qLog.qBuf = g_qLog_qBuf_mem;
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	i2cREG1_tmp = i2cREG1_tmp_mem;
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	g_i2cTransfer_tmp.mode = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.mode");
	g_i2cTransfer_tmp.length = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.length");
	g_i2cTransfer_tmp_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_i2cTransfer_tmp_data_mem[0]");
	g_nTick = CS_UINT_INPUT(unsigned int,"g_nTick");
	g_nTickBase = CS_UINT_INPUT(unsigned int,"g_nTickBase");
	g_qLog_qBuf_mem[0] = CS_UINT_INPUT(unsigned char,"g_qLog_qBuf_mem[0]");
	g_qLog.size = CS_INT_INPUT(int,"g_qLog.size");
	g_qLog.front = CS_INT_INPUT(int,"g_qLog.front");
	g_qLog.rear = CS_INT_INPUT(int,"g_qLog.rear");
	g_s_nTick = CS_UINT_INPUT(unsigned int,"g_s_nTick");
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	i2cREG1_tmp_mem[0].SAR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].SAR");
	i2cREG1_tmp_mem[0].STR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].STR");
	rtiREG1_tmp_mem[0].COMPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMPCTRL");
	rtiREG1_tmp_mem[0].CNT[0].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].FRCx");
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	rtiREG1_tmp_mem[0].CMP[0].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].COMPx");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	sBuf = CS_STR_INPUT(char[1024],"sBuf");



	/* int EEPLogWrite(char *) */
	returnVar = EEPLogWrite(sBuf);
#line 1 "cs_test%EEPLogWrite_test0%AFTER_CALL_CODE_KEY_EEPLogWrite286820195"
if(CS_TESTCASENO() == 10)
{
	delay(0);
	rtiGetCurrentTick(1);
}
#line 93 "cs_test%EEPLogWrite_test0%cs_error"



	/*Output*/
	CS_UINT_OUTPUT(g_nTick, "g_nTick");
	CS_UINT_OUTPUT(g_nTickBase, "g_nTickBase");
	CS_INT_OUTPUT(g_qLog.size, "g_qLog.size");
	CS_INT_OUTPUT(g_qLog.front, "g_qLog.front");
	CS_INT_OUTPUT(g_qLog.rear, "g_qLog.rear");
	CS_UINT_OUTPUT(g_s_nTick, "g_s_nTick");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].SAR, "i2cREG1_tmp_mem[0].SAR");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].COMPCTRL, "rtiREG1_tmp_mem[0].COMPCTRL");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CNT[0].FRCx, "rtiREG1_tmp_mem[0].CNT[0].FRCx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[0].UDCPx, "rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[0].COMPx, "rtiREG1_tmp_mem[0].CMP[0].COMPx");
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_EEPLogWrite_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
