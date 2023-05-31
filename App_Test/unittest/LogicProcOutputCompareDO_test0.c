#line 2 "cs_test%LogicProcOutputCompareDO_test0%cs_error"
/* LogicProcOutputCompareDO_test0.c */
#ifndef __LogicProcOutputCompareDO_test0__
#define __LogicProcOutputCompareDO_test0__

#include "../factory/factory.h"

#include "LogicProcOutputCompareDO_test0.h"

void CS_TEST LogicProcOutputCompareDO_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(LogicProcOutputCompareDO_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_LogicProcOutputCompareDO_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%LogicProcOutputCompareDO_test0%User code start"
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
#line 34 "cs_test%LogicProcOutputCompareDO_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct canBase canREG2_tmp_mem [1]={0,}; 
	struct canBase canREG3_tmp_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct gioPort linPORT_tmp_mem [1]={0,}; 
	struct gioPort mibspiPORT1_tmp_mem [1]={0,}; 
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	int returnVar = 0; 

	/*Memory assign*/
	canREG2_tmp = canREG2_tmp_mem;
	canREG3_tmp = canREG3_tmp_mem;
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	linPORT_tmp = linPORT_tmp_mem;
	mibspiPORT1_tmp = mibspiPORT1_tmp_mem;
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	DO_FB[0] = CS_UINT_INPUT(unsigned char,"DO_FB[0]");
	DO_FB[1] = CS_UINT_INPUT(unsigned char,"DO_FB[1]");
	DO_FB[2] = CS_UINT_INPUT(unsigned char,"DO_FB[2]");
	DO_FB[3] = CS_UINT_INPUT(unsigned char,"DO_FB[3]");
	DO_FB[4] = CS_UINT_INPUT(unsigned char,"DO_FB[4]");
	DO_FB[5] = CS_UINT_INPUT(unsigned char,"DO_FB[5]");
	DO_FB[6] = CS_UINT_INPUT(unsigned char,"DO_FB[6]");
	canREG2_tmp_mem[0].TIOC = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].TIOC");
	canREG2_tmp_mem[0].RIOC = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].RIOC");
	g_bEnHalt = CS_INT_INPUT(int,"g_bEnHalt");
	g_nTick = CS_UINT_INPUT(unsigned int,"g_nTick");
	g_nTickBase = CS_UINT_INPUT(unsigned int,"g_nTickBase");
	g_pinDO[0] = CS_INT_INPUT(signed char,"g_pinDO[0]");
	g_s_nTick = CS_UINT_INPUT(unsigned int,"g_s_nTick");
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	rtiREG1_tmp_mem[0].COMPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMPCTRL");
	rtiREG1_tmp_mem[0].CNT[0].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].FRCx");
	rtiREG1_tmp_mem[0].CMP[0].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].COMPx");
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");



	/* int LogicProcOutputCompareDO() */
	returnVar = LogicProcOutputCompareDO();




	/*Output*/
	CS_UINT_OUTPUT(DO_FB[0], "DO_FB[0]");
	CS_UINT_OUTPUT(DO_FB[1], "DO_FB[1]");
	CS_UINT_OUTPUT(DO_FB[2], "DO_FB[2]");
	CS_UINT_OUTPUT(DO_FB[3], "DO_FB[3]");
	CS_UINT_OUTPUT(DO_FB[4], "DO_FB[4]");
	CS_UINT_OUTPUT(DO_FB[5], "DO_FB[5]");
	CS_UINT_OUTPUT(DO_FB[6], "DO_FB[6]");
	CS_UINT_OUTPUT(canREG2_tmp_mem[0].TIOC, "canREG2_tmp_mem[0].TIOC");
	CS_UINT_OUTPUT(canREG2_tmp_mem[0].RIOC, "canREG2_tmp_mem[0].RIOC");
	CS_INT_OUTPUT(g_bEnHalt, "g_bEnHalt");
	CS_UINT_OUTPUT(g_nTick, "g_nTick");
	CS_UINT_OUTPUT(g_nTickBase, "g_nTickBase");
	CS_UINT_OUTPUT(g_s_nTick, "g_s_nTick");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_LogicProcOutputCompareDO_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
