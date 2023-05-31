#line 2 "cs_test%pwmDisableNotification_test0%cs_error"
/* pwmDisableNotification_test0.c */
#ifndef __pwmDisableNotification_test0__
#define __pwmDisableNotification_test0__

#include "../factory/factory.h"

#include "pwmDisableNotification_test0.h"

void CS_TEST pwmDisableNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pwmDisableNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pwmDisableNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	hetBASE_t * hetREG  = 0x0;
	struct hetBase hetREG_mem [1]={0,}; 
	unsigned int pwm  = 0; 
	unsigned int notification  = 0; 

	/*Memory assign*/
	hetREG = hetREG_mem;

	/*Input*/
	pwm = CS_UINT_INPUT(unsigned int,"pwm");
	notification = CS_UINT_INPUT(unsigned int,"notification");



	/* pwmDisableNotification(volatile struct hetBase *, unsigned int, unsigned int) */
	pwmDisableNotification(hetREG,pwm,notification);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pwmDisableNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
