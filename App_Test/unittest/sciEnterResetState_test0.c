#line 2 "cs_test%sciEnterResetState_test0%cs_error"
/* sciEnterResetState_test0.c */
#ifndef __sciEnterResetState_test0__
#define __sciEnterResetState_test0__

#include "../factory/factory.h"

#include "sciEnterResetState_test0.h"

void CS_TEST sciEnterResetState_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(sciEnterResetState_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_sciEnterResetState_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	sciBASE_t * sci  = 0x0;
	struct sciBase sci_mem [1]={0,}; 

	/*Memory assign*/
	sci = sci_mem;



	/* sciEnterResetState(volatile struct sciBase *) */
	sciEnterResetState(sci);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_sciEnterResetState_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
