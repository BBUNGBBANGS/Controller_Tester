#line 2 "cs_test%linDisableLoopback_test0%cs_error"
/* linDisableLoopback_test0.c */
#ifndef __linDisableLoopback_test0__
#define __linDisableLoopback_test0__

#include "../factory/factory.h"

#include "linDisableLoopback_test0.h"

void CS_TEST linDisableLoopback_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(linDisableLoopback_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_linDisableLoopback_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	linBASE_t * lin  = 0x0;
	struct linBase lin_mem [1]={0,}; 

	/*Memory assign*/
	lin = lin_mem;



	/* linDisableLoopback(volatile struct linBase *) */
	linDisableLoopback(lin);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_linDisableLoopback_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
