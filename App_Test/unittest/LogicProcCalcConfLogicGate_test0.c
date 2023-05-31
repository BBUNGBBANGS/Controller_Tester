#line 2 "cs_test%LogicProcCalcConfLogicGate_test0%cs_error"
/* LogicProcCalcConfLogicGate_test0.c */
#ifndef __LogicProcCalcConfLogicGate_test0__
#define __LogicProcCalcConfLogicGate_test0__

#include "../factory/factory.h"

#include "LogicProcCalcConfLogicGate_test0.h"

void CS_TEST LogicProcCalcConfLogicGate_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(LogicProcCalcConfLogicGate_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_LogicProcCalcConfLogicGate_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%LogicProcCalcConfLogicGate_test0%User code start"
static volatile struct g_sciTransfer
{
    uint32   mode;         /* Used to check for TX interrupt Enable */  
    uint32   tx_length;    /* Transmit data length in number of Bytes */
	uint32   rx_length;    /* Receive data length in number of Bytes */  
    uint8    * tx_data;    /* Transmit data pointer */  	
    uint8    * rx_data;    /* Receive data pointer */  
} g_sciTransfer_t[2U];
#line 28 "cs_test%LogicProcCalcConfLogicGate_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	unsigned int elipsed  = 0; 
	ConfLogic_t * pConf  = 0x0;
	struct _ConfLogic_t pConf_mem [1]={0,}; 
	unsigned char returnVar = 0; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	pConf = pConf_mem;

	/*Input*/
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	elipsed = CS_UINT_INPUT(unsigned int,"elipsed");
	pConf_mem[0].DI[0].nValue = CS_UINT_INPUT(unsigned char,"pConf_mem[0].DI[0].nValue");
	pConf_mem[0].cntDI = CS_INT_INPUT(int,"pConf_mem[0].cntDI");
	pConf_mem[0].PI[0].nValue = CS_UINT_INPUT(unsigned char,"pConf_mem[0].PI[0].nValue");
	pConf_mem[0].cntPI = CS_INT_INPUT(int,"pConf_mem[0].cntPI");
	pConf_mem[0].opGate[0].Gate = CS_UINT_INPUT(unsigned char,"pConf_mem[0].opGate[0].Gate");
	pConf_mem[0].cntOpGate = CS_INT_INPUT(int,"pConf_mem[0].cntOpGate");
	pConf_mem[0].DO.nCalcVal = CS_UINT_INPUT(unsigned char,"pConf_mem[0].DO.nCalcVal");



	/* unsigned char LogicProcCalcConfLogicGate(unsigned int, struct _ConfLogic_t *) */
	returnVar = LogicProcCalcConfLogicGate(elipsed,pConf);




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(pConf_mem[0].DO.nCalcVal, "pConf_mem[0].DO.nCalcVal");
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_LogicProcCalcConfLogicGate_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
