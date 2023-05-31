#line 2 "cs_test%esmGetConfigValue_test0%cs_error"
/* esmGetConfigValue_test0.c */
#ifndef __esmGetConfigValue_test0__
#define __esmGetConfigValue_test0__

#include "../factory/factory.h"

#include "esmGetConfigValue_test0.h"

void CS_TEST esmGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(esmGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_esmGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	esm_config_reg_t * config_reg  = 0x0;
	struct esm_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	esmREG_tmp_mem[0].EEPAPR1 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].EEPAPR1");
	esmREG_tmp_mem[0].IESR1 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].IESR1");
	esmREG_tmp_mem[0].ILSR1 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].ILSR1");
	esmREG_tmp_mem[0].LTCPR = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].LTCPR");
	esmREG_tmp_mem[0].EKR = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].EKR");
	esmREG_tmp_mem[0].IEPSR4 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].IEPSR4");
	esmREG_tmp_mem[0].IESR4 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].IESR4");
	esmREG_tmp_mem[0].ILSR4 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].ILSR4");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* esmGetConfigValue(struct esm_config_reg *, enum config_value_type) */
	esmGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_esmGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
