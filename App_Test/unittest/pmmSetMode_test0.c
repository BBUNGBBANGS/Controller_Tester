#line 2 "cs_test%pmmSetMode_test0%cs_error"
/* pmmSetMode_test0.c */
#ifndef __pmmSetMode_test0__
#define __pmmSetMode_test0__

#include "../factory/factory.h"

#include "pmmSetMode_test0.h"

void CS_TEST pmmSetMode_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(pmmSetMode_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_pmmSetMode_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pmmBase pmmREG_tmp_mem [1]={0,}; 
	enum pmmModeTag mode ; 

	/*Memory assign*/
	pmmREG_tmp = pmmREG_tmp_mem;

	/*Input*/
	pmmREG_tmp_mem[0].PRCKEYREG = CS_UINT_INPUT(unsigned int,"pmmREG_tmp_mem[0].PRCKEYREG");
	mode = (enum pmmModeTag)CS_INT_INPUT(enum pmmModeTag,"mode");



	/* pmmSetMode(enum pmmModeTag) */
	pmmSetMode(mode);




	/*Output*/
	CS_UINT_OUTPUT(pmmREG_tmp_mem[0].PRCKEYREG, "pmmREG_tmp_mem[0].PRCKEYREG");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_pmmSetMode_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
