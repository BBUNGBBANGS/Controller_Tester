#line 2 "cs_test%SetConfigDefault_test0%cs_error"
/* SetConfigDefault_test0.c */
#ifndef __SetConfigDefault_test0__
#define __SetConfigDefault_test0__

#include "../factory/factory.h"

#include "SetConfigDefault_test0.h"

void CS_TEST SetConfigDefault_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(SetConfigDefault_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_SetConfigDefault_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%SetConfigDefault_test0%User code start"
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
#line 62 "cs_test%SetConfigDefault_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct het1RamBase hetRAM1_tmp_mem [1]={0,}; 
	struct het1RamBase hetRAM2_tmp_mem [1]={0,}; 
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	hetRAM1_tmp = hetRAM1_tmp_mem;
	hetRAM2_tmp = hetRAM2_tmp_mem;
	i2cREG1_tmp = i2cREG1_tmp_mem;
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	g_ConfLogic[0].DO.nActiveLevel = CS_UINT_INPUT(unsigned char,"g_ConfLogic[0].DO.nActiveLevel");
	g_ConfLogic[0].DO.nNum = CS_UINT_INPUT(unsigned char,"g_ConfLogic[0].DO.nNum");
	g_ConfLogic[0].DO.nPeriod = CS_UINT_INPUT(unsigned short,"g_ConfLogic[0].DO.nPeriod");
	g_ConfLogic[0].DO.nOutputType = CS_UINT_INPUT(unsigned char,"g_ConfLogic[0].DO.nOutputType");
	g_ConfLogic[0].DO.nDutyRatio = CS_UINT_INPUT(unsigned char,"g_ConfLogic[0].DO.nDutyRatio");
	g_ConfLogic[1].DO.nOutputType = CS_UINT_INPUT(unsigned char,"g_ConfLogic[1].DO.nOutputType");
	g_ConfLogic[1].DO.nActiveLevel = CS_UINT_INPUT(unsigned char,"g_ConfLogic[1].DO.nActiveLevel");
	g_ConfLogic[1].DO.nNum = CS_UINT_INPUT(unsigned char,"g_ConfLogic[1].DO.nNum");
	g_ConfLogic[2].DO.nNum = CS_UINT_INPUT(unsigned char,"g_ConfLogic[2].DO.nNum");
	g_ConfLogic[2].DO.nOutputType = CS_UINT_INPUT(unsigned char,"g_ConfLogic[2].DO.nOutputType");
	g_ConfLogic[2].DO.nActiveLevel = CS_UINT_INPUT(unsigned char,"g_ConfLogic[2].DO.nActiveLevel");
	g_ConfLogic[3].DO.nOutputType = CS_UINT_INPUT(unsigned char,"g_ConfLogic[3].DO.nOutputType");
	g_ConfLogic[3].DO.nNum = CS_UINT_INPUT(unsigned char,"g_ConfLogic[3].DO.nNum");
	g_ConfLogic[4].DO.nNum = CS_UINT_INPUT(unsigned char,"g_ConfLogic[4].DO.nNum");
	g_ConfLogic[4].DO.nOutputType = CS_UINT_INPUT(unsigned char,"g_ConfLogic[4].DO.nOutputType");
	g_ConfLogic[5].DO.nOutputType = CS_UINT_INPUT(unsigned char,"g_ConfLogic[5].DO.nOutputType");
	g_ConfLogic[5].DO.nNum = CS_UINT_INPUT(unsigned char,"g_ConfLogic[5].DO.nNum");
	g_nTick = CS_UINT_INPUT(unsigned int,"g_nTick");
	g_nTickBase = CS_UINT_INPUT(unsigned int,"g_nTickBase");
	CS_STRNCPY(g_sConfBuf[0],CS_STR_INPUT(char[128],"g_sConfBuf[0]"),127);
	CS_STRNCPY(g_sConfData,CS_STR_INPUT(char[1024],"g_sConfData"),1023);
	g_s_nTick = CS_UINT_INPUT(unsigned int,"g_s_nTick");
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	hetRAM1_tmp_mem[0].Instruction[0].Control = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[0].Control");
	hetRAM1_tmp_mem[0].Instruction[0].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[0].Data");
	hetRAM1_tmp_mem[0].Instruction[41].Control = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[41].Control");
	hetRAM1_tmp_mem[0].Instruction[41].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[41].Data");
	hetRAM1_tmp_mem[0].Instruction[42].Control = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[42].Control");
	hetRAM1_tmp_mem[0].Instruction[42].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[42].Data");
	i2cREG1_tmp_mem[0].SAR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].SAR");
	s_het1pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het1pwmPolarity[0]");
	s_het2pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het2pwmPolarity[0]");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* SetConfigDefault() */
	SetConfigDefault();
#line 1 "cs_test%SetConfigDefault_test0%AFTER_CALL_CODE_KEY_SetConfigDefault1646244482"
if(CS_TESTCASENO() == 9)
{
	PWMConfig(7);
}
#line 127 "cs_test%SetConfigDefault_test0%cs_error"



	/*Output*/
	CS_UINT_OUTPUT(g_nTick, "g_nTick");
	CS_UINT_OUTPUT(g_nTickBase, "g_nTickBase");
	CS_UINT_OUTPUT(g_s_nTick, "g_s_nTick");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(hetRAM1_tmp_mem[0].Instruction[0].Control, "hetRAM1_tmp_mem[0].Instruction[0].Control");
	CS_UINT_OUTPUT(hetRAM1_tmp_mem[0].Instruction[0].Data, "hetRAM1_tmp_mem[0].Instruction[0].Data");
	CS_UINT_OUTPUT(hetRAM1_tmp_mem[0].Instruction[41].Control, "hetRAM1_tmp_mem[0].Instruction[41].Control");
	CS_UINT_OUTPUT(hetRAM1_tmp_mem[0].Instruction[41].Data, "hetRAM1_tmp_mem[0].Instruction[41].Data");
	CS_UINT_OUTPUT(hetRAM1_tmp_mem[0].Instruction[42].Control, "hetRAM1_tmp_mem[0].Instruction[42].Control");
	CS_UINT_OUTPUT(hetRAM1_tmp_mem[0].Instruction[42].Data, "hetRAM1_tmp_mem[0].Instruction[42].Data");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].SAR, "i2cREG1_tmp_mem[0].SAR");
	CS_UINT_OUTPUT(s_het1pwmPolarity[0], "s_het1pwmPolarity[0]");
	CS_UINT_OUTPUT(s_het2pwmPolarity[0], "s_het2pwmPolarity[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_SetConfigDefault_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
