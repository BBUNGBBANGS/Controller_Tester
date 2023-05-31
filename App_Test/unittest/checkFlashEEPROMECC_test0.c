#line 2 "cs_test%checkFlashEEPROMECC_test0%cs_error"
/* checkFlashEEPROMECC_test0.c */
#ifndef __checkFlashEEPROMECC_test0__
#define __checkFlashEEPROMECC_test0__

#include "../factory/factory.h"

#include "checkFlashEEPROMECC_test0.h"

void CS_TEST checkFlashEEPROMECC_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(checkFlashEEPROMECC_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_checkFlashEEPROMECC_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct flashWBase flashWREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;
	flashWREG_tmp = flashWREG_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].SR4[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR4[0]");
	flashWREG_tmp_mem[0].FEMUDMSW = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FEMUDMSW");
	flashWREG_tmp_mem[0].FEMUDLSW = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FEMUDLSW");
	flashWREG_tmp_mem[0].FEMUECC = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FEMUECC");
	flashWREG_tmp_mem[0].FEMUADDR = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FEMUADDR");
	flashWREG_tmp_mem[0].FDIAGCTRL = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FDIAGCTRL");
	flashWREG_tmp_mem[0].EECTRL1 = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].EECTRL1");
	flashWREG_tmp_mem[0].EECTRL2 = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].EECTRL2");
	flashWREG_tmp_mem[0].EESTATUS = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].EESTATUS");
	flashWREG_tmp_mem[0].EEUNCERRADD = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].EEUNCERRADD");



	/* checkFlashEEPROMECC() */
	checkFlashEEPROMECC();




	/*Output*/
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].FEMUDMSW, "flashWREG_tmp_mem[0].FEMUDMSW");
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].FEMUDLSW, "flashWREG_tmp_mem[0].FEMUDLSW");
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].FEMUECC, "flashWREG_tmp_mem[0].FEMUECC");
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].FEMUADDR, "flashWREG_tmp_mem[0].FEMUADDR");
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].FDIAGCTRL, "flashWREG_tmp_mem[0].FDIAGCTRL");
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].EECTRL1, "flashWREG_tmp_mem[0].EECTRL1");
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].EECTRL2, "flashWREG_tmp_mem[0].EECTRL2");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_checkFlashEEPROMECC_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
