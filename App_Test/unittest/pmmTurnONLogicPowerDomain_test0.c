#line 2 "cs_test%pmmTurnONLogicPowerDomain_test0%cs_error"
/* pmmTurnONLogicPowerDomain_test0.c */
#ifndef __pmmTurnONLogicPowerDomain_test0__
#define __pmmTurnONLogicPowerDomain_test0__

#include "../factory/factory.h"

#include "pmmTurnONLogicPowerDomain_test0.h"

void CS_TEST pmmTurnONLogicPowerDomain_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pmmTurnONLogicPowerDomain_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pmmTurnONLogicPowerDomain_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pmmBase pmmREG_tmp_mem [1]={0,}; 
	enum pmmLogicPDTag logicPD ; 

	/*Memory assign*/
	pmmREG_tmp = pmmREG_tmp_mem;

	/*Input*/
	pmmREG_tmp_mem[0].LOGICPDPWRCTRL0 = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].LOGICPDPWRCTRL0");
	pmmREG_tmp_mem[0].PDCLKDISCLRREG = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].PDCLKDISCLRREG");
	pmmREG_tmp_mem[0].LOGICPDPWRSTAT[0] = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].LOGICPDPWRSTAT[0]");
	pmmREG_tmp_mem[0].LOGICPDPWRSTAT[1] = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].LOGICPDPWRSTAT[1]");
	pmmREG_tmp_mem[0].LOGICPDPWRSTAT[2] = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].LOGICPDPWRSTAT[2]");
	pmmREG_tmp_mem[0].LOGICPDPWRSTAT[3] = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].LOGICPDPWRSTAT[3]");
	pmmREG_tmp_mem[0].GLOBALCTRL1 = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].GLOBALCTRL1");
	logicPD = (enum pmmLogicPDTag)CS_INT_INPUT(enum pmmLogicPDTag,"logicPD");



	/* pmmTurnONLogicPowerDomain(enum pmmLogicPDTag) */
	pmmTurnONLogicPowerDomain(logicPD);




	/*Output*/
	CS_UINT_OUTPUT(pmmREG_tmp_mem[0].LOGICPDPWRCTRL0, "pmmREG_tmp_mem[0].LOGICPDPWRCTRL0");
	CS_UINT_OUTPUT(pmmREG_tmp_mem[0].PDCLKDISCLRREG, "pmmREG_tmp_mem[0].PDCLKDISCLRREG");
	CS_UINT_OUTPUT(pmmREG_tmp_mem[0].LOGICPDPWRSTAT[0], "pmmREG_tmp_mem[0].LOGICPDPWRSTAT[0]");
	CS_UINT_OUTPUT(pmmREG_tmp_mem[0].GLOBALCTRL1, "pmmREG_tmp_mem[0].GLOBALCTRL1");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pmmTurnONLogicPowerDomain_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
