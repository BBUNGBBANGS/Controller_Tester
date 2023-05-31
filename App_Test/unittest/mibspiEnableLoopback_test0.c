#line 2 "cs_test%mibspiEnableLoopback_test0%cs_error"
/* mibspiEnableLoopback_test0.c */
#ifndef __mibspiEnableLoopback_test0__
#define __mibspiEnableLoopback_test0__

#include "../factory/factory.h"

#include "mibspiEnableLoopback_test0.h"

void CS_TEST mibspiEnableLoopback_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(mibspiEnableLoopback_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_mibspiEnableLoopback_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	mibspiBASE_t * mibspi  = 0x0;
	struct mibspiBase mibspi_mem [1]={0,}; 
	enum loopBackType Loopbacktype ; 

	/*Memory assign*/
	mibspi = mibspi_mem;

	/*Input*/
	Loopbacktype = (enum loopBackType)CS_INT_INPUT(enum loopBackType,"Loopbacktype");



	/* mibspiEnableLoopback(volatile struct mibspiBase *, enum loopBackType) */
	mibspiEnableLoopback(mibspi,Loopbacktype);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_mibspiEnableLoopback_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
