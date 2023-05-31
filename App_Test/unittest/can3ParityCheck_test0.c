#line 2 "cs_test%can3ParityCheck_test0%cs_error"
/* can3ParityCheck_test0.c */
#ifndef __can3ParityCheck_test0__
#define __can3ParityCheck_test0__

#include "../factory/factory.h"

#include "can3ParityCheck_test0.h"

void CS_TEST can3ParityCheck_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(can3ParityCheck_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_can3ParityCheck_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct canBase canREG3_tmp_mem [1]={0,}; 
	struct esmBase esmREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	canREG3_tmp = canREG3_tmp_mem;
	esmREG_tmp = esmREG_tmp_mem;

	/*Input*/
	canREG3_tmp_mem[0].CTL = CS_UINT_INPUT(unsigned int,"canREG3_tmp_mem[0].CTL");
	canREG3_tmp_mem[0].ES = CS_UINT_INPUT(unsigned int,"canREG3_tmp_mem[0].ES");
	canREG3_tmp_mem[0].TEST = CS_UINT_INPUT(unsigned int,"canREG3_tmp_mem[0].TEST");
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");



	/* can3ParityCheck() */
	can3ParityCheck();




	/*Output*/
	CS_UINT_OUTPUT(canREG3_tmp_mem[0].CTL, "canREG3_tmp_mem[0].CTL");
	CS_UINT_OUTPUT(canREG3_tmp_mem[0].ES, "canREG3_tmp_mem[0].ES");
	CS_UINT_OUTPUT(canREG3_tmp_mem[0].TEST, "canREG3_tmp_mem[0].TEST");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[0], "esmREG_tmp_mem[0].SR1[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_can3ParityCheck_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
