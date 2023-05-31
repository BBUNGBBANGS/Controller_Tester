#line 2 "cs_test%MY_Delay_test0%cs_error"
/* MY_Delay_test0.c */
#ifndef __MY_Delay_test0__
#define __MY_Delay_test0__

#include "../factory/factory.h"

#include "MY_Delay_test0.h"

void CS_TEST MY_Delay_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(MY_Delay_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_MY_Delay_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	int count  = 0; 

	/*Input*/
	count = CS_INT_INPUT(int,"count");



	/* MY_Delay(signed int) */
	MY_Delay(count);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_MY_Delay_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
