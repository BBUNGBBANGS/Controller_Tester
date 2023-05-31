#line 2 "cs_test%dwdCounterEnable_test0%cs_error"
/* dwdCounterEnable_test0.c */
#ifndef __dwdCounterEnable_test0__
#define __dwdCounterEnable_test0__

#include "../factory/factory.h"

#include "dwdCounterEnable_test0.h"

void CS_TEST dwdCounterEnable_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dwdCounterEnable_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dwdCounterEnable_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	rtiREG1_tmp_mem[0].DWDCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].DWDCTRL");



	/* dwdCounterEnable() */
	dwdCounterEnable();




	/*Output*/
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].DWDCTRL, "rtiREG1_tmp_mem[0].DWDCTRL");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dwdCounterEnable_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
