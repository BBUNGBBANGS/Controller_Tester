#line 2 "cs_test%dwwdGetCurrentDownCounter_test0%cs_error"
/* dwwdGetCurrentDownCounter_test0.c */
#ifndef __dwwdGetCurrentDownCounter_test0__
#define __dwwdGetCurrentDownCounter_test0__

#include "../factory/factory.h"

#include "dwwdGetCurrentDownCounter_test0.h"

void CS_TEST dwwdGetCurrentDownCounter_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dwwdGetCurrentDownCounter_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dwwdGetCurrentDownCounter_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	rtiREG1_tmp_mem[0].DWDCNTR = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].DWDCNTR");



	/* unsigned int dwwdGetCurrentDownCounter() */
	returnVar = dwwdGetCurrentDownCounter();




	/*Output*/
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].DWDCNTR, "rtiREG1_tmp_mem[0].DWDCNTR");
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dwwdGetCurrentDownCounter_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
