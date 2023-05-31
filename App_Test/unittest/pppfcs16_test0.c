#line 2 "cs_test%pppfcs16_test0%cs_error"
/* pppfcs16_test0.c */
#ifndef __pppfcs16_test0__
#define __pppfcs16_test0__

#include "../factory/factory.h"

#include "pppfcs16_test0.h"

void CS_TEST pppfcs16_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pppfcs16_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pppfcs16_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned short fcs  = 0; 
	unsigned char * cp  = 0x0;
	unsigned char cp_mem [1]={0,}; 
	int len  = 0; 
	unsigned short returnVar = 0; 

	/*Memory assign*/
	cp = cp_mem;

	/*Input*/
	fcs = CS_UINT_INPUT(unsigned short,"fcs");
	cp[0] = CS_UINT_INPUT(unsigned char,"cp_mem[0]");
	len = CS_INT_INPUT(int,"len");



	/* unsigned short pppfcs16(unsigned short, unsigned char *, signed int) */
	returnVar = pppfcs16(fcs,cp,len);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pppfcs16_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
