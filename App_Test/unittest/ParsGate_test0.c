#line 2 "cs_test%ParsGate_test0%cs_error"
/* ParsGate_test0.c */
#ifndef __ParsGate_test0__
#define __ParsGate_test0__

#include "../factory/factory.h"

#include "ParsGate_test0.h"

void CS_TEST ParsGate_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(ParsGate_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_ParsGate_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	Gate_t * pGate  = 0x0;
	struct _Gate_t pGate_mem [1]={0,}; 
	char * sConfig  = 0x0; 
	int returnVar = 0; 

	/*Memory assign*/
	pGate = pGate_mem;

	/*Input*/
	sConfig = CS_STR_INPUT(char[1024],"sConfig");



	/* int ParsGate(struct _Gate_t *, char *) */
	returnVar = ParsGate(pGate,sConfig);




	/*Output*/
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_ParsGate_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
