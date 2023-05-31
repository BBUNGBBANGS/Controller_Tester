#line 2 "cs_test%esmSetInterruptLevel_test0%cs_error"
/* esmSetInterruptLevel_test0.c */
#ifndef __esmSetInterruptLevel_test0__
#define __esmSetInterruptLevel_test0__

#include "../factory/factory.h"

#include "esmSetInterruptLevel_test0.h"

void CS_TEST esmSetInterruptLevel_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(esmSetInterruptLevel_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_esmSetInterruptLevel_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	unsigned long long channels  = 0; 
	unsigned long long flags  = 0; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].ILSR1 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].ILSR1");
	esmREG_tmp_mem[0].ILCR1 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].ILCR1");
	esmREG_tmp_mem[0].ILSR4 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].ILSR4");
	esmREG_tmp_mem[0].ILCR4 = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].ILCR4");
	channels = CS_UINT_INPUT(unsigned long long,"channels");
	flags = CS_UINT_INPUT(unsigned long long,"flags");



	/* esmSetInterruptLevel(unsigned long long, unsigned long long) */
	esmSetInterruptLevel(channels,flags);




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].ILSR1, "esmREG_tmp_mem[0].ILSR1");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].ILCR1, "esmREG_tmp_mem[0].ILCR1");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].ILSR4, "esmREG_tmp_mem[0].ILSR4");
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].ILCR4, "esmREG_tmp_mem[0].ILCR4");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_esmSetInterruptLevel_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
