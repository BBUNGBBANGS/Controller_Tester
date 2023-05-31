#line 2 "cs_test%qBufInit_test0%cs_error"
/* qBufInit_test0.c */
#ifndef __qBufInit_test0__
#define __qBufInit_test0__

#include "../factory/factory.h"

#include "qBufInit_test0.h"

void CS_TEST qBufInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(qBufInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_qBufInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	QBuf_t * q  = 0x0;
	struct _QBuf_t q_mem [1]={0,}; 
	uint8_t * _qBuf  = 0x0;
	unsigned char _qBuf_mem [1]={0,}; 
	int _size  = 0; 

	/*Memory assign*/
	q = q_mem;
	_qBuf = _qBuf_mem;

	/*Input*/
	_qBuf_mem[0] = CS_UINT_INPUT(unsigned char,"_qBuf_mem[0]");
	_size = CS_INT_INPUT(int,"_size");



	/* qBufInit(struct _QBuf_t *, unsigned char *, signed int) */
	qBufInit(q,_qBuf,_size);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_qBufInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
