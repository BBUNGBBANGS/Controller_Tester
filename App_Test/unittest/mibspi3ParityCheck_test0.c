#line 2 "cs_test%mibspi3ParityCheck_test0%cs_error"
/* mibspi3ParityCheck_test0.c */
#ifndef __mibspi3ParityCheck_test0__
#define __mibspi3ParityCheck_test0__

#include "../factory/factory.h"

#include "mibspi3ParityCheck_test0.h"

void CS_TEST mibspi3ParityCheck_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(mibspi3ParityCheck_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_mibspi3ParityCheck_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct mibspiBase mibspiREG3_tmp_mem [1]={0,}; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;
	mibspiREG3_tmp = mibspiREG3_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	mibspiREG3_tmp_mem[0].UERRCTRL = CS_UINT_INPUT(unsigned int,"mibspiREG3_tmp_mem[0].UERRCTRL");
	mibspiREG3_tmp_mem[0].MIBSPIE = CS_UINT_INPUT(unsigned int,"mibspiREG3_tmp_mem[0].MIBSPIE");



	/* mibspi3ParityCheck() */
	mibspi3ParityCheck();




	/*Output*/
	CS_UINT_OUTPUT(mibspiREG3_tmp_mem[0].UERRCTRL, "mibspiREG3_tmp_mem[0].UERRCTRL");
	CS_UINT_OUTPUT(mibspiREG3_tmp_mem[0].MIBSPIE, "mibspiREG3_tmp_mem[0].MIBSPIE");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_mibspi3ParityCheck_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
