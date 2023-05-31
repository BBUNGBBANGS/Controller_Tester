#line 2 "cs_test%vimInit_test0%cs_error"
/* vimInit_test0.c */
#ifndef __vimInit_test0__
#define __vimInit_test0__

#include "../factory/factory.h"

#include "vimInit_test0.h"

#line 1 "cs_test%vimInit_test0%USER_CODE_GLOBAL_KEY"
#define VIM_PARCTL      (*(volatile uint32 *)0xFFFFFDF0U)
#define VIM_CHANNELS 96U
#line 14 "cs_test%vimInit_test0%cs_error"

void CS_TEST vimInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(vimInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_vimInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct vimRam vimRAM_tmp_mem [1]={0,}; 
	struct vimBase vimREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	vimRAM_tmp = vimRAM_tmp_mem;
	vimRAM_tmp_mem[0].ISR[0] = 0x0;
	vimREG_tmp = vimREG_tmp_mem;

	/*Input*/
	vimREG_tmp_mem[0].REQMASKSET2 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKSET2");
	vimREG_tmp_mem[0].REQMASKSET3 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKSET3");
	vimREG_tmp_mem[0].REQMASKSET0 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKSET0");
	vimREG_tmp_mem[0].REQMASKSET1 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKSET1");
	vimREG_tmp_mem[0].FIRQPR1 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].FIRQPR1");
	vimREG_tmp_mem[0].FIRQPR0 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].FIRQPR0");
	vimREG_tmp_mem[0].FIRQPR3 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].FIRQPR3");
	vimREG_tmp_mem[0].FIRQPR2 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].FIRQPR2");
	vimREG_tmp_mem[0].CAPEVT = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CAPEVT");



	/* vimInit() */
	vimInit();




	/*Output*/
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKSET2, "vimREG_tmp_mem[0].REQMASKSET2");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKSET3, "vimREG_tmp_mem[0].REQMASKSET3");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKSET0, "vimREG_tmp_mem[0].REQMASKSET0");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKSET1, "vimREG_tmp_mem[0].REQMASKSET1");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].FIRQPR1, "vimREG_tmp_mem[0].FIRQPR1");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].FIRQPR0, "vimREG_tmp_mem[0].FIRQPR0");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].FIRQPR3, "vimREG_tmp_mem[0].FIRQPR3");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].FIRQPR2, "vimREG_tmp_mem[0].FIRQPR2");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CAPEVT, "vimREG_tmp_mem[0].CAPEVT");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_vimInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
