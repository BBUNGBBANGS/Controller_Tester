#line 2 "cs_test%enableParity_test0%cs_error"
/* enableParity_test0.c */
#ifndef __enableParity_test0__
#define __enableParity_test0__

#include "../factory/factory.h"

#include "enableParity_test0.h"

void CS_TEST enableParity_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(enableParity_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_enableParity_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%enableParity_test0%User code start"
#define DMA_PARCR		(*(volatile uint32 *)(0xFFFFF1A8U))
#define VIM_PARCTL      (*(volatile uint32 *)0xFFFFFDF0U)
#line 22 "cs_test%enableParity_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct adcBase adcREG1_tmp_mem [1]={0,}; 
	struct adcBase adcREG2_tmp_mem [1]={0,}; 
	struct canBase canREG1_tmp_mem [1]={0,}; 
	struct canBase canREG2_tmp_mem [1]={0,}; 
	struct canBase canREG3_tmp_mem [1]={0,}; 
	struct hetBase hetREG1_tmp_mem [1]={0,}; 
	struct hetBase hetREG2_tmp_mem [1]={0,}; 
	struct htuBase htuREG1_tmp_mem [1]={0,}; 
	struct htuBase htuREG2_tmp_mem [1]={0,}; 

	/*Memory assign*/
	adcREG1_tmp = adcREG1_tmp_mem;
	adcREG2_tmp = adcREG2_tmp_mem;
	canREG1_tmp = canREG1_tmp_mem;
	canREG2_tmp = canREG2_tmp_mem;
	canREG3_tmp = canREG3_tmp_mem;
	hetREG1_tmp = hetREG1_tmp_mem;
	hetREG2_tmp = hetREG2_tmp_mem;
	htuREG1_tmp = htuREG1_tmp_mem;
	htuREG2_tmp = htuREG2_tmp_mem;

	/*Input*/
	adcREG1_tmp_mem[0].PARCR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].PARCR");
	adcREG2_tmp_mem[0].PARCR = CS_UINT_INPUT(unsigned int,"adcREG2_tmp_mem[0].PARCR");
	canREG1_tmp_mem[0].CTL = CS_UINT_INPUT(unsigned int,"canREG1_tmp_mem[0].CTL");
	canREG2_tmp_mem[0].CTL = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].CTL");
	canREG3_tmp_mem[0].CTL = CS_UINT_INPUT(unsigned int,"canREG3_tmp_mem[0].CTL");
	hetREG1_tmp_mem[0].PCR = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].PCR");
	hetREG2_tmp_mem[0].PCR = CS_UINT_INPUT(unsigned int,"hetREG2_tmp_mem[0].PCR");
	htuREG1_tmp_mem[0].PCR = CS_UINT_INPUT(unsigned int,"htuREG1_tmp_mem[0].PCR");
	htuREG2_tmp_mem[0].PCR = CS_UINT_INPUT(unsigned int,"htuREG2_tmp_mem[0].PCR");



	/* enableParity() */
	enableParity();




	/*Output*/
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].PARCR, "adcREG1_tmp_mem[0].PARCR");
	CS_UINT_OUTPUT(adcREG2_tmp_mem[0].PARCR, "adcREG2_tmp_mem[0].PARCR");
	CS_UINT_OUTPUT(canREG1_tmp_mem[0].CTL, "canREG1_tmp_mem[0].CTL");
	CS_UINT_OUTPUT(canREG2_tmp_mem[0].CTL, "canREG2_tmp_mem[0].CTL");
	CS_UINT_OUTPUT(canREG3_tmp_mem[0].CTL, "canREG3_tmp_mem[0].CTL");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].PCR, "hetREG1_tmp_mem[0].PCR");
	CS_UINT_OUTPUT(hetREG2_tmp_mem[0].PCR, "hetREG2_tmp_mem[0].PCR");
	CS_UINT_OUTPUT(htuREG1_tmp_mem[0].PCR, "htuREG1_tmp_mem[0].PCR");
	CS_UINT_OUTPUT(htuREG2_tmp_mem[0].PCR, "htuREG2_tmp_mem[0].PCR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_enableParity_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
