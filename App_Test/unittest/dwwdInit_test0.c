#line 2 "cs_test%dwwdInit_test0%cs_error"
/* dwwdInit_test0.c */
#ifndef __dwwdInit_test0__
#define __dwwdInit_test0__

#include "../factory/factory.h"

#include "dwwdInit_test0.h"

void CS_TEST dwwdInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dwwdInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dwwdInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	enum dwwdReactionTag Reaction ; 
	unsigned short dwdPreload  = 0; 
	enum dwwdWindowSizeTag Window_Size ; 

	/*Memory assign*/
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	rtiREG1_tmp_mem[0].DWDPRLD = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].DWDPRLD");
	rtiREG1_tmp_mem[0].WWDRXNCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].WWDRXNCTRL");
	rtiREG1_tmp_mem[0].WWDSIZECTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].WWDSIZECTRL");
	Reaction = (enum dwwdReactionTag)CS_INT_INPUT(enum dwwdReactionTag,"Reaction");
	dwdPreload = CS_UINT_INPUT(unsigned short,"dwdPreload");
	Window_Size = (enum dwwdWindowSizeTag)CS_INT_INPUT(enum dwwdWindowSizeTag,"Window_Size");



	/* dwwdInit(enum dwwdReactionTag, unsigned short, enum dwwdWindowSizeTag) */
	dwwdInit(Reaction,dwdPreload,Window_Size);




	/*Output*/
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].DWDPRLD, "rtiREG1_tmp_mem[0].DWDPRLD");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].WWDRXNCTRL, "rtiREG1_tmp_mem[0].WWDRXNCTRL");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].WWDSIZECTRL, "rtiREG1_tmp_mem[0].WWDSIZECTRL");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dwwdInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
