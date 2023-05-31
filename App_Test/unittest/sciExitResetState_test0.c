#line 2 "cs_test%sciExitResetState_test0%cs_error"
/* sciExitResetState_test0.c */
#ifndef __sciExitResetState_test0__
#define __sciExitResetState_test0__

#include "../factory/factory.h"

#include "sciExitResetState_test0.h"

void CS_TEST sciExitResetState_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(sciExitResetState_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_sciExitResetState_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	sciBASE_t * sci  = 0x0;
	struct sciBase sci_mem [1]={0,}; 

	/*Memory assign*/
	sci = sci_mem;



	/* sciExitResetState(volatile struct sciBase *) */
	sciExitResetState(sci);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_sciExitResetState_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
