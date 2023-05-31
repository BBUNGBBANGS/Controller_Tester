#line 2 "cs_test%adcIsConversionComplete_test0%cs_error"
/* adcIsConversionComplete_test0.c */
#ifndef __adcIsConversionComplete_test0__
#define __adcIsConversionComplete_test0__

#include "../factory/factory.h"

#include "adcIsConversionComplete_test0.h"

void CS_TEST adcIsConversionComplete_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(adcIsConversionComplete_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_adcIsConversionComplete_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	adcBASE_t * adc  = 0x0;
	struct adcBase adc_mem [1]={0,}; 
	unsigned int group  = 0; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	adc = adc_mem;

	/*Input*/
	adc_mem[0].GxINTFLG[0] = CS_UINT_INPUT(unsigned int,"adc_mem[0].GxINTFLG[0]");
	group = CS_UINT_INPUT(unsigned int,"group");



	/* unsigned int adcIsConversionComplete(volatile struct adcBase *, unsigned int) */
	returnVar = adcIsConversionComplete(adc,group);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_adcIsConversionComplete_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
