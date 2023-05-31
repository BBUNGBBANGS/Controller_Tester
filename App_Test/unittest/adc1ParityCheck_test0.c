#line 2 "cs_test%adc1ParityCheck_test0%cs_error"
/* adc1ParityCheck_test0.c */
#ifndef __adc1ParityCheck_test0__
#define __adc1ParityCheck_test0__

#include "../factory/factory.h"

#include "adc1ParityCheck_test0.h"

void CS_TEST adc1ParityCheck_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(adc1ParityCheck_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_adc1ParityCheck_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct adcBase adcREG1_tmp_mem [1]={0,}; 
	struct esmBase esmREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	adcREG1_tmp = adcREG1_tmp_mem;
	esmREG_tmp = esmREG_tmp_mem;

	/*Input*/
	adcREG1_tmp_mem[0].PARCR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].PARCR");
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");



	/* adc1ParityCheck() */
	adc1ParityCheck();




	/*Output*/
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].PARCR, "adcREG1_tmp_mem[0].PARCR");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[0], "esmREG_tmp_mem[0].SR1[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_adc1ParityCheck_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
