#line 2 "cs_test%peripheral_Frame_Protection_Set_test0%cs_error"
/* peripheral_Frame_Protection_Set_test0.c */
#ifndef __peripheral_Frame_Protection_Set_test0__
#define __peripheral_Frame_Protection_Set_test0__

#include "../factory/factory.h"

#include "peripheral_Frame_Protection_Set_test0.h"

void CS_TEST peripheral_Frame_Protection_Set_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(peripheral_Frame_Protection_Set_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_peripheral_Frame_Protection_Set_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pcrBase pcrREG_tmp_mem [1]={0,}; 
	struct peripheral_Frame_Select peripheral_Frame ; 

	/*Memory assign*/
	pcrREG_tmp = pcrREG_tmp_mem;

	/*Input*/
	peripheral_Frame.Peripheral_CS = CS_UINT_INPUT(unsigned int,"peripheral_Frame.Peripheral_CS");
	peripheral_Frame.Peripheral_Quadrant = CS_UINT_INPUT(unsigned int,"peripheral_Frame.Peripheral_Quadrant");



	/* peripheral_Frame_Protection_Set(struct peripheral_Frame_Select) */
	peripheral_Frame_Protection_Set(peripheral_Frame);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_peripheral_Frame_Protection_Set_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
