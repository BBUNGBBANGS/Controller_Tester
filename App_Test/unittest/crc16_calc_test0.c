#line 2 "cs_test%crc16_calc_test0%cs_error"
/* crc16_calc_test0.c */
#ifndef __crc16_calc_test0__
#define __crc16_calc_test0__

#include "../factory/factory.h"

#include "crc16_calc_test0.h"

void CS_TEST crc16_calc_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(crc16_calc_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_crc16_calc_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned short crc_init  = 0; 
	unsigned char * cp  = 0x0;
	unsigned char cp_mem [1]={0,}; 
	int len  = 0; 
	int returnVar = 0; 

	/*Memory assign*/
	cp = cp_mem;

	/*Input*/
	crc_init = CS_UINT_INPUT(unsigned short,"crc_init");
	cp[0] = CS_UINT_INPUT(unsigned char,"cp_mem[0]");
	len = CS_INT_INPUT(int,"len");



	/* int crc16_calc(unsigned short, unsigned char *, signed int) */
	returnVar = crc16_calc(crc_init,cp,len);




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_crc16_calc_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
