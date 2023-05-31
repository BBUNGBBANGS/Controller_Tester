#line 2 "cs_test%htu2ParityCheck_test0%cs_error"
/* htu2ParityCheck_test0.c */
#ifndef __htu2ParityCheck_test0__
#define __htu2ParityCheck_test0__

#include "../factory/factory.h"

#include "htu2ParityCheck_test0.h"

void CS_TEST htu2ParityCheck_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(htu2ParityCheck_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_htu2ParityCheck_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct htuBase htuREG2_tmp_mem [1]={0,}; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;
	htuREG2_tmp = htuREG2_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	htuREG2_tmp_mem[0].PCR = CS_UINT_INPUT(unsigned int,"htuREG2_tmp_mem[0].PCR");



	/* htu2ParityCheck() */
	htu2ParityCheck();




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[0], "esmREG_tmp_mem[0].SR1[0]");
	CS_UINT_OUTPUT(htuREG2_tmp_mem[0].PCR, "htuREG2_tmp_mem[0].PCR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_htu2ParityCheck_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
