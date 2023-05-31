#line 2 "cs_test%dmaDisableParityCheck_test0%cs_error"
/* dmaDisableParityCheck_test0.c */
#ifndef __dmaDisableParityCheck_test0__
#define __dmaDisableParityCheck_test0__

#include "../factory/factory.h"

#include "dmaDisableParityCheck_test0.h"

void CS_TEST dmaDisableParityCheck_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dmaDisableParityCheck_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dmaDisableParityCheck_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct dmaBase dmaREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	dmaREG_tmp = dmaREG_tmp_mem;

	/*Input*/
	dmaREG_tmp_mem[0].DMAPCR = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DMAPCR");



	/* dmaDisableParityCheck() */
	dmaDisableParityCheck();




	/*Output*/
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].DMAPCR, "dmaREG_tmp_mem[0].DMAPCR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dmaDisableParityCheck_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
