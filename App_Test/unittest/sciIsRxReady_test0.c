#line 2 "cs_test%sciIsRxReady_test0%cs_error"
/* sciIsRxReady_test0.c */
#ifndef __sciIsRxReady_test0__
#define __sciIsRxReady_test0__

#include "../factory/factory.h"

#include "sciIsRxReady_test0.h"

void CS_TEST sciIsRxReady_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(sciIsRxReady_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_sciIsRxReady_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	sciBASE_t * sci  = 0x0;
	struct sciBase sci_mem [1]={0,}; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	sci = sci_mem;

	/*Input*/
	sci_mem[0].FLR = CS_UINT_INPUT(unsigned int,"sci_mem[0].FLR");



	/* unsigned int sciIsRxReady(volatile struct sciBase *) */
	returnVar = sciIsRxReady(sci);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_sciIsRxReady_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
