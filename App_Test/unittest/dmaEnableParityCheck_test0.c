#line 2 "cs_test%dmaEnableParityCheck_test0%cs_error"
/* dmaEnableParityCheck_test0.c */
#ifndef __dmaEnableParityCheck_test0__
#define __dmaEnableParityCheck_test0__

#include "../factory/factory.h"

#include "dmaEnableParityCheck_test0.h"

void CS_TEST dmaEnableParityCheck_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dmaEnableParityCheck_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dmaEnableParityCheck_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%dmaEnableParityCheck_test0%User code start"
typedef struct g_i2cTransfer
{
    uint32  mode;
    uint32  length;
    uint8   * data;
} g_i2cTransfer_t;
g_i2cTransfer_t g_i2cTransfer_tmp;
#line 27 "cs_test%dmaEnableParityCheck_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct dmaBase dmaREG_tmp_mem [1]={0,}; 
	unsigned char g_i2cTransfer_tmp_data_mem [1]={0,}; 

	/*Memory assign*/
	dmaREG_tmp = dmaREG_tmp_mem;
	g_i2cTransfer_tmp.data = g_i2cTransfer_tmp_data_mem;

	/*Input*/
	dmaREG_tmp_mem[0].DMAPCR = CS_UINT_INPUT(unsigned int,"dmaREG_tmp_mem[0].DMAPCR");
	g_i2cTransfer_tmp.mode = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.mode");



	/* dmaEnableParityCheck() */
	dmaEnableParityCheck();




	/*Output*/
	CS_UINT_OUTPUT(dmaREG_tmp_mem[0].DMAPCR, "dmaREG_tmp_mem[0].DMAPCR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dmaEnableParityCheck_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
