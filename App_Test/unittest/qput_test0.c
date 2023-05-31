#line 2 "cs_test%qput_test0%cs_error"
/* qput_test0.c */
#ifndef __qput_test0__
#define __qput_test0__

#include "../factory/factory.h"

#include "qput_test0.h"

void CS_TEST qput_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(qput_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_qput_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	Queue_t * q  = 0x0;
	struct _Queue_t q_mem [1]={0,}; 
	unsigned char k  = 0; 
	int returnVar = 0; 

	/*Memory assign*/
	q = q_mem;

	/*Input*/
	q_mem[0].front = CS_INT_INPUT(int,"q_mem[0].front");
	q_mem[0].rear = CS_INT_INPUT(int,"q_mem[0].rear");
	k = CS_UINT_INPUT(unsigned char,"k");



	/* int qput(struct _Queue_t *, unsigned char) */
	returnVar = qput(q,k);




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_qput_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
