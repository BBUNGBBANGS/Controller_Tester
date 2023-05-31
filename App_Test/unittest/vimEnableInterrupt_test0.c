#line 2 "cs_test%vimEnableInterrupt_test0%cs_error"
/* vimEnableInterrupt_test0.c */
#ifndef __vimEnableInterrupt_test0__
#define __vimEnableInterrupt_test0__

#include "../factory/factory.h"

#include "vimEnableInterrupt_test0.h"

void CS_TEST vimEnableInterrupt_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(vimEnableInterrupt_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_vimEnableInterrupt_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct vimBase vimREG_tmp_mem [1]={0,}; 
	unsigned int channel  = 0; 
	enum systemInterrupt inttype ; 

	/*Memory assign*/
	vimREG_tmp = vimREG_tmp_mem;

	/*Input*/
	vimREG_tmp_mem[0].FIRQPR0 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].FIRQPR0");
	vimREG_tmp_mem[0].FIRQPR1 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].FIRQPR1");
	vimREG_tmp_mem[0].FIRQPR2 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].FIRQPR2");
	vimREG_tmp_mem[0].REQMASKSET0 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKSET0");
	vimREG_tmp_mem[0].REQMASKSET1 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKSET1");
	vimREG_tmp_mem[0].REQMASKSET2 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKSET2");
	channel = CS_UINT_INPUT(unsigned int,"channel");
	inttype = (enum systemInterrupt)CS_INT_INPUT(enum systemInterrupt,"inttype");



	/* vimEnableInterrupt(unsigned int, enum systemInterrupt) */
	vimEnableInterrupt(channel,inttype);




	/*Output*/
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].FIRQPR0, "vimREG_tmp_mem[0].FIRQPR0");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].FIRQPR1, "vimREG_tmp_mem[0].FIRQPR1");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].FIRQPR2, "vimREG_tmp_mem[0].FIRQPR2");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKSET0, "vimREG_tmp_mem[0].REQMASKSET0");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKSET1, "vimREG_tmp_mem[0].REQMASKSET1");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKSET2, "vimREG_tmp_mem[0].REQMASKSET2");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_vimEnableInterrupt_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
