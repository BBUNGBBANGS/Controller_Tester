#line 2 "cs_test%can1HighLevelInterrupt_test0%cs_error"
/* can1HighLevelInterrupt_test0.c */
#ifndef __can1HighLevelInterrupt_test0__
#define __can1HighLevelInterrupt_test0__

#include "../factory/factory.h"

#include "can1HighLevelInterrupt_test0.h"

void CS_TEST can1HighLevelInterrupt_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(can1HighLevelInterrupt_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_can1HighLevelInterrupt_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%can1HighLevelInterrupt_test0%User code start"

int g_canRxComp0;
int g_canRxComp1;
int g_canRxComp2;
int g_canRxComp3;
#line 25 "cs_test%can1HighLevelInterrupt_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct canBase canREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	canREG1_tmp = canREG1_tmp_mem;

	/*Input*/
	canREG1_tmp_mem[0].ES = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].ES");
	canREG1_tmp_mem[0].INT = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].INT");
	canREG1_tmp_mem[0].NWDATx[0] = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].NWDATx[0]");
	canREG1_tmp_mem[0].NWDATx[1] = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].NWDATx[1]");
	canREG1_tmp_mem[0].NWDATx[2] = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].NWDATx[2]");
	canREG1_tmp_mem[0].NWDATx[3] = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].NWDATx[3]");
	canREG1_tmp_mem[0].IF1NO = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF1NO");
	canREG1_tmp_mem[0].IF1STAT = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF1STAT");
	canREG1_tmp_mem[0].IF1CMD = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF1CMD");
	canREG1_tmp_mem[0].IF2STAT = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF2STAT");
	canREG1_tmp_mem[0].IF2MCTL = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].IF2MCTL");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* can1HighLevelInterrupt() */
	can1HighLevelInterrupt();
#line 1 "cs_test%can1HighLevelInterrupt_test0%AFTER_CALL_CODE_KEY_can1HighLevelInterrupt441345321"
if (CS_TESTCASENO() == 4)
{
	canGetData(canREG1_tmp, 3, 0 );
}
#line 55 "cs_test%can1HighLevelInterrupt_test0%cs_error"



	/*Output*/
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].IF1NO, "canREG1_tmp_mem[0].IF1NO");
	CS_INT_OUTPUT(g_canRxComp0, "g_canRxComp0");
	CS_INT_OUTPUT(g_canRxComp1, "g_canRxComp1");
	CS_INT_OUTPUT(g_canRxComp2, "g_canRxComp2");
	CS_INT_OUTPUT(g_canRxComp3, "g_canRxComp3");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_can1HighLevelInterrupt_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
