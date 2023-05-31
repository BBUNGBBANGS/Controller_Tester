#line 2 "cs_test%het1GetConfigValue_test0%cs_error"
/* het1GetConfigValue_test0.c */
#ifndef __het1GetConfigValue_test0__
#define __het1GetConfigValue_test0__

#include "../factory/factory.h"

#include "het1GetConfigValue_test0.h"

void CS_TEST het1GetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(het1GetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_het1GetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct hetBase hetREG1_tmp_mem [1]={0,}; 
	het_config_reg_t * config_reg  = 0x0;
	struct het_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	hetREG1_tmp = hetREG1_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* het1GetConfigValue(struct het_config_reg *, enum config_value_type) */
	het1GetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_het1GetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
