#line 2 "cs_test%qget_test0%cs_error"
/* qget_test0.c */
#ifndef __qget_test0__
#define __qget_test0__

#include "../factory/factory.h"

#include "qget_test0.h"

void CS_TEST qget_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(qget_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_qget_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	Queue_t * q  = 0x0;
	struct _Queue_t q_mem [1]={0,}; 
	unsigned char returnVar = 0; 

	/*Memory assign*/
	q = q_mem;

	/*Input*/
	q_mem[0].queue[0] = CS_UINT_INPUT(unsigned char,"q_mem[0].queue[0]");
	q_mem[0].front = CS_INT_INPUT(int,"q_mem[0].front");



	/* unsigned char qget(struct _Queue_t *) */
	returnVar = qget(q);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_qget_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
