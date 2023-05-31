#line 2 "cs_test%linIsTxReady_test0%cs_error"
/* linIsTxReady_test0.c */
#ifndef __linIsTxReady_test0__
#define __linIsTxReady_test0__

#include "../factory/factory.h"

#include "linIsTxReady_test0.h"

void CS_TEST linIsTxReady_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(linIsTxReady_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_linIsTxReady_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	linBASE_t * lin  = 0x0;
	struct linBase lin_mem [1]={0,}; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	lin = lin_mem;

	/*Input*/
	lin_mem[0].FLR = CS_UINT_INPUT(unsigned int,"lin_mem[0].FLR");



	/* unsigned int linIsTxReady(volatile struct linBase *) */
	returnVar = linIsTxReady(lin);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_linIsTxReady_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
