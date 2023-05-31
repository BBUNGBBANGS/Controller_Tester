#line 2 "cs_test%sciDisableLoopback_test0%cs_error"
/* sciDisableLoopback_test0.c */
#ifndef __sciDisableLoopback_test0__
#define __sciDisableLoopback_test0__

#include "../factory/factory.h"

#include "sciDisableLoopback_test0.h"

void CS_TEST sciDisableLoopback_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(sciDisableLoopback_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_sciDisableLoopback_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	sciBASE_t * sci  = 0x0;
	struct sciBase sci_mem [1]={0,}; 

	/*Memory assign*/
	sci = sci_mem;



	/* sciDisableLoopback(volatile struct sciBase *) */
	sciDisableLoopback(sci);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_sciDisableLoopback_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
