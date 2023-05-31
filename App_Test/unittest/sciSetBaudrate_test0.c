#line 2 "cs_test%sciSetBaudrate_test0%cs_error"
/* sciSetBaudrate_test0.c */
#ifndef __sciSetBaudrate_test0__
#define __sciSetBaudrate_test0__

#include "../factory/factory.h"

#include "sciSetBaudrate_test0.h"

void CS_TEST sciSetBaudrate_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(sciSetBaudrate_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_sciSetBaudrate_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	sciBASE_t * sci  = 0x0;
	struct sciBase sci_mem [1]={0,}; 
	unsigned int baud  = 0; 

	/*Memory assign*/
	sci = sci_mem;

	/*Input*/
	sci_mem[0].GCR1 = CS_UINT_INPUT(unsigned int,"sci_mem[0].GCR1");
	baud = CS_UINT_INPUT(unsigned int,"baud");



	/* sciSetBaudrate(volatile struct sciBase *, unsigned int) */
	sciSetBaudrate(sci,baud);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_sciSetBaudrate_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
