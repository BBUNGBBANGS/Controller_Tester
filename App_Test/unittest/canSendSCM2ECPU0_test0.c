#line 2 "cs_test%canSendSCM2ECPU0_test0%cs_error"
/* canSendSCM2ECPU0_test0.c */
#ifndef __canSendSCM2ECPU0_test0__
#define __canSendSCM2ECPU0_test0__

#include "../factory/factory.h"

#include "canSendSCM2ECPU0_test0.h"

void CS_TEST canSendSCM2ECPU0_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(canSendSCM2ECPU0_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_canSendSCM2ECPU0_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct canBase canREG1_tmp_mem [1]={0,}; 
	int returnVar = 0; 

	/*Memory assign*/
	canREG1_tmp = canREG1_tmp_mem;

	/*Input*/
	canREG1_tmp_mem[0].IF1DATx[0] = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF1DATx[0]");
	canREG1_tmp_mem[0].IF1CMD = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF1CMD");
	canREG1_tmp_mem[0].TXRQX = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].TXRQX");
	canREG1_tmp_mem[0].IF1STAT = CS_UINT_INPUT(unsigned char,"canREG1_tmp_mem[0].IF1STAT");
	canREG1_tmp_mem[0].TXRQx[0] = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].TXRQx[0]");
	canREG1_tmp_mem[0].TXRQx[1] = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].TXRQx[1]");
	canREG1_tmp_mem[0].TXRQx[2] = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].TXRQx[2]");
	canREG1_tmp_mem[0].TXRQx[3] = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].TXRQx[3]");
	g_IntfSCM2ECPU0.bSWVer00_XX = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bSWVer00_XX");
	g_IntfSCM2ECPU0.nSeqNo = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.nSeqNo");
	g_IntfSCM2ECPU0.bDO1 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bDO1");
	g_IntfSCM2ECPU0.bDO4 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bDO4");
	g_IntfSCM2ECPU0.bDO5 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bDO5");
	g_IntfSCM2ECPU0.bDO2 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bDO2");
	g_IntfSCM2ECPU0.bSWVerXX_00 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bSWVerXX_00");
	g_IntfSCM2ECPU0.bDO3 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bDO3");
	g_IntfSCM2ECPU0.bDI2 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bDI2");
	g_IntfSCM2ECPU0.bDI3 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bDI3");
	g_IntfSCM2ECPU0.bDO6 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bDO6");
	g_IntfSCM2ECPU0.bDI1 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bDI1");
	g_IntfSCM2ECPU0.bDI6 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bDI6");
	g_IntfSCM2ECPU0.bDI7 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bDI7");
	g_IntfSCM2ECPU0.bDI4 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bDI4");
	g_IntfSCM2ECPU0.bDI5 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bDI5");
	g_IntfSCM2ECPU0.bDI8 = CS_UINT_INPUT(unsigned char,"g_IntfSCM2ECPU0.bDI8");
	g_pinDI[0] = CS_INT_INPUT(signed char,"g_pinDI[0]");
	g_pinDI[1] = CS_INT_INPUT(signed char,"g_pinDI[1]");
	g_pinDI[2] = CS_INT_INPUT(signed char,"g_pinDI[2]");
	g_pinDI[3] = CS_INT_INPUT(signed char,"g_pinDI[3]");
	g_pinDI[4] = CS_INT_INPUT(signed char,"g_pinDI[4]");
	g_pinDI[5] = CS_INT_INPUT(signed char,"g_pinDI[5]");
	g_pinDI[6] = CS_INT_INPUT(signed char,"g_pinDI[6]");
	g_pinDI[7] = CS_INT_INPUT(signed char,"g_pinDI[7]");
	g_pinDO[0] = CS_INT_INPUT(signed char,"g_pinDO[0]");
	g_pinDO[1] = CS_INT_INPUT(signed char,"g_pinDO[1]");
	g_pinDO[2] = CS_INT_INPUT(signed char,"g_pinDO[2]");
	g_pinDO[3] = CS_INT_INPUT(signed char,"g_pinDO[3]");
	g_pinDO[4] = CS_INT_INPUT(signed char,"g_pinDO[4]");
	g_pinDO[5] = CS_INT_INPUT(signed char,"g_pinDO[5]");



	/* int canSendSCM2ECPU0() */
	returnVar = canSendSCM2ECPU0();




	/*Output*/
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].IF1DATx[0], "canREG1_tmp_mem[0].IF1DATx[0]");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bSWVer00_XX, "g_IntfSCM2ECPU0.bSWVer00_XX");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.nSeqNo, "g_IntfSCM2ECPU0.nSeqNo");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bDO1, "g_IntfSCM2ECPU0.bDO1");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bDO4, "g_IntfSCM2ECPU0.bDO4");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bDO5, "g_IntfSCM2ECPU0.bDO5");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bDO2, "g_IntfSCM2ECPU0.bDO2");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bSWVerXX_00, "g_IntfSCM2ECPU0.bSWVerXX_00");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bDO3, "g_IntfSCM2ECPU0.bDO3");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bDI2, "g_IntfSCM2ECPU0.bDI2");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bDI3, "g_IntfSCM2ECPU0.bDI3");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bDO6, "g_IntfSCM2ECPU0.bDO6");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bDI1, "g_IntfSCM2ECPU0.bDI1");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bDI6, "g_IntfSCM2ECPU0.bDI6");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bDI7, "g_IntfSCM2ECPU0.bDI7");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bDI4, "g_IntfSCM2ECPU0.bDI4");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bDI5, "g_IntfSCM2ECPU0.bDI5");
	CS_UINT_OUTPUT(g_IntfSCM2ECPU0.bDI8, "g_IntfSCM2ECPU0.bDI8");
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_canSendSCM2ECPU0_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
