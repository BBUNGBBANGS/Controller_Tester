#line 2 "cs_test%periphInit_test0%cs_error"
/* periphInit_test0.c */
#ifndef __periphInit_test0__
#define __periphInit_test0__

#include "../factory/factory.h"

#include "periphInit_test0.h"

void CS_TEST periphInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(periphInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_periphInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pcrBase pcrREG_tmp_mem [1]={0,}; 
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	pcrREG_tmp = pcrREG_tmp_mem;
	systemREG1_tmp = systemREG1_tmp_mem;

	/*Input*/
	pcrREG_tmp_mem[0].PSPWRDWNCLR0 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PSPWRDWNCLR0");
	pcrREG_tmp_mem[0].PSPWRDWNCLR1 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PSPWRDWNCLR1");
	pcrREG_tmp_mem[0].PSPWRDWNCLR2 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PSPWRDWNCLR2");
	pcrREG_tmp_mem[0].PSPWRDWNCLR3 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PSPWRDWNCLR3");
	systemREG1_tmp_mem[0].CLKCNTL = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CLKCNTL");



	/* periphInit() */
	periphInit();




	/*Output*/
	CS_UINT_OUTPUT(pcrREG_tmp_mem[0].PSPWRDWNCLR0, "pcrREG_tmp_mem[0].PSPWRDWNCLR0");
	CS_UINT_OUTPUT(pcrREG_tmp_mem[0].PSPWRDWNCLR1, "pcrREG_tmp_mem[0].PSPWRDWNCLR1");
	CS_UINT_OUTPUT(pcrREG_tmp_mem[0].PSPWRDWNCLR2, "pcrREG_tmp_mem[0].PSPWRDWNCLR2");
	CS_UINT_OUTPUT(pcrREG_tmp_mem[0].PSPWRDWNCLR3, "pcrREG_tmp_mem[0].PSPWRDWNCLR3");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CLKCNTL, "systemREG1_tmp_mem[0].CLKCNTL");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_periphInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
