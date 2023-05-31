#line 2 "cs_test%edgeGetCounter_test0%cs_error"
/* edgeGetCounter_test0.c */
#ifndef __edgeGetCounter_test0__
#define __edgeGetCounter_test0__

#include "../factory/factory.h"

#include "edgeGetCounter_test0.h"

void CS_TEST edgeGetCounter_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(edgeGetCounter_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_edgeGetCounter_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	hetRAMBASE_t * hetRAM  = 0x0;
	struct het1RamBase hetRAM_mem [1]={0,}; 
	unsigned int edge  = 0; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	hetRAM = hetRAM_mem;

	/*Input*/
	hetRAM_mem[0].Instruction[0].Data = CS_UINT_INPUT(unsigned int,"hetRAM_mem[0].Instruction[0].Data");
	edge = CS_UINT_INPUT(unsigned int,"edge");



	/* unsigned int edgeGetCounter(volatile struct het1RamBase *, unsigned int) */
	returnVar = edgeGetCounter(hetRAM,edge);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_edgeGetCounter_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif