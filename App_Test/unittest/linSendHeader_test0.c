#line 2 "cs_test%linSendHeader_test0%cs_error"
/* linSendHeader_test0.c */
#ifndef __linSendHeader_test0__
#define __linSendHeader_test0__

#include "../factory/factory.h"

#include "linSendHeader_test0.h"

void CS_TEST linSendHeader_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(linSendHeader_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_linSendHeader_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	linBASE_t * lin  = 0x0;
	struct linBase lin_mem [1]={0,}; 
	unsigned char identifier  = 0; 

	/*Memory assign*/
	lin = lin_mem;

	/*Input*/
	lin_mem[0].ID = CS_UINT_INPUT(unsigned int,"lin_mem[0].ID");
	identifier = CS_UINT_INPUT(unsigned char,"identifier");



	/* linSendHeader(volatile struct linBase *, unsigned char) */
	linSendHeader(lin,identifier);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_linSendHeader_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
