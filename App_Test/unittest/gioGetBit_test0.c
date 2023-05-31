#line 2 "cs_test%gioGetBit_test0%cs_error"
/* gioGetBit_test0.c */
#ifndef __gioGetBit_test0__
#define __gioGetBit_test0__

#include "../factory/factory.h"

#include "gioGetBit_test0.h"

void CS_TEST gioGetBit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(gioGetBit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_gioGetBit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	gioPORT_t * port  = 0x0;
	struct gioPort port_mem [1]={0,}; 
	unsigned int bit  = 0; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	port = port_mem;

	/*Input*/
	port_mem[0].DIN = CS_UINT_INPUT(unsigned int,"port_mem[0].DIN");
	bit = CS_UINT_INPUT(unsigned int,"bit");



	/* unsigned int gioGetBit(volatile struct gioPort *, unsigned int) */
	returnVar = gioGetBit(port,bit);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_gioGetBit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
