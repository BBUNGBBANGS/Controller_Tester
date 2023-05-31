#line 2 "cs_test%UpdateDOFB_test0%cs_error"
/* UpdateDOFB_test0.c */
#ifndef __UpdateDOFB_test0__
#define __UpdateDOFB_test0__

#include "../factory/factory.h"

#include "UpdateDOFB_test0.h"

void CS_TEST UpdateDOFB_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(UpdateDOFB_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_UpdateDOFB_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct canBase canREG2_tmp_mem [1]={0,}; 
	struct canBase canREG3_tmp_mem [1]={0,}; 
	struct gioPort linPORT_tmp_mem [1]={0,}; 
	struct gioPort mibspiPORT1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	canREG2_tmp = canREG2_tmp_mem;
	canREG3_tmp = canREG3_tmp_mem;
	linPORT_tmp = linPORT_tmp_mem;
	mibspiPORT1_tmp = mibspiPORT1_tmp_mem;

	/*Input*/
	DO_FB[0] = CS_UINT_INPUT(unsigned char,"DO_FB[0]");
	DO_FB[1] = CS_UINT_INPUT(unsigned char,"DO_FB[1]");
	DO_FB[2] = CS_UINT_INPUT(unsigned char,"DO_FB[2]");
	DO_FB[3] = CS_UINT_INPUT(unsigned char,"DO_FB[3]");
	DO_FB[4] = CS_UINT_INPUT(unsigned char,"DO_FB[4]");
	DO_FB[5] = CS_UINT_INPUT(unsigned char,"DO_FB[5]");
	DO_FB[6] = CS_UINT_INPUT(unsigned char,"DO_FB[6]");
	canREG2_tmp_mem[0].TIOC = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].TIOC");



	/* UpdateDOFB() */
	UpdateDOFB();




	/*Output*/
	CS_UINT_OUTPUT(DO_FB[0], "DO_FB[0]");
	CS_UINT_OUTPUT(DO_FB[1], "DO_FB[1]");
	CS_UINT_OUTPUT(DO_FB[2], "DO_FB[2]");
	CS_UINT_OUTPUT(DO_FB[3], "DO_FB[3]");
	CS_UINT_OUTPUT(DO_FB[4], "DO_FB[4]");
	CS_UINT_OUTPUT(DO_FB[5], "DO_FB[5]");
	CS_UINT_OUTPUT(DO_FB[6], "DO_FB[6]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_UpdateDOFB_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
