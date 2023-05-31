#line 2 "cs_test%linGetIdentifier_test0%cs_error"
/* linGetIdentifier_test0.c */
#ifndef __linGetIdentifier_test0__
#define __linGetIdentifier_test0__

#include "../factory/factory.h"

#include "linGetIdentifier_test0.h"

void CS_TEST linGetIdentifier_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(linGetIdentifier_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_linGetIdentifier_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	linBASE_t * lin  = 0x0;
	struct linBase lin_mem [1]={0,}; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	lin = lin_mem;

	/*Input*/
	lin_mem[0].ID = CS_UINT_INPUT(unsigned int,"lin_mem[0].ID");



	/* unsigned int linGetIdentifier(volatile struct linBase *) */
	returnVar = linGetIdentifier(lin);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_linGetIdentifier_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
