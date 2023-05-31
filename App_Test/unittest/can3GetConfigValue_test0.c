#line 2 "cs_test%can3GetConfigValue_test0%cs_error"
/* can3GetConfigValue_test0.c */
#ifndef __can3GetConfigValue_test0__
#define __can3GetConfigValue_test0__

#include "../factory/factory.h"

#include "can3GetConfigValue_test0.h"

void CS_TEST can3GetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(can3GetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_can3GetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct canBase canREG3_tmp_mem [1]={0,}; 
	can_config_reg_t * config_reg  = 0x0;
	struct can_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	canREG3_tmp = canREG3_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* can3GetConfigValue(struct can_config_reg *, enum config_value_type) */
	can3GetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_can3GetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
