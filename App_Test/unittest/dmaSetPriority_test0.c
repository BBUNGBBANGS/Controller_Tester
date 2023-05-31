#line 2 "cs_test%dmaSetPriority_test0%cs_error"
/* dmaSetPriority_test0.c */
#ifndef __dmaSetPriority_test0__
#define __dmaSetPriority_test0__

#include "../factory/factory.h"

#include "dmaSetPriority_test0.h"

void CS_TEST dmaSetPriority_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dmaSetPriority_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dmaSetPriority_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct dmaBase dmaREG_tmp_mem [1]={0,}; 
	unsigned int channel  = 0; 
	enum dmaPRIORITY priority ; 

	/*Memory assign*/
	dmaREG_tmp = dmaREG_tmp_mem;

	/*Input*/
	dmaREG_tmp_mem[0].CHPRIOS = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].CHPRIOS");
	dmaREG_tmp_mem[0].CHPRIOR = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].CHPRIOR");
	channel = CS_UINT_INPUT(unsigned int,"channel");
	priority = (enum dmaPRIORITY)CS_INT_INPUT(enum dmaPRIORITY,"priority");



	/* dmaSetPriority(unsigned int, enum dmaPRIORITY) */
	dmaSetPriority(channel,priority);




	/*Output*/
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].CHPRIOS, "dmaREG_tmp_mem[0].CHPRIOS");
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].CHPRIOR, "dmaREG_tmp_mem[0].CHPRIOR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dmaSetPriority_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
