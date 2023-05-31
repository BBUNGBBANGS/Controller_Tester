#line 2 "cs_test%InitConfig_test0%cs_error"
/* InitConfig_test0.c */
#ifndef __InitConfig_test0__
#define __InitConfig_test0__

#include "../factory/factory.h"

#include "InitConfig_test0.h"

void CS_TEST InitConfig_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(InitConfig_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_InitConfig_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%InitConfig_test0%User code start"
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
static uint32 s_het1pwmPolarity[8U] =
{
    3U,
    1U,
    3U,
    3U,
    3U,
    1U,
    3U,
    3U,
};

static uint32 s_het2pwmPolarity[8U] =
{
    3U,
    3U,
    3U,
    3U,
    3U,
    3U,
    3U,
    3U,
};
#line 58 "cs_test%InitConfig_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct _SigPI_t confLogic_PI0_pSigPI_mem [1]={0,}; 
	struct _SigDI_t confLogic_DI0_pSigDI_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	confLogic.PI[0].pSigPI = confLogic_PI0_pSigPI_mem;
	confLogic.DI[0].pSigDI = confLogic_DI0_pSigDI_mem;
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	i2cREG1_tmp = i2cREG1_tmp_mem;

	/*Input*/
	confLogic.cntDI = CS_INT_INPUT(int,"confLogic.cntDI");
	confLogic.cntOpGate = CS_INT_INPUT(int,"confLogic.cntOpGate");
	confLogic.cntPI = CS_INT_INPUT(int,"confLogic.cntPI");
	g_ConfLogic[0].cntOpGate = CS_INT_INPUT(int,"g_ConfLogic[0].cntOpGate");
	g_ConfLogic[0].cntPI = CS_INT_INPUT(int,"g_ConfLogic[0].cntPI");
	g_ConfLogic[0].cntDI = CS_INT_INPUT(int,"g_ConfLogic[0].cntDI");
	CS_STRNCPY(g_sConfBuf[0],CS_STR_INPUT(char[128],"g_sConfBuf[0]"),127);
	CS_STRNCPY(g_sConfData,CS_STR_INPUT(char[1024],"g_sConfData"),1023);
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	i2cREG1_tmp_mem[0].STR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].STR");
	i2cREG1_tmp_mem[0].SAR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].SAR");
	s_het1pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het1pwmPolarity[0]");
	s_het2pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het2pwmPolarity[0]");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* InitConfig() */
	InitConfig();




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].STR, "i2cREG1_tmp_mem[0].STR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].SAR, "i2cREG1_tmp_mem[0].SAR");
	CS_UINT_OUTPUT(s_het1pwmPolarity[0], "s_het1pwmPolarity[0]");
	CS_UINT_OUTPUT(s_het2pwmPolarity[0], "s_het2pwmPolarity[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_InitConfig_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
