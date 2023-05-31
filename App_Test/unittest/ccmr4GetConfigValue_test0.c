#line 2 "cs_test%ccmr4GetConfigValue_test0%cs_error"
/* ccmr4GetConfigValue_test0.c */
#ifndef __ccmr4GetConfigValue_test0__
#define __ccmr4GetConfigValue_test0__

#include "../factory/factory.h"

#include "ccmr4GetConfigValue_test0.h"

void CS_TEST ccmr4GetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(ccmr4GetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_ccmr4GetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	ccmr4_config_reg_t * config_reg  = 0x0;
	struct ccmr4_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	config_reg = config_reg_mem;

	/*Input*/
	config_reg_mem[0].CONFIG_CCMKEYR = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_CCMKEYR");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* ccmr4GetConfigValue(struct ccmr4_config_reg *, enum config_value_type) */
	ccmr4GetConfigValue(config_reg,type);




	/*Output*/
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_CCMKEYR, "config_reg_mem[0].CONFIG_CCMKEYR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_ccmr4GetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
