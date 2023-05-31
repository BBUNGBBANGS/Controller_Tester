#line 2 "cs_test%rtiCompare0Interrupt_test0%cs_error"
/* rtiCompare0Interrupt_test0.c */
#ifndef __rtiCompare0Interrupt_test0__
#define __rtiCompare0Interrupt_test0__

#include "../factory/factory.h"

#include "rtiCompare0Interrupt_test0.h"

void CS_TEST rtiCompare0Interrupt_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(rtiCompare0Interrupt_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_rtiCompare0Interrupt_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%rtiCompare0Interrupt_test0%User code start"

int		g_rtiTick0;		//	Counter0	200000 msec ( 200 sec )
int		g_rtiTick1;		//	Counter0	1 mesc
int		g_rtiTick2;		//	Counter1	1000 msec ( 1 sec )
int		g_rtiTick3;		//	Counter1	1 msec
#line 25 "cs_test%rtiCompare0Interrupt_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	g_rtiTick0 = CS_INT_INPUT(int,"g_rtiTick0");
	g_rtiTick1 = CS_INT_INPUT(int,"g_rtiTick1");
	g_rtiTick2 = CS_INT_INPUT(int,"g_rtiTick2");
	g_rtiTick3 = CS_INT_INPUT(int,"g_rtiTick3");
	rtiREG1_tmp_mem[0].INTFLAG = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].INTFLAG");



	/* rtiCompare0Interrupt() */
	rtiCompare0Interrupt();
#line 1 "cs_test%rtiCompare0Interrupt_test0%AFTER_CALL_CODE_KEY_rtiCompare0Interrupt1630484195"
if(CS_TESTCASENO() == 2)
{
	rtiNotification(2);
	rtiNotification(4);
	rtiNotification(8);
}
#line 50 "cs_test%rtiCompare0Interrupt_test0%cs_error"



	/*Output*/
	CS_INT_OUTPUT(g_rtiTick0, "g_rtiTick0");
	CS_INT_OUTPUT(g_rtiTick1, "g_rtiTick1");
	CS_INT_OUTPUT(g_rtiTick2, "g_rtiTick2");
	CS_INT_OUTPUT(g_rtiTick3, "g_rtiTick3");
	CS_UINT_OUTPUT(rtiREG1_tmp_mem[0].INTFLAG, "rtiREG1_tmp_mem[0].INTFLAG");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_rtiCompare0Interrupt_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
