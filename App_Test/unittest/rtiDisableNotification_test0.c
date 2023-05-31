#line 2 "cs_test%rtiDisableNotification_test0%cs_error"
/* rtiDisableNotification_test0.c */
#ifndef __rtiDisableNotification_test0__
#define __rtiDisableNotification_test0__

#include "../factory/factory.h"

#include "rtiDisableNotification_test0.h"

void CS_TEST rtiDisableNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(rtiDisableNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_rtiDisableNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	unsigned int notification  = 0; 

	/*Memory assign*/
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	rtiREG1_tmp_mem[0].CLEARINTENA = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CLEARINTENA");
	notification = CS_UINT_INPUT(unsigned int,"notification");



	/* rtiDisableNotification(unsigned int) */
	rtiDisableNotification(notification);




	/*Output*/
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CLEARINTENA, "rtiREG1_tmp_mem[0].CLEARINTENA");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_rtiDisableNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
