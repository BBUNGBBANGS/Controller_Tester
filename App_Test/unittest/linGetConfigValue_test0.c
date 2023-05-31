#line 2 "cs_test%linGetConfigValue_test0%cs_error"
/* linGetConfigValue_test0.c */
#ifndef __linGetConfigValue_test0__
#define __linGetConfigValue_test0__

#include "../factory/factory.h"

#include "linGetConfigValue_test0.h"

void CS_TEST linGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(linGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_linGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct linBase linREG_tmp_mem [1]={0,}; 
	lin_config_reg_t * config_reg  = 0x0;
	struct lin_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	linREG_tmp = linREG_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	linREG_tmp_mem[0].SETINTLVL = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].SETINTLVL");
	linREG_tmp_mem[0].SETINT = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].SETINT");
	linREG_tmp_mem[0].PIO8 = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].PIO8");
	linREG_tmp_mem[0].PIO7 = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].PIO7");
	linREG_tmp_mem[0].PIO6 = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].PIO6");
	linREG_tmp_mem[0].FORMAT = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].FORMAT");
	linREG_tmp_mem[0].MBRSR = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].MBRSR");
	linREG_tmp_mem[0].COMP = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].COMP");
	linREG_tmp_mem[0].MASK = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].MASK");
	linREG_tmp_mem[0].BRS = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].BRS");
	linREG_tmp_mem[0].PIO1 = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].PIO1");
	linREG_tmp_mem[0].PIO0 = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].PIO0");
	linREG_tmp_mem[0].GCR2 = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].GCR2");
	linREG_tmp_mem[0].GCR1 = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].GCR1");
	linREG_tmp_mem[0].GCR0 = CS_UINT_INPUT(unsigned int,"linREG_tmp_mem[0].GCR0");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* linGetConfigValue(struct lin_config_reg *, enum config_value_type) */
	linGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_linGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
