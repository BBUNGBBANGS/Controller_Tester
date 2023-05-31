#line 2 "cs_test%pmmTurnONMemPowerDomain_test0%cs_error"
/* pmmTurnONMemPowerDomain_test0.c */
#ifndef __pmmTurnONMemPowerDomain_test0__
#define __pmmTurnONMemPowerDomain_test0__

#include "../factory/factory.h"

#include "pmmTurnONMemPowerDomain_test0.h"

void CS_TEST pmmTurnONMemPowerDomain_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pmmTurnONMemPowerDomain_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pmmTurnONMemPowerDomain_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pmmBase pmmREG_tmp_mem [1]={0,}; 
	enum pmmMemPDTag memPD ; 

	/*Memory assign*/
	pmmREG_tmp = pmmREG_tmp_mem;

	/*Input*/
	pmmREG_tmp_mem[0].MEMPDPWRCTRL0 = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].MEMPDPWRCTRL0");
	pmmREG_tmp_mem[0].MEMPDPWRSTAT[0] = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].MEMPDPWRSTAT[0]");
	pmmREG_tmp_mem[0].MEMPDPWRSTAT[1] = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].MEMPDPWRSTAT[1]");
	pmmREG_tmp_mem[0].MEMPDPWRSTAT[2] = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].MEMPDPWRSTAT[2]");
	memPD = (enum pmmMemPDTag)CS_INT_INPUT(enum pmmMemPDTag,"memPD");



	/* pmmTurnONMemPowerDomain(enum pmmMemPDTag) */
	pmmTurnONMemPowerDomain(memPD);




	/*Output*/
	CS_UINT_OUTPUT(pmmREG_tmp_mem[0].MEMPDPWRCTRL0, "pmmREG_tmp_mem[0].MEMPDPWRCTRL0");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pmmTurnONMemPowerDomain_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
