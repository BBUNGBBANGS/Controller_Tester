#line 2 "cs_test%SCM_Init_test0%cs_error"
/* SCM_Init_test0.c */
#ifndef __SCM_Init_test0__
#define __SCM_Init_test0__

#include "../factory/factory.h"

#include "SCM_Init_test0.h"

void CS_TEST SCM_Init_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(SCM_Init_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_SCM_Init_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%SCM_Init_test0%User code start"
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
uint32_t g_nTick ;	//	???? Tick

uint32_t g_nTickBase ;	//	???? Tick Base ( 0 / 200000 / 400000 / ... )

uint32_t g_s_nTick ;	//	Tick ( 0 ~ 200000 )
#line 39 "cs_test%SCM_Init_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct gioPort hetPORT2_tmp_mem [1]={0,}; 
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	unsigned int pStackGuard_tmp_mem [1]={0,}; 
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	hetPORT2_tmp = hetPORT2_tmp_mem;
	i2cREG1_tmp = i2cREG1_tmp_mem;
	pStackGuard_tmp = pStackGuard_tmp_mem;
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	g_bEnHalt = CS_INT_INPUT(int,"g_bEnHalt");
	g_nTick = CS_UINT_INPUT(unsigned int,"g_nTick");
	g_nTickBase = CS_UINT_INPUT(unsigned int,"g_nTickBase");
	g_s_nTick = CS_UINT_INPUT(unsigned int,"g_s_nTick");
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	pStackGuard_tmp_mem[0] = CS_UINT_INPUT(unsigned int,"pStackGuard_tmp_mem[0]");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* SCM_Init() */
	SCM_Init();




	/*Output*/
	CS_INT_OUTPUT(g_bEnHalt, "g_bEnHalt");
	CS_UINT_OUTPUT(g_nTick, "g_nTick");
	CS_UINT_OUTPUT(g_nTickBase, "g_nTickBase");
	CS_UINT_OUTPUT(g_s_nTick, "g_s_nTick");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(pStackGuard_tmp_mem[0], "pStackGuard_tmp_mem[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_SCM_Init_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
