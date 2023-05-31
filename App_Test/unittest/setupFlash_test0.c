#line 2 "cs_test%setupFlash_test0%cs_error"
/* setupFlash_test0.c */
#ifndef __setupFlash_test0__
#define __setupFlash_test0__

#include "../factory/factory.h"

#include "setupFlash_test0.h"

void CS_TEST setupFlash_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(setupFlash_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_setupFlash_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct flashWBase flashWREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	flashWREG_tmp = flashWREG_tmp_mem;

	/*Input*/
	EEPROM_CONFIG_HL_tmp = CS_UINT_INPUT(unsigned int,"EEPROM_CONFIG_HL_tmp");
	FSM_WR_ENA_HL_tmp = CS_UINT_INPUT(unsigned int,"FSM_WR_ENA_HL_tmp");
	flashWREG_tmp_mem[0].FRDCNTL = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FRDCNTL");
	flashWREG_tmp_mem[0].FBFALLBACK = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FBFALLBACK");



	/* setupFlash() */
	setupFlash();




	/*Output*/
	CS_UINT_OUTPUT(EEPROM_CONFIG_HL_tmp, "EEPROM_CONFIG_HL_tmp");
	CS_UINT_OUTPUT(FSM_WR_ENA_HL_tmp, "FSM_WR_ENA_HL_tmp");
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].FRDCNTL, "flashWREG_tmp_mem[0].FRDCNTL");
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].FBFALLBACK, "flashWREG_tmp_mem[0].FBFALLBACK");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_setupFlash_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
