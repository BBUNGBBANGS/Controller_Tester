#line 2 "cs_test%AdcGetV3_3_test0%cs_error"
/* AdcGetV3_3_test0.c */
#ifndef __AdcGetV3_3_test0__
#define __AdcGetV3_3_test0__

#include "../factory/factory.h"

#include "AdcGetV3_3_test0.h"

void CS_TEST AdcGetV3_3_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(AdcGetV3_3_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_AdcGetV3_3_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct adcBase adcREG1_tmp_mem [1]={0,}; 
	double returnVar = 0.0; 

	/*Memory assign*/
	adcREG1_tmp = adcREG1_tmp_mem;

	/*Input*/
	adcREG1_tmp_mem[0].OPMODECR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].OPMODECR");
	adcREG1_tmp_mem[0].GxINTCR[0] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxINTCR[0]");
	adcREG1_tmp_mem[0].GxINTCR[1] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxINTCR[1]");
	adcREG1_tmp_mem[0].GxSEL[0] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxSEL[0]");
	adcREG1_tmp_mem[0].GxSEL[1] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxSEL[1]");
	sum[0] = CS_INT_INPUT(int,"sum[0]");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* double AdcGetV3_3() */
	returnVar = AdcGetV3_3();




	/*Output*/
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxINTCR[0], "adcREG1_tmp_mem[0].GxINTCR[0]");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxINTCR[1], "adcREG1_tmp_mem[0].GxINTCR[1]");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxSEL[0], "adcREG1_tmp_mem[0].GxSEL[0]");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxSEL[1], "adcREG1_tmp_mem[0].GxSEL[1]");
	CS_INT_OUTPUT(sum[0], "sum[0]");
	CS_FLT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_AdcGetV3_3_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
