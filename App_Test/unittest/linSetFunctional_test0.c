#line 2 "cs_test%linSetFunctional_test0%cs_error"
/* linSetFunctional_test0.c */
#ifndef __linSetFunctional_test0__
#define __linSetFunctional_test0__

#include "../factory/factory.h"

#include "linSetFunctional_test0.h"

void CS_TEST linSetFunctional_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(linSetFunctional_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_linSetFunctional_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	linBASE_t * lin  = 0x0;
	struct linBase lin_mem [1]={0,}; 
	unsigned int port  = 0; 

	/*Memory assign*/
	lin = lin_mem;

	/*Input*/
	port = CS_UINT_INPUT(unsigned int,"port");



	/* linSetFunctional(volatile struct linBase *, unsigned int) */
	linSetFunctional(lin,port);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_linSetFunctional_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
