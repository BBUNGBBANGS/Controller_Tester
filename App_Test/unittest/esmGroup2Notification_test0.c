#line 2 "cs_test%esmGroup2Notification_test0%cs_error"
/* esmGroup2Notification_test0.c */
#ifndef __esmGroup2Notification_test0__
#define __esmGroup2Notification_test0__

#include "../factory/factory.h"

#include "esmGroup2Notification_test0.h"

void CS_TEST esmGroup2Notification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(esmGroup2Notification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_esmGroup2Notification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned int channel  = 0; 

	/*Input*/
	channel = CS_UINT_INPUT(unsigned int,"channel");



	/* esmGroup2Notification(unsigned int) */
	esmGroup2Notification(channel);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_esmGroup2Notification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
