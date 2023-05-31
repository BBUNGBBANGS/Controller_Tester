#line 2 "cs_test%vimDisableInterrupt_test0%cs_error"
/* vimDisableInterrupt_test0.c */
#ifndef __vimDisableInterrupt_test0__
#define __vimDisableInterrupt_test0__

#include "../factory/factory.h"

#include "vimDisableInterrupt_test0.h"

void CS_TEST vimDisableInterrupt_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(vimDisableInterrupt_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_vimDisableInterrupt_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct vimBase vimREG_tmp_mem [1]={0,}; 
	unsigned int channel  = 0; 

	/*Memory assign*/
	vimREG_tmp = vimREG_tmp_mem;

	/*Input*/
	vimREG_tmp_mem[0].REQMASKCLR1 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKCLR1");
	vimREG_tmp_mem[0].REQMASKCLR2 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKCLR2");
	vimREG_tmp_mem[0].REQMASKCLR0 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKCLR0");
	channel = CS_UINT_INPUT(unsigned int,"channel");



	/* vimDisableInterrupt(unsigned int) */
	vimDisableInterrupt(channel);




	/*Output*/
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKCLR1, "vimREG_tmp_mem[0].REQMASKCLR1");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKCLR2, "vimREG_tmp_mem[0].REQMASKCLR2");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKCLR0, "vimREG_tmp_mem[0].REQMASKCLR0");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_vimDisableInterrupt_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
