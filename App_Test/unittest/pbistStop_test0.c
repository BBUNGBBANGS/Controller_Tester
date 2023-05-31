#line 2 "cs_test%pbistStop_test0%cs_error"
/* pbistStop_test0.c */
#ifndef __pbistStop_test0__
#define __pbistStop_test0__

#include "../factory/factory.h"

#include "pbistStop_test0.h"

void CS_TEST pbistStop_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pbistStop_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pbistStop_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pbistBase pbistREG_tmp_mem [1]={0,}; 
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	pbistREG_tmp = pbistREG_tmp_mem;
	systemREG1_tmp = systemREG1_tmp_mem;

	/*Input*/
	pbistREG_tmp_mem[0].PACT = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].PACT");
	systemREG1_tmp_mem[0].MSTGCR = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MSTGCR");



	/* pbistStop() */
	pbistStop();




	/*Output*/
	CS_UINT_OUTPUT(pbistREG_tmp_mem[0].PACT, "pbistREG_tmp_mem[0].PACT");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].MSTGCR, "systemREG1_tmp_mem[0].MSTGCR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pbistStop_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
