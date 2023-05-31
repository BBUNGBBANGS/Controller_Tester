#line 2 "cs_test%checkPLL1Slip_test0%cs_error"
/* checkPLL1Slip_test0.c */
#ifndef __checkPLL1Slip_test0__
#define __checkPLL1Slip_test0__

#include "../factory/factory.h"

#include "checkPLL1Slip_test0.h"

void CS_TEST checkPLL1Slip_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(checkPLL1Slip_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_checkPLL1Slip_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;
	systemREG1_tmp = systemREG1_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	systemREG1_tmp_mem[0].CSDIS = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSDIS");
	systemREG1_tmp_mem[0].CSDISSET = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSDISSET");
	systemREG1_tmp_mem[0].CDDISCLR = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CDDISCLR");
	systemREG1_tmp_mem[0].GHVSRC = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].GHVSRC");
	systemREG1_tmp_mem[0].PLLCTL1 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].PLLCTL1");
	systemREG1_tmp_mem[0].GBLSTAT = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].GBLSTAT");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* checkPLL1Slip() */
	checkPLL1Slip();




	/*Output*/
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CSDIS, "systemREG1_tmp_mem[0].CSDIS");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CSDISSET, "systemREG1_tmp_mem[0].CSDISSET");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CDDISCLR, "systemREG1_tmp_mem[0].CDDISCLR");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].GHVSRC, "systemREG1_tmp_mem[0].GHVSRC");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].PLLCTL1, "systemREG1_tmp_mem[0].PLLCTL1");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_checkPLL1Slip_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
