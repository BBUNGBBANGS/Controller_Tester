#line 2 "cs_test%vimParityErrorHandler_test0%cs_error"
/* vimParityErrorHandler_test0.c */
#ifndef __vimParityErrorHandler_test0__
#define __vimParityErrorHandler_test0__

#include "../factory/factory.h"

#include "vimParityErrorHandler_test0.h"

void CS_TEST vimParityErrorHandler_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(vimParityErrorHandler_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_vimParityErrorHandler_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct vimRam vimRAM_tmp_mem [1]={0,}; 
	struct vimBase vimREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;
	vimRAM_tmp = vimRAM_tmp_mem;
	vimRAM_tmp_mem[0].ISR[0] = 0x0;
	vimREG_tmp = vimREG_tmp_mem;

	/*Input*/
	VIM_ADDERR_tmp = CS_UINT_INPUT(unsigned int,"VIM_ADDERR_tmp");
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	esmREG_tmp_mem[0].SR1[1] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[1]");
	esmREG_tmp_mem[0].IOFFHR = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].IOFFHR");
	esmREG_tmp_mem[0].SR4[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR4[0]");
	vimREG_tmp_mem[0].REQMASKCLR1 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKCLR1");
	vimREG_tmp_mem[0].REQMASKCLR2 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKCLR2");
	vimREG_tmp_mem[0].REQMASKCLR0 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKCLR0");
	vimREG_tmp_mem[0].REQMASKSET2 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKSET2");
	vimREG_tmp_mem[0].REQMASKSET0 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKSET0");
	vimREG_tmp_mem[0].REQMASKSET1 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKSET1");
	vimREG_tmp_mem[0].IRQINDEX = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].IRQINDEX");
	vimREG_tmp_mem[0].FIQINDEX = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].FIQINDEX");



	/* vimParityErrorHandler() */
	vimParityErrorHandler();




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[0], "esmREG_tmp_mem[0].SR1[0]");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[1], "esmREG_tmp_mem[0].SR1[1]");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR4[0], "esmREG_tmp_mem[0].SR4[0]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKCLR1, "vimREG_tmp_mem[0].REQMASKCLR1");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKCLR2, "vimREG_tmp_mem[0].REQMASKCLR2");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKCLR0, "vimREG_tmp_mem[0].REQMASKCLR0");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKSET2, "vimREG_tmp_mem[0].REQMASKSET2");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKSET0, "vimREG_tmp_mem[0].REQMASKSET0");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].REQMASKSET1, "vimREG_tmp_mem[0].REQMASKSET1");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_vimParityErrorHandler_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
