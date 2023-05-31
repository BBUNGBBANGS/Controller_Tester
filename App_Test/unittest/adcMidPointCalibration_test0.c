#line 2 "cs_test%adcMidPointCalibration_test0%cs_error"
/* adcMidPointCalibration_test0.c */
#ifndef __adcMidPointCalibration_test0__
#define __adcMidPointCalibration_test0__

#include "../factory/factory.h"

#include "adcMidPointCalibration_test0.h"

void CS_TEST adcMidPointCalibration_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(adcMidPointCalibration_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_adcMidPointCalibration_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	adcBASE_t * adc  = 0x0;
	struct adcBase adc_mem [1]={0,}; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	adc = adc_mem;

	/*Input*/
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	adc_mem[0].CALCR = CS_UINT_INPUT(unsigned int,"adc_mem[0].CALCR");
	adc_mem[0].GxSEL[0] = CS_UINT_INPUT(unsigned int,"adc_mem[0].GxSEL[0]");
	adc_mem[0].GxSEL[1] = CS_UINT_INPUT(unsigned int,"adc_mem[0].GxSEL[1]");
	adc_mem[0].GxSEL[2] = CS_UINT_INPUT(unsigned int,"adc_mem[0].GxSEL[2]");
	adc_mem[0].CALR = CS_UINT_INPUT(unsigned int,"adc_mem[0].CALR");
	adc_mem[0].OPMODECR = CS_UINT_INPUT(unsigned int,"adc_mem[0].OPMODECR");



	/* unsigned int adcMidPointCalibration(volatile struct adcBase *) */
	returnVar = adcMidPointCalibration(adc);




	/*Output*/
	CS_UINT_OUTPUT(adc_mem[0].CALCR, "adc_mem[0].CALCR");
	CS_UINT_OUTPUT(adc_mem[0].GxSEL[0], "adc_mem[0].GxSEL[0]");
	CS_UINT_OUTPUT(adc_mem[0].GxSEL[1], "adc_mem[0].GxSEL[1]");
	CS_UINT_OUTPUT(adc_mem[0].GxSEL[2], "adc_mem[0].GxSEL[2]");
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_adcMidPointCalibration_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
