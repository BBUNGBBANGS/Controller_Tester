#line 2 "cs_test%linEnterSleep_test0%cs_error"
/* linEnterSleep_test0.c */
#ifndef __linEnterSleep_test0__
#define __linEnterSleep_test0__

#include "../factory/factory.h"

#include "linEnterSleep_test0.h"

void CS_TEST linEnterSleep_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(linEnterSleep_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_linEnterSleep_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	linBASE_t * lin  = 0x0;
	struct linBase lin_mem [1]={0,}; 

	/*Memory assign*/
	lin = lin_mem;



	/* linEnterSleep(volatile struct linBase *) */
	linEnterSleep(lin);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_linEnterSleep_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
