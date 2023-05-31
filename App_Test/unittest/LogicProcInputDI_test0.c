#line 2 "cs_test%LogicProcInputDI_test0%cs_error"
/* LogicProcInputDI_test0.c */
#ifndef __LogicProcInputDI_test0__
#define __LogicProcInputDI_test0__

#include "../factory/factory.h"

#include "LogicProcInputDI_test0.h"

void CS_TEST LogicProcInputDI_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(LogicProcInputDI_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_LogicProcInputDI_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%LogicProcInputDI_test0%User code start"
static volatile struct g_sciTransfer
{
    uint32   mode;         /* Used to check for TX interrupt Enable */  
    uint32   tx_length;    /* Transmit data length in number of Bytes */
	uint32   rx_length;    /* Receive data length in number of Bytes */  
    uint8    * tx_data;    /* Transmit data pointer */  	
    uint8    * rx_data;    /* Receive data pointer */  
} g_sciTransfer_t[2U];
uint32_t	g_tickPIEdge[4];	//	Time Stamp PI Edge
uint32_t	g_nOldPI[4];		//	Old PI Value
uint32_t g_nTick ;	//	???? Tick

uint32_t g_nTickBase ;	//	???? Tick Base ( 0 / 200000 / 400000 / ... )

uint32_t g_s_nTick ;	//	Tick ( 0 ~ 200000 )
#line 35 "cs_test%LogicProcInputDI_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct gioPort hetPORT1_tmp_mem [1]={0,}; 
	struct gioPort mibspiPORT1_tmp_mem [1]={0,}; 
	struct gioPort mibspiPORT3_tmp_mem [1]={0,}; 
	struct gioPort mibspiPORT5_tmp_mem [1]={0,}; 
	unsigned int elipsed  = 0; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	hetPORT1_tmp = hetPORT1_tmp_mem;
	mibspiPORT1_tmp = mibspiPORT1_tmp_mem;
	mibspiPORT3_tmp = mibspiPORT3_tmp_mem;
	mibspiPORT5_tmp = mibspiPORT5_tmp_mem;

	/*Input*/
	DIN_MON[0] = CS_UINT_INPUT(unsigned char,"DIN_MON[0]");
	DIN_STAT[0] = CS_UINT_INPUT(unsigned char,"DIN_STAT[0]");
	g_bEnHalt = CS_INT_INPUT(int,"g_bEnHalt");
	g_pinDI[0] = CS_INT_INPUT(signed char,"g_pinDI[0]");
	g_pinDIMsk[0] = CS_INT_INPUT(signed char,"g_pinDIMsk[0]");
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	g_sigDI[0].nValue = CS_UINT_INPUT(unsigned char,"g_sigDI[0].nValue");
	g_sigDI[0].nRemainTime = CS_UINT_INPUT(unsigned int,"g_sigDI[0].nRemainTime");
	elipsed = CS_UINT_INPUT(unsigned int,"elipsed");



	/* LogicProcInputDI(unsigned int) */
	LogicProcInputDI(elipsed);




	/*Output*/
	CS_UINT_OUTPUT(DIN_MON[0], "DIN_MON[0]");
	CS_UINT_OUTPUT(DIN_STAT[0], "DIN_STAT[0]");
	CS_INT_OUTPUT(g_pinDI[0], "g_pinDI[0]");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(g_sigDI[0].nValue, "g_sigDI[0].nValue");
	CS_UINT_OUTPUT(g_sigDI[0].nRemainTime, "g_sigDI[0].nRemainTime");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_LogicProcInputDI_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
