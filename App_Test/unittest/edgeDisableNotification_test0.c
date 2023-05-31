#line 2 "cs_test%edgeDisableNotification_test0%cs_error"
/* edgeDisableNotification_test0.c */
#ifndef __edgeDisableNotification_test0__
#define __edgeDisableNotification_test0__

#include "../factory/factory.h"

#include "edgeDisableNotification_test0.h"

void CS_TEST edgeDisableNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(edgeDisableNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_edgeDisableNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	hetBASE_t * hetREG  = 0x0;
	struct hetBase hetREG_mem [1]={0,}; 
	unsigned int edge  = 0; 

	/*Memory assign*/
	hetREG = hetREG_mem;

	/*Input*/
	edge = CS_UINT_INPUT(unsigned int,"edge");



	/* edgeDisableNotification(volatile struct hetBase *, unsigned int) */
	edgeDisableNotification(hetREG,edge);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_edgeDisableNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
