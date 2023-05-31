#line 2 "cs_test%dmaEnable_test0%cs_error"
/* dmaEnable_test0.c */
#ifndef __dmaEnable_test0__
#define __dmaEnable_test0__

#include "../factory/factory.h"

#include "dmaEnable_test0.h"

void CS_TEST dmaEnable_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dmaEnable_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dmaEnable_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct dmaBase dmaREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	dmaREG_tmp = dmaREG_tmp_mem;

	/*Input*/
	dmaREG_tmp_mem[0].GCTRL = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].GCTRL");



	/* dmaEnable() */
	dmaEnable();




	/*Output*/
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].GCTRL, "dmaREG_tmp_mem[0].GCTRL");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dmaEnable_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
