#line 2 "cs_test%AdcGetV1_2_test0%cs_error"
/* AdcGetV1_2_test0.c */
#ifndef __AdcGetV1_2_test0__
#define __AdcGetV1_2_test0__

#include "../factory/factory.h"

#include "AdcGetV1_2_test0.h"

void CS_TEST AdcGetV1_2_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(AdcGetV1_2_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_AdcGetV1_2_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct adcBase adcREG1_tmp_mem [1]={0,}; 
	double returnVar = 0.0; 

	/*Memory assign*/
	adcREG1_tmp = adcREG1_tmp_mem;

	/*Input*/
	adcREG1_tmp_mem[0].GxINTFLG[0] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxINTFLG[0]");
	adcREG1_tmp_mem[0].GxINTFLG[1] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxINTFLG[1]");
	adcREG1_tmp_mem[0].GxINTCR[0] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxINTCR[0]");
	adcREG1_tmp_mem[0].GxINTCR[1] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxINTCR[1]");
	adcREG1_tmp_mem[0].OPMODECR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].OPMODECR");
	sum[0] = CS_INT_INPUT(int,"sum[0]");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* double AdcGetV1_2() */
	returnVar = AdcGetV1_2();




	/*Output*/
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxINTFLG[0], "adcREG1_tmp_mem[0].GxINTFLG[0]");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxINTFLG[1], "adcREG1_tmp_mem[0].GxINTFLG[1]");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxINTCR[0], "adcREG1_tmp_mem[0].GxINTCR[0]");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxINTCR[1], "adcREG1_tmp_mem[0].GxINTCR[1]");
	CS_INT_OUTPUT(sum[0], "sum[0]");
	CS_FLT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_AdcGetV1_2_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
