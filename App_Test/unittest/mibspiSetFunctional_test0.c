#line 2 "cs_test%mibspiSetFunctional_test0%cs_error"
/* mibspiSetFunctional_test0.c */
#ifndef __mibspiSetFunctional_test0__
#define __mibspiSetFunctional_test0__

#include "../factory/factory.h"

#include "mibspiSetFunctional_test0.h"

void CS_TEST mibspiSetFunctional_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(mibspiSetFunctional_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_mibspiSetFunctional_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	mibspiBASE_t * mibspi  = 0x0;
	struct mibspiBase mibspi_mem [1]={0,}; 
	unsigned int port  = 0; 

	/*Memory assign*/
	mibspi = mibspi_mem;

	/*Input*/
	port = CS_UINT_INPUT(unsigned int,"port");



	/* mibspiSetFunctional(volatile struct mibspiBase *, unsigned int) */
	mibspiSetFunctional(mibspi,port);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_mibspiSetFunctional_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
