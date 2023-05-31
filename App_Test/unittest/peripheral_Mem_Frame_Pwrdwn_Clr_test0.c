#line 2 "cs_test%peripheral_Mem_Frame_Pwrdwn_Clr_test0%cs_error"
/* peripheral_Mem_Frame_Pwrdwn_Clr_test0.c */
#ifndef __peripheral_Mem_Frame_Pwrdwn_Clr_test0__
#define __peripheral_Mem_Frame_Pwrdwn_Clr_test0__

#include "../factory/factory.h"

#include "peripheral_Mem_Frame_Pwrdwn_Clr_test0.h"

void CS_TEST peripheral_Mem_Frame_Pwrdwn_Clr_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(peripheral_Mem_Frame_Pwrdwn_Clr_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_peripheral_Mem_Frame_Pwrdwn_Clr_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pcrBase pcrREG_tmp_mem [1]={0,}; 
	unsigned int peripheral_Memory_Frame_CS  = 0; 

	/*Memory assign*/
	pcrREG_tmp = pcrREG_tmp_mem;

	/*Input*/
	peripheral_Memory_Frame_CS = CS_UINT_INPUT(unsigned int,"peripheral_Memory_Frame_CS");



	/* peripheral_Mem_Frame_Pwrdwn_Clr(unsigned int) */
	peripheral_Mem_Frame_Pwrdwn_Clr(peripheral_Memory_Frame_CS);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_peripheral_Mem_Frame_Pwrdwn_Clr_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
