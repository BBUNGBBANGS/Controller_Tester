#line 2 "cs_test%trimLPO_test0%cs_error"
/* trimLPO_test0.c */
#ifndef __trimLPO_test0__
#define __trimLPO_test0__

#include "../factory/factory.h"

#include "trimLPO_test0.h"

void CS_TEST trimLPO_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(trimLPO_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_trimLPO_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	systemREG1_tmp = systemREG1_tmp_mem;

	/*Input*/
	systemREG1_tmp_mem[0].LPOMONCTL = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].LPOMONCTL");
	systemREG1_tmp_mem[0].CLKTEST = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CLKTEST");



	/* trimLPO() */
	trimLPO();




	/*Output*/
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].LPOMONCTL, "systemREG1_tmp_mem[0].LPOMONCTL");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CLKTEST, "systemREG1_tmp_mem[0].CLKTEST");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_trimLPO_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif