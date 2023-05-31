#line 2 "cs_test%DiagProc_test0%cs_error"
/* DiagProc_test0.c */
#ifndef __DiagProc_test0__
#define __DiagProc_test0__

#include "../factory/factory.h"

#include "DiagProc_test0.h"

void CS_TEST DiagProc_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(DiagProc_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_DiagProc_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%DiagProc_test0%User code start"
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

static int sum[3]={0,};
#line 37 "cs_test%DiagProc_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct adcBase adcREG1_tmp_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct gioPort hetPORT2_tmp_mem [1]={0,}; 
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	unsigned int pStackGuard_tmp_mem [1]={0,}; 
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	int returnVar = 0; 

	/*Memory assign*/
	adcREG1_tmp = adcREG1_tmp_mem;
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	hetPORT2_tmp = hetPORT2_tmp_mem;
	i2cREG1_tmp = i2cREG1_tmp_mem;
	pStackGuard_tmp = pStackGuard_tmp_mem;
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	g_bEnHalt = CS_INT_INPUT(int,"g_bEnHalt");
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	hetPORT2_tmp_mem[0].DSET = CS_UINT_INPUT(unsigned int,"hetPORT2_tmp_mem[0].DSET");
	hetPORT2_tmp_mem[0].DCLR = CS_UINT_INPUT(unsigned int,"hetPORT2_tmp_mem[0].DCLR");
	i2cREG1_tmp_mem[0].SAR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].SAR");
	pStackGuard_tmp_mem[0] = CS_UINT_INPUT(unsigned int,"pStackGuard_tmp_mem[0]");
	rtiREG1_tmp_mem[0].COMPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMPCTRL");
	rtiREG1_tmp_mem[0].CNT[0].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].FRCx");
	rtiREG1_tmp_mem[0].CMP[0].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].COMPx");
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	sum[0] = CS_INT_INPUT(int,"sum[0]");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* int DiagProc() */
	returnVar = DiagProc();




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(hetPORT2_tmp_mem[0].DSET, "hetPORT2_tmp_mem[0].DSET");
	CS_UINT_OUTPUT(hetPORT2_tmp_mem[0].DCLR, "hetPORT2_tmp_mem[0].DCLR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].SAR, "i2cREG1_tmp_mem[0].SAR");
	CS_UINT_OUTPUT(pStackGuard_tmp_mem[0], "pStackGuard_tmp_mem[0]");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].COMPCTRL, "rtiREG1_tmp_mem[0].COMPCTRL");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CNT[0].FRCx, "rtiREG1_tmp_mem[0].CNT[0].FRCx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[0].COMPx, "rtiREG1_tmp_mem[0].CMP[0].COMPx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[0].UDCPx, "rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	CS_INT_OUTPUT(sum[0], "sum[0]");
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_DiagProc_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
