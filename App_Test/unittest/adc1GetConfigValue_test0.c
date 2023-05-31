#line 2 "cs_test%adc1GetConfigValue_test0%cs_error"
/* adc1GetConfigValue_test0.c */
#ifndef __adc1GetConfigValue_test0__
#define __adc1GetConfigValue_test0__

#include "../factory/factory.h"

#include "adc1GetConfigValue_test0.h"

void CS_TEST adc1GetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(adc1GetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_adc1GetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct adcBase adcREG1_tmp_mem [1]={0,}; 
	adc_config_reg_t * config_reg  = 0x0;
	struct adc_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	adcREG1_tmp = adcREG1_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	adcREG1_tmp_mem[0].EVSAMPDISEN = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].EVSAMPDISEN");
	adcREG1_tmp_mem[0].EVSAMP = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].EVSAMP");
	adcREG1_tmp_mem[0].EVSRC = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].EVSRC");
	adcREG1_tmp_mem[0].CLOCKCR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].CLOCKCR");
	adcREG1_tmp_mem[0].G1SAMPDISEN = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].G1SAMPDISEN");
	adcREG1_tmp_mem[0].G2SRC = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].G2SRC");
	adcREG1_tmp_mem[0].OPMODECR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].OPMODECR");
	adcREG1_tmp_mem[0].G2SAMPDISEN = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].G2SAMPDISEN");
	adcREG1_tmp_mem[0].G1SAMP = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].G1SAMP");
	adcREG1_tmp_mem[0].BNDCR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].BNDCR");
	adcREG1_tmp_mem[0].G1SRC = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].G1SRC");
	adcREG1_tmp_mem[0].PARCR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].PARCR");
	adcREG1_tmp_mem[0].G2SAMP = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].G2SAMP");
	adcREG1_tmp_mem[0].GxMODECR[0] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxMODECR[0]");
	adcREG1_tmp_mem[0].GxMODECR[1] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxMODECR[1]");
	adcREG1_tmp_mem[0].GxMODECR[2] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxMODECR[2]");
	adcREG1_tmp_mem[0].BNDEND = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].BNDEND");
	config_reg_mem[0].CONFIG_G1SAMP = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_G1SAMP");
	config_reg_mem[0].CONFIG_BNDEND = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_BNDEND");
	config_reg_mem[0].CONFIG_PARCR = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_PARCR");
	config_reg_mem[0].CONFIG_G0SAMPDISEN = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_G0SAMPDISEN");
	config_reg_mem[0].CONFIG_G2SAMP = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_G2SAMP");
	config_reg_mem[0].CONFIG_CLOCKCR = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_CLOCKCR");
	config_reg_mem[0].CONFIG_G2SRC = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_G2SRC");
	config_reg_mem[0].CONFIG_OPMODECR = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_OPMODECR");
	config_reg_mem[0].CONFIG_G0SAMP = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_G0SAMP");
	config_reg_mem[0].CONFIG_G0SRC = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_G0SRC");
	config_reg_mem[0].CONFIG_G1SRC = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_G1SRC");
	config_reg_mem[0].CONFIG_G2SAMPDISEN = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_G2SAMPDISEN");
	config_reg_mem[0].CONFIG_GxMODECR[0] = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_GxMODECR[0]");
	config_reg_mem[0].CONFIG_GxMODECR[1] = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_GxMODECR[1]");
	config_reg_mem[0].CONFIG_GxMODECR[2] = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_GxMODECR[2]");
	config_reg_mem[0].CONFIG_BNDCR = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_BNDCR");
	config_reg_mem[0].CONFIG_G1SAMPDISEN = CS_UINT_INPUT(unsigned int,"config_reg_mem[0].CONFIG_G1SAMPDISEN");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* adc1GetConfigValue(struct adc_config_reg *, enum config_value_type) */
	adc1GetConfigValue(config_reg,type);




	/*Output*/
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].EVSAMPDISEN, "adcREG1_tmp_mem[0].EVSAMPDISEN");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].EVSAMP, "adcREG1_tmp_mem[0].EVSAMP");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].EVSRC, "adcREG1_tmp_mem[0].EVSRC");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].CLOCKCR, "adcREG1_tmp_mem[0].CLOCKCR");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].G1SAMPDISEN, "adcREG1_tmp_mem[0].G1SAMPDISEN");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].G2SRC, "adcREG1_tmp_mem[0].G2SRC");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].OPMODECR, "adcREG1_tmp_mem[0].OPMODECR");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].G2SAMPDISEN, "adcREG1_tmp_mem[0].G2SAMPDISEN");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].G1SAMP, "adcREG1_tmp_mem[0].G1SAMP");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].BNDCR, "adcREG1_tmp_mem[0].BNDCR");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].G1SRC, "adcREG1_tmp_mem[0].G1SRC");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].PARCR, "adcREG1_tmp_mem[0].PARCR");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].G2SAMP, "adcREG1_tmp_mem[0].G2SAMP");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxMODECR[0], "adcREG1_tmp_mem[0].GxMODECR[0]");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxMODECR[1], "adcREG1_tmp_mem[0].GxMODECR[1]");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxMODECR[2], "adcREG1_tmp_mem[0].GxMODECR[2]");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].BNDEND, "adcREG1_tmp_mem[0].BNDEND");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_G1SAMP, "config_reg_mem[0].CONFIG_G1SAMP");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_BNDEND, "config_reg_mem[0].CONFIG_BNDEND");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_PARCR, "config_reg_mem[0].CONFIG_PARCR");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_G0SAMPDISEN, "config_reg_mem[0].CONFIG_G0SAMPDISEN");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_G2SAMP, "config_reg_mem[0].CONFIG_G2SAMP");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_CLOCKCR, "config_reg_mem[0].CONFIG_CLOCKCR");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_G2SRC, "config_reg_mem[0].CONFIG_G2SRC");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_OPMODECR, "config_reg_mem[0].CONFIG_OPMODECR");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_G0SAMP, "config_reg_mem[0].CONFIG_G0SAMP");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_G0SRC, "config_reg_mem[0].CONFIG_G0SRC");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_G1SRC, "config_reg_mem[0].CONFIG_G1SRC");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_G2SAMPDISEN, "config_reg_mem[0].CONFIG_G2SAMPDISEN");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_GxMODECR[0], "config_reg_mem[0].CONFIG_GxMODECR[0]");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_GxMODECR[1], "config_reg_mem[0].CONFIG_GxMODECR[1]");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_GxMODECR[2], "config_reg_mem[0].CONFIG_GxMODECR[2]");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_BNDCR, "config_reg_mem[0].CONFIG_BNDCR");
	CS_UINT_OUTPUT(config_reg_mem[0].CONFIG_G1SAMPDISEN, "config_reg_mem[0].CONFIG_G1SAMPDISEN");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_adc1GetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
