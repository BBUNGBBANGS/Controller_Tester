#line 2 "cs_test%getTick_test0%cs_error"
/* getTick_test0.c */
#ifndef __getTick_test0__
#define __getTick_test0__

#include "../factory/factory.h"

#include "getTick_test0.h"

void CS_TEST getTick_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(getTick_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_getTick_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	g_nTick = CS_UINT_INPUT(unsigned int,"g_nTick");
	g_nTickBase = CS_UINT_INPUT(unsigned int,"g_nTickBase");
	g_s_nTick = CS_UINT_INPUT(unsigned int,"g_s_nTick");
	rtiREG1_tmp_mem[0].CNT[0].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].FRCx");
	rtiREG1_tmp_mem[0].CMP[0].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].COMPx");
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");



	/* unsigned int getTick() */
	returnVar = getTick();




	/*Output*/
	CS_UINT_OUTPUT(g_nTick, "g_nTick");
	CS_UINT_OUTPUT(g_nTickBase, "g_nTickBase");
	CS_UINT_OUTPUT(g_s_nTick, "g_s_nTick");
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_getTick_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
