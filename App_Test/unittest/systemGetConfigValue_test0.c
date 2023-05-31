#line 2 "cs_test%systemGetConfigValue_test0%cs_error"
/* systemGetConfigValue_test0.c */
#ifndef __systemGetConfigValue_test0__
#define __systemGetConfigValue_test0__

#include "../factory/factory.h"

#include "systemGetConfigValue_test0.h"

void CS_TEST systemGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(systemGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_systemGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 
	struct systemBase2 systemREG2_tmp_mem [1]={0,}; 
	system_config_reg_t * config_reg  = 0x0;
	struct system_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	systemREG1_tmp = systemREG1_tmp_mem;
	systemREG2_tmp = systemREG2_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	LPO_TRIM_VALUE_tmp = CS_UINT_INPUT(unsigned int,"LPO_TRIM_VALUE_tmp");
	systemREG1_tmp_mem[0].DEVCR1 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].DEVCR1");
	systemREG1_tmp_mem[0].SYSPC1 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].SYSPC1");
	systemREG1_tmp_mem[0].SYSPC10 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].SYSPC10");
	systemREG1_tmp_mem[0].BMMCR1 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].BMMCR1");
	systemREG1_tmp_mem[0].SYSPC2 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].SYSPC2");
	systemREG1_tmp_mem[0].SYSESR = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].SYSESR");
	systemREG1_tmp_mem[0].ECPCNTL = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].ECPCNTL");
	systemREG1_tmp_mem[0].CSDIS = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSDIS");
	systemREG1_tmp_mem[0].MINISTAT = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MINISTAT");
	systemREG1_tmp_mem[0].RAMGCR = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].RAMGCR");
	systemREG1_tmp_mem[0].GPREG1 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].GPREG1");
	systemREG1_tmp_mem[0].MSTGCR = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MSTGCR");
	systemREG1_tmp_mem[0].MSINENA = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MSINENA");
	systemREG1_tmp_mem[0].GHVSRC = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].GHVSRC");
	systemREG1_tmp_mem[0].VCLKASRC = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].VCLKASRC");
	systemREG1_tmp_mem[0].RCLKSRC = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].RCLKSRC");
	systemREG1_tmp_mem[0].SYSPC7 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].SYSPC7");
	systemREG1_tmp_mem[0].CDDIS = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CDDIS");
	systemREG1_tmp_mem[0].SYSPC9 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].SYSPC9");
	systemREG1_tmp_mem[0].SYSPC8 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].SYSPC8");
	systemREG1_tmp_mem[0].CPURSTCR = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CPURSTCR");
	systemREG1_tmp_mem[0].CLKTEST = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CLKTEST");
	systemREG1_tmp_mem[0].LPOMONCTL = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].LPOMONCTL");
	systemREG1_tmp_mem[0].DFTCTRLREG1 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].DFTCTRLREG1");
	systemREG1_tmp_mem[0].DFTCTRLREG2 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].DFTCTRLREG2");
	systemREG1_tmp_mem[0].CLKCNTL = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CLKCNTL");
	systemREG1_tmp_mem[0].PLLCTL1 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].PLLCTL1");
	systemREG1_tmp_mem[0].PLLCTL2 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].PLLCTL2");
	systemREG2_tmp_mem[0].PLLCTL3 = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].PLLCTL3");
	systemREG2_tmp_mem[0].STCCLKDIV = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].STCCLKDIV");
	systemREG2_tmp_mem[0].CLK2CNTL = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].CLK2CNTL");
	systemREG2_tmp_mem[0].VCLKACON1 = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].VCLKACON1");
	systemREG2_tmp_mem[0].CLKSLIP = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].CLKSLIP");
	systemREG2_tmp_mem[0].EFC_CTLEN = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].EFC_CTLEN");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* systemGetConfigValue(struct system_config_reg *, enum config_value_type) */
	systemGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_systemGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
