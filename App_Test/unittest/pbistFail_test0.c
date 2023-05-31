#line 2 "cs_test%pbistFail_test0%cs_error"
/* pbistFail_test0.c */
#ifndef __pbistFail_test0__
#define __pbistFail_test0__

#include "../factory/factory.h"

#include "pbistFail_test0.h"

void CS_TEST pbistFail_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pbistFail_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pbistFail_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pbistBase pbistREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	pbistREG_tmp = pbistREG_tmp_mem;

	/*Input*/
	pbistREG_tmp_mem[0].FSRF0 = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].FSRF0");
	pbistREG_tmp_mem[0].FSRA0 = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].FSRA0");
	pbistREG_tmp_mem[0].FSRDL0 = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].FSRDL0");
	pbistREG_tmp_mem[0].RAMT = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].RAMT");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* pbistFail() */
	pbistFail();




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pbistFail_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
