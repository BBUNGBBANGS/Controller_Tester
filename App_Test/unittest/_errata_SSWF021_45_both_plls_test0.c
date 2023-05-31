#line 2 "cs_test%_errata_SSWF021_45_both_plls_test0%cs_error"
/* _errata_SSWF021_45_both_plls_test0.c */
#ifndef ___errata_SSWF021_45_both_plls_test0__
#define ___errata_SSWF021_45_both_plls_test0__

#include "../factory/factory.h"

#include "_errata_SSWF021_45_both_plls_test0.h"

void CS_TEST _errata_SSWF021_45_both_plls_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(_errata_SSWF021_45_both_plls_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect__errata_SSWF021_45_both_plls_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 
	struct systemBase2 systemREG2_tmp_mem [1]={0,}; 
	unsigned int count  = 0; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;
	systemREG1_tmp = systemREG1_tmp_mem;
	systemREG2_tmp = systemREG2_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	esmREG_tmp_mem[0].SR4[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR4[0]");
	systemREG1_tmp_mem[0].GBLSTAT = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].GBLSTAT");
	systemREG1_tmp_mem[0].CSVSTAT = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSVSTAT");
	systemREG1_tmp_mem[0].CSDISCLR = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSDISCLR");
	systemREG1_tmp_mem[0].CLKCNTL = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CLKCNTL");
	systemREG1_tmp_mem[0].PLLCTL1 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].PLLCTL1");
	systemREG1_tmp_mem[0].PLLCTL2 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].PLLCTL2");
	systemREG2_tmp_mem[0].PLLCTL3 = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].PLLCTL3");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");
	count = CS_UINT_INPUT(unsigned int,"count");



	/* unsigned int _errata_SSWF021_45_both_plls(unsigned int) */
	returnVar = _errata_SSWF021_45_both_plls(count);




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[0], "esmREG_tmp_mem[0].SR1[0]");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR4[0], "esmREG_tmp_mem[0].SR4[0]");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].GBLSTAT, "systemREG1_tmp_mem[0].GBLSTAT");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CSDISCLR, "systemREG1_tmp_mem[0].CSDISCLR");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CLKCNTL, "systemREG1_tmp_mem[0].CLKCNTL");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].PLLCTL1, "systemREG1_tmp_mem[0].PLLCTL1");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].PLLCTL2, "systemREG1_tmp_mem[0].PLLCTL2");
	CS_UINT_OUTPUT(systemREG2_tmp_mem[0].PLLCTL3, "systemREG2_tmp_mem[0].PLLCTL3");
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect__errata_SSWF021_45_both_plls_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
