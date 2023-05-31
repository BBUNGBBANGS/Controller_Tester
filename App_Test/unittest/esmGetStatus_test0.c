#line 2 "cs_test%esmGetStatus_test0%cs_error"
/* esmGetStatus_test0.c */
#ifndef __esmGetStatus_test0__
#define __esmGetStatus_test0__

#include "../factory/factory.h"

#include "esmGetStatus_test0.h"

void CS_TEST esmGetStatus_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(esmGetStatus_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_esmGetStatus_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	unsigned int group  = 0; 
	unsigned long long channels  = 0; 
	unsigned long long returnVar = 0; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	esmREG_tmp_mem[0].SR1[1] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[1]");
	esmREG_tmp_mem[0].SR1[2] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[2]");
	esmREG_tmp_mem[0].SR4[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR4[0]");
	esmREG_tmp_mem[0].SR4[1] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR4[1]");
	esmREG_tmp_mem[0].SR4[2] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR4[2]");
	group = CS_UINT_INPUT(unsigned int,"group");
	channels = CS_UINT_INPUT(unsigned long long,"channels");



	/* unsigned long long esmGetStatus(unsigned int, unsigned long long) */
	returnVar = esmGetStatus(group,channels);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_esmGetStatus_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
