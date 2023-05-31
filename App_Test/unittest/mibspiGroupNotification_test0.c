#line 2 "cs_test%mibspiGroupNotification_test0%cs_error"
/* mibspiGroupNotification_test0.c */
#ifndef __mibspiGroupNotification_test0__
#define __mibspiGroupNotification_test0__

#include "../factory/factory.h"

#include "mibspiGroupNotification_test0.h"

void CS_TEST mibspiGroupNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(mibspiGroupNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_mibspiGroupNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	mibspiBASE_t * mibspi  = 0x0;
	struct mibspiBase mibspi_mem [1]={0,}; 
	unsigned int group  = 0; 

	/*Memory assign*/
	mibspi = mibspi_mem;

	/*Input*/
	group = CS_UINT_INPUT(unsigned int,"group");



	/* mibspiGroupNotification(volatile struct mibspiBase *, unsigned int) */
	mibspiGroupNotification(mibspi,group);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_mibspiGroupNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
