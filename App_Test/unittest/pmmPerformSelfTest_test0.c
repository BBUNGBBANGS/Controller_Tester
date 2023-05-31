#line 2 "cs_test%pmmPerformSelfTest_test0%cs_error"
/* pmmPerformSelfTest_test0.c */
#ifndef __pmmPerformSelfTest_test0__
#define __pmmPerformSelfTest_test0__

#include "../factory/factory.h"

#include "pmmPerformSelfTest_test0.h"

void CS_TEST pmmPerformSelfTest_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pmmPerformSelfTest_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pmmPerformSelfTest_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pmmBase pmmREG_tmp_mem [1]={0,}; 
	_Bool returnVar = 0; 

	/*Memory assign*/
	pmmREG_tmp = pmmREG_tmp_mem;

	/*Input*/
	pmmREG_tmp_mem[0].LPDDCSTAT1 = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].LPDDCSTAT1");
	pmmREG_tmp_mem[0].LPDDCSTAT2 = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].LPDDCSTAT2");
	pmmREG_tmp_mem[0].PRCKEYREG = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].PRCKEYREG");
	pmmREG_tmp_mem[0].MPDDCSTAT1 = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].MPDDCSTAT1");
	pmmREG_tmp_mem[0].MPDDCSTAT2 = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].MPDDCSTAT2");



	/* _Bool pmmPerformSelfTest() */
	returnVar = pmmPerformSelfTest();




	/*Output*/
	CS_UINT_OUTPUT(pmmREG_tmp_mem[0].PRCKEYREG, "pmmREG_tmp_mem[0].PRCKEYREG");
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pmmPerformSelfTest_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
