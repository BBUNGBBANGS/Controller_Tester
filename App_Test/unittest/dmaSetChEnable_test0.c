#line 2 "cs_test%dmaSetChEnable_test0%cs_error"
/* dmaSetChEnable_test0.c */
#ifndef __dmaSetChEnable_test0__
#define __dmaSetChEnable_test0__

#include "../factory/factory.h"

#include "dmaSetChEnable_test0.h"

void CS_TEST dmaSetChEnable_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dmaSetChEnable_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dmaSetChEnable_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct dmaBase dmaREG_tmp_mem [1]={0,}; 
	unsigned int channel  = 0; 
	unsigned int type  = 0; 

	/*Memory assign*/
	dmaREG_tmp = dmaREG_tmp_mem;

	/*Input*/
	dmaREG_tmp_mem[0].HWCHENAS = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].HWCHENAS");
	dmaREG_tmp_mem[0].SWCHENAS = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].SWCHENAS");
	channel = CS_UINT_INPUT(unsigned int,"channel");
	type = CS_UINT_INPUT(unsigned int,"type");



	/* dmaSetChEnable(unsigned int, unsigned int) */
	dmaSetChEnable(channel,type);




	/*Output*/
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].HWCHENAS, "dmaREG_tmp_mem[0].HWCHENAS");
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].SWCHENAS, "dmaREG_tmp_mem[0].SWCHENAS");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dmaSetChEnable_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
