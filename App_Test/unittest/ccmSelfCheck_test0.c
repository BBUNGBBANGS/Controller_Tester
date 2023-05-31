#line 2 "cs_test%ccmSelfCheck_test0%cs_error"
/* ccmSelfCheck_test0.c */
#ifndef __ccmSelfCheck_test0__
#define __ccmSelfCheck_test0__

#include "../factory/factory.h"

#include "ccmSelfCheck_test0.h"

void CS_TEST ccmSelfCheck_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(ccmSelfCheck_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_ccmSelfCheck_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct vimBase vimREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;
	vimREG_tmp = vimREG_tmp_mem;

	/*Input*/
	CCMKEYR_tmp = CS_UINT_INPUT(unsigned int,"CCMKEYR_tmp");
	CCMSR_tmp = CS_UINT_INPUT(unsigned int,"CCMSR_tmp");
	esmREG_tmp_mem[0].EKR = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].EKR");
	esmREG_tmp_mem[0].SSR2 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SSR2");
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	esmREG_tmp_mem[0].SR1[1] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[1]");
	vimREG_tmp_mem[0].FIQINDEX = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].FIQINDEX");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* ccmSelfCheck() */
	ccmSelfCheck();




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].EKR, "esmREG_tmp_mem[0].EKR");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SSR2, "esmREG_tmp_mem[0].SSR2");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[0], "esmREG_tmp_mem[0].SR1[0]");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[1], "esmREG_tmp_mem[0].SR1[1]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_ccmSelfCheck_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
