#line 2 "cs_test%crcGetConfigValue_test0%cs_error"
/* crcGetConfigValue_test0.c */
#ifndef __crcGetConfigValue_test0__
#define __crcGetConfigValue_test0__

#include "../factory/factory.h"

#include "crcGetConfigValue_test0.h"

void CS_TEST crcGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(crcGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_crcGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct crcBase crcREG_tmp_mem [1]={0,}; 
	crc_config_reg_t * config_reg  = 0x0;
	struct crc_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	crcREG_tmp = crcREG_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	crcREG_tmp_mem[0].CTRL0 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].CTRL0");
	crcREG_tmp_mem[0].CTRL1 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].CTRL1");
	crcREG_tmp_mem[0].CTRL2 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].CTRL2");
	crcREG_tmp_mem[0].INTS = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].INTS");
	crcREG_tmp_mem[0].PCOUNT_REG1 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].PCOUNT_REG1");
	crcREG_tmp_mem[0].SCOUNT_REG1 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].SCOUNT_REG1");
	crcREG_tmp_mem[0].WDTOPLD1 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].WDTOPLD1");
	crcREG_tmp_mem[0].BCTOPLD1 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].BCTOPLD1");
	crcREG_tmp_mem[0].PCOUNT_REG2 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].PCOUNT_REG2");
	crcREG_tmp_mem[0].SCOUNT_REG2 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].SCOUNT_REG2");
	crcREG_tmp_mem[0].WDTOPLD2 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].WDTOPLD2");
	crcREG_tmp_mem[0].BCTOPLD2 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].BCTOPLD2");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* crcGetConfigValue(struct crc_config_reg *, enum config_value_type) */
	crcGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_crcGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
