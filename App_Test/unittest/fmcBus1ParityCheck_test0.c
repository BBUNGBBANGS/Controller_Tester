#line 2 "cs_test%fmcBus1ParityCheck_test0%cs_error"
/* fmcBus1ParityCheck_test0.c */
#ifndef __fmcBus1ParityCheck_test0__
#define __fmcBus1ParityCheck_test0__

#include "../factory/factory.h"

#include "fmcBus1ParityCheck_test0.h"

void CS_TEST fmcBus1ParityCheck_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(fmcBus1ParityCheck_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_fmcBus1ParityCheck_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct flashWBase flashWREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;
	flashWREG_tmp = flashWREG_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	esmREG_tmp_mem[0].SR1[1] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[1]");
	esmREG_tmp_mem[0].SSR2 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SSR2");
	flashWREG_tmp_mem[0].FEDACSTATUS = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FEDACSTATUS");
	flashWREG_tmp_mem[0].FPAROVR = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FPAROVR");
	flashWREG_tmp_mem[0].FDIAGCTRL = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FDIAGCTRL");
	flashWREG_tmp_mem[0].FUNCERRADD = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FUNCERRADD");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* fmcBus1ParityCheck() */
	fmcBus1ParityCheck();




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[1], "esmREG_tmp_mem[0].SR1[1]");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SSR2, "esmREG_tmp_mem[0].SSR2");
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].FDIAGCTRL, "flashWREG_tmp_mem[0].FDIAGCTRL");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_fmcBus1ParityCheck_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
