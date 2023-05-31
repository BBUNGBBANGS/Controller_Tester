#line 2 "cs_test%dmaGetConfigValue_test0%cs_error"
/* dmaGetConfigValue_test0.c */
#ifndef __dmaGetConfigValue_test0__
#define __dmaGetConfigValue_test0__

#include "../factory/factory.h"

#include "dmaGetConfigValue_test0.h"

void CS_TEST dmaGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dmaGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dmaGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct dmaBase dmaREG_tmp_mem [1]={0,}; 
	dma_config_reg_t * config_reg  = 0x0;
	struct dma_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	dmaREG_tmp = dmaREG_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	dmaREG_tmp_mem[0].CHPRIOS = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].CHPRIOS");
	dmaREG_tmp_mem[0].GCHIENAS = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].GCHIENAS");
	dmaREG_tmp_mem[0].DREQASI[0] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[0]");
	dmaREG_tmp_mem[0].DREQASI[1] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[1]");
	dmaREG_tmp_mem[0].DREQASI[2] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[2]");
	dmaREG_tmp_mem[0].DREQASI[3] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[3]");
	dmaREG_tmp_mem[0].DREQASI[4] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[4]");
	dmaREG_tmp_mem[0].DREQASI[5] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[5]");
	dmaREG_tmp_mem[0].DREQASI[6] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[6]");
	dmaREG_tmp_mem[0].DREQASI[7] = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DREQASI[7]");
	dmaREG_tmp_mem[0].FTCINTENAS = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].FTCINTENAS");
	dmaREG_tmp_mem[0].LFSINTENAS = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].LFSINTENAS");
	dmaREG_tmp_mem[0].HBCINTENAS = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].HBCINTENAS");
	dmaREG_tmp_mem[0].BTCINTENAS = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].BTCINTENAS");
	dmaREG_tmp_mem[0].DMAPCR = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DMAPCR");
	dmaREG_tmp_mem[0].DMAMPCTRL = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DMAMPCTRL");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* dmaGetConfigValue(struct dma_config_reg *, enum config_value_type) */
	dmaGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dmaGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
