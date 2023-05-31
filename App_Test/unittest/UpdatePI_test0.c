#line 2 "cs_test%UpdatePI_test0%cs_error"
/* UpdatePI_test0.c */
#ifndef __UpdatePI_test0__
#define __UpdatePI_test0__

#include "../factory/factory.h"

#include "UpdatePI_test0.h"

void CS_TEST UpdatePI_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(UpdatePI_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_UpdatePI_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%UpdatePI_test0%User code start"
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




#line 84 "cs_test%UpdatePI_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct het1RamBase hetRAM1_tmp_mem [1]={0,}; 
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	hetRAM1_tmp = hetRAM1_tmp_mem;
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	PI_MON[0] = CS_FLT_INPUT(double,"PI_MON[0]");
	PI_STAT[0] = CS_FLT_INPUT(double,"PI_STAT[0]");
	Pulse_Det[0].period = CS_FLT_INPUT(double,"Pulse_Det[0].period");
	Pulse_Det[0].duty = CS_UINT_INPUT(unsigned int,"Pulse_Det[0].duty");
	Pulse_Det[1].period = CS_FLT_INPUT(double,"Pulse_Det[1].period");
	Pulse_Det[1].duty = CS_UINT_INPUT(unsigned int,"Pulse_Det[1].duty");
	Pulse_Det[2].duty = CS_UINT_INPUT(unsigned int,"Pulse_Det[2].duty");
	Pulse_Det[2].period = CS_FLT_INPUT(double,"Pulse_Det[2].period");
	Pulse_Det[3].duty = CS_UINT_INPUT(unsigned int,"Pulse_Det[3].duty");
	Pulse_Det[3].period = CS_FLT_INPUT(double,"Pulse_Det[3].period");
	g_nOldPI[0] = CS_UINT_INPUT(unsigned int,"g_nOldPI[0]");
	g_nOldPI[1] = CS_UINT_INPUT(unsigned int,"g_nOldPI[1]");
	g_nOldPI[2] = CS_UINT_INPUT(unsigned int,"g_nOldPI[2]");
	g_nOldPI[3] = CS_UINT_INPUT(unsigned int,"g_nOldPI[3]");
	g_nTick = CS_UINT_INPUT(unsigned int,"g_nTick");
	g_nTickBase = CS_UINT_INPUT(unsigned int,"g_nTickBase");
	g_s_nTick = CS_UINT_INPUT(unsigned int,"g_s_nTick");
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	g_tickPIEdge[0] = CS_UINT_INPUT(unsigned int,"g_tickPIEdge[0]");
	hetRAM1_tmp_mem[0].Instruction[25].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[25].Data");
	hetRAM1_tmp_mem[0].Instruction[26].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[26].Data");
	hetRAM1_tmp_mem[0].Instruction[27].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[27].Data");
	hetRAM1_tmp_mem[0].Instruction[28].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[28].Data");
	hetRAM1_tmp_mem[0].Instruction[29].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[29].Data");
	hetRAM1_tmp_mem[0].Instruction[30].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[30].Data");
	hetRAM1_tmp_mem[0].Instruction[31].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[31].Data");
	hetRAM1_tmp_mem[0].Instruction[32].Data = CS_UINT_INPUT(unsigned int,"hetRAM1_tmp_mem[0].Instruction[32].Data");
	rtiREG1_tmp_mem[0].COMPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMPCTRL");
	rtiREG1_tmp_mem[0].CNT[0].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].FRCx");
	rtiREG1_tmp_mem[0].CMP[0].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].COMPx");
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");



	/* UpdatePI() */
	UpdatePI();




	/*Output*/
	CS_FLT_OUTPUT(PI_MON[0], "PI_MON[0]");
	CS_FLT_OUTPUT(PI_STAT[0], "PI_STAT[0]");
	CS_UINT_OUTPUT(g_nOldPI[0], "g_nOldPI[0]");
	CS_UINT_OUTPUT(g_nOldPI[1], "g_nOldPI[1]");
	CS_UINT_OUTPUT(g_nOldPI[2], "g_nOldPI[2]");
	CS_UINT_OUTPUT(g_nOldPI[3], "g_nOldPI[3]");
	CS_UINT_OUTPUT(g_nTick, "g_nTick");
	CS_UINT_OUTPUT(g_nTickBase, "g_nTickBase");
	CS_UINT_OUTPUT(g_s_nTick, "g_s_nTick");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_UpdatePI_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
