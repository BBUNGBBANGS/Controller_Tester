#line 2 "cs_test%capGetSignal_test0%cs_error"
/* capGetSignal_test0.c */
#ifndef __capGetSignal_test0__
#define __capGetSignal_test0__

#include "../factory/factory.h"

#include "capGetSignal_test0.h"

void CS_TEST capGetSignal_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(capGetSignal_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_capGetSignal_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	hetRAMBASE_t * hetRAM  = 0x0;
	struct het1RamBase hetRAM_mem [1]={0,}; 
	unsigned int cap  = 0; 
	hetSIGNAL_t * signal  = 0x0;
	struct hetSignal signal_mem [1]={0,}; 

	/*Memory assign*/
	hetRAM = hetRAM_mem;
	signal = signal_mem;

	/*Input*/
	hetRAM_mem[0].Instruction[0].Data = CS_UINT_INPUT(unsigned int,"hetRAM_mem[0].Instruction[0].Data");
	hetRAM_mem[0].Instruction[25].Data = CS_UINT_INPUT(unsigned int,"hetRAM_mem[0].Instruction[25].Data");
	hetRAM_mem[0].Instruction[26].Data = CS_UINT_INPUT(unsigned int,"hetRAM_mem[0].Instruction[26].Data");
	hetRAM_mem[0].Instruction[27].Data = CS_UINT_INPUT(unsigned int,"hetRAM_mem[0].Instruction[27].Data");
	hetRAM_mem[0].Instruction[28].Data = CS_UINT_INPUT(unsigned int,"hetRAM_mem[0].Instruction[28].Data");
	cap = CS_UINT_INPUT(unsigned int,"cap");
	signal_mem[0].duty = CS_UINT_INPUT(unsigned int,"signal_mem[0].duty");
	signal_mem[0].period = CS_FLT_INPUT(double,"signal_mem[0].period");



	/* capGetSignal(volatile struct het1RamBase *, unsigned int, struct hetSignal *) */
	capGetSignal(hetRAM,cap,signal);




	/*Output*/
	CS_UINT_OUTPUT(signal_mem[0].duty, "signal_mem[0].duty");
	CS_FLT_OUTPUT(signal_mem[0].period, "signal_mem[0].period");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_capGetSignal_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
