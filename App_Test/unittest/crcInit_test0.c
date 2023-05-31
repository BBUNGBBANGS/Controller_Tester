#line 2 "cs_test%crcInit_test0%cs_error"
/* crcInit_test0.c */
#ifndef __crcInit_test0__
#define __crcInit_test0__

#include "../factory/factory.h"

#include "crcInit_test0.h"

void CS_TEST crcInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(crcInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_crcInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct crcBase crcREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	crcREG_tmp = crcREG_tmp_mem;

	/*Input*/
	crcREG_tmp_mem[0].CTRL0 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].CTRL0");
	crcREG_tmp_mem[0].CTRL2 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].CTRL2");
	crcREG_tmp_mem[0].INTS = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].INTS");
	crcREG_tmp_mem[0].PCOUNT_REG1 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].PCOUNT_REG1");
	crcREG_tmp_mem[0].SCOUNT_REG1 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].SCOUNT_REG1");
	crcREG_tmp_mem[0].WDTOPLD1 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].WDTOPLD1");
	crcREG_tmp_mem[0].BCTOPLD1 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].BCTOPLD1");
	crcREG_tmp_mem[0].REGL1 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].REGL1");
	crcREG_tmp_mem[0].REGH1 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].REGH1");
	crcREG_tmp_mem[0].PCOUNT_REG2 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].PCOUNT_REG2");
	crcREG_tmp_mem[0].SCOUNT_REG2 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].SCOUNT_REG2");
	crcREG_tmp_mem[0].WDTOPLD2 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].WDTOPLD2");
	crcREG_tmp_mem[0].BCTOPLD2 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].BCTOPLD2");
	crcREG_tmp_mem[0].REGL2 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].REGL2");
	crcREG_tmp_mem[0].REGH2 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].REGH2");



	/* crcInit() */
	crcInit();




	/*Output*/
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].CTRL0, "crcREG_tmp_mem[0].CTRL0");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].CTRL2, "crcREG_tmp_mem[0].CTRL2");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].INTS, "crcREG_tmp_mem[0].INTS");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].PCOUNT_REG1, "crcREG_tmp_mem[0].PCOUNT_REG1");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].SCOUNT_REG1, "crcREG_tmp_mem[0].SCOUNT_REG1");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].WDTOPLD1, "crcREG_tmp_mem[0].WDTOPLD1");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].BCTOPLD1, "crcREG_tmp_mem[0].BCTOPLD1");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].REGL1, "crcREG_tmp_mem[0].REGL1");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].REGH1, "crcREG_tmp_mem[0].REGH1");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].PCOUNT_REG2, "crcREG_tmp_mem[0].PCOUNT_REG2");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].SCOUNT_REG2, "crcREG_tmp_mem[0].SCOUNT_REG2");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].WDTOPLD2, "crcREG_tmp_mem[0].WDTOPLD2");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].BCTOPLD2, "crcREG_tmp_mem[0].BCTOPLD2");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].REGL2, "crcREG_tmp_mem[0].REGL2");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].REGH2, "crcREG_tmp_mem[0].REGH2");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_crcInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
