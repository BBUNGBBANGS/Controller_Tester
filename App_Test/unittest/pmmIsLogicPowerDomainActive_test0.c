#line 2 "cs_test%pmmIsLogicPowerDomainActive_test0%cs_error"
/* pmmIsLogicPowerDomainActive_test0.c */
#ifndef __pmmIsLogicPowerDomainActive_test0__
#define __pmmIsLogicPowerDomainActive_test0__

#include "../factory/factory.h"

#include "pmmIsLogicPowerDomainActive_test0.h"

void CS_TEST pmmIsLogicPowerDomainActive_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pmmIsLogicPowerDomainActive_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pmmIsLogicPowerDomainActive_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pmmBase pmmREG_tmp_mem [1]={0,}; 
	enum pmmLogicPDTag logicPD ; 
	_Bool returnVar = 0; 

	/*Memory assign*/
	pmmREG_tmp = pmmREG_tmp_mem;

	/*Input*/
	pmmREG_tmp_mem[0].LOGICPDPWRSTAT[0] = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].LOGICPDPWRSTAT[0]");
	pmmREG_tmp_mem[0].LOGICPDPWRSTAT[1] = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].LOGICPDPWRSTAT[1]");
	pmmREG_tmp_mem[0].LOGICPDPWRSTAT[2] = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].LOGICPDPWRSTAT[2]");
	pmmREG_tmp_mem[0].LOGICPDPWRSTAT[3] = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].LOGICPDPWRSTAT[3]");
	logicPD = (enum pmmLogicPDTag)CS_INT_INPUT(enum pmmLogicPDTag,"logicPD");



	/* _Bool pmmIsLogicPowerDomainActive(enum pmmLogicPDTag) */
	returnVar = pmmIsLogicPowerDomainActive(logicPD);




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pmmIsLogicPowerDomainActive_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
