#line 2 "cs_test%pwmStop_test0%cs_error"
/* pwmStop_test0.c */
#ifndef __pwmStop_test0__
#define __pwmStop_test0__

#include "../factory/factory.h"

#include "pwmStop_test0.h"

void CS_TEST pwmStop_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pwmStop_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pwmStop_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	hetRAMBASE_t * hetRAM  = 0x0;
	struct het1RamBase hetRAM_mem [1]={0,}; 
	unsigned int pwm  = 0; 

	/*Memory assign*/
	hetRAM = hetRAM_mem;

	/*Input*/
	pwm = CS_UINT_INPUT(unsigned int,"pwm");



	/* pwmStop(volatile struct het1RamBase *, unsigned int) */
	pwmStop(hetRAM,pwm);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pwmStop_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
