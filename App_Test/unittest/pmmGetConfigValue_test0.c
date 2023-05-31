#line 2 "cs_test%pmmGetConfigValue_test0%cs_error"
/* pmmGetConfigValue_test0.c */
#ifndef __pmmGetConfigValue_test0__
#define __pmmGetConfigValue_test0__

#include "../factory/factory.h"

#include "pmmGetConfigValue_test0.h"

void CS_TEST pmmGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pmmGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pmmGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pmmBase pmmREG_tmp_mem [1]={0,}; 
	pmm_config_reg_t * config_reg  = 0x0;
	struct pmm_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	pmmREG_tmp = pmmREG_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	pmmREG_tmp_mem[0].LOGICPDPWRCTRL0 = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].LOGICPDPWRCTRL0");
	pmmREG_tmp_mem[0].MEMPDPWRCTRL0 = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].MEMPDPWRCTRL0");
	pmmREG_tmp_mem[0].PDCLKDISREG = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].PDCLKDISREG");
	pmmREG_tmp_mem[0].GLOBALCTRL1 = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].GLOBALCTRL1");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* pmmGetConfigValue(struct pmm_config_reg *, enum config_value_type) */
	pmmGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pmmGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
