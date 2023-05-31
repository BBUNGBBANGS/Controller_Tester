#line 2 "cs_test%linEnableLoopback_test0%cs_error"
/* linEnableLoopback_test0.c */
#ifndef __linEnableLoopback_test0__
#define __linEnableLoopback_test0__

#include "../factory/factory.h"

#include "linEnableLoopback_test0.h"

void CS_TEST linEnableLoopback_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(linEnableLoopback_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_linEnableLoopback_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	linBASE_t * lin  = 0x0;
	struct linBase lin_mem [1]={0,}; 
	enum loopBackType Loopbacktype ; 

	/*Memory assign*/
	lin = lin_mem;

	/*Input*/
	Loopbacktype = (enum loopBackType)CS_INT_INPUT(enum loopBackType,"Loopbacktype");



	/* linEnableLoopback(volatile struct linBase *, enum loopBackType) */
	linEnableLoopback(lin,Loopbacktype);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_linEnableLoopback_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
