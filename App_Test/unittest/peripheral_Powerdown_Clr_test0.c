#line 2 "cs_test%peripheral_Powerdown_Clr_test0%cs_error"
/* peripheral_Powerdown_Clr_test0.c */
#ifndef __peripheral_Powerdown_Clr_test0__
#define __peripheral_Powerdown_Clr_test0__

#include "../factory/factory.h"

#include "peripheral_Powerdown_Clr_test0.h"

void CS_TEST peripheral_Powerdown_Clr_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(peripheral_Powerdown_Clr_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_peripheral_Powerdown_Clr_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pcrBase pcrREG_tmp_mem [1]={0,}; 
	struct peripheral_Quad_ChipSelect peripheral_Quad_CS ; 

	/*Memory assign*/
	pcrREG_tmp = pcrREG_tmp_mem;

	/*Input*/
	peripheral_Quad_CS.Peripheral_Quad0_3_CS0_7 = CS_UINT_INPUT(unsigned int,"peripheral_Quad_CS.Peripheral_Quad0_3_CS0_7");
	peripheral_Quad_CS.Peripheral_Quad4_7_CS8_15 = CS_UINT_INPUT(unsigned int,"peripheral_Quad_CS.Peripheral_Quad4_7_CS8_15");
	peripheral_Quad_CS.Peripheral_Quad8_11_CS16_23 = CS_UINT_INPUT(unsigned int,"peripheral_Quad_CS.Peripheral_Quad8_11_CS16_23");
	peripheral_Quad_CS.Peripheral_Quad12_15_CS24_31 = CS_UINT_INPUT(unsigned int,"peripheral_Quad_CS.Peripheral_Quad12_15_CS24_31");



	/* peripheral_Powerdown_Clr(struct peripheral_Quad_ChipSelect) */
	peripheral_Powerdown_Clr(peripheral_Quad_CS);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_peripheral_Powerdown_Clr_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
