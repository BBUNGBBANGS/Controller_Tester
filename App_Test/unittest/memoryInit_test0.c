#line 2 "cs_test%memoryInit_test0%cs_error"
/* memoryInit_test0.c */
#ifndef __memoryInit_test0__
#define __memoryInit_test0__

#include "../factory/factory.h"

#include "memoryInit_test0.h"

void CS_TEST memoryInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(memoryInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_memoryInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 
	unsigned int ram  = 0; 

	/*Memory assign*/
	systemREG1_tmp = systemREG1_tmp_mem;

	/*Input*/
	systemREG1_tmp_mem[0].MSINENA = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MSINENA");
	systemREG1_tmp_mem[0].MINITGCR = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MINITGCR");
	systemREG1_tmp_mem[0].MSTCGSTAT = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MSTCGSTAT");
	ram = CS_UINT_INPUT(unsigned int,"ram");



	/* memoryInit(unsigned int) */
	memoryInit(ram);




	/*Output*/
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].MSINENA, "systemREG1_tmp_mem[0].MSINENA");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].MINITGCR, "systemREG1_tmp_mem[0].MINITGCR");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].MSTCGSTAT, "systemREG1_tmp_mem[0].MSTCGSTAT");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_memoryInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
