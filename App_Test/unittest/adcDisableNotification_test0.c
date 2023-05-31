#line 2 "cs_test%adcDisableNotification_test0%cs_error"
/* adcDisableNotification_test0.c */
#ifndef __adcDisableNotification_test0__
#define __adcDisableNotification_test0__

#include "../factory/factory.h"

#include "adcDisableNotification_test0.h"

void CS_TEST adcDisableNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(adcDisableNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_adcDisableNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	adcBASE_t * adc  = 0x0;
	struct adcBase adc_mem [1]={0,}; 
	unsigned int group  = 0; 

	/*Memory assign*/
	adc = adc_mem;

	/*Input*/
	group = CS_UINT_INPUT(unsigned int,"group");



	/* adcDisableNotification(volatile struct adcBase *, unsigned int) */
	adcDisableNotification(adc,group);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_adcDisableNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
