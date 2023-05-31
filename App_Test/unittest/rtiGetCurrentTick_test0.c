#line 2 "cs_test%rtiGetCurrentTick_test0%cs_error"
/* rtiGetCurrentTick_test0.c */
#ifndef __rtiGetCurrentTick_test0__
#define __rtiGetCurrentTick_test0__

#include "../factory/factory.h"

#include "rtiGetCurrentTick_test0.h"

void CS_TEST rtiGetCurrentTick_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(rtiGetCurrentTick_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_rtiGetCurrentTick_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	unsigned int compare  = 0; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	rtiREG1_tmp_mem[0].COMPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMPCTRL");
	rtiREG1_tmp_mem[0].CNT[0].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].FRCx");
	rtiREG1_tmp_mem[0].CMP[0].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].COMPx");
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	compare = CS_UINT_INPUT(unsigned int,"compare");



	/* unsigned int rtiGetCurrentTick(unsigned int) */
	returnVar = rtiGetCurrentTick(compare);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_rtiGetCurrentTick_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
