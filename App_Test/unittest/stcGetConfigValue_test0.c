#line 2 "cs_test%stcGetConfigValue_test0%cs_error"
/* stcGetConfigValue_test0.c */
#ifndef __stcGetConfigValue_test0__
#define __stcGetConfigValue_test0__

#include "../factory/factory.h"

#include "stcGetConfigValue_test0.h"

void CS_TEST stcGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(stcGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_stcGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct stcBase stcREG_tmp_mem [1]={0,}; 
	stc_config_reg_t * config_reg  = 0x0;
	struct stc_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	stcREG_tmp = stcREG_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	stcREG_tmp_mem[0].STCSCSCR = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCSCSCR");
	stcREG_tmp_mem[0].STCGCR1 = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCGCR1");
	stcREG_tmp_mem[0].STCGCR0 = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCGCR0");
	stcREG_tmp_mem[0].STCTPR = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCTPR");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* stcGetConfigValue(struct stc_config_reg *, enum config_value_type) */
	stcGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_stcGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
