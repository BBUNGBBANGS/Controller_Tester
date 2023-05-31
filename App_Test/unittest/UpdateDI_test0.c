#line 2 "cs_test%UpdateDI_test0%cs_error"
/* UpdateDI_test0.c */
#ifndef __UpdateDI_test0__
#define __UpdateDI_test0__

#include "../factory/factory.h"

#include "UpdateDI_test0.h"

void CS_TEST UpdateDI_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(UpdateDI_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_UpdateDI_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct gioPort hetPORT1_tmp_mem [1]={0,}; 
	struct gioPort mibspiPORT1_tmp_mem [1]={0,}; 
	struct gioPort mibspiPORT3_tmp_mem [1]={0,}; 
	struct gioPort mibspiPORT5_tmp_mem [1]={0,}; 

	/*Memory assign*/
	hetPORT1_tmp = hetPORT1_tmp_mem;
	mibspiPORT1_tmp = mibspiPORT1_tmp_mem;
	mibspiPORT3_tmp = mibspiPORT3_tmp_mem;
	mibspiPORT5_tmp = mibspiPORT5_tmp_mem;

	/*Input*/
	DIN_MON[0] = CS_UINT_INPUT(unsigned char,"DIN_MON[0]");
	DIN_MON[1] = CS_UINT_INPUT(unsigned char,"DIN_MON[1]");
	DIN_MON[2] = CS_UINT_INPUT(unsigned char,"DIN_MON[2]");
	DIN_MON[3] = CS_UINT_INPUT(unsigned char,"DIN_MON[3]");
	DIN_MON[4] = CS_UINT_INPUT(unsigned char,"DIN_MON[4]");
	DIN_MON[5] = CS_UINT_INPUT(unsigned char,"DIN_MON[5]");
	DIN_MON[6] = CS_UINT_INPUT(unsigned char,"DIN_MON[6]");
	DIN_MON[7] = CS_UINT_INPUT(unsigned char,"DIN_MON[7]");
	DIN_STAT[0] = CS_UINT_INPUT(unsigned char,"DIN_STAT[0]");
	DIN_STAT[1] = CS_UINT_INPUT(unsigned char,"DIN_STAT[1]");
	DIN_STAT[2] = CS_UINT_INPUT(unsigned char,"DIN_STAT[2]");
	DIN_STAT[3] = CS_UINT_INPUT(unsigned char,"DIN_STAT[3]");
	DIN_STAT[4] = CS_UINT_INPUT(unsigned char,"DIN_STAT[4]");
	DIN_STAT[5] = CS_UINT_INPUT(unsigned char,"DIN_STAT[5]");
	DIN_STAT[6] = CS_UINT_INPUT(unsigned char,"DIN_STAT[6]");
	DIN_STAT[7] = CS_UINT_INPUT(unsigned char,"DIN_STAT[7]");



	/* UpdateDI() */
	UpdateDI();




	/*Output*/
	CS_UINT_OUTPUT(DIN_MON[0], "DIN_MON[0]");
	CS_UINT_OUTPUT(DIN_MON[1], "DIN_MON[1]");
	CS_UINT_OUTPUT(DIN_MON[2], "DIN_MON[2]");
	CS_UINT_OUTPUT(DIN_MON[3], "DIN_MON[3]");
	CS_UINT_OUTPUT(DIN_MON[4], "DIN_MON[4]");
	CS_UINT_OUTPUT(DIN_MON[5], "DIN_MON[5]");
	CS_UINT_OUTPUT(DIN_MON[6], "DIN_MON[6]");
	CS_UINT_OUTPUT(DIN_MON[7], "DIN_MON[7]");
	CS_UINT_OUTPUT(DIN_STAT[0], "DIN_STAT[0]");
	CS_UINT_OUTPUT(DIN_STAT[1], "DIN_STAT[1]");
	CS_UINT_OUTPUT(DIN_STAT[2], "DIN_STAT[2]");
	CS_UINT_OUTPUT(DIN_STAT[3], "DIN_STAT[3]");
	CS_UINT_OUTPUT(DIN_STAT[4], "DIN_STAT[4]");
	CS_UINT_OUTPUT(DIN_STAT[5], "DIN_STAT[5]");
	CS_UINT_OUTPUT(DIN_STAT[6], "DIN_STAT[6]");
	CS_UINT_OUTPUT(DIN_STAT[7], "DIN_STAT[7]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_UpdateDI_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
