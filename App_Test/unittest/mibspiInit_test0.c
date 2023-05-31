#line 2 "cs_test%mibspiInit_test0%cs_error"
/* mibspiInit_test0.c */
#ifndef __mibspiInit_test0__
#define __mibspiInit_test0__

#include "../factory/factory.h"

#include "mibspiInit_test0.h"

void CS_TEST mibspiInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(mibspiInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_mibspiInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct mibspiRamBase mibspiRAM1_tmp_mem [1]={0,}; 
	struct mibspiRamBase mibspiRAM3_tmp_mem [1]={0,}; 
	struct mibspiRamBase mibspiRAM5_tmp_mem [1]={0,}; 
	struct mibspiBase mibspiREG1_tmp_mem [1]={0,}; 
	struct mibspiBase mibspiREG3_tmp_mem [1]={0,}; 
	struct mibspiBase mibspiREG5_tmp_mem [1]={0,}; 

	/*Memory assign*/
	mibspiRAM1_tmp = mibspiRAM1_tmp_mem;
	mibspiRAM3_tmp = mibspiRAM3_tmp_mem;
	mibspiRAM5_tmp = mibspiRAM5_tmp_mem;
	mibspiREG1_tmp = mibspiREG1_tmp_mem;
	mibspiREG3_tmp = mibspiREG3_tmp_mem;
	mibspiREG5_tmp = mibspiREG5_tmp_mem;

	/*Input*/
	mibspiRAM1_tmp_mem[0].tx[0].control = CS_UINT_INPUT(unsigned short,"mibspiRAM1_tmp_mem[0].tx[0].control");
	mibspiREG1_tmp_mem[0].GCR0 = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].GCR0");
	mibspiREG1_tmp_mem[0].GCR1 = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].GCR1");
	mibspiREG1_tmp_mem[0].INT0 = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].INT0");
	mibspiREG1_tmp_mem[0].FLG = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].FLG");
	mibspiREG1_tmp_mem[0].DELAY = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].DELAY");
	mibspiREG1_tmp_mem[0].DEF = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].DEF");
	mibspiREG1_tmp_mem[0].FMT0 = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].FMT0");
	mibspiREG1_tmp_mem[0].FMT1 = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].FMT1");
	mibspiREG1_tmp_mem[0].FMT2 = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].FMT2");
	mibspiREG1_tmp_mem[0].FMT3 = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].FMT3");
	mibspiREG1_tmp_mem[0].MIBSPIE = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].MIBSPIE");
	mibspiREG1_tmp_mem[0].LTGPEND = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].LTGPEND");
	mibspiREG1_tmp_mem[0].TGCTRL[0] = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].TGCTRL[0]");
	mibspiREG1_tmp_mem[0].TGCTRL[1] = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].TGCTRL[1]");
	mibspiREG1_tmp_mem[0].TGCTRL[2] = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].TGCTRL[2]");
	mibspiREG1_tmp_mem[0].TGCTRL[3] = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].TGCTRL[3]");
	mibspiREG1_tmp_mem[0].TGCTRL[4] = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].TGCTRL[4]");
	mibspiREG1_tmp_mem[0].TGCTRL[5] = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].TGCTRL[5]");
	mibspiREG1_tmp_mem[0].TGCTRL[6] = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].TGCTRL[6]");
	mibspiREG1_tmp_mem[0].TGCTRL[7] = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].TGCTRL[7]");
	mibspiREG1_tmp_mem[0].TGCTRL[8] = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].TGCTRL[8]");
	mibspiREG1_tmp_mem[0].UERRCTRL = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].UERRCTRL");



	/* mibspiInit() */
	mibspiInit();




	/*Output*/
	CS_UINT_OUTPUT(mibspiRAM1_tmp_mem[0].tx[0].control, "mibspiRAM1_tmp_mem[0].tx[0].control");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].GCR0, "mibspiREG1_tmp_mem[0].GCR0");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].GCR1, "mibspiREG1_tmp_mem[0].GCR1");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].INT0, "mibspiREG1_tmp_mem[0].INT0");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].DELAY, "mibspiREG1_tmp_mem[0].DELAY");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].DEF, "mibspiREG1_tmp_mem[0].DEF");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].FMT0, "mibspiREG1_tmp_mem[0].FMT0");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].FMT1, "mibspiREG1_tmp_mem[0].FMT1");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].FMT2, "mibspiREG1_tmp_mem[0].FMT2");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].FMT3, "mibspiREG1_tmp_mem[0].FMT3");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].MIBSPIE, "mibspiREG1_tmp_mem[0].MIBSPIE");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].LTGPEND, "mibspiREG1_tmp_mem[0].LTGPEND");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].TGCTRL[0], "mibspiREG1_tmp_mem[0].TGCTRL[0]");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].TGCTRL[1], "mibspiREG1_tmp_mem[0].TGCTRL[1]");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].TGCTRL[2], "mibspiREG1_tmp_mem[0].TGCTRL[2]");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].TGCTRL[3], "mibspiREG1_tmp_mem[0].TGCTRL[3]");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].TGCTRL[4], "mibspiREG1_tmp_mem[0].TGCTRL[4]");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].TGCTRL[5], "mibspiREG1_tmp_mem[0].TGCTRL[5]");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].TGCTRL[6], "mibspiREG1_tmp_mem[0].TGCTRL[6]");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].TGCTRL[7], "mibspiREG1_tmp_mem[0].TGCTRL[7]");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].TGCTRL[8], "mibspiREG1_tmp_mem[0].TGCTRL[8]");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].UERRCTRL, "mibspiREG1_tmp_mem[0].UERRCTRL");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_mibspiInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
