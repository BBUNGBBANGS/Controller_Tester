#line 2 "cs_test%mibspiNotification_test0%cs_error"
/* mibspiNotification_test0.c */
#ifndef __mibspiNotification_test0__
#define __mibspiNotification_test0__

#include "../factory/factory.h"

#include "mibspiNotification_test0.h"

void CS_TEST mibspiNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(mibspiNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_mibspiNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	mibspiBASE_t * mibspi  = 0x0;
	struct mibspiBase mibspi_mem [1]={0,}; 
	unsigned int flags  = 0; 

	/*Memory assign*/
	mibspi = mibspi_mem;

	/*Input*/
	flags = CS_UINT_INPUT(unsigned int,"flags");



	/* mibspiNotification(volatile struct mibspiBase *, unsigned int) */
	mibspiNotification(mibspi,flags);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_mibspiNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
