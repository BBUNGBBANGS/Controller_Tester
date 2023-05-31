#line 2 "cs_test%rtiInit_test0%cs_error"
/* rtiInit_test0.c */
#ifndef __rtiInit_test0__
#define __rtiInit_test0__

#include "../factory/factory.h"

#include "rtiInit_test0.h"

void CS_TEST rtiInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(rtiInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_rtiInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	rtiREG1_tmp_mem[0].GCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].GCTRL");
	rtiREG1_tmp_mem[0].TBCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].TBCTRL");
	rtiREG1_tmp_mem[0].CAPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CAPCTRL");
	rtiREG1_tmp_mem[0].COMPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMPCTRL");
	rtiREG1_tmp_mem[0].CNT[0].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].FRCx");
	rtiREG1_tmp_mem[0].CNT[0].UCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].UCx");
	rtiREG1_tmp_mem[0].CNT[0].CPUCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].CPUCx");
	rtiREG1_tmp_mem[0].CNT[1].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[1].FRCx");
	rtiREG1_tmp_mem[0].CNT[1].UCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[1].UCx");
	rtiREG1_tmp_mem[0].CNT[1].CPUCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[1].CPUCx");
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	rtiREG1_tmp_mem[0].CMP[0].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].COMPx");
	rtiREG1_tmp_mem[0].CMP[1].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[1].UDCPx");
	rtiREG1_tmp_mem[0].CMP[1].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[1].COMPx");
	rtiREG1_tmp_mem[0].CMP[2].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[2].COMPx");
	rtiREG1_tmp_mem[0].CMP[2].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[2].UDCPx");
	rtiREG1_tmp_mem[0].CMP[3].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[3].COMPx");
	rtiREG1_tmp_mem[0].CMP[3].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[3].UDCPx");
	rtiREG1_tmp_mem[0].CLEARINTENA = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CLEARINTENA");
	rtiREG1_tmp_mem[0].INTFLAG = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].INTFLAG");



	/* rtiInit() */
	rtiInit();




	/*Output*/
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].GCTRL, "rtiREG1_tmp_mem[0].GCTRL");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].TBCTRL, "rtiREG1_tmp_mem[0].TBCTRL");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CAPCTRL, "rtiREG1_tmp_mem[0].CAPCTRL");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].COMPCTRL, "rtiREG1_tmp_mem[0].COMPCTRL");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CNT[0].FRCx, "rtiREG1_tmp_mem[0].CNT[0].FRCx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CNT[0].UCx, "rtiREG1_tmp_mem[0].CNT[0].UCx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CNT[0].CPUCx, "rtiREG1_tmp_mem[0].CNT[0].CPUCx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CNT[1].FRCx, "rtiREG1_tmp_mem[0].CNT[1].FRCx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CNT[1].UCx, "rtiREG1_tmp_mem[0].CNT[1].UCx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CNT[1].CPUCx, "rtiREG1_tmp_mem[0].CNT[1].CPUCx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[0].UDCPx, "rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[0].COMPx, "rtiREG1_tmp_mem[0].CMP[0].COMPx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[1].UDCPx, "rtiREG1_tmp_mem[0].CMP[1].UDCPx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[1].COMPx, "rtiREG1_tmp_mem[0].CMP[1].COMPx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[2].COMPx, "rtiREG1_tmp_mem[0].CMP[2].COMPx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[2].UDCPx, "rtiREG1_tmp_mem[0].CMP[2].UDCPx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[3].COMPx, "rtiREG1_tmp_mem[0].CMP[3].COMPx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CMP[3].UDCPx, "rtiREG1_tmp_mem[0].CMP[3].UDCPx");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].CLEARINTENA, "rtiREG1_tmp_mem[0].CLEARINTENA");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].INTFLAG, "rtiREG1_tmp_mem[0].INTFLAG");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_rtiInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif