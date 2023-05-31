#line 2 "cs_test%i2c_W_test0%cs_error"
/* i2c_W_test0.c */
#ifndef __i2c_W_test0__
#define __i2c_W_test0__

#include "../factory/factory.h"

#include "i2c_W_test0.h"

void CS_TEST i2c_W_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(i2c_W_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_i2c_W_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%i2c_W_test0%User code start"
typedef struct g_i2cTransfer
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
g_i2cTransfer_t g_i2cTransfer_tmp;
#line 36 "cs_test%i2c_W_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_i2cTransfer_tmp_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	unsigned char add  = 0; 
	uint8_t * wdata  = 0x0;
	unsigned char wdata_mem [1]={0,}; 
	unsigned char data_length  = 0; 
	uint8_t * returnVar = 0x0;

	/*Memory assign*/
	g_i2cTransfer_tmp.data = g_i2cTransfer_tmp_data_mem;
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	i2cREG1_tmp = i2cREG1_tmp_mem;
	wdata = wdata_mem;

	/*Input*/
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	i2cREG1_tmp_mem[0].STR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].STR");
	i2cREG1_tmp_mem[0].SAR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].SAR");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	add = CS_UINT_INPUT(unsigned char,"add");
	wdata_mem[0] = CS_UINT_INPUT(unsigned char,"wdata_mem[0]");
	data_length = CS_UINT_INPUT(unsigned char,"data_length");



	/* uint8_t * i2c_W(unsigned char, unsigned char *, unsigned char) */
	returnVar = i2c_W(add,wdata,data_length);




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].STR, "i2cREG1_tmp_mem[0].STR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].SAR, "i2cREG1_tmp_mem[0].SAR");
	CS_UINT_OUTPUT(returnVar[0], "returnVar[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_i2c_W_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
