#line 2 "cs_test%hetResetTimestamp_test0%cs_error"
/* hetResetTimestamp_test0.c */
#ifndef __hetResetTimestamp_test0__
#define __hetResetTimestamp_test0__

#include "../factory/factory.h"

#include "hetResetTimestamp_test0.h"

void CS_TEST hetResetTimestamp_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(hetResetTimestamp_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_hetResetTimestamp_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	hetRAMBASE_t * hetRAM  = 0x0;
	struct het1RamBase hetRAM_mem [1]={0,}; 

	/*Memory assign*/
	hetRAM = hetRAM_mem;



	/* hetResetTimestamp(volatile struct het1RamBase *) */
	hetResetTimestamp(hetRAM);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_hetResetTimestamp_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
