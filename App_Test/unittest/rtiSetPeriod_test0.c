#line 2 "cs_test%rtiSetPeriod_test0%cs_error"
/* rtiSetPeriod_test0.c */
#ifndef __rtiSetPeriod_test0__
#define __rtiSetPeriod_test0__

#include "../factory/factory.h"

#include "rtiSetPeriod_test0.h"

void CS_TEST rtiSetPeriod_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(rtiSetPeriod_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_rtiSetPeriod_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	unsigned int compare  = 0; 
	unsigned int period  = 0; 

	/*Memory assign*/
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	rtiREG1_tmp_mem[0].CMP[1].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[1].UDCPx");
	rtiREG1_tmp_mem[0].CMP[2].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[2].UDCPx");
	rtiREG1_tmp_mem[0].CMP[3].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[3].UDCPx");
	compare = CS_UINT_INPUT(unsigned int,"compare");
	period = CS_UINT_INPUT(unsigned int,"period");



	/* rtiSetPeriod(unsigned int, unsigned int) */
	rtiSetPeriod(compare,period);




	/*Output*/
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[0].UDCPx, "rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[1].UDCPx, "rtiREG1_tmp_mem[0].CMP[1].UDCPx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[2].UDCPx, "rtiREG1_tmp_mem[0].CMP[2].UDCPx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[3].UDCPx, "rtiREG1_tmp_mem[0].CMP[3].UDCPx");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_rtiSetPeriod_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
