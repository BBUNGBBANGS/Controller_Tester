#line 2 "cs_test%mibspiDisableLoopback_test0%cs_error"
/* mibspiDisableLoopback_test0.c */
#ifndef __mibspiDisableLoopback_test0__
#define __mibspiDisableLoopback_test0__

#include "../factory/factory.h"

#include "mibspiDisableLoopback_test0.h"

void CS_TEST mibspiDisableLoopback_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(mibspiDisableLoopback_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_mibspiDisableLoopback_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	mibspiBASE_t * mibspi  = 0x0;
	struct mibspiBase mibspi_mem [1]={0,}; 

	/*Memory assign*/
	mibspi = mibspi_mem;



	/* mibspiDisableLoopback(volatile struct mibspiBase *) */
	mibspiDisableLoopback(mibspi);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_mibspiDisableLoopback_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
