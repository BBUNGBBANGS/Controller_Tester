#line 2 "cs_test%cpuSelfTest_test0%cs_error"
/* cpuSelfTest_test0.c */
#ifndef __cpuSelfTest_test0__
#define __cpuSelfTest_test0__

#include "../factory/factory.h"

#include "cpuSelfTest_test0.h"

void CS_TEST cpuSelfTest_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(cpuSelfTest_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_cpuSelfTest_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct stcBase stcREG_tmp_mem [1]={0,}; 
	unsigned int no_of_intervals  = 0; 
	unsigned int max_timeout  = 0; 
	_Bool restart_test  = 0; 

	/*Memory assign*/
	stcREG_tmp = stcREG_tmp_mem;

	/*Input*/
	stcREG_tmp_mem[0].STCGCR1 = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCGCR1");
	stcREG_tmp_mem[0].STCGCR0 = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCGCR0");
	stcREG_tmp_mem[0].STCTPR = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCTPR");
	no_of_intervals = CS_UINT_INPUT(unsigned int,"no_of_intervals");
	max_timeout = CS_UINT_INPUT(unsigned int,"max_timeout");
	restart_test = CS_INT_INPUT(_Bool,"restart_test");



	/* cpuSelfTest(unsigned int, unsigned int, _Bool) */
	cpuSelfTest(no_of_intervals,max_timeout,restart_test);




	/*Output*/
	CS_UINT_OUTPUT(stcREG_tmp_mem[0].STCGCR1, "stcREG_tmp_mem[0].STCGCR1");
	CS_UINT_OUTPUT(stcREG_tmp_mem[0].STCGCR0, "stcREG_tmp_mem[0].STCGCR0");
	CS_UINT_OUTPUT(stcREG_tmp_mem[0].STCTPR, "stcREG_tmp_mem[0].STCTPR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_cpuSelfTest_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
