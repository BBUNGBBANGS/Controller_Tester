#line 2 "cs_test%SetDO_test0%cs_error"
/* SetDO_test0.c */
#ifndef __SetDO_test0__
#define __SetDO_test0__

#include "../factory/factory.h"

#include "SetDO_test0.h"

void CS_TEST SetDO_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(SetDO_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_SetDO_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%SetDO_test0%User code start"
static volatile struct g_sciTransfer
{
    uint32   mode;         /* Used to check for TX interrupt Enable */  
    uint32   tx_length;    /* Transmit data length in number of Bytes */
	uint32   rx_length;    /* Receive data length in number of Bytes */  
    uint8    * tx_data;    /* Transmit data pointer */  	
    uint8    * rx_data;    /* Receive data pointer */  
} g_sciTransfer_t[2U];

#line 29 "cs_test%SetDO_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct gioPort hetPORT1_tmp_mem [1]={0,}; 
	struct gioPort hetPORT2_tmp_mem [1]={0,}; 
	int idx  = 0; 
	int bVal  = 0; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	hetPORT1_tmp = hetPORT1_tmp_mem;
	hetPORT2_tmp = hetPORT2_tmp_mem;

	/*Input*/
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	hetPORT1_tmp_mem[0].DSET = CS_UINT_INPUT(unsigned int,"hetPORT1_tmp_mem[0].DSET");
	hetPORT1_tmp_mem[0].DCLR = CS_UINT_INPUT(unsigned int,"hetPORT1_tmp_mem[0].DCLR");
	hetPORT2_tmp_mem[0].DSET = CS_UINT_INPUT(unsigned int,"hetPORT2_tmp_mem[0].DSET");
	hetPORT2_tmp_mem[0].DCLR = CS_UINT_INPUT(unsigned int,"hetPORT2_tmp_mem[0].DCLR");
	idx = CS_INT_INPUT(int,"idx");
	bVal = CS_INT_INPUT(int,"bVal");



	/* SetDO(signed int, signed int) */
	SetDO(idx,bVal);




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(hetPORT1_tmp_mem[0].DSET, "hetPORT1_tmp_mem[0].DSET");
	CS_UINT_OUTPUT(hetPORT1_tmp_mem[0].DCLR, "hetPORT1_tmp_mem[0].DCLR");
	CS_UINT_OUTPUT(hetPORT2_tmp_mem[0].DSET, "hetPORT2_tmp_mem[0].DSET");
	CS_UINT_OUTPUT(hetPORT2_tmp_mem[0].DCLR, "hetPORT2_tmp_mem[0].DCLR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_SetDO_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
