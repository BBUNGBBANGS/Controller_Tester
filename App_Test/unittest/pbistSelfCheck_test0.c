#line 2 "cs_test%pbistSelfCheck_test0%cs_error"
/* pbistSelfCheck_test0.c */
#ifndef __pbistSelfCheck_test0__
#define __pbistSelfCheck_test0__

#include "../factory/factory.h"

#include "pbistSelfCheck_test0.h"

void CS_TEST pbistSelfCheck_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pbistSelfCheck_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pbistSelfCheck_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned int address_0xFFFF0400U_mem [1]={0,}; 
	unsigned int address_0xFFFF040CU_mem [1]={0,}; 
	unsigned int address_0xFFFFE400U_mem [1]={0,}; 
	unsigned int address_0xFFFFE404U_mem [1]={0,}; 
	unsigned int address_0xFFFFE408U_mem [1]={0,}; 
	unsigned int address_0xFFFFE40CU_mem [1]={0,}; 
	unsigned int address_0xFFFFE410U_mem [1]={0,}; 
	unsigned int address_0xFFFFE414U_mem [1]={0,}; 
	unsigned int address_0xFFFFE418U_mem [1]={0,}; 
	unsigned int address_0xFFFFE440U_mem [1]={0,}; 
	unsigned int address_0xFFFFE444U_mem [1]={0,}; 
	unsigned int address_0xFFFFE448U_mem [1]={0,}; 
	unsigned int address_0xFFFFE44CU_mem [1]={0,}; 
	unsigned int address_0xFFFFE450U_mem [1]={0,}; 
	unsigned int address_0xFFFFE454U_mem [1]={0,}; 
	unsigned int address_0xFFFFE458U_mem [1]={0,}; 
	unsigned int address_0xFFFFE520U_mem [1]={0,}; 
	unsigned int address_0xFFFFE524U_mem [1]={0,}; 
	unsigned int address_0xFFFFE530U_mem [1]={0,}; 
	unsigned int address_0xFFFFE540U_mem [1]={0,}; 
	unsigned int address_0xFFFFE550U_mem [1]={0,}; 
	struct pbistBase pbistREG_tmp_mem [1]={0,}; 
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	address_0xFFFF0400U = address_0xFFFF0400U_mem;
	address_0xFFFF040CU = address_0xFFFF040CU_mem;
	address_0xFFFFE400U = address_0xFFFFE400U_mem;
	address_0xFFFFE404U = address_0xFFFFE404U_mem;
	address_0xFFFFE408U = address_0xFFFFE408U_mem;
	address_0xFFFFE40CU = address_0xFFFFE40CU_mem;
	address_0xFFFFE410U = address_0xFFFFE410U_mem;
	address_0xFFFFE414U = address_0xFFFFE414U_mem;
	address_0xFFFFE418U = address_0xFFFFE418U_mem;
	address_0xFFFFE440U = address_0xFFFFE440U_mem;
	address_0xFFFFE444U = address_0xFFFFE444U_mem;
	address_0xFFFFE448U = address_0xFFFFE448U_mem;
	address_0xFFFFE44CU = address_0xFFFFE44CU_mem;
	address_0xFFFFE450U = address_0xFFFFE450U_mem;
	address_0xFFFFE454U = address_0xFFFFE454U_mem;
	address_0xFFFFE458U = address_0xFFFFE458U_mem;
	address_0xFFFFE520U = address_0xFFFFE520U_mem;
	address_0xFFFFE524U = address_0xFFFFE524U_mem;
	address_0xFFFFE530U = address_0xFFFFE530U_mem;
	address_0xFFFFE540U = address_0xFFFFE540U_mem;
	address_0xFFFFE550U = address_0xFFFFE550U_mem;
	pbistREG_tmp = pbistREG_tmp_mem;
	systemREG1_tmp = systemREG1_tmp_mem;

	/*Input*/
	pbistREG_tmp_mem[0].FSRF0 = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].FSRF0");
	pbistREG_tmp_mem[0].PACT = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].PACT");
	pbistREG_tmp_mem[0].DLR = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].DLR");
	pbistREG_tmp_mem[0].RAMT = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].RAMT");
	pbistREG_tmp_mem[0].rsvd1[1] = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].rsvd1[1]");
	systemREG1_tmp_mem[0].MSTGCR = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MSTGCR");
	systemREG1_tmp_mem[0].MINITGCR = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MINITGCR");
	systemREG1_tmp_mem[0].MSINENA = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MSINENA");
	systemREG1_tmp_mem[0].MSTCGSTAT = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MSTCGSTAT");



	/* pbistSelfCheck() */
	pbistSelfCheck();




	/*Output*/
	CS_UINT_OUTPUT(pbistREG_tmp_mem[0].PACT, "pbistREG_tmp_mem[0].PACT");
	CS_UINT_OUTPUT(pbistREG_tmp_mem[0].DLR, "pbistREG_tmp_mem[0].DLR");
	CS_UINT_OUTPUT(pbistREG_tmp_mem[0].RAMT, "pbistREG_tmp_mem[0].RAMT");
	CS_UINT_OUTPUT(pbistREG_tmp_mem[0].rsvd1[1], "pbistREG_tmp_mem[0].rsvd1[1]");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].MSTGCR, "systemREG1_tmp_mem[0].MSTGCR");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].MINITGCR, "systemREG1_tmp_mem[0].MINITGCR");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].MSINENA, "systemREG1_tmp_mem[0].MSINENA");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].MSTCGSTAT, "systemREG1_tmp_mem[0].MSTCGSTAT");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pbistSelfCheck_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
