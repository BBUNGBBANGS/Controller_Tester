#line 2 "cs_test%dwdGetViolationStatus_test0%cs_error"
/* dwdGetViolationStatus_test0.c */
#ifndef __dwdGetViolationStatus_test0__
#define __dwdGetViolationStatus_test0__

#include "../factory/factory.h"

#include "dwdGetViolationStatus_test0.h"

void CS_TEST dwdGetViolationStatus_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dwdGetViolationStatus_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dwdGetViolationStatus_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	enum dwdViolationTag returnVar; 

	/*Memory assign*/
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	rtiREG1_tmp_mem[0].WDSTATUS = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].WDSTATUS");



	/* enum dwdViolationTag dwdGetViolationStatus() */
	returnVar = dwdGetViolationStatus();




	/*Output*/
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].WDSTATUS, "rtiREG1_tmp_mem[0].WDSTATUS");
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dwdGetViolationStatus_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
