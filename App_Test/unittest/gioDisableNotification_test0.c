#line 2 "cs_test%gioDisableNotification_test0%cs_error"
/* gioDisableNotification_test0.c */
#ifndef __gioDisableNotification_test0__
#define __gioDisableNotification_test0__

#include "../factory/factory.h"

#include "gioDisableNotification_test0.h"

void CS_TEST gioDisableNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(gioDisableNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_gioDisableNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct gioPort gioPORTA_tmp_mem [1]={0,}; 
	struct gioPort gioPORTB_tmp_mem [1]={0,}; 
	gioPORT_t * port  = 0x0;
	struct gioPort port_mem [1]={0,}; 
	unsigned int bit  = 0; 

	/*Memory assign*/
	gioPORTA_tmp = gioPORTA_tmp_mem;
	gioPORTB_tmp = gioPORTB_tmp_mem;
	port = port_mem;

	/*Input*/
	gioPORTA_tmp_mem[0].DIN = CS_UINT_INPUT(unsigned int,"gioPORTA_tmp_mem[0].DIN");
	gioPORTB_tmp_mem[0].DIN = CS_UINT_INPUT(unsigned int,"gioPORTB_tmp_mem[0].DIN");
	port_mem[0].DIN = CS_UINT_INPUT(unsigned int,"port_mem[0].DIN");
	bit = CS_UINT_INPUT(unsigned int,"bit");



	/* gioDisableNotification(volatile struct gioPort *, unsigned int) */
	gioDisableNotification(port,bit);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_gioDisableNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
