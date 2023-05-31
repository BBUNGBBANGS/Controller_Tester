#line 2 "cs_test%pwmSetPolarity_test0%cs_error"
/* pwmSetPolarity_test0.c */
#ifndef __pwmSetPolarity_test0__
#define __pwmSetPolarity_test0__

#include "../factory/factory.h"

#include "pwmSetPolarity_test0.h"

void CS_TEST pwmSetPolarity_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pwmSetPolarity_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pwmSetPolarity_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	hetRAMBASE_t * hetRAM  = 0x0;
	struct het1RamBase hetRAM_mem [1]={0,}; 
	unsigned int pwm  = 0; 
	int nPorlarity  = 0; 

	/*Memory assign*/
	hetRAM = hetRAM_mem;

	/*Input*/
	s_het1pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het1pwmPolarity[0]");
	s_het2pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het2pwmPolarity[0]");
	pwm = CS_UINT_INPUT(unsigned int,"pwm");
	nPorlarity = CS_INT_INPUT(int,"nPorlarity");



	/* pwmSetPolarity(volatile struct het1RamBase *, unsigned int, signed int) */
	pwmSetPolarity(hetRAM,pwm,nPorlarity);




	/*Output*/
	CS_UINT_OUTPUT(s_het1pwmPolarity[0], "s_het1pwmPolarity[0]");
	CS_UINT_OUTPUT(s_het2pwmPolarity[0], "s_het2pwmPolarity[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pwmSetPolarity_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
