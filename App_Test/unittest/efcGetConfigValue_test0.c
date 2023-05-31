#line 2 "cs_test%efcGetConfigValue_test0%cs_error"
/* efcGetConfigValue_test0.c */
#ifndef __efcGetConfigValue_test0__
#define __efcGetConfigValue_test0__

#include "../factory/factory.h"

#include "efcGetConfigValue_test0.h"

void CS_TEST efcGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(efcGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_efcGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct efcBase efcREG_tmp_mem [1]={0,}; 
	efc_config_reg_t * config_reg  = 0x0;
	struct efc_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	efcREG_tmp = efcREG_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	efcREG_tmp_mem[0].SELF_TEST_CYCLES = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].SELF_TEST_CYCLES");
	efcREG_tmp_mem[0].BOUNDARY = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].BOUNDARY");
	efcREG_tmp_mem[0].PINS = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].PINS");
	efcREG_tmp_mem[0].SELF_TEST_SIGN = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].SELF_TEST_SIGN");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* efcGetConfigValue(struct efc_config_reg *, enum config_value_type) */
	efcGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_efcGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif