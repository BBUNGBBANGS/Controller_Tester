#line 2 "cs_test%canSendSCM2ECPU1_test0%cs_error"
/* canSendSCM2ECPU1_test0.c */
#ifndef __canSendSCM2ECPU1_test0__
#define __canSendSCM2ECPU1_test0__

#include "../factory/factory.h"

#include "canSendSCM2ECPU1_test0.h"

void CS_TEST canSendSCM2ECPU1_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canSendSCM2ECPU1_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canSendSCM2ECPU1_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct canBase canREG1_tmp_mem [1]={0,}; 
	int returnVar = 0; 

	/*Memory assign*/
	canREG1_tmp = canREG1_tmp_mem;

	/*Input*/
	canREG1_tmp_mem[0].TXRQx[0] = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].TXRQx[0]");
	canREG1_tmp_mem[0].TXRQx[1] = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].TXRQx[1]");
	canREG1_tmp_mem[0].TXRQx[2] = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].TXRQx[2]");
	canREG1_tmp_mem[0].TXRQx[3] = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].TXRQx[3]");
	canREG1_tmp_mem[0].IF1STAT = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF1STAT");
	g_sigPI[0].nFreqency = CS_UINT_INPUT(unsigned short,"g_sigPI[0].nFreqency");



	/* int canSendSCM2ECPU1() */
	returnVar = canSendSCM2ECPU1();




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canSendSCM2ECPU1_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
