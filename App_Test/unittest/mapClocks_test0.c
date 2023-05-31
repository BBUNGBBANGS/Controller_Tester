#line 2 "cs_test%mapClocks_test0%cs_error"
/* mapClocks_test0.c */
#ifndef __mapClocks_test0__
#define __mapClocks_test0__

#include "../factory/factory.h"

#include "mapClocks_test0.h"

void CS_TEST mapClocks_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(mapClocks_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_mapClocks_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 
	struct systemBase2 systemREG2_tmp_mem [1]={0,}; 

	/*Memory assign*/
	systemREG1_tmp = systemREG1_tmp_mem;
	systemREG2_tmp = systemREG2_tmp_mem;

	/*Input*/
	systemREG1_tmp_mem[0].CSVSTAT = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSVSTAT");
	systemREG1_tmp_mem[0].CSDIS = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSDIS");
	systemREG1_tmp_mem[0].GHVSRC = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].GHVSRC");
	systemREG1_tmp_mem[0].VCLKASRC = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].VCLKASRC");
	systemREG1_tmp_mem[0].RCLKSRC = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].RCLKSRC");
	systemREG1_tmp_mem[0].CDDIS = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CDDIS");
	systemREG1_tmp_mem[0].CLKCNTL = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CLKCNTL");
	systemREG1_tmp_mem[0].PLLCTL1 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].PLLCTL1");
	systemREG1_tmp_mem[0].PLLCTL2 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].PLLCTL2");
	systemREG2_tmp_mem[0].PLLCTL3 = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].PLLCTL3");
	systemREG2_tmp_mem[0].CLK2CNTL = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].CLK2CNTL");
	systemREG2_tmp_mem[0].VCLKACON1 = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].VCLKACON1");



	/* mapClocks() */
	mapClocks();




	/*Output*/
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CSVSTAT, "systemREG1_tmp_mem[0].CSVSTAT");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CSDIS, "systemREG1_tmp_mem[0].CSDIS");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].GHVSRC, "systemREG1_tmp_mem[0].GHVSRC");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].VCLKASRC, "systemREG1_tmp_mem[0].VCLKASRC");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].RCLKSRC, "systemREG1_tmp_mem[0].RCLKSRC");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CDDIS, "systemREG1_tmp_mem[0].CDDIS");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CLKCNTL, "systemREG1_tmp_mem[0].CLKCNTL");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].PLLCTL1, "systemREG1_tmp_mem[0].PLLCTL1");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].PLLCTL2, "systemREG1_tmp_mem[0].PLLCTL2");
	CS_UINT_OUTPUT(systemREG2_tmp_mem[0].PLLCTL3, "systemREG2_tmp_mem[0].PLLCTL3");
	CS_UINT_OUTPUT(systemREG2_tmp_mem[0].CLK2CNTL, "systemREG2_tmp_mem[0].CLK2CNTL");
	CS_UINT_OUTPUT(systemREG2_tmp_mem[0].VCLKACON1, "systemREG2_tmp_mem[0].VCLKACON1");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_mapClocks_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
