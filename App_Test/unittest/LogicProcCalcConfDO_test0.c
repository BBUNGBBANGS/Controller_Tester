#line 2 "cs_test%LogicProcCalcConfDO_test0%cs_error"
/* LogicProcCalcConfDO_test0.c */
#ifndef __LogicProcCalcConfDO_test0__
#define __LogicProcCalcConfDO_test0__

#include "../factory/factory.h"

#include "LogicProcCalcConfDO_test0.h"

void CS_TEST LogicProcCalcConfDO_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(LogicProcCalcConfDO_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_LogicProcCalcConfDO_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%LogicProcCalcConfDO_test0%User code start"
static volatile struct g_sciTransfer
{
    uint32   mode;         /* Used to check for TX interrupt Enable */  
    uint32   tx_length;    /* Transmit data length in number of Bytes */
	uint32   rx_length;    /* Receive data length in number of Bytes */  
    uint8    * tx_data;    /* Transmit data pointer */  	
    uint8    * rx_data;    /* Receive data pointer */  
} g_sciTransfer_t[2U];

#line 29 "cs_test%LogicProcCalcConfDO_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct het1RamBase hetRAM1_tmp_mem [1]={0,}; 
	struct het1RamBase hetRAM2_tmp_mem [1]={0,}; 
	unsigned int elipsed  = 0; 
	ConfLogic_t * pConf  = 0x0;
	struct _ConfLogic_t pConf_mem [1]={0,}; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	hetRAM1_tmp = hetRAM1_tmp_mem;
	hetRAM2_tmp = hetRAM2_tmp_mem;
	pConf = pConf_mem;

	/*Input*/
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	elipsed = CS_UINT_INPUT(unsigned int,"elipsed");
	pConf_mem[0].DO.nNum = CS_UINT_INPUT(unsigned char,"pConf_mem[0].DO.nNum");
	pConf_mem[0].DO.nOutputType = CS_UINT_INPUT(unsigned char,"pConf_mem[0].DO.nOutputType");
	pConf_mem[0].DO.nPeriod = CS_UINT_INPUT(unsigned short,"pConf_mem[0].DO.nPeriod");
	pConf_mem[0].DO._nOldCalcVal = CS_UINT_INPUT(unsigned char,"pConf_mem[0].DO._nOldCalcVal");
	pConf_mem[0].DO.nCalcVal = CS_UINT_INPUT(unsigned char,"pConf_mem[0].DO.nCalcVal");
	pConf_mem[0].DO._DOSt = CS_UINT_INPUT(unsigned char,"pConf_mem[0].DO._DOSt");
	pConf_mem[0].DO._nPulseTime = CS_UINT_INPUT(unsigned short,"pConf_mem[0].DO._nPulseTime");



	/* LogicProcCalcConfDO(unsigned int, struct _ConfLogic_t *) */
	LogicProcCalcConfDO(elipsed,pConf);




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_LogicProcCalcConfDO_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
