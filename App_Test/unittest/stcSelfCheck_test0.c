#line 2 "cs_test%stcSelfCheck_test0%cs_error"
/* stcSelfCheck_test0.c */
#ifndef __stcSelfCheck_test0__
#define __stcSelfCheck_test0__

#include "../factory/factory.h"

#include "stcSelfCheck_test0.h"

void CS_TEST stcSelfCheck_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(stcSelfCheck_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_stcSelfCheck_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct stcBase stcREG_tmp_mem [1]={0,}; 
	struct systemBase2 systemREG2_tmp_mem [1]={0,}; 

	/*Memory assign*/
	stcREG_tmp = stcREG_tmp_mem;
	systemREG2_tmp = systemREG2_tmp_mem;

	/*Input*/
	stcREG_tmp_mem[0].STCSCSCR = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCSCSCR");
	stcREG_tmp_mem[0].STCGCR1 = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCGCR1");
	stcREG_tmp_mem[0].STCGCR0 = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCGCR0");
	stcREG_tmp_mem[0].STCTPR = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCTPR");
	systemREG2_tmp_mem[0].STCCLKDIV = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].STCCLKDIV");



	/* stcSelfCheck() */
	stcSelfCheck();




	/*Output*/
	CS_UINT_OUTPUT(stcREG_tmp_mem[0].STCSCSCR, "stcREG_tmp_mem[0].STCSCSCR");
	CS_UINT_OUTPUT(stcREG_tmp_mem[0].STCGCR1, "stcREG_tmp_mem[0].STCGCR1");
	CS_UINT_OUTPUT(stcREG_tmp_mem[0].STCGCR0, "stcREG_tmp_mem[0].STCGCR0");
	CS_UINT_OUTPUT(stcREG_tmp_mem[0].STCTPR, "stcREG_tmp_mem[0].STCTPR");
	CS_UINT_OUTPUT(systemREG2_tmp_mem[0].STCCLKDIV, "systemREG2_tmp_mem[0].STCCLKDIV");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_stcSelfCheck_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
