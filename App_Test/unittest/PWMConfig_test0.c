#line 2 "cs_test%PWMConfig_test0%cs_error"
/* PWMConfig_test0.c */
#ifndef __PWMConfig_test0__
#define __PWMConfig_test0__

#include "../factory/factory.h"

#include "PWMConfig_test0.h"

void CS_TEST PWMConfig_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(PWMConfig_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_PWMConfig_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%PWMConfig_test0%User code start"
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
#line 52 "cs_test%PWMConfig_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct het1RamBase hetRAM1_tmp_mem [1]={0,}; 
	struct het1RamBase hetRAM2_tmp_mem [1]={0,}; 
	int nDO  = 0; 
	int nPolarity  = 0; 
	int nPeriod  = 0; 
	int nDuty  = 0; 
	int returnVar = 0; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	hetRAM1_tmp = hetRAM1_tmp_mem;
	hetRAM2_tmp = hetRAM2_tmp_mem;

	/*Input*/
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	hetRAM1_tmp_mem[0].Instruction[41].Control = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[41].Control");
	hetRAM1_tmp_mem[0].Instruction[41].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[41].Data");
	hetRAM1_tmp_mem[0].Instruction[42].Control = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[42].Control");
	hetRAM1_tmp_mem[0].Instruction[42].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[42].Data");
	hetRAM1_tmp_mem[0].Instruction[43].Control = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[43].Control");
	hetRAM1_tmp_mem[0].Instruction[43].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[43].Data");
	hetRAM1_tmp_mem[0].Instruction[44].Control = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[44].Control");
	hetRAM1_tmp_mem[0].Instruction[44].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[44].Data");
	hetRAM1_tmp_mem[0].Instruction[45].Control = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[45].Control");
	hetRAM1_tmp_mem[0].Instruction[45].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[45].Data");
	hetRAM1_tmp_mem[0].Instruction[46].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[46].Data");
	hetRAM1_tmp_mem[0].Instruction[46].Control = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[46].Control");
	hetRAM1_tmp_mem[0].Instruction[47].Control = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[47].Control");
	hetRAM1_tmp_mem[0].Instruction[47].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[47].Data");
	hetRAM1_tmp_mem[0].Instruction[48].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[48].Data");
	hetRAM1_tmp_mem[0].Instruction[48].Control = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[48].Control");
	hetRAM1_tmp_mem[0].Instruction[49].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[49].Data");
	hetRAM1_tmp_mem[0].Instruction[49].Control = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[49].Control");
	hetRAM1_tmp_mem[0].Instruction[50].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[50].Data");
	hetRAM1_tmp_mem[0].Instruction[50].Control = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[50].Control");
	s_het1pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het1pwmPolarity[0]");
	s_het2pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het2pwmPolarity[0]");
	nDO = CS_INT_INPUT(int,"nDO");
	nPolarity = CS_INT_INPUT(int,"nPolarity");
	nPeriod = CS_INT_INPUT(int,"nPeriod");
	nDuty = CS_INT_INPUT(int,"nDuty");



	/* int PWMConfig(signed int, signed int, signed int, signed int) */
	returnVar = PWMConfig(nDO,nPolarity,nPeriod,nDuty);




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(s_het1pwmPolarity[0], "s_het1pwmPolarity[0]");
	CS_UINT_OUTPUT(s_het2pwmPolarity[0], "s_het2pwmPolarity[0]");
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_PWMConfig_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
