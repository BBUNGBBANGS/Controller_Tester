#line 2 "cs_test%qBufClear_test0%cs_error"
/* qBufClear_test0.c */
#ifndef __qBufClear_test0__
#define __qBufClear_test0__

#include "../factory/factory.h"

#include "qBufClear_test0.h"

void CS_TEST qBufClear_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(qBufClear_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_qBufClear_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	QBuf_t * q  = 0x0;
	struct _QBuf_t q_mem [1]={0,}; 

	/*Memory assign*/
	q = q_mem;

	/*Input*/
	q_mem[0].rear = CS_INT_INPUT(int,"q_mem[0].rear");



	/* qBufClear(struct _QBuf_t *) */
	qBufClear(q);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_qBufClear_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
