#line 2 "cs_test%dwdReset_test0%cs_error"
/* dwdReset_test0.c */
#ifndef __dwdReset_test0__
#define __dwdReset_test0__

#include "../factory/factory.h"

#include "dwdReset_test0.h"

void CS_TEST dwdReset_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dwdReset_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dwdReset_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	rtiREG1_tmp_mem[0].WDKEY = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].WDKEY");



	/* dwdReset() */
	dwdReset();




	/*Output*/
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].WDKEY, "rtiREG1_tmp_mem[0].WDKEY");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dwdReset_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
