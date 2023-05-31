#line 2 "cs_test%esmInit_test0%cs_error"
/* esmInit_test0.c */
#ifndef __esmInit_test0__
#define __esmInit_test0__

#include "../factory/factory.h"

#include "esmInit_test0.h"

void CS_TEST esmInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(esmInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_esmInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].EEPAPR1 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].EEPAPR1");
	esmREG_tmp_mem[0].DEPAPR1 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].DEPAPR1");
	esmREG_tmp_mem[0].IESR1 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].IESR1");
	esmREG_tmp_mem[0].IECR1 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].IECR1");
	esmREG_tmp_mem[0].ILSR1 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].ILSR1");
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	esmREG_tmp_mem[0].SR1[1] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[1]");
	esmREG_tmp_mem[0].SR1[2] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[2]");
	esmREG_tmp_mem[0].EPSR = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].EPSR");
	esmREG_tmp_mem[0].LTCPR = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].LTCPR");
	esmREG_tmp_mem[0].EKR = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].EKR");
	esmREG_tmp_mem[0].SSR2 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SSR2");
	esmREG_tmp_mem[0].IEPSR4 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].IEPSR4");
	esmREG_tmp_mem[0].IEPCR4 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].IEPCR4");
	esmREG_tmp_mem[0].IESR4 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].IESR4");
	esmREG_tmp_mem[0].IECR4 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].IECR4");
	esmREG_tmp_mem[0].ILSR4 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].ILSR4");
	esmREG_tmp_mem[0].SR4[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR4[0]");



	/* esmInit() */
	esmInit();




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].EEPAPR1, "esmREG_tmp_mem[0].EEPAPR1");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].DEPAPR1, "esmREG_tmp_mem[0].DEPAPR1");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].IESR1, "esmREG_tmp_mem[0].IESR1");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].IECR1, "esmREG_tmp_mem[0].IECR1");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].ILSR1, "esmREG_tmp_mem[0].ILSR1");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[0], "esmREG_tmp_mem[0].SR1[0]");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[1], "esmREG_tmp_mem[0].SR1[1]");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[2], "esmREG_tmp_mem[0].SR1[2]");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].LTCPR, "esmREG_tmp_mem[0].LTCPR");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].EKR, "esmREG_tmp_mem[0].EKR");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SSR2, "esmREG_tmp_mem[0].SSR2");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].IEPSR4, "esmREG_tmp_mem[0].IEPSR4");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].IEPCR4, "esmREG_tmp_mem[0].IEPCR4");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].IESR4, "esmREG_tmp_mem[0].IESR4");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].IECR4, "esmREG_tmp_mem[0].IECR4");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].ILSR4, "esmREG_tmp_mem[0].ILSR4");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR4[0], "esmREG_tmp_mem[0].SR4[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_esmInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
