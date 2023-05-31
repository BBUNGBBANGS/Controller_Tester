#line 2 "cs_test%adc2ParityCheck_test0%cs_error"
/* adc2ParityCheck_test0.c */
#ifndef __adc2ParityCheck_test0__
#define __adc2ParityCheck_test0__

#include "../factory/factory.h"

#include "adc2ParityCheck_test0.h"

void CS_TEST adc2ParityCheck_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(adc2ParityCheck_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_adc2ParityCheck_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct adcBase adcREG2_tmp_mem [1]={0,}; 
	struct esmBase esmREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	adcREG2_tmp = adcREG2_tmp_mem;
	esmREG_tmp = esmREG_tmp_mem;

	/*Input*/
	adcREG2_tmp_mem[0].PARCR = CS_UINT_INPUT(unsigned int,"adcREG2_tmp_mem[0].PARCR");
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");



	/* adc2ParityCheck() */
	adc2ParityCheck();




	/*Output*/
	CS_UINT_OUTPUT(adcREG2_tmp_mem[0].PARCR, "adcREG2_tmp_mem[0].PARCR");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[0], "esmREG_tmp_mem[0].SR1[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_adc2ParityCheck_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
