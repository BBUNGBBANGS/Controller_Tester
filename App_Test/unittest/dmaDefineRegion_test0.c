#line 2 "cs_test%dmaDefineRegion_test0%cs_error"
/* dmaDefineRegion_test0.c */
#ifndef __dmaDefineRegion_test0__
#define __dmaDefineRegion_test0__

#include "../factory/factory.h"

#include "dmaDefineRegion_test0.h"

void CS_TEST dmaDefineRegion_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dmaDefineRegion_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dmaDefineRegion_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct dmaBase dmaREG_tmp_mem [1]={0,}; 
	enum dmaREGION region ; 
	unsigned int start_add  = 0; 
	unsigned int end_add  = 0; 

	/*Memory assign*/
	dmaREG_tmp = dmaREG_tmp_mem;

	/*Input*/
	dmaREG_tmp_mem[0].DMAMPR[0].STARTADD = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DMAMPR[0].STARTADD");
	dmaREG_tmp_mem[0].DMAMPR[0].ENDADD = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DMAMPR[0].ENDADD");
	dmaREG_tmp_mem[0].DMAMPR[1].STARTADD = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DMAMPR[1].STARTADD");
	dmaREG_tmp_mem[0].DMAMPR[1].ENDADD = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DMAMPR[1].ENDADD");
	dmaREG_tmp_mem[0].DMAMPR[2].ENDADD = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DMAMPR[2].ENDADD");
	dmaREG_tmp_mem[0].DMAMPR[2].STARTADD = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DMAMPR[2].STARTADD");
	dmaREG_tmp_mem[0].DMAMPR[3].ENDADD = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DMAMPR[3].ENDADD");
	dmaREG_tmp_mem[0].DMAMPR[3].STARTADD = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DMAMPR[3].STARTADD");
	region = (enum dmaREGION)CS_INT_INPUT(enum dmaREGION,"region");
	start_add = CS_UINT_INPUT(unsigned int,"start_add");
	end_add = CS_UINT_INPUT(unsigned int,"end_add");



	/* dmaDefineRegion(enum dmaREGION, unsigned int, unsigned int) */
	dmaDefineRegion(region,start_add,end_add);




	/*Output*/
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].DMAMPR[0].STARTADD, "dmaREG_tmp_mem[0].DMAMPR[0].STARTADD");
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].DMAMPR[0].ENDADD, "dmaREG_tmp_mem[0].DMAMPR[0].ENDADD");
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].DMAMPR[1].STARTADD, "dmaREG_tmp_mem[0].DMAMPR[1].STARTADD");
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].DMAMPR[1].ENDADD, "dmaREG_tmp_mem[0].DMAMPR[1].ENDADD");
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].DMAMPR[2].ENDADD, "dmaREG_tmp_mem[0].DMAMPR[2].ENDADD");
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].DMAMPR[2].STARTADD, "dmaREG_tmp_mem[0].DMAMPR[2].STARTADD");
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].DMAMPR[3].ENDADD, "dmaREG_tmp_mem[0].DMAMPR[3].ENDADD");
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].DMAMPR[3].STARTADD, "dmaREG_tmp_mem[0].DMAMPR[3].STARTADD");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dmaDefineRegion_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
