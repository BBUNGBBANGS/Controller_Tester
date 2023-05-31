#line 2 "cs_test%mibspiIsTransferComplete_test0%cs_error"
/* mibspiIsTransferComplete_test0.c */
#ifndef __mibspiIsTransferComplete_test0__
#define __mibspiIsTransferComplete_test0__

#include "../factory/factory.h"

#include "mibspiIsTransferComplete_test0.h"

void CS_TEST mibspiIsTransferComplete_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(mibspiIsTransferComplete_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_mibspiIsTransferComplete_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	mibspiBASE_t * mibspi  = 0x0;
	struct mibspiBase mibspi_mem [1]={0,}; 
	unsigned int group  = 0; 
	_Bool returnVar = 0; 

	/*Memory assign*/
	mibspi = mibspi_mem;

	/*Input*/
	mibspi_mem[0].TGINTFLG = CS_UINT_INPUT(unsigned int,"mibspi_mem[0].TGINTFLG");
	group = CS_UINT_INPUT(unsigned int,"group");



	/* _Bool mibspiIsTransferComplete(volatile struct mibspiBase *, unsigned int) */
	returnVar = mibspiIsTransferComplete(mibspi,group);




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_mibspiIsTransferComplete_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
