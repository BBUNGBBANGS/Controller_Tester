#line 2 "cs_test%pmmIsMemPowerDomainActive_test0%cs_error"
/* pmmIsMemPowerDomainActive_test0.c */
#ifndef __pmmIsMemPowerDomainActive_test0__
#define __pmmIsMemPowerDomainActive_test0__

#include "../factory/factory.h"

#include "pmmIsMemPowerDomainActive_test0.h"

void CS_TEST pmmIsMemPowerDomainActive_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pmmIsMemPowerDomainActive_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pmmIsMemPowerDomainActive_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pmmBase pmmREG_tmp_mem [1]={0,}; 
	enum pmmMemPDTag memPD ; 
	_Bool returnVar = 0; 

	/*Memory assign*/
	pmmREG_tmp = pmmREG_tmp_mem;

	/*Input*/
	pmmREG_tmp_mem[0].MEMPDPWRSTAT[0] = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].MEMPDPWRSTAT[0]");
	memPD = (enum pmmMemPDTag)CS_INT_INPUT(enum pmmMemPDTag,"memPD");



	/* _Bool pmmIsMemPowerDomainActive(enum pmmMemPDTag) */
	returnVar = pmmIsMemPowerDomainActive(memPD);




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pmmIsMemPowerDomainActive_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
