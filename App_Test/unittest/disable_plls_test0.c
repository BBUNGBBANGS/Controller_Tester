#line 2 "cs_test%disable_plls_test0%cs_error"
/* disable_plls_test0.c */
#ifndef __disable_plls_test0__
#define __disable_plls_test0__

#include "../factory/factory.h"

#include "disable_plls_test0.h"

void CS_TEST disable_plls_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(disable_plls_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_disable_plls_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 
	unsigned int plls  = 0; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;
	systemREG1_tmp = systemREG1_tmp_mem;

	/*Input*/
	systemREG1_tmp_mem[0].CSVSTAT = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSVSTAT");
	plls = CS_UINT_INPUT(unsigned int,"plls");



	/* unsigned int disable_plls(unsigned int) */
	returnVar = disable_plls(plls);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_disable_plls_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
