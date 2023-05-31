#line 2 "cs_test%check_frequency_test0%cs_error"
/* check_frequency_test0.c */
#ifndef __check_frequency_test0__
#define __check_frequency_test0__

#include "../factory/factory.h"

#include "check_frequency_test0.h"

void CS_TEST check_frequency_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(check_frequency_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_check_frequency_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct dccBase dccREG1_tmp_mem [1]={0,}; 
	unsigned int cnt1_clksrc  = 0; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	dccREG1_tmp = dccREG1_tmp_mem;

	/*Input*/
	dccREG1_tmp_mem[0].GCTRL = CS_UINT_INPUT(unsigned int,"dccREG1_tmp_mem[0].GCTRL");
	dccREG1_tmp_mem[0].STAT = CS_UINT_INPUT(unsigned int,"dccREG1_tmp_mem[0].STAT");
	dccREG1_tmp_mem[0].CNT1CLKSRC = CS_UINT_INPUT(unsigned int,"dccREG1_tmp_mem[0].CNT1CLKSRC");
	dccREG1_tmp_mem[0].CNT1SEED = CS_UINT_INPUT(unsigned int,"dccREG1_tmp_mem[0].CNT1SEED");
	dccREG1_tmp_mem[0].CNT0SEED = CS_UINT_INPUT(unsigned int,"dccREG1_tmp_mem[0].CNT0SEED");
	dccREG1_tmp_mem[0].CNT0CLKSRC = CS_UINT_INPUT(unsigned int,"dccREG1_tmp_mem[0].CNT0CLKSRC");
	dccREG1_tmp_mem[0].VALID0SEED = CS_UINT_INPUT(unsigned int,"dccREG1_tmp_mem[0].VALID0SEED");
	cnt1_clksrc = CS_UINT_INPUT(unsigned int,"cnt1_clksrc");



	/* unsigned int check_frequency(unsigned int) */
	returnVar = check_frequency(cnt1_clksrc);




	/*Output*/
	CS_UINT_OUTPUT(dccREG1_tmp_mem[0].GCTRL, "dccREG1_tmp_mem[0].GCTRL");
	CS_UINT_OUTPUT(dccREG1_tmp_mem[0].STAT, "dccREG1_tmp_mem[0].STAT");
	CS_UINT_OUTPUT(dccREG1_tmp_mem[0].CNT1CLKSRC, "dccREG1_tmp_mem[0].CNT1CLKSRC");
	CS_UINT_OUTPUT(dccREG1_tmp_mem[0].CNT1SEED, "dccREG1_tmp_mem[0].CNT1SEED");
	CS_UINT_OUTPUT(dccREG1_tmp_mem[0].CNT0SEED, "dccREG1_tmp_mem[0].CNT0SEED");
	CS_UINT_OUTPUT(dccREG1_tmp_mem[0].CNT0CLKSRC, "dccREG1_tmp_mem[0].CNT0CLKSRC");
	CS_UINT_OUTPUT(dccREG1_tmp_mem[0].VALID0SEED, "dccREG1_tmp_mem[0].VALID0SEED");
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_check_frequency_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
