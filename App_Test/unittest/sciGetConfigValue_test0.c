#line 2 "cs_test%sciGetConfigValue_test0%cs_error"
/* sciGetConfigValue_test0.c */
#ifndef __sciGetConfigValue_test0__
#define __sciGetConfigValue_test0__

#include "../factory/factory.h"

#include "sciGetConfigValue_test0.h"

void CS_TEST sciGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(sciGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_sciGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct sciBase sciREG_tmp_mem [1]={0,}; 
	sci_config_reg_t * config_reg  = 0x0;
	struct sci_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	sciREG_tmp = sciREG_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	sciREG_tmp_mem[0].GCR0 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].GCR0");
	sciREG_tmp_mem[0].GCR1 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].GCR1");
	sciREG_tmp_mem[0].SETINT = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].SETINT");
	sciREG_tmp_mem[0].SETINTLVL = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].SETINTLVL");
	sciREG_tmp_mem[0].FORMAT = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].FORMAT");
	sciREG_tmp_mem[0].BRS = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].BRS");
	sciREG_tmp_mem[0].PIO0 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO0");
	sciREG_tmp_mem[0].PIO1 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO1");
	sciREG_tmp_mem[0].PIO6 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO6");
	sciREG_tmp_mem[0].PIO7 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO7");
	sciREG_tmp_mem[0].PIO8 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO8");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* sciGetConfigValue(struct sci_config_reg *, enum config_value_type) */
	sciGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_sciGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
