#line 2 "cs_test%EEPWrite16_test0%cs_error"
/* EEPWrite16_test0.c */
#ifndef __EEPWrite16_test0__
#define __EEPWrite16_test0__

#include "../factory/factory.h"

#include "EEPWrite16_test0.h"

void CS_TEST EEPWrite16_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(EEPWrite16_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_EEPWrite16_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%EEPWrite16_test0%User code start"
uint32_t g_nTick;
uint32_t g_nTickBase;
uint32_t g_s_nTick;
#line 23 "cs_test%EEPWrite16_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_i2cTransfer_tmp_data_mem [1]={0,}; 
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	unsigned short nAddr  = 0; 
	unsigned short _nVal  = 0; 
	unsigned short returnVar = 0; 

	/*Memory assign*/
	g_i2cTransfer_tmp.data = g_i2cTransfer_tmp_data_mem;
	i2cREG1_tmp = i2cREG1_tmp_mem;
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	g_nTick = CS_UINT_INPUT(unsigned int,"g_nTick");
	g_nTickBase = CS_UINT_INPUT(unsigned int,"g_nTickBase");
	g_s_nTick = CS_UINT_INPUT(unsigned int,"g_s_nTick");
	rtiREG1_tmp_mem[0].COMPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMPCTRL");
	rtiREG1_tmp_mem[0].CNT[0].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].FRCx");
	rtiREG1_tmp_mem[0].CMP[0].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].COMPx");
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	s_n16Val.cBuf[0] = CS_UINT_INPUT(unsigned char,"s_n16Val.cBuf[0]");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	nAddr = CS_UINT_INPUT(unsigned short,"nAddr");
	_nVal = CS_UINT_INPUT(unsigned short,"_nVal");



	/* unsigned short EEPWrite16(unsigned short, unsigned short) */
	returnVar = EEPWrite16(nAddr,_nVal);




	/*Output*/
	CS_UINT_OUTPUT(g_nTick, "g_nTick");
	CS_UINT_OUTPUT(g_nTickBase, "g_nTickBase");
	CS_UINT_OUTPUT(g_s_nTick, "g_s_nTick");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].COMPCTRL, "rtiREG1_tmp_mem[0].COMPCTRL");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CNT[0].FRCx, "rtiREG1_tmp_mem[0].CNT[0].FRCx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[0].COMPx, "rtiREG1_tmp_mem[0].CMP[0].COMPx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[0].UDCPx, "rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	CS_UINT_OUTPUT(s_n16Val.cBuf[0], "s_n16Val.cBuf[0]");
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_EEPWrite16_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
