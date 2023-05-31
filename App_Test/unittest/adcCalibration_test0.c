#line 2 "cs_test%adcCalibration_test0%cs_error"
/* adcCalibration_test0.c */
#ifndef __adcCalibration_test0__
#define __adcCalibration_test0__

#include "../factory/factory.h"

#include "adcCalibration_test0.h"

void CS_TEST adcCalibration_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(adcCalibration_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_adcCalibration_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	adcBASE_t * adc  = 0x0;
	struct adcBase adc_mem [1]={0,}; 

	/*Memory assign*/
	adc = adc_mem;

	/*Input*/
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	adc_mem[0].OPMODECR = CS_UINT_INPUT(unsigned int,"adc_mem[0].OPMODECR");
	adc_mem[0].CALCR = CS_UINT_INPUT(unsigned int,"adc_mem[0].CALCR");
	adc_mem[0].CALR = CS_UINT_INPUT(unsigned int,"adc_mem[0].CALR");



	/* adcCalibration(volatile struct adcBase *) */
	adcCalibration(adc);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_adcCalibration_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
