#line 2 "cs_test%mibspi5ParityCheck_test0%cs_error"
/* mibspi5ParityCheck_test0.c */
#ifndef __mibspi5ParityCheck_test0__
#define __mibspi5ParityCheck_test0__

#include "../factory/factory.h"

#include "mibspi5ParityCheck_test0.h"

void CS_TEST mibspi5ParityCheck_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(mibspi5ParityCheck_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_mibspi5ParityCheck_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct mibspiBase mibspiREG5_tmp_mem [1]={0,}; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;
	mibspiREG5_tmp = mibspiREG5_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	mibspiREG5_tmp_mem[0].UERRCTRL = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].UERRCTRL");
	mibspiREG5_tmp_mem[0].MIBSPIE = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].MIBSPIE");



	/* mibspi5ParityCheck() */
	mibspi5ParityCheck();




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[0], "esmREG_tmp_mem[0].SR1[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_mibspi5ParityCheck_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
