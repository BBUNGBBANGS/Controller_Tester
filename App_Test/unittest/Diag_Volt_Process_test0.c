#line 2 "cs_test%Diag_Volt_Process_test0%cs_error"
/* Diag_Volt_Process_test0.c */
#ifndef __Diag_Volt_Process_test0__
#define __Diag_Volt_Process_test0__

#include "../factory/factory.h"

#include "Diag_Volt_Process_test0.h"

void CS_TEST Diag_Volt_Process_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(Diag_Volt_Process_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_Diag_Volt_Process_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%Diag_Volt_Process_test0%User code start"

static volatile struct g_sciTransfer
{
    uint32   mode;         /* Used to check for TX interrupt Enable */  
    uint32   tx_length;    /* Transmit data length in number of Bytes */
	uint32   rx_length;    /* Receive data length in number of Bytes */  
    uint8    * tx_data;    /* Transmit data pointer */  	
    uint8    * rx_data;    /* Receive data pointer */  
} g_sciTransfer_t[2U];
static int sum[3]={0,};

#define adcGROUP1 1U
#line 32 "cs_test%Diag_Volt_Process_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct adcBase adcREG1_tmp_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct gioPort hetPORT1_tmp_mem [1]={0,}; 
	struct gioPort hetPORT2_tmp_mem [1]={0,}; 
	int returnVar = 0; 

	/*Memory assign*/
	adcREG1_tmp = adcREG1_tmp_mem;
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	hetPORT1_tmp = hetPORT1_tmp_mem;
	hetPORT2_tmp = hetPORT2_tmp_mem;

	/*Input*/
	adcREG1_tmp_mem[0].OPMODECR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].OPMODECR");
	adcREG1_tmp_mem[0].GxINTCR[0] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxINTCR[0]");
	adcREG1_tmp_mem[0].GxINTCR[1] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxINTCR[1]");
	adcREG1_tmp_mem[0].GxINTCR[2] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxINTCR[2]");
	adcREG1_tmp_mem[0].GxSEL[0] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxSEL[0]");
	conversion_data_tmp[0].id = CS_UINT_INPUT(unsigned int,"conversion_data_tmp[0].id");
	conversion_data_tmp[0].value = CS_UINT_INPUT(unsigned short,"conversion_data_tmp[0].value");
	conversion_data_tmp[1].id = CS_UINT_INPUT(unsigned int,"conversion_data_tmp[1].id");
	conversion_data_tmp[1].value = CS_UINT_INPUT(unsigned short,"conversion_data_tmp[1].value");
	conversion_data_tmp[2].value = CS_UINT_INPUT(unsigned short,"conversion_data_tmp[2].value");
	conversion_data_tmp[2].id = CS_UINT_INPUT(unsigned int,"conversion_data_tmp[2].id");
	g_bEnHalt = CS_INT_INPUT(int,"g_bEnHalt");
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	hetPORT1_tmp_mem[0].DSET = CS_UINT_INPUT(unsigned int,"hetPORT1_tmp_mem[0].DSET");
	hetPORT1_tmp_mem[0].DCLR = CS_UINT_INPUT(unsigned int,"hetPORT1_tmp_mem[0].DCLR");
	hetPORT2_tmp_mem[0].DSET = CS_UINT_INPUT(unsigned int,"hetPORT2_tmp_mem[0].DSET");
	hetPORT2_tmp_mem[0].DCLR = CS_UINT_INPUT(unsigned int,"hetPORT2_tmp_mem[0].DCLR");
	sum[0] = CS_INT_INPUT(int,"sum[0]");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* int Diag_Volt_Process() */
	returnVar = Diag_Volt_Process();




	/*Output*/
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxINTCR[0], "adcREG1_tmp_mem[0].GxINTCR[0]");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxSEL[0], "adcREG1_tmp_mem[0].GxSEL[0]");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(hetPORT1_tmp_mem[0].DSET, "hetPORT1_tmp_mem[0].DSET");
	CS_UINT_OUTPUT(hetPORT1_tmp_mem[0].DCLR, "hetPORT1_tmp_mem[0].DCLR");
	CS_UINT_OUTPUT(hetPORT2_tmp_mem[0].DSET, "hetPORT2_tmp_mem[0].DSET");
	CS_UINT_OUTPUT(hetPORT2_tmp_mem[0].DCLR, "hetPORT2_tmp_mem[0].DCLR");
	CS_INT_OUTPUT(sum[0], "sum[0]");
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_Diag_Volt_Process_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
