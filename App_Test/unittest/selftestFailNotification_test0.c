#line 2 "cs_test%selftestFailNotification_test0%cs_error"
/* selftestFailNotification_test0.c */
#ifndef __selftestFailNotification_test0__
#define __selftestFailNotification_test0__

#include "../factory/factory.h"

#include "selftestFailNotification_test0.h"

void CS_TEST selftestFailNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(selftestFailNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_selftestFailNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned int flag  = 0; 

	/*Input*/
	flag = CS_UINT_INPUT(unsigned int,"flag");



	/* selftestFailNotification(unsigned int) */
	selftestFailNotification(flag);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_selftestFailNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
