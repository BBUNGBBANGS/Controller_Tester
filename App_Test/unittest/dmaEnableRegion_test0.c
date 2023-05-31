#line 2 "cs_test%dmaEnableRegion_test0%cs_error"
/* dmaEnableRegion_test0.c */
#ifndef __dmaEnableRegion_test0__
#define __dmaEnableRegion_test0__

#include "../factory/factory.h"

#include "dmaEnableRegion_test0.h"

void CS_TEST dmaEnableRegion_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dmaEnableRegion_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dmaEnableRegion_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct dmaBase dmaREG_tmp_mem [1]={0,}; 
	enum dmaREGION region ; 
	enum dmaRegionAccess access ; 
	_Bool intenable  = 0; 

	/*Memory assign*/
	dmaREG_tmp = dmaREG_tmp_mem;

	/*Input*/
	dmaREG_tmp_mem[0].DMAMPCTRL = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DMAMPCTRL");
	region = (enum dmaREGION)CS_INT_INPUT(enum dmaREGION,"region");
	access = (enum dmaRegionAccess)CS_INT_INPUT(enum dmaRegionAccess,"access");
	intenable = CS_INT_INPUT(_Bool,"intenable");



	/* dmaEnableRegion(enum dmaREGION, enum dmaRegionAccess, _Bool) */
	dmaEnableRegion(region,access,intenable);




	/*Output*/
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].DMAMPCTRL, "dmaREG_tmp_mem[0].DMAMPCTRL");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dmaEnableRegion_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
