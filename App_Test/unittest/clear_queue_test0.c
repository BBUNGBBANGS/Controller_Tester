#line 2 "cs_test%clear_queue_test0%cs_error"
/* clear_queue_test0.c */
#ifndef __clear_queue_test0__
#define __clear_queue_test0__

#include "../factory/factory.h"

#include "clear_queue_test0.h"

void CS_TEST clear_queue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(clear_queue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_clear_queue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	Queue_t * q  = 0x0;
	struct _Queue_t q_mem [1]={0,}; 

	/*Memory assign*/
	q = q_mem;

	/*Input*/
	q_mem[0].rear = CS_INT_INPUT(int,"q_mem[0].rear");



	/* clear_queue(struct _Queue_t *) */
	clear_queue(q);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_clear_queue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
