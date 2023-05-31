#line 2 "cs_test%mibspi5GetConfigValue_test0%cs_error"
/* mibspi5GetConfigValue_test0.c */
#ifndef __mibspi5GetConfigValue_test0__
#define __mibspi5GetConfigValue_test0__

#include "../factory/factory.h"

#include "mibspi5GetConfigValue_test0.h"

void CS_TEST mibspi5GetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(mibspi5GetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_mibspi5GetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct mibspiBase mibspiREG5_tmp_mem [1]={0,}; 
	mibspi_config_reg_t * config_reg  = 0x0;
	struct mibspi_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	mibspiREG5_tmp = mibspiREG5_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	mibspiREG5_tmp_mem[0].PC8 = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].PC8");
	mibspiREG5_tmp_mem[0].PC7 = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].PC7");
	mibspiREG5_tmp_mem[0].PC6 = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].PC6");
	mibspiREG5_tmp_mem[0].UERRCTRL = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].UERRCTRL");
	mibspiREG5_tmp_mem[0].PC1 = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].PC1");
	mibspiREG5_tmp_mem[0].PC0 = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].PC0");
	mibspiREG5_tmp_mem[0].INT0 = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].INT0");
	mibspiREG5_tmp_mem[0].LVL = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].LVL");
	mibspiREG5_tmp_mem[0].MIBSPIE = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].MIBSPIE");
	mibspiREG5_tmp_mem[0].GCR1 = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].GCR1");
	mibspiREG5_tmp_mem[0].TGCTRL[0] = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].TGCTRL[0]");
	mibspiREG5_tmp_mem[0].TGCTRL[1] = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].TGCTRL[1]");
	mibspiREG5_tmp_mem[0].TGCTRL[2] = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].TGCTRL[2]");
	mibspiREG5_tmp_mem[0].TGCTRL[3] = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].TGCTRL[3]");
	mibspiREG5_tmp_mem[0].TGCTRL[4] = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].TGCTRL[4]");
	mibspiREG5_tmp_mem[0].TGCTRL[5] = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].TGCTRL[5]");
	mibspiREG5_tmp_mem[0].TGCTRL[6] = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].TGCTRL[6]");
	mibspiREG5_tmp_mem[0].TGCTRL[7] = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].TGCTRL[7]");
	mibspiREG5_tmp_mem[0].LTGPEND = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].LTGPEND");
	mibspiREG5_tmp_mem[0].DELAY = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].DELAY");
	mibspiREG5_tmp_mem[0].FMT0 = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].FMT0");
	mibspiREG5_tmp_mem[0].FMT1 = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].FMT1");
	mibspiREG5_tmp_mem[0].FMT2 = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].FMT2");
	mibspiREG5_tmp_mem[0].FMT3 = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].FMT3");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* mibspi5GetConfigValue(struct mibspi_config_reg *, enum config_value_type) */
	mibspi5GetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_mibspi5GetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
