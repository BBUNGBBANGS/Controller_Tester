#line 2 "cs_test%sciEnableLoopback_test0%cs_error"
/* sciEnableLoopback_test0.c */
#ifndef __sciEnableLoopback_test0__
#define __sciEnableLoopback_test0__

#include "../factory/factory.h"

#include "sciEnableLoopback_test0.h"

void CS_TEST sciEnableLoopback_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(sciEnableLoopback_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_sciEnableLoopback_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	sciBASE_t * sci  = 0x0;
	struct sciBase sci_mem [1]={0,}; 
	enum loopBackType Loopbacktype ; 

	/*Memory assign*/
	sci = sci_mem;

	/*Input*/
	Loopbacktype = (enum loopBackType)CS_INT_INPUT(enum loopBackType,"Loopbacktype");



	/* sciEnableLoopback(volatile struct sciBase *, enum loopBackType) */
	sciEnableLoopback(sci,Loopbacktype);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_sciEnableLoopback_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
