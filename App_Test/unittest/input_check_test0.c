#line 2 "cs_test%input_check_test0%cs_error"
/* input_check_test0.c */
#ifndef __input_check_test0__
#define __input_check_test0__

#include "../factory/factory.h"

#include "input_check_test0.h"

void CS_TEST input_check_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(input_check_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_input_check_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	int returnVar = 0; 



	/* int input_check() */
	returnVar = input_check();




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_input_check_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
