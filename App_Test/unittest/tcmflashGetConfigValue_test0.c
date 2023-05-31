#line 2 "cs_test%tcmflashGetConfigValue_test0%cs_error"
/* tcmflashGetConfigValue_test0.c */
#ifndef __tcmflashGetConfigValue_test0__
#define __tcmflashGetConfigValue_test0__

#include "../factory/factory.h"

#include "tcmflashGetConfigValue_test0.h"

void CS_TEST tcmflashGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(tcmflashGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_tcmflashGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct flashWBase flashWREG_tmp_mem [1]={0,}; 
	tcmflash_config_reg_t * config_reg  = 0x0;
	struct tcmflash_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	flashWREG_tmp = flashWREG_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	flashWREG_tmp_mem[0].FBPROT = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FBPROT");
	flashWREG_tmp_mem[0].FMAC = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FMAC");
	flashWREG_tmp_mem[0].FEDACSDIS2 = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FEDACSDIS2");
	flashWREG_tmp_mem[0].FEDACCTRL1 = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FEDACCTRL1");
	flashWREG_tmp_mem[0].FEDACCTRL2 = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FEDACCTRL2");
	flashWREG_tmp_mem[0].FBAC = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FBAC");
	flashWREG_tmp_mem[0].FLOCK = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FLOCK");
	flashWREG_tmp_mem[0].FBFALLBACK = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FBFALLBACK");
	flashWREG_tmp_mem[0].FDIAGCTRL = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FDIAGCTRL");
	flashWREG_tmp_mem[0].FPAC1 = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FPAC1");
	flashWREG_tmp_mem[0].FPAC2 = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FPAC2");
	flashWREG_tmp_mem[0].FRDCNTL = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FRDCNTL");
	flashWREG_tmp_mem[0].FBSE = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FBSE");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* tcmflashGetConfigValue(struct tcmflash_config_reg *, enum config_value_type) */
	tcmflashGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_tcmflashGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
