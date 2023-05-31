#line 2 "cs_test%rtiStopCounter_test0%cs_error"
/* rtiStopCounter_test0.c */
#ifndef __rtiStopCounter_test0__
#define __rtiStopCounter_test0__

#include "../factory/factory.h"

#include "rtiStopCounter_test0.h"

void CS_TEST rtiStopCounter_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(rtiStopCounter_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_rtiStopCounter_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	unsigned int counter  = 0; 

	/*Memory assign*/
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	rtiREG1_tmp_mem[0].GCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].GCTRL");
	counter = CS_UINT_INPUT(unsigned int,"counter");



	/* rtiStopCounter(unsigned int) */
	rtiStopCounter(counter);




	/*Output*/
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].GCTRL, "rtiREG1_tmp_mem[0].GCTRL");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_rtiStopCounter_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
