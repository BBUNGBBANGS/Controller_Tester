#line 2 "cs_test%gioSetPort_test0%cs_error"
/* gioSetPort_test0.c */
#ifndef __gioSetPort_test0__
#define __gioSetPort_test0__

#include "../factory/factory.h"

#include "gioSetPort_test0.h"

void CS_TEST gioSetPort_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(gioSetPort_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_gioSetPort_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	gioPORT_t * port  = 0x0;
	struct gioPort port_mem [1]={0,}; 
	unsigned int value  = 0; 

	/*Memory assign*/
	port = port_mem;

	/*Input*/
	value = CS_UINT_INPUT(unsigned int,"value");



	/* gioSetPort(volatile struct gioPort *, unsigned int) */
	gioSetPort(port,value);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_gioSetPort_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
