#line 2 "cs_test%pwmStart_test0%cs_error"
/* pwmStart_test0.c */
#ifndef __pwmStart_test0__
#define __pwmStart_test0__

#include "../factory/factory.h"

#include "pwmStart_test0.h"

void CS_TEST pwmStart_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pwmStart_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pwmStart_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	hetRAMBASE_t * hetRAM  = 0x0;
	struct het1RamBase hetRAM_mem [1]={0,}; 
	unsigned int pwm  = 0; 

	/*Memory assign*/
	hetRAM = hetRAM_mem;

	/*Input*/
	pwm = CS_UINT_INPUT(unsigned int,"pwm");



	/* pwmStart(volatile struct het1RamBase *, unsigned int) */
	pwmStart(hetRAM,pwm);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pwmStart_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
