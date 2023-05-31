#line 2 "cs_test%linSetLength_test0%cs_error"
/* linSetLength_test0.c */
#ifndef __linSetLength_test0__
#define __linSetLength_test0__

#include "../factory/factory.h"

#include "linSetLength_test0.h"

void CS_TEST linSetLength_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(linSetLength_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_linSetLength_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	linBASE_t * lin  = 0x0;
	struct linBase lin_mem [1]={0,}; 
	unsigned int length  = 0; 

	/*Memory assign*/
	lin = lin_mem;

	/*Input*/
	lin_mem[0].FORMAT = CS_UINT_INPUT(unsigned int,"lin_mem[0].FORMAT");
	length = CS_UINT_INPUT(unsigned int,"length");



	/* linSetLength(volatile struct linBase *, unsigned int) */
	linSetLength(lin,length);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_linSetLength_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
