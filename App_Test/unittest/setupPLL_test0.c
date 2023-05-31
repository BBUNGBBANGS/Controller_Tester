#line 2 "cs_test%setupPLL_test0%cs_error"
/* setupPLL_test0.c */
#ifndef __setupPLL_test0__
#define __setupPLL_test0__

#include "../factory/factory.h"

#include "setupPLL_test0.h"

void CS_TEST setupPLL_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(setupPLL_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_setupPLL_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 
	struct systemBase2 systemREG2_tmp_mem [1]={0,}; 

	/*Memory assign*/
	systemREG1_tmp = systemREG1_tmp_mem;
	systemREG2_tmp = systemREG2_tmp_mem;

	/*Input*/
	systemREG1_tmp_mem[0].CSDIS = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSDIS");
	systemREG1_tmp_mem[0].CSDISSET = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSDISSET");
	systemREG1_tmp_mem[0].PLLCTL1 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].PLLCTL1");
	systemREG1_tmp_mem[0].PLLCTL2 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].PLLCTL2");
	systemREG1_tmp_mem[0].GBLSTAT = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].GBLSTAT");
	systemREG2_tmp_mem[0].PLLCTL3 = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].PLLCTL3");



	/* setupPLL() */
	setupPLL();




	/*Output*/
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CSDIS, "systemREG1_tmp_mem[0].CSDIS");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CSDISSET, "systemREG1_tmp_mem[0].CSDISSET");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].PLLCTL1, "systemREG1_tmp_mem[0].PLLCTL1");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].PLLCTL2, "systemREG1_tmp_mem[0].PLLCTL2");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].GBLSTAT, "systemREG1_tmp_mem[0].GBLSTAT");
	CS_UINT_OUTPUT(systemREG2_tmp_mem[0].PLLCTL3, "systemREG2_tmp_mem[0].PLLCTL3");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_setupPLL_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
