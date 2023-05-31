#line 2 "cs_test%het2GetConfigValue_test0%cs_error"
/* het2GetConfigValue_test0.c */
#ifndef __het2GetConfigValue_test0__
#define __het2GetConfigValue_test0__

#include "../factory/factory.h"

#include "het2GetConfigValue_test0.h"

void CS_TEST het2GetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(het2GetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_het2GetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct hetBase hetREG2_tmp_mem [1]={0,}; 
	het_config_reg_t * config_reg  = 0x0;
	struct het_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	hetREG2_tmp = hetREG2_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* het2GetConfigValue(struct het_config_reg *, enum config_value_type) */
	het2GetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_het2GetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
