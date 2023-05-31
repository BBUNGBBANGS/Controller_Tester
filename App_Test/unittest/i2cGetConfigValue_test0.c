#line 2 "cs_test%i2cGetConfigValue_test0%cs_error"
/* i2cGetConfigValue_test0.c */
#ifndef __i2cGetConfigValue_test0__
#define __i2cGetConfigValue_test0__

#include "../factory/factory.h"

#include "i2cGetConfigValue_test0.h"

void CS_TEST i2cGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(i2cGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_i2cGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%i2cGetConfigValue_test0%User code start"
extern i2cBASE_t *i2cREG2_tmp;
#line 21 "cs_test%i2cGetConfigValue_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	i2c_config_reg_t * config_reg  = 0x0;
	struct i2c_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	i2cREG1_tmp = i2cREG1_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	i2cREG1_tmp_mem[0].PDIS = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PDIS");
	i2cREG1_tmp_mem[0].CNT = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].CNT");
	i2cREG1_tmp_mem[0].SAR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].SAR");
	i2cREG1_tmp_mem[0].OAR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].OAR");
	i2cREG1_tmp_mem[0].PDR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PDR");
	i2cREG1_tmp_mem[0].MDR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].MDR");
	i2cREG1_tmp_mem[0].IMR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].IMR");
	i2cREG1_tmp_mem[0].DIR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].DIR");
	i2cREG1_tmp_mem[0].DMACR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].DMACR");
	i2cREG1_tmp_mem[0].CKL = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].CKL");
	i2cREG1_tmp_mem[0].CKH = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].CKH");
	i2cREG1_tmp_mem[0].PSC = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PSC");
	i2cREG1_tmp_mem[0].PSEL = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PSEL");
	i2cREG1_tmp_mem[0].PFNC = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PFNC");
	i2cREG1_tmp_mem[0].EMDR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].EMDR");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* i2cGetConfigValue(struct i2c_config_reg *, enum config_value_type) */
	i2cGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_i2cGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
