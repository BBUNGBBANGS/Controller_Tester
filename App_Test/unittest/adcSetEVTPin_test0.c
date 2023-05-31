#line 2 "cs_test%adcSetEVTPin_test0%cs_error"
/* adcSetEVTPin_test0.c */
#ifndef __adcSetEVTPin_test0__
#define __adcSetEVTPin_test0__

#include "../factory/factory.h"

#include "adcSetEVTPin_test0.h"

void CS_TEST adcSetEVTPin_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(adcSetEVTPin_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_adcSetEVTPin_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	adcBASE_t * adc  = 0x0;
	struct adcBase adc_mem [1]={0,}; 
	unsigned int value  = 0; 

	/*Memory assign*/
	adc = adc_mem;

	/*Input*/
	value = CS_UINT_INPUT(unsigned int,"value");



	/* adcSetEVTPin(volatile struct adcBase *, unsigned int) */
	adcSetEVTPin(adc,value);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_adcSetEVTPin_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
