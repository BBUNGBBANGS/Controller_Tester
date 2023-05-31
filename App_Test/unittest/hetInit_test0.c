#line 2 "cs_test%hetInit_test0%cs_error"
/* hetInit_test0.c */
#ifndef __hetInit_test0__
#define __hetInit_test0__

#include "../factory/factory.h"

#include "hetInit_test0.h"

void CS_TEST hetInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(hetInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_hetInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct hetBase hetREG1_tmp_mem [1]={0,}; 
	struct hetBase hetREG2_tmp_mem [1]={0,}; 

	/*Memory assign*/
	hetREG1_tmp = hetREG1_tmp_mem;
	hetREG2_tmp = hetREG2_tmp_mem;

	/*Input*/
	hetREG1_tmp_mem[0].PDR = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].PDR");
	hetREG1_tmp_mem[0].PFR = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].PFR");
	hetREG1_tmp_mem[0].PSL = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].PSL");
	hetREG1_tmp_mem[0].DIR = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].DIR");
	hetREG1_tmp_mem[0].INTENAS = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].INTENAS");
	hetREG1_tmp_mem[0].AND = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].AND");
	hetREG1_tmp_mem[0].GCR = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].GCR");
	hetREG1_tmp_mem[0].XOR = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].XOR");
	hetREG1_tmp_mem[0].PCR = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].PCR");
	hetREG1_tmp_mem[0].INTENAC = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].INTENAC");
	hetREG1_tmp_mem[0].DOUT = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].DOUT");
	hetREG1_tmp_mem[0].PRY = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].PRY");
	hetREG1_tmp_mem[0].PULDIS = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].PULDIS");
	hetREG1_tmp_mem[0].HRSH = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].HRSH");



	/* hetInit() */
	hetInit();




	/*Output*/
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].PDR, "hetREG1_tmp_mem[0].PDR");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].PFR, "hetREG1_tmp_mem[0].PFR");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].PSL, "hetREG1_tmp_mem[0].PSL");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].DIR, "hetREG1_tmp_mem[0].DIR");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].INTENAS, "hetREG1_tmp_mem[0].INTENAS");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].AND, "hetREG1_tmp_mem[0].AND");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].GCR, "hetREG1_tmp_mem[0].GCR");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].XOR, "hetREG1_tmp_mem[0].XOR");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].PCR, "hetREG1_tmp_mem[0].PCR");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].INTENAC, "hetREG1_tmp_mem[0].INTENAC");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].DOUT, "hetREG1_tmp_mem[0].DOUT");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].PRY, "hetREG1_tmp_mem[0].PRY");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].PULDIS, "hetREG1_tmp_mem[0].PULDIS");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].HRSH, "hetREG1_tmp_mem[0].HRSH");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_hetInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
