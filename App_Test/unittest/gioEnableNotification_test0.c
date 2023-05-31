#line 2 "cs_test%gioEnableNotification_test0%cs_error"
/* gioEnableNotification_test0.c */
#ifndef __gioEnableNotification_test0__
#define __gioEnableNotification_test0__

#include "../factory/factory.h"

#include "gioEnableNotification_test0.h"

void CS_TEST gioEnableNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(gioEnableNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_gioEnableNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	gioPORT_t * port  = 0x0;
	struct gioPort port_mem [1]={0,}; 
	unsigned int bit  = 0; 

	/*Memory assign*/
	port = port_mem;

	/*Input*/
	bit = CS_UINT_INPUT(unsigned int,"bit");



	/* gioEnableNotification(volatile struct gioPort *, unsigned int) */
	gioEnableNotification(port,bit);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_gioEnableNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
