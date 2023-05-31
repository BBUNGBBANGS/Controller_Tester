#line 2 "cs_test%sciSetFunctional_test0%cs_error"
/* sciSetFunctional_test0.c */
#ifndef __sciSetFunctional_test0__
#define __sciSetFunctional_test0__

#include "../factory/factory.h"

#include "sciSetFunctional_test0.h"

void CS_TEST sciSetFunctional_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(sciSetFunctional_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_sciSetFunctional_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	sciBASE_t * sci  = 0x0;
	struct sciBase sci_mem [1]={0,}; 
	unsigned int port  = 0; 

	/*Memory assign*/
	sci = sci_mem;

	/*Input*/
	port = CS_UINT_INPUT(unsigned int,"port");



	/* sciSetFunctional(volatile struct sciBase *, unsigned int) */
	sciSetFunctional(sci,port);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_sciSetFunctional_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
