#line 2 "cs_test%canInit_test0%cs_error"
/* canInit_test0.c */
#ifndef __canInit_test0__
#define __canInit_test0__

#include "../factory/factory.h"

#include "canInit_test0.h"

void CS_TEST canInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct canBase canREG1_tmp_mem [1]={0,}; 
	struct canBase canREG2_tmp_mem [1]={0,}; 
	struct canBase canREG3_tmp_mem [1]={0,}; 

	/*Memory assign*/
	canREG1_tmp = canREG1_tmp_mem;
	canREG2_tmp = canREG2_tmp_mem;
	canREG3_tmp = canREG3_tmp_mem;

	/*Input*/
	canREG1_tmp_mem[0].CTL = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].CTL");
	canREG1_tmp_mem[0].ES = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].ES");
	canREG1_tmp_mem[0].BTR = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].BTR");
	canREG1_tmp_mem[0].ABOTR = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].ABOTR");
	canREG1_tmp_mem[0].INTMUXx[0] = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].INTMUXx[0]");
	canREG1_tmp_mem[0].INTMUXx[1] = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].INTMUXx[1]");
	canREG1_tmp_mem[0].IF1NO = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF1NO");
	canREG1_tmp_mem[0].IF1STAT = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF1STAT");
	canREG1_tmp_mem[0].IF1CMD = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF1CMD");
	canREG1_tmp_mem[0].IF1MSK = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].IF1MSK");
	canREG1_tmp_mem[0].IF1ARB = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].IF1ARB");
	canREG1_tmp_mem[0].IF1MCTL = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].IF1MCTL");
	canREG1_tmp_mem[0].IF2NO = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF2NO");
	canREG1_tmp_mem[0].IF2STAT = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF2STAT");
	canREG1_tmp_mem[0].IF2CMD = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF2CMD");
	canREG1_tmp_mem[0].IF2MSK = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].IF2MSK");
	canREG1_tmp_mem[0].IF2ARB = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].IF2ARB");
	canREG1_tmp_mem[0].IF2MCTL = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].IF2MCTL");
	canREG1_tmp_mem[0].TIOC = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].TIOC");
	canREG1_tmp_mem[0].RIOC = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].RIOC");
	canREG2_tmp_mem[0].CTL = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].CTL");
	canREG2_tmp_mem[0].TIOC = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].TIOC");
	canREG2_tmp_mem[0].RIOC = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].RIOC");
	canREG3_tmp_mem[0].CTL = CS_UINT_INPUT(unsigned int,"canREG3_tmp_mem[0].CTL");
	canREG3_tmp_mem[0].TIOC = CS_UINT_INPUT(unsigned int,"canREG3_tmp_mem[0].TIOC");
	canREG3_tmp_mem[0].RIOC = CS_UINT_INPUT(unsigned int,"canREG3_tmp_mem[0].RIOC");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* canInit() */
	canInit();




	/*Output*/
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].CTL, "canREG1_tmp_mem[0].CTL");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].ES, "canREG1_tmp_mem[0].ES");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].BTR, "canREG1_tmp_mem[0].BTR");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].ABOTR, "canREG1_tmp_mem[0].ABOTR");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].INTMUXx[0], "canREG1_tmp_mem[0].INTMUXx[0]");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].INTMUXx[1], "canREG1_tmp_mem[0].INTMUXx[1]");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].IF1NO, "canREG1_tmp_mem[0].IF1NO");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].IF1CMD, "canREG1_tmp_mem[0].IF1CMD");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].IF1MSK, "canREG1_tmp_mem[0].IF1MSK");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].IF1ARB, "canREG1_tmp_mem[0].IF1ARB");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].IF1MCTL, "canREG1_tmp_mem[0].IF1MCTL");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].IF2NO, "canREG1_tmp_mem[0].IF2NO");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].IF2CMD, "canREG1_tmp_mem[0].IF2CMD");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].IF2MSK, "canREG1_tmp_mem[0].IF2MSK");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].IF2ARB, "canREG1_tmp_mem[0].IF2ARB");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].IF2MCTL, "canREG1_tmp_mem[0].IF2MCTL");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].TIOC, "canREG1_tmp_mem[0].TIOC");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].RIOC, "canREG1_tmp_mem[0].RIOC");
	CS_UINT_OUTPUT(canREG2_tmp_mem[0].CTL, "canREG2_tmp_mem[0].CTL");
	CS_UINT_OUTPUT(canREG2_tmp_mem[0].TIOC, "canREG2_tmp_mem[0].TIOC");
	CS_UINT_OUTPUT(canREG2_tmp_mem[0].RIOC, "canREG2_tmp_mem[0].RIOC");
	CS_UINT_OUTPUT(canREG3_tmp_mem[0].CTL, "canREG3_tmp_mem[0].CTL");
	CS_UINT_OUTPUT(canREG3_tmp_mem[0].TIOC, "canREG3_tmp_mem[0].TIOC");
	CS_UINT_OUTPUT(canREG3_tmp_mem[0].RIOC, "canREG3_tmp_mem[0].RIOC");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
