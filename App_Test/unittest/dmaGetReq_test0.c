#line 2 "cs_test%dmaGetReq_test0%cs_error"
/* dmaGetReq_test0.c */
#ifndef __dmaGetReq_test0__
#define __dmaGetReq_test0__

#include "../factory/factory.h"

#include "dmaGetReq_test0.h"

void CS_TEST dmaGetReq_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dmaGetReq_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dmaGetReq_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct dmaBase dmaREG_tmp_mem [1]={0,}; 
	unsigned int channel  = 0; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	dmaREG_tmp = dmaREG_tmp_mem;

	/*Input*/
	dmaREG_tmp_mem[0].DREQASI[0] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[0]");
	dmaREG_tmp_mem[0].DREQASI[1] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[1]");
	dmaREG_tmp_mem[0].DREQASI[2] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[2]");
	dmaREG_tmp_mem[0].DREQASI[3] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[3]");
	dmaREG_tmp_mem[0].DREQASI[4] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[4]");
	dmaREG_tmp_mem[0].DREQASI[5] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[5]");
	dmaREG_tmp_mem[0].DREQASI[6] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[6]");
	dmaREG_tmp_mem[0].DREQASI[7] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[7]");
	channel = CS_UINT_INPUT(unsigned int,"channel");



	/* unsigned int dmaGetReq(unsigned int) */
	returnVar = dmaGetReq(channel);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dmaGetReq_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
