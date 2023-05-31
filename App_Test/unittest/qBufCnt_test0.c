#line 2 "cs_test%qBufCnt_test0%cs_error"
/* qBufCnt_test0.c */
#ifndef __qBufCnt_test0__
#define __qBufCnt_test0__

#include "../factory/factory.h"

#include "qBufCnt_test0.h"

void CS_TEST qBufCnt_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(qBufCnt_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_qBufCnt_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	QBuf_t * q  = 0x0;
	struct _QBuf_t q_mem [1]={0,}; 
	int returnVar = 0; 

	/*Memory assign*/
	q = q_mem;

	/*Input*/
	q_mem[0].size = CS_INT_INPUT(int,"q_mem[0].size");
	q_mem[0].front = CS_INT_INPUT(int,"q_mem[0].front");
	q_mem[0].rear = CS_INT_INPUT(int,"q_mem[0].rear");



	/* int qBufCnt(struct _QBuf_t *) */
	returnVar = qBufCnt(q);




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_qBufCnt_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
