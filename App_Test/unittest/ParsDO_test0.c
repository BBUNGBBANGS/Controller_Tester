#line 2 "cs_test%ParsDO_test0%cs_error"
/* ParsDO_test0.c */
#ifndef __ParsDO_test0__
#define __ParsDO_test0__

#include "../factory/factory.h"

#include "ParsDO_test0.h"

void CS_TEST ParsDO_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(ParsDO_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_ParsDO_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%ParsDO_test0%User code start"
static volatile struct g_sciTransfer
{
    uint32   mode;         /* Used to check for TX interrupt Enable */  
    uint32   tx_length;    /* Transmit data length in number of Bytes */
	uint32   rx_length;    /* Receive data length in number of Bytes */  
    uint8    * tx_data;    /* Transmit data pointer */  	
    uint8    * rx_data;    /* Receive data pointer */  
} g_sciTransfer_t[2U];
#line 28 "cs_test%ParsDO_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	DO_t * pDO  = 0x0;
	struct _DO_t pDO_mem [1]={0,}; 
	char * sConfig  = 0x0; 
	int returnVar = 0; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	pDO = pDO_mem;

	/*Input*/
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	sConfig = CS_STR_INPUT(char[1024],"sConfig");



	/* int ParsDO(struct _DO_t *, char *) */
	returnVar = ParsDO(pDO,sConfig);




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_ParsDO_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
