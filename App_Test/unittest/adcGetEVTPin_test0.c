#line 2 "cs_test%adcGetEVTPin_test0%cs_error"
/* adcGetEVTPin_test0.c */
#ifndef __adcGetEVTPin_test0__
#define __adcGetEVTPin_test0__

#include "../factory/factory.h"

#include "adcGetEVTPin_test0.h"

void CS_TEST adcGetEVTPin_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(adcGetEVTPin_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_adcGetEVTPin_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	adcBASE_t * adc  = 0x0;
	struct adcBase adc_mem [1]={0,}; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	adc = adc_mem;

	/*Input*/
	adc_mem[0].EVTIN = CS_UINT_INPUT(unsigned int,"adc_mem[0].EVTIN");



	/* unsigned int adcGetEVTPin(volatile struct adcBase *) */
	returnVar = adcGetEVTPin(adc);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_adcGetEVTPin_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
