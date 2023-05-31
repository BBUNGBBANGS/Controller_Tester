#line 2 "cs_test%checkFlashECC_test0%cs_error"
/* checkFlashECC_test0.c */
#ifndef __checkFlashECC_test0__
#define __checkFlashECC_test0__

#include "../factory/factory.h"

#include "checkFlashECC_test0.h"

void CS_TEST checkFlashECC_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(checkFlashECC_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_checkFlashECC_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct flashWBase flashWREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;
	flashWREG_tmp = flashWREG_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	flashWREG_tmp_mem[0].FEDACCTRL1 = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FEDACCTRL1");
	flashWREG_tmp_mem[0].FEDACSTATUS = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FEDACSTATUS");
	flashWREG_tmp_mem[0].FUNCERRADD = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FUNCERRADD");
	flashWREG_tmp_mem[0].FDIAGCTRL = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FDIAGCTRL");
	flashWREG_tmp_mem[0].FPAROVR = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FPAROVR");



	/* checkFlashECC() */
	checkFlashECC();




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[0], "esmREG_tmp_mem[0].SR1[0]");
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].FEDACCTRL1, "flashWREG_tmp_mem[0].FEDACCTRL1");
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].FDIAGCTRL, "flashWREG_tmp_mem[0].FDIAGCTRL");
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].FPAROVR, "flashWREG_tmp_mem[0].FPAROVR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_checkFlashECC_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
