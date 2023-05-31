#line 2 "cs_test%pbistRun_test0%cs_error"
/* pbistRun_test0.c */
#ifndef __pbistRun_test0__
#define __pbistRun_test0__

#include "../factory/factory.h"

#include "pbistRun_test0.h"

void CS_TEST pbistRun_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pbistRun_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pbistRun_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pbistBase pbistREG_tmp_mem [1]={0,}; 
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 
	unsigned int raminfoL  = 0; 
	unsigned int algomask  = 0; 

	/*Memory assign*/
	pbistREG_tmp = pbistREG_tmp_mem;
	systemREG1_tmp = systemREG1_tmp_mem;

	/*Input*/
	pbistREG_tmp_mem[0].DLR = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].DLR");
	pbistREG_tmp_mem[0].PACT = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].PACT");
	pbistREG_tmp_mem[0].OVER = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].OVER");
	pbistREG_tmp_mem[0].ROM = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].ROM");
	pbistREG_tmp_mem[0].ALGO = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].ALGO");
	pbistREG_tmp_mem[0].RINFOL = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].RINFOL");
	pbistREG_tmp_mem[0].RINFOU = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].RINFOU");
	systemREG1_tmp_mem[0].MSTGCR = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MSTGCR");
	systemREG1_tmp_mem[0].MINITGCR = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MINITGCR");
	systemREG1_tmp_mem[0].MSINENA = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MSINENA");
	raminfoL = CS_UINT_INPUT(unsigned int,"raminfoL");
	algomask = CS_UINT_INPUT(unsigned int,"algomask");



	/* pbistRun(unsigned int, unsigned int) */
	pbistRun(raminfoL,algomask);




	/*Output*/
	CS_UINT_OUTPUT(pbistREG_tmp_mem[0].DLR, "pbistREG_tmp_mem[0].DLR");
	CS_UINT_OUTPUT(pbistREG_tmp_mem[0].PACT, "pbistREG_tmp_mem[0].PACT");
	CS_UINT_OUTPUT(pbistREG_tmp_mem[0].OVER, "pbistREG_tmp_mem[0].OVER");
	CS_UINT_OUTPUT(pbistREG_tmp_mem[0].ROM, "pbistREG_tmp_mem[0].ROM");
	CS_UINT_OUTPUT(pbistREG_tmp_mem[0].ALGO, "pbistREG_tmp_mem[0].ALGO");
	CS_UINT_OUTPUT(pbistREG_tmp_mem[0].RINFOL, "pbistREG_tmp_mem[0].RINFOL");
	CS_UINT_OUTPUT(pbistREG_tmp_mem[0].RINFOU, "pbistREG_tmp_mem[0].RINFOU");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].MSTGCR, "systemREG1_tmp_mem[0].MSTGCR");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].MINITGCR, "systemREG1_tmp_mem[0].MINITGCR");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].MSINENA, "systemREG1_tmp_mem[0].MSINENA");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pbistRun_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
