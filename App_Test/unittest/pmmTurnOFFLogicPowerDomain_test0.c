#line 2 "cs_test%pmmTurnOFFLogicPowerDomain_test0%cs_error"
/* pmmTurnOFFLogicPowerDomain_test0.c */
#ifndef __pmmTurnOFFLogicPowerDomain_test0__
#define __pmmTurnOFFLogicPowerDomain_test0__

#include "../factory/factory.h"

#include "pmmTurnOFFLogicPowerDomain_test0.h"

void CS_TEST pmmTurnOFFLogicPowerDomain_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pmmTurnOFFLogicPowerDomain_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pmmTurnOFFLogicPowerDomain_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pmmBase pmmREG_tmp_mem [1]={0,}; 
	enum pmmLogicPDTag logicPD ; 

	/*Memory assign*/
	pmmREG_tmp = pmmREG_tmp_mem;

	/*Input*/
	pmmREG_tmp_mem[0].LOGICPDPWRCTRL0 = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].LOGICPDPWRCTRL0");
	pmmREG_tmp_mem[0].PDCLKDISSETREG = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].PDCLKDISSETREG");
	logicPD = (enum pmmLogicPDTag)CS_INT_INPUT(enum pmmLogicPDTag,"logicPD");



	/* pmmTurnOFFLogicPowerDomain(enum pmmLogicPDTag) */
	pmmTurnOFFLogicPowerDomain(logicPD);




	/*Output*/
	CS_UINT_OUTPUT(pmmREG_tmp_mem[0].PDCLKDISSETREG, "pmmREG_tmp_mem[0].PDCLKDISSETREG");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pmmTurnOFFLogicPowerDomain_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
