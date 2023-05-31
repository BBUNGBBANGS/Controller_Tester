#line 2 "cs_test%getch_test0%cs_error"
/* getch_test0.c */
#ifndef __getch_test0__
#define __getch_test0__

#include "../factory/factory.h"

#include "getch_test0.h"

void CS_TEST getch_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(getch_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_getch_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	char returnVar = 0; 

	/*Input*/
	g_qUart1.queue[0] = CS_UINT_INPUT(unsigned char,"g_qUart1.queue[0]");
	g_qUart1.front = CS_INT_INPUT(int,"g_qUart1.front");
	g_qUart1.rear = CS_INT_INPUT(int,"g_qUart1.rear");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* char getch() */
	returnVar = getch();




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_getch_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
