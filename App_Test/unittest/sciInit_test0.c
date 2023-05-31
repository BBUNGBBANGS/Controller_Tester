#line 2 "cs_test%sciInit_test0%cs_error"
/* sciInit_test0.c */
#ifndef __sciInit_test0__
#define __sciInit_test0__

#include "../factory/factory.h"

#include "sciInit_test0.h"

void CS_TEST sciInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(sciInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_sciInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct sciBase sciREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	sciREG_tmp = sciREG_tmp_mem;

	/*Input*/
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	sciREG_tmp_mem[0].PIO3 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO3");
	sciREG_tmp_mem[0].GCR0 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].GCR0");
	sciREG_tmp_mem[0].GCR1 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].GCR1");
	sciREG_tmp_mem[0].PIO6 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO6");
	sciREG_tmp_mem[0].PIO7 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO7");
	sciREG_tmp_mem[0].PIO8 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO8");
	sciREG_tmp_mem[0].FORMAT = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].FORMAT");
	sciREG_tmp_mem[0].PIO0 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO0");
	sciREG_tmp_mem[0].PIO1 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO1");
	sciREG_tmp_mem[0].SETINT = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].SETINT");
	sciREG_tmp_mem[0].CLEARINT = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].CLEARINT");
	sciREG_tmp_mem[0].BRS = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].BRS");
	sciREG_tmp_mem[0].CLEARINTLVL = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].CLEARINTLVL");
	sciREG_tmp_mem[0].SETINTLVL = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].SETINTLVL");



	/* sciInit() */
	sciInit();




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].PIO3, "sciREG_tmp_mem[0].PIO3");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].GCR0, "sciREG_tmp_mem[0].GCR0");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].GCR1, "sciREG_tmp_mem[0].GCR1");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].PIO6, "sciREG_tmp_mem[0].PIO6");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].PIO7, "sciREG_tmp_mem[0].PIO7");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].PIO8, "sciREG_tmp_mem[0].PIO8");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].FORMAT, "sciREG_tmp_mem[0].FORMAT");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].PIO0, "sciREG_tmp_mem[0].PIO0");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].PIO1, "sciREG_tmp_mem[0].PIO1");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].SETINT, "sciREG_tmp_mem[0].SETINT");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].CLEARINT, "sciREG_tmp_mem[0].CLEARINT");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].BRS, "sciREG_tmp_mem[0].BRS");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].CLEARINTLVL, "sciREG_tmp_mem[0].CLEARINTLVL");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].SETINTLVL, "sciREG_tmp_mem[0].SETINTLVL");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_sciInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
