#line 2 "cs_test%LogicProcOutput_test0%cs_error"
/* LogicProcOutput_test0.c */
#ifndef __LogicProcOutput_test0__
#define __LogicProcOutput_test0__

#include "../factory/factory.h"

#include "LogicProcOutput_test0.h"

void CS_TEST LogicProcOutput_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(LogicProcOutput_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_LogicProcOutput_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%LogicProcOutput_test0%User code start"
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
#line 34 "cs_test%LogicProcOutput_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct canBase canREG2_tmp_mem [1]={0,}; 
	struct canBase canREG3_tmp_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct gioPort hetPORT1_tmp_mem [1]={0,}; 
	struct gioPort hetPORT2_tmp_mem [1]={0,}; 
	struct gioPort linPORT_tmp_mem [1]={0,}; 
	struct gioPort mibspiPORT1_tmp_mem [1]={0,}; 
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	unsigned int elipsed  = 0; 

	/*Memory assign*/
	canREG2_tmp = canREG2_tmp_mem;
	canREG3_tmp = canREG3_tmp_mem;
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	hetPORT1_tmp = hetPORT1_tmp_mem;
	hetPORT2_tmp = hetPORT2_tmp_mem;
	linPORT_tmp = linPORT_tmp_mem;
	mibspiPORT1_tmp = mibspiPORT1_tmp_mem;
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	DO_FB[0] = CS_UINT_INPUT(unsigned char,"DO_FB[0]");
	g_ConfLogic[0].DO.nNum = CS_UINT_INPUT(unsigned char,"g_ConfLogic[0].DO.nNum");
	g_ConfLogic[0].DO.nValue = CS_UINT_INPUT(unsigned char,"g_ConfLogic[0].DO.nValue");
	g_bEnDOMonitor = CS_INT_INPUT(int,"g_bEnDOMonitor");
	g_bEnHalt = CS_INT_INPUT(int,"g_bEnHalt");
	g_nTick = CS_UINT_INPUT(unsigned int,"g_nTick");
	g_nTickBase = CS_UINT_INPUT(unsigned int,"g_nTickBase");
	g_pinDI[0] = CS_INT_INPUT(signed char,"g_pinDI[0]");
	g_pinDO[0] = CS_INT_INPUT(signed char,"g_pinDO[0]");
	g_pinDOMsk[0] = CS_INT_INPUT(signed char,"g_pinDOMsk[0]");
	g_pinPI[0] = CS_UINT_INPUT(unsigned short,"g_pinPI[0]");
	g_s_nTick = CS_UINT_INPUT(unsigned int,"g_s_nTick");
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	elipsed = CS_UINT_INPUT(unsigned int,"elipsed");



	/* LogicProcOutput(unsigned int) */
	LogicProcOutput(elipsed);




	/*Output*/
	CS_UINT_OUTPUT(DO_FB[0], "DO_FB[0]");
	CS_UINT_OUTPUT(g_nTick, "g_nTick");
	CS_UINT_OUTPUT(g_nTickBase, "g_nTickBase");
	CS_INT_OUTPUT(g_pinDO[0], "g_pinDO[0]");
	CS_UINT_OUTPUT(g_s_nTick, "g_s_nTick");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_LogicProcOutput_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
