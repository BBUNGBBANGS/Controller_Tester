#line 2 "cs_test%dmaDisableRegion_test0%cs_error"
/* dmaDisableRegion_test0.c */
#ifndef __dmaDisableRegion_test0__
#define __dmaDisableRegion_test0__

#include "../factory/factory.h"

#include "dmaDisableRegion_test0.h"

void CS_TEST dmaDisableRegion_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dmaDisableRegion_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dmaDisableRegion_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct dmaBase dmaREG_tmp_mem [1]={0,}; 
	enum dmaREGION region ; 

	/*Memory assign*/
	dmaREG_tmp = dmaREG_tmp_mem;

	/*Input*/
	dmaREG_tmp_mem[0].DMAMPCTRL = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DMAMPCTRL");
	region = (enum dmaREGION)CS_INT_INPUT(enum dmaREGION,"region");



	/* dmaDisableRegion(enum dmaREGION) */
	dmaDisableRegion(region);




	/*Output*/
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].DMAMPCTRL, "dmaREG_tmp_mem[0].DMAMPCTRL");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dmaDisableRegion_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
