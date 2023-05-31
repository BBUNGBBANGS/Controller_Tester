#line 2 "cs_test%gioSetDirection_test0%cs_error"
/* gioSetDirection_test0.c */
#ifndef __gioSetDirection_test0__
#define __gioSetDirection_test0__

#include "../factory/factory.h"

#include "gioSetDirection_test0.h"

void CS_TEST gioSetDirection_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(gioSetDirection_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_gioSetDirection_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	gioPORT_t * port  = 0x0;
	struct gioPort port_mem [1]={0,}; 
	unsigned int dir  = 0; 

	/*Memory assign*/
	port = port_mem;

	/*Input*/
	dir = CS_UINT_INPUT(unsigned int,"dir");



	/* gioSetDirection(volatile struct gioPort *, unsigned int) */
	gioSetDirection(port,dir);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_gioSetDirection_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
