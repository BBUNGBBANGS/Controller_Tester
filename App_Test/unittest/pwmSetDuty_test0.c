#line 2 "cs_test%pwmSetDuty_test0%cs_error"
/* pwmSetDuty_test0.c */
#ifndef __pwmSetDuty_test0__
#define __pwmSetDuty_test0__

#include "../factory/factory.h"

#include "pwmSetDuty_test0.h"

void CS_TEST pwmSetDuty_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pwmSetDuty_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pwmSetDuty_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	hetRAMBASE_t * hetRAM  = 0x0;
	struct het1RamBase hetRAM_mem [1]={0,}; 
	unsigned int pwm  = 0; 
	unsigned int pwmDuty  = 0; 

	/*Memory assign*/
	hetRAM = hetRAM_mem;

	/*Input*/
	s_het1pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het1pwmPolarity[0]");
	s_het2pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het2pwmPolarity[0]");
	hetRAM_mem[0].Instruction[0].Control = CS_UINT_INPUT(unsigned int,"hetRAM_mem[0].Instruction[0].Control");
	hetRAM_mem[0].Instruction[0].Data = CS_UINT_INPUT(unsigned int,"hetRAM_mem[0].Instruction[0].Data");
	pwm = CS_UINT_INPUT(unsigned int,"pwm");
	pwmDuty = CS_UINT_INPUT(unsigned int,"pwmDuty");



	/* pwmSetDuty(volatile struct het1RamBase *, unsigned int, unsigned int) */
	pwmSetDuty(hetRAM,pwm,pwmDuty);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pwmSetDuty_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
