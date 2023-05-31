#line 2 "cs_test%pcrGetConfigValue_test0%cs_error"
/* pcrGetConfigValue_test0.c */
#ifndef __pcrGetConfigValue_test0__
#define __pcrGetConfigValue_test0__

#include "../factory/factory.h"

#include "pcrGetConfigValue_test0.h"

void CS_TEST pcrGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pcrGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pcrGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pcrBase pcrREG_tmp_mem [1]={0,}; 
	pcr_config_reg_t * config_reg  = 0x0;
	struct pcr_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	pcrREG_tmp = pcrREG_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	pcrREG_tmp_mem[0].PMPROTSET0 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PMPROTSET0");
	pcrREG_tmp_mem[0].PMPROTSET1 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PMPROTSET1");
	pcrREG_tmp_mem[0].PPROTSET0 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PPROTSET0");
	pcrREG_tmp_mem[0].PPROTSET1 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PPROTSET1");
	pcrREG_tmp_mem[0].PPROTSET2 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PPROTSET2");
	pcrREG_tmp_mem[0].PPROTSET3 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PPROTSET3");
	pcrREG_tmp_mem[0].PCSPWRDWNSET0 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PCSPWRDWNSET0");
	pcrREG_tmp_mem[0].PCSPWRDWNSET1 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PCSPWRDWNSET1");
	pcrREG_tmp_mem[0].PSPWRDWNSET0 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PSPWRDWNSET0");
	pcrREG_tmp_mem[0].PSPWRDWNSET1 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PSPWRDWNSET1");
	pcrREG_tmp_mem[0].PSPWRDWNSET2 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PSPWRDWNSET2");
	pcrREG_tmp_mem[0].PSPWRDWNSET3 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PSPWRDWNSET3");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* pcrGetConfigValue(struct pcr_config_reg *, enum config_value_type) */
	pcrGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pcrGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
