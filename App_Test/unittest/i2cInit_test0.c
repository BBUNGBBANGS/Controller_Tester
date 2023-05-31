#line 2 "cs_test%i2cInit_test0%cs_error"
/* i2cInit_test0.c */
#ifndef __i2cInit_test0__
#define __i2cInit_test0__

#include "../factory/factory.h"

#include "i2cInit_test0.h"

void CS_TEST i2cInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(i2cInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_i2cInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_i2cTransfer_tmp_data_mem [1]={0,}; 
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	g_i2cTransfer_tmp.data = g_i2cTransfer_tmp_data_mem;
	i2cREG1_tmp = i2cREG1_tmp_mem;

	/*Input*/
	g_i2cTransfer_tmp.mode = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.mode");
	g_i2cTransfer_tmp.length = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.length");
	i2cREG1_tmp_mem[0].PDIS = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PDIS");
	i2cREG1_tmp_mem[0].CNT = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].CNT");
	i2cREG1_tmp_mem[0].PDR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PDR");
	i2cREG1_tmp_mem[0].MDR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].MDR");
	i2cREG1_tmp_mem[0].IMR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].IMR");
	i2cREG1_tmp_mem[0].DIR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].DIR");
	i2cREG1_tmp_mem[0].DMACR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].DMACR");
	i2cREG1_tmp_mem[0].CKL = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].CKL");
	i2cREG1_tmp_mem[0].CKH = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].CKH");
	i2cREG1_tmp_mem[0].PSC = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PSC");
	i2cREG1_tmp_mem[0].DOUT = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].DOUT");
	i2cREG1_tmp_mem[0].PSEL = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PSEL");
	i2cREG1_tmp_mem[0].PFNC = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PFNC");
	i2cREG1_tmp_mem[0].EMDR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].EMDR");



	/* i2cInit() */
	i2cInit();




	/*Output*/
	CS_UINT_OUTPUT(g_i2cTransfer_tmp.mode, "g_i2cTransfer_tmp.mode");
	CS_UINT_OUTPUT(g_i2cTransfer_tmp.length, "g_i2cTransfer_tmp.length");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].PDIS, "i2cREG1_tmp_mem[0].PDIS");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].CNT, "i2cREG1_tmp_mem[0].CNT");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].PDR, "i2cREG1_tmp_mem[0].PDR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].MDR, "i2cREG1_tmp_mem[0].MDR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].IMR, "i2cREG1_tmp_mem[0].IMR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].DIR, "i2cREG1_tmp_mem[0].DIR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].DMACR, "i2cREG1_tmp_mem[0].DMACR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].CKL, "i2cREG1_tmp_mem[0].CKL");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].CKH, "i2cREG1_tmp_mem[0].CKH");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].PSC, "i2cREG1_tmp_mem[0].PSC");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].DOUT, "i2cREG1_tmp_mem[0].DOUT");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].PSEL, "i2cREG1_tmp_mem[0].PSEL");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].PFNC, "i2cREG1_tmp_mem[0].PFNC");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].EMDR, "i2cREG1_tmp_mem[0].EMDR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_i2cInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
