#line 2 "cs_test%i2c_Burst_W_EEP_test0%cs_error"
/* i2c_Burst_W_EEP_test0.c */
#ifndef __i2c_Burst_W_EEP_test0__
#define __i2c_Burst_W_EEP_test0__

#include "../factory/factory.h"

#include "i2c_Burst_W_EEP_test0.h"

void CS_TEST i2c_Burst_W_EEP_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(i2c_Burst_W_EEP_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_i2c_Burst_W_EEP_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%i2c_Burst_W_EEP_test0%User code start"
typedef struct g_i2cTransfer
{
    uint32  mode;
    uint32  length;
    uint8   * data;
} g_i2cTransfer_2_t;

uint32_t g_nTick ;	//	???? Tick

uint32_t g_nTickBase ;	//	???? Tick Base ( 0 / 200000 / 400000 / ... )

uint32_t g_s_nTick ;	//	Tick ( 0 ~ 200000 )

g_i2cTransfer_2_t g_i2cTransfer_tmp;
#line 34 "cs_test%i2c_Burst_W_EEP_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_i2cTransfer_tmp_data_mem [1]={0,}; 
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	unsigned short add  = 0; 
	uint8_t * wdata  = 0x0;
	unsigned char wdata_mem [65]={0,}; 
	unsigned short data_length  = 0; 
	uint8_t * returnVar = 0x0;

	/*Memory assign*/
	g_i2cTransfer_tmp.data = g_i2cTransfer_tmp_data_mem;
	i2cREG1_tmp = i2cREG1_tmp_mem;
	rtiREG1_tmp = rtiREG1_tmp_mem;
	wdata = wdata_mem;

	/*Input*/
	g_i2cTransfer_tmp.mode = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.mode");
	g_i2cTransfer_tmp.length = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.length");
	g_i2cTransfer_tmp_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_i2cTransfer_tmp_data_mem[0]");
	g_nTick = CS_UINT_INPUT(unsigned int,"g_nTick");
	g_nTickBase = CS_UINT_INPUT(unsigned int,"g_nTickBase");
	g_s_nTick = CS_UINT_INPUT(unsigned int,"g_s_nTick");
	i2cREG1_tmp_mem[0].IMR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].IMR");
	i2cREG1_tmp_mem[0].STR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].STR");
	i2cREG1_tmp_mem[0].CNT = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].CNT");
	i2cREG1_tmp_mem[0].DXR = CS_UINT_INPUT(unsigned char,"i2cREG1_tmp_mem[0].DXR");
	i2cREG1_tmp_mem[0].MDR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].MDR");
	rtiREG1_tmp_mem[0].COMPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMPCTRL");
	rtiREG1_tmp_mem[0].CNT[0].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].FRCx");
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	rtiREG1_tmp_mem[0].CMP[0].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].COMPx");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	add = CS_UINT_INPUT(unsigned short,"add");
	wdata_mem[0] = CS_UINT_INPUT(unsigned char,"wdata_mem[0]");
	wdata_mem[1] = CS_UINT_INPUT(unsigned char,"wdata_mem[1]");
	wdata_mem[2] = CS_UINT_INPUT(unsigned char,"wdata_mem[2]");
	wdata_mem[3] = CS_UINT_INPUT(unsigned char,"wdata_mem[3]");
	wdata_mem[4] = CS_UINT_INPUT(unsigned char,"wdata_mem[4]");
	wdata_mem[5] = CS_UINT_INPUT(unsigned char,"wdata_mem[5]");
	wdata_mem[6] = CS_UINT_INPUT(unsigned char,"wdata_mem[6]");
	wdata_mem[7] = CS_UINT_INPUT(unsigned char,"wdata_mem[7]");
	wdata_mem[8] = CS_UINT_INPUT(unsigned char,"wdata_mem[8]");
	wdata_mem[9] = CS_UINT_INPUT(unsigned char,"wdata_mem[9]");
	wdata_mem[10] = CS_UINT_INPUT(unsigned char,"wdata_mem[10]");
	wdata_mem[11] = CS_UINT_INPUT(unsigned char,"wdata_mem[11]");
	wdata_mem[12] = CS_UINT_INPUT(unsigned char,"wdata_mem[12]");
	wdata_mem[13] = CS_UINT_INPUT(unsigned char,"wdata_mem[13]");
	wdata_mem[14] = CS_UINT_INPUT(unsigned char,"wdata_mem[14]");
	wdata_mem[15] = CS_UINT_INPUT(unsigned char,"wdata_mem[15]");
	wdata_mem[16] = CS_UINT_INPUT(unsigned char,"wdata_mem[16]");
	wdata_mem[17] = CS_UINT_INPUT(unsigned char,"wdata_mem[17]");
	wdata_mem[18] = CS_UINT_INPUT(unsigned char,"wdata_mem[18]");
	wdata_mem[19] = CS_UINT_INPUT(unsigned char,"wdata_mem[19]");
	wdata_mem[20] = CS_UINT_INPUT(unsigned char,"wdata_mem[20]");
	wdata_mem[21] = CS_UINT_INPUT(unsigned char,"wdata_mem[21]");
	wdata_mem[22] = CS_UINT_INPUT(unsigned char,"wdata_mem[22]");
	wdata_mem[23] = CS_UINT_INPUT(unsigned char,"wdata_mem[23]");
	wdata_mem[24] = CS_UINT_INPUT(unsigned char,"wdata_mem[24]");
	wdata_mem[25] = CS_UINT_INPUT(unsigned char,"wdata_mem[25]");
	wdata_mem[26] = CS_UINT_INPUT(unsigned char,"wdata_mem[26]");
	wdata_mem[27] = CS_UINT_INPUT(unsigned char,"wdata_mem[27]");
	wdata_mem[28] = CS_UINT_INPUT(unsigned char,"wdata_mem[28]");
	wdata_mem[29] = CS_UINT_INPUT(unsigned char,"wdata_mem[29]");
	wdata_mem[30] = CS_UINT_INPUT(unsigned char,"wdata_mem[30]");
	wdata_mem[31] = CS_UINT_INPUT(unsigned char,"wdata_mem[31]");
	wdata_mem[32] = CS_UINT_INPUT(unsigned char,"wdata_mem[32]");
	wdata_mem[33] = CS_UINT_INPUT(unsigned char,"wdata_mem[33]");
	wdata_mem[34] = CS_UINT_INPUT(unsigned char,"wdata_mem[34]");
	wdata_mem[35] = CS_UINT_INPUT(unsigned char,"wdata_mem[35]");
	wdata_mem[36] = CS_UINT_INPUT(unsigned char,"wdata_mem[36]");
	wdata_mem[37] = CS_UINT_INPUT(unsigned char,"wdata_mem[37]");
	wdata_mem[38] = CS_UINT_INPUT(unsigned char,"wdata_mem[38]");
	wdata_mem[39] = CS_UINT_INPUT(unsigned char,"wdata_mem[39]");
	wdata_mem[40] = CS_UINT_INPUT(unsigned char,"wdata_mem[40]");
	wdata_mem[41] = CS_UINT_INPUT(unsigned char,"wdata_mem[41]");
	wdata_mem[42] = CS_UINT_INPUT(unsigned char,"wdata_mem[42]");
	wdata_mem[43] = CS_UINT_INPUT(unsigned char,"wdata_mem[43]");
	wdata_mem[44] = CS_UINT_INPUT(unsigned char,"wdata_mem[44]");
	wdata_mem[45] = CS_UINT_INPUT(unsigned char,"wdata_mem[45]");
	wdata_mem[46] = CS_UINT_INPUT(unsigned char,"wdata_mem[46]");
	wdata_mem[47] = CS_UINT_INPUT(unsigned char,"wdata_mem[47]");
	wdata_mem[48] = CS_UINT_INPUT(unsigned char,"wdata_mem[48]");
	wdata_mem[49] = CS_UINT_INPUT(unsigned char,"wdata_mem[49]");
	wdata_mem[50] = CS_UINT_INPUT(unsigned char,"wdata_mem[50]");
	wdata_mem[51] = CS_UINT_INPUT(unsigned char,"wdata_mem[51]");
	wdata_mem[52] = CS_UINT_INPUT(unsigned char,"wdata_mem[52]");
	wdata_mem[53] = CS_UINT_INPUT(unsigned char,"wdata_mem[53]");
	wdata_mem[54] = CS_UINT_INPUT(unsigned char,"wdata_mem[54]");
	wdata_mem[55] = CS_UINT_INPUT(unsigned char,"wdata_mem[55]");
	wdata_mem[56] = CS_UINT_INPUT(unsigned char,"wdata_mem[56]");
	wdata_mem[57] = CS_UINT_INPUT(unsigned char,"wdata_mem[57]");
	wdata_mem[58] = CS_UINT_INPUT(unsigned char,"wdata_mem[58]");
	wdata_mem[59] = CS_UINT_INPUT(unsigned char,"wdata_mem[59]");
	wdata_mem[60] = CS_UINT_INPUT(unsigned char,"wdata_mem[60]");
	wdata_mem[61] = CS_UINT_INPUT(unsigned char,"wdata_mem[61]");
	wdata_mem[62] = CS_UINT_INPUT(unsigned char,"wdata_mem[62]");
	wdata_mem[63] = CS_UINT_INPUT(unsigned char,"wdata_mem[63]");
	wdata_mem[64] = CS_UINT_INPUT(unsigned char,"wdata_mem[64]");
	data_length = CS_UINT_INPUT(unsigned short,"data_length");



	/* uint8_t * i2c_Burst_W_EEP(unsigned short, unsigned char *, unsigned short) */
	returnVar = i2c_Burst_W_EEP(add,wdata,data_length);




	/*Output*/
	CS_UINT_OUTPUT(g_nTick, "g_nTick");
	CS_UINT_OUTPUT(g_nTickBase, "g_nTickBase");
	CS_UINT_OUTPUT(g_s_nTick, "g_s_nTick");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].IMR, "i2cREG1_tmp_mem[0].IMR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].STR, "i2cREG1_tmp_mem[0].STR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].CNT, "i2cREG1_tmp_mem[0].CNT");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].DXR, "i2cREG1_tmp_mem[0].DXR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].MDR, "i2cREG1_tmp_mem[0].MDR");
	CS_UINT_OUTPUT(returnVar[0], "returnVar[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_i2c_Burst_W_EEP_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
