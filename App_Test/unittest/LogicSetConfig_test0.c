#line 2 "cs_test%LogicSetConfig_test0%cs_error"
/* LogicSetConfig_test0.c */
#ifndef __LogicSetConfig_test0__
#define __LogicSetConfig_test0__

#include "../factory/factory.h"

#include "LogicSetConfig_test0.h"

void CS_TEST LogicSetConfig_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(LogicSetConfig_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_LogicSetConfig_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%LogicSetConfig_test0%User code start"
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
#line 52 "cs_test%LogicSetConfig_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct het1RamBase hetRAM1_tmp_mem [1]={0,}; 
	struct het1RamBase hetRAM2_tmp_mem [1]={0,}; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	hetRAM1_tmp = hetRAM1_tmp_mem;
	hetRAM2_tmp = hetRAM2_tmp_mem;

	/*Input*/
	g_ConfLogic[0].DO.nNum = CS_UINT_INPUT(unsigned char,"g_ConfLogic[0].DO.nNum");
	g_ConfLogic[0].DO.nOutputType = CS_UINT_INPUT(unsigned char,"g_ConfLogic[0].DO.nOutputType");
	g_ConfLogic[0].DO.nActiveLevel = CS_UINT_INPUT(unsigned char,"g_ConfLogic[0].DO.nActiveLevel");
	g_ConfLogic[0].DO.nDutyRatio = CS_UINT_INPUT(unsigned char,"g_ConfLogic[0].DO.nDutyRatio");
	g_ConfLogic[0].DO.nPeriod = CS_UINT_INPUT(unsigned short,"g_ConfLogic[0].DO.nPeriod");
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	hetRAM1_tmp_mem[0].Instruction[0].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[0].Data");
	hetRAM1_tmp_mem[0].Instruction[0].Control = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[0].Control");
	s_het1pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het1pwmPolarity[0]");
	s_het2pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het2pwmPolarity[0]");



	/* LogicSetConfig() */
	LogicSetConfig();




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(hetRAM1_tmp_mem[0].Instruction[0].Data, "hetRAM1_tmp_mem[0].Instruction[0].Data");
	CS_UINT_OUTPUT(hetRAM1_tmp_mem[0].Instruction[0].Control, "hetRAM1_tmp_mem[0].Instruction[0].Control");
	CS_UINT_OUTPUT(s_het1pwmPolarity[0], "s_het1pwmPolarity[0]");
	CS_UINT_OUTPUT(s_het2pwmPolarity[0], "s_het2pwmPolarity[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_LogicSetConfig_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
