#line 2 "cs_test%pbistGetConfigValue_test0%cs_error"
/* pbistGetConfigValue_test0.c */
#ifndef __pbistGetConfigValue_test0__
#define __pbistGetConfigValue_test0__

#include "../factory/factory.h"

#include "pbistGetConfigValue_test0.h"

void CS_TEST pbistGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pbistGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pbistGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pbistBase pbistREG_tmp_mem [1]={0,}; 
	pbist_config_reg_t * config_reg  = 0x0;
	struct pbist_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	pbistREG_tmp = pbistREG_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	pbistREG_tmp_mem[0].RAMT = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].RAMT");
	pbistREG_tmp_mem[0].DLR = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].DLR");
	pbistREG_tmp_mem[0].PACT = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].PACT");
	pbistREG_tmp_mem[0].PBISTID = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].PBISTID");
	pbistREG_tmp_mem[0].OVER = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].OVER");
	pbistREG_tmp_mem[0].FSRDL1 = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].FSRDL1");
	pbistREG_tmp_mem[0].ROM = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].ROM");
	pbistREG_tmp_mem[0].ALGO = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].ALGO");
	pbistREG_tmp_mem[0].RINFOL = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].RINFOL");
	pbistREG_tmp_mem[0].RINFOU = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].RINFOU");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* pbistGetConfigValue(struct pbist_config_reg *, enum config_value_type) */
	pbistGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pbistGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
