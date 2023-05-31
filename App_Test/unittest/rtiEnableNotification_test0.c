#line 2 "cs_test%rtiEnableNotification_test0%cs_error"
/* rtiEnableNotification_test0.c */
#ifndef __rtiEnableNotification_test0__
#define __rtiEnableNotification_test0__

#include "../factory/factory.h"

#include "rtiEnableNotification_test0.h"

void CS_TEST rtiEnableNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(rtiEnableNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_rtiEnableNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	unsigned int notification  = 0; 

	/*Memory assign*/
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	rtiREG1_tmp_mem[0].SETINTENA = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].SETINTENA");
	rtiREG1_tmp_mem[0].INTFLAG = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].INTFLAG");
	notification = CS_UINT_INPUT(unsigned int,"notification");



	/* rtiEnableNotification(unsigned int) */
	rtiEnableNotification(notification);




	/*Output*/
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].SETINTENA, "rtiREG1_tmp_mem[0].SETINTENA");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].INTFLAG, "rtiREG1_tmp_mem[0].INTFLAG");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_rtiEnableNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
