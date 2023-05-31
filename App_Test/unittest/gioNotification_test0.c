#line 2 "cs_test%gioNotification_test0%cs_error"
/* gioNotification_test0.c */
#ifndef __gioNotification_test0__
#define __gioNotification_test0__

#include "../factory/factory.h"

#include "gioNotification_test0.h"

void CS_TEST gioNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(gioNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_gioNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	gioPORT_t * port  = 0x0;
	struct gioPort port_mem [1]={0,}; 
	unsigned int bit  = 0; 

	/*Memory assign*/
	port = port_mem;

	/*Input*/
	bit = CS_UINT_INPUT(unsigned int,"bit");



	/* gioNotification(volatile struct gioPort *, unsigned int) */
	gioNotification(port,bit);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_gioNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
