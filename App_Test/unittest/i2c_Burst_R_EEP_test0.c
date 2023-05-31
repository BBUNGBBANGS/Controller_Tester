#line 2 "cs_test%i2c_Burst_R_EEP_test0%cs_error"
/* i2c_Burst_R_EEP_test0.c */
#ifndef __i2c_Burst_R_EEP_test0__
#define __i2c_Burst_R_EEP_test0__

#include "../factory/factory.h"

#include "i2c_Burst_R_EEP_test0.h"

void CS_TEST i2c_Burst_R_EEP_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(i2c_Burst_R_EEP_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_i2c_Burst_R_EEP_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%i2c_Burst_R_EEP_test0%User code start"
static struct g_i2cTransfer
{
    uint32  mode;
    uint32  length;
    uint8   * data;
} g_i2cTransfer_t;
#line 26 "cs_test%i2c_Burst_R_EEP_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	unsigned short add  = 0; 
	uint8_t * rdata  = 0x0;
	unsigned char rdata_mem [1]={0,}; 
	unsigned short data_length  = 0; 
	uint8_t * returnVar = 0x0;

	/*Memory assign*/
	i2cREG1_tmp = i2cREG1_tmp_mem;
	rdata = rdata_mem;

	/*Input*/
	i2cREG1_tmp_mem[0].STR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].STR");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	add = CS_UINT_INPUT(unsigned short,"add");
	rdata_mem[0] = CS_UINT_INPUT(unsigned char,"rdata_mem[0]");
	data_length = CS_UINT_INPUT(unsigned short,"data_length");



	/* uint8_t * i2c_Burst_R_EEP(unsigned short, unsigned char *, unsigned short) */
	returnVar = i2c_Burst_R_EEP(add,rdata,data_length);




	/*Output*/
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].STR, "i2cREG1_tmp_mem[0].STR");
	CS_UINT_OUTPUT(returnVar[0], "returnVar[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_i2c_Burst_R_EEP_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
