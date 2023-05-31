#line 2 "cs_test%memoryPort0TestFailNotification_test0%cs_error"
/* memoryPort0TestFailNotification_test0.c */
#ifndef __memoryPort0TestFailNotification_test0__
#define __memoryPort0TestFailNotification_test0__

#include "../factory/factory.h"

#include "memoryPort0TestFailNotification_test0.h"

void CS_TEST memoryPort0TestFailNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(memoryPort0TestFailNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_memoryPort0TestFailNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned int groupSelect  = 0; 
	unsigned int dataSelect  = 0; 
	unsigned int address  = 0; 
	unsigned int data  = 0; 

	/*Input*/
	groupSelect = CS_UINT_INPUT(unsigned int,"groupSelect");
	dataSelect = CS_UINT_INPUT(unsigned int,"dataSelect");
	address = CS_UINT_INPUT(unsigned int,"address");
	data = CS_UINT_INPUT(unsigned int,"data");



	/* memoryPort0TestFailNotification(unsigned int, unsigned int, unsigned int, unsigned int) */
	memoryPort0TestFailNotification(groupSelect,dataSelect,address,data);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_memoryPort0TestFailNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
