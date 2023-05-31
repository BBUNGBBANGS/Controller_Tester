#line 2 "cs_test%peripheral_Memory_Powerdown_Status_test0%cs_error"
/* peripheral_Memory_Powerdown_Status_test0.c */
#ifndef __peripheral_Memory_Powerdown_Status_test0__
#define __peripheral_Memory_Powerdown_Status_test0__

#include "../factory/factory.h"

#include "peripheral_Memory_Powerdown_Status_test0.h"

void CS_TEST peripheral_Memory_Powerdown_Status_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(peripheral_Memory_Powerdown_Status_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_peripheral_Memory_Powerdown_Status_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pcrBase pcrREG_tmp_mem [1]={0,}; 
	peripheral_Memory_ChipSelect_t * peripheral_Memory_CS  = 0x0;
	struct peripheral_Memory_ChipSelect peripheral_Memory_CS_mem [1]={0,}; 

	/*Memory assign*/
	pcrREG_tmp = pcrREG_tmp_mem;
	peripheral_Memory_CS = peripheral_Memory_CS_mem;

	/*Input*/
	peripheral_Memory_CS_mem[0].Peripheral_Mem_CS0_31 = CS_UINT_INPUT(unsigned int,"peripheral_Memory_CS_mem[0].Peripheral_Mem_CS0_31");
	peripheral_Memory_CS_mem[0].Peripheral_Mem_CS32_63 = CS_UINT_INPUT(unsigned int,"peripheral_Memory_CS_mem[0].Peripheral_Mem_CS32_63");



	/* peripheral_Memory_Powerdown_Status(struct peripheral_Memory_ChipSelect *) */
	peripheral_Memory_Powerdown_Status(peripheral_Memory_CS);




	/*Output*/
	CS_UINT_OUTPUT(peripheral_Memory_CS_mem[0].Peripheral_Mem_CS0_31, "peripheral_Memory_CS_mem[0].Peripheral_Mem_CS0_31");
	CS_UINT_OUTPUT(peripheral_Memory_CS_mem[0].Peripheral_Mem_CS32_63, "peripheral_Memory_CS_mem[0].Peripheral_Mem_CS32_63");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_peripheral_Memory_Powerdown_Status_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
