#line 2 "cs_test%rtiGetConfigValue_test0%cs_error"
/* rtiGetConfigValue_test0.c */
#ifndef __rtiGetConfigValue_test0__
#define __rtiGetConfigValue_test0__

#include "../factory/factory.h"

#include "rtiGetConfigValue_test0.h"

void CS_TEST rtiGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(rtiGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_rtiGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	rti_config_reg_t * config_reg  = 0x0;
	struct rti_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	rtiREG1_tmp = rtiREG1_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	rtiREG1_tmp_mem[0].COMPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMPCTRL");
	rtiREG1_tmp_mem[0].GCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].GCTRL");
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	rtiREG1_tmp_mem[0].CMP[1].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[1].UDCPx");
	rtiREG1_tmp_mem[0].CMP[2].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[2].UDCPx");
	rtiREG1_tmp_mem[0].CMP[3].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[3].UDCPx");
	rtiREG1_tmp_mem[0].TBCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].TBCTRL");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* rtiGetConfigValue(struct rti_config_reg *, enum config_value_type) */
	rtiGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_rtiGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
