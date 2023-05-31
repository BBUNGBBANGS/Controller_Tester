#line 2 "cs_test%linSend_test0%cs_error"
/* linSend_test0.c */
#ifndef __linSend_test0__
#define __linSend_test0__

#include "../factory/factory.h"

#include "linSend_test0.h"

void CS_TEST linSend_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(linSend_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_linSend_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	linBASE_t * lin  = 0x0;
	struct linBase lin_mem [1]={0,}; 
	uint8 * data  = 0x0;
	unsigned char data_mem [1]={0,}; 

	/*Memory assign*/
	lin = lin_mem;
	data = data_mem;

	/*Input*/
	lin_mem[0].FORMAT = CS_UINT_INPUT(unsigned int,"lin_mem[0].FORMAT");
	data_mem[0] = CS_UINT_INPUT(unsigned char,"data_mem[0]");



	/* linSend(volatile struct linBase *, unsigned char *) */
	linSend(lin,data);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_linSend_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
