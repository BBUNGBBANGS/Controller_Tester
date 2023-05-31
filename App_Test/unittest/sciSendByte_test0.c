#line 2 "cs_test%sciSendByte_test0%cs_error"
/* sciSendByte_test0.c */
#ifndef __sciSendByte_test0__
#define __sciSendByte_test0__

#include "../factory/factory.h"

#include "sciSendByte_test0.h"

void CS_TEST sciSendByte_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(sciSendByte_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_sciSendByte_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	sciBASE_t * sci  = 0x0;
	struct sciBase sci_mem [1]={0,}; 
	unsigned char byte  = 0; 

	/*Memory assign*/
	sci = sci_mem;

	/*Input*/
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	sci_mem[0].FLR = CS_UINT_INPUT(unsigned int,"sci_mem[0].FLR");
	byte = CS_UINT_INPUT(unsigned char,"byte");



	/* sciSendByte(volatile struct sciBase *, unsigned char) */
	sciSendByte(sci,byte);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_sciSendByte_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
