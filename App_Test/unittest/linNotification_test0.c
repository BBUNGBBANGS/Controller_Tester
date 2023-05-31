#line 2 "cs_test%linNotification_test0%cs_error"
/* linNotification_test0.c */
#ifndef __linNotification_test0__
#define __linNotification_test0__

#include "../factory/factory.h"

#include "linNotification_test0.h"

void CS_TEST linNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(linNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_linNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	linBASE_t * lin  = 0x0;
	struct linBase lin_mem [1]={0,}; 
	unsigned int flags  = 0; 

	/*Memory assign*/
	lin = lin_mem;

	/*Input*/
	flags = CS_UINT_INPUT(unsigned int,"flags");



	/* linNotification(volatile struct linBase *, unsigned int) */
	linNotification(lin,flags);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_linNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
