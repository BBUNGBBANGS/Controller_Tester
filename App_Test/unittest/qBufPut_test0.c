#line 2 "cs_test%qBufPut_test0%cs_error"
/* qBufPut_test0.c */
#ifndef __qBufPut_test0__
#define __qBufPut_test0__

#include "../factory/factory.h"

#include "qBufPut_test0.h"

void CS_TEST qBufPut_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(qBufPut_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_qBufPut_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	QBuf_t * q  = 0x0;
	struct _QBuf_t q_mem [1]={0,}; 
	unsigned char q_mem0_qBuf_mem [1]={0,}; 
	uint8_t * pBuf  = 0x0;
	unsigned char pBuf_mem [1]={0,}; 
	int size  = 0; 
	int returnVar = 0; 

	/*Memory assign*/
	q = q_mem;
	q_mem[0].qBuf = q_mem0_qBuf_mem;
	pBuf = pBuf_mem;

	/*Input*/
	q_mem0_qBuf_mem[0] = CS_UINT_INPUT(unsigned char,"q_mem0_qBuf_mem[0]");
	q_mem[0].size = CS_INT_INPUT(int,"q_mem[0].size");
	q_mem[0].front = CS_INT_INPUT(int,"q_mem[0].front");
	q_mem[0].rear = CS_INT_INPUT(int,"q_mem[0].rear");
	pBuf_mem[0] = CS_UINT_INPUT(unsigned char,"pBuf_mem[0]");
	size = CS_INT_INPUT(int,"size");



	/* int qBufPut(struct _QBuf_t *, unsigned char *, signed int) */
	returnVar = qBufPut(q,pBuf,size);




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_qBufPut_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
