#line 2 "cs_test%checkRAMUERRTest_test0%cs_error"
/* checkRAMUERRTest_test0.c */
#ifndef __checkRAMUERRTest_test0__
#define __checkRAMUERRTest_test0__

#include "../factory/factory.h"

#include "checkRAMUERRTest_test0.h"

void CS_TEST checkRAMUERRTest_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(checkRAMUERRTest_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_checkRAMUERRTest_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct tcramBase tcram1REG_tmp_mem [1]={0,}; 
	struct tcramBase tcram2REG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;
	tcram1REG_tmp = tcram1REG_tmp_mem;
	tcram2REG_tmp = tcram2REG_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].EKR = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].EKR");
	esmREG_tmp_mem[0].SSR2 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SSR2");
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	esmREG_tmp_mem[0].SR1[1] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[1]");
	tcram1REG_tmp_mem[0].RAMERRSTATUS = CS_UINT_INPUT(unsigned int,"tcram1REG_tmp_mem[0].RAMERRSTATUS");
	tcram1REG_tmp_mem[0].RAMTEST = CS_UINT_INPUT(unsigned int,"tcram1REG_tmp_mem[0].RAMTEST");
	tcram2REG_tmp_mem[0].RAMERRSTATUS = CS_UINT_INPUT(unsigned int,"tcram2REG_tmp_mem[0].RAMERRSTATUS");
	tcram2REG_tmp_mem[0].RAMTEST = CS_UINT_INPUT(unsigned int,"tcram2REG_tmp_mem[0].RAMTEST");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* checkRAMUERRTest() */
	checkRAMUERRTest();




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].EKR, "esmREG_tmp_mem[0].EKR");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SSR2, "esmREG_tmp_mem[0].SSR2");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[0], "esmREG_tmp_mem[0].SR1[0]");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[1], "esmREG_tmp_mem[0].SR1[1]");
	CS_UINT_OUTPUT(tcram1REG_tmp_mem[0].RAMTEST, "tcram1REG_tmp_mem[0].RAMTEST");
	CS_UINT_OUTPUT(tcram2REG_tmp_mem[0].RAMTEST, "tcram2REG_tmp_mem[0].RAMTEST");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_checkRAMUERRTest_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
