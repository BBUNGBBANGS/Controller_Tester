#line 2 "cs_test%vimChannelMap_test0%cs_error"
/* vimChannelMap_test0.c */
#ifndef __vimChannelMap_test0__
#define __vimChannelMap_test0__

#include "../factory/factory.h"

#include "vimChannelMap_test0.h"

void CS_TEST vimChannelMap_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(vimChannelMap_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_vimChannelMap_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct vimRam vimRAM_tmp_mem [1]={0,}; 
	struct vimBase vimREG_tmp_mem [1]={0,}; 
	unsigned int request  = 0; 
	unsigned int channel  = 0; 
	void (* handler)(void)  = 0x0;

	/*Memory assign*/
	vimRAM_tmp = vimRAM_tmp_mem;
	vimRAM_tmp_mem[0].ISR[0] = 0x0;
	vimREG_tmp = vimREG_tmp_mem;
	handler = 0x0;

	/*Input*/
	vimREG_tmp_mem[0].CHANCTRL[0] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[0]");
	vimREG_tmp_mem[0].CHANCTRL[1] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[1]");
	vimREG_tmp_mem[0].CHANCTRL[2] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[2]");
	vimREG_tmp_mem[0].CHANCTRL[3] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[3]");
	vimREG_tmp_mem[0].CHANCTRL[4] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[4]");
	vimREG_tmp_mem[0].CHANCTRL[5] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[5]");
	vimREG_tmp_mem[0].CHANCTRL[6] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[6]");
	vimREG_tmp_mem[0].CHANCTRL[7] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[7]");
	vimREG_tmp_mem[0].CHANCTRL[8] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[8]");
	vimREG_tmp_mem[0].CHANCTRL[9] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[9]");
	vimREG_tmp_mem[0].CHANCTRL[10] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[10]");
	vimREG_tmp_mem[0].CHANCTRL[11] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[11]");
	vimREG_tmp_mem[0].CHANCTRL[12] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[12]");
	vimREG_tmp_mem[0].CHANCTRL[13] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[13]");
	vimREG_tmp_mem[0].CHANCTRL[14] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[14]");
	vimREG_tmp_mem[0].CHANCTRL[15] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[15]");
	vimREG_tmp_mem[0].CHANCTRL[16] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[16]");
	vimREG_tmp_mem[0].CHANCTRL[17] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[17]");
	vimREG_tmp_mem[0].CHANCTRL[18] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[18]");
	vimREG_tmp_mem[0].CHANCTRL[19] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[19]");
	vimREG_tmp_mem[0].CHANCTRL[20] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[20]");
	vimREG_tmp_mem[0].CHANCTRL[21] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[21]");
	vimREG_tmp_mem[0].CHANCTRL[22] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[22]");
	vimREG_tmp_mem[0].CHANCTRL[23] = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CHANCTRL[23]");
	request = CS_UINT_INPUT(unsigned int,"request");
	channel = CS_UINT_INPUT(unsigned int,"channel");



	/* vimChannelMap(unsigned int, unsigned int, void (*)(void)) */
	vimChannelMap(request,channel,handler);




	/*Output*/
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[0], "vimREG_tmp_mem[0].CHANCTRL[0]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[1], "vimREG_tmp_mem[0].CHANCTRL[1]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[2], "vimREG_tmp_mem[0].CHANCTRL[2]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[3], "vimREG_tmp_mem[0].CHANCTRL[3]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[4], "vimREG_tmp_mem[0].CHANCTRL[4]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[5], "vimREG_tmp_mem[0].CHANCTRL[5]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[6], "vimREG_tmp_mem[0].CHANCTRL[6]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[7], "vimREG_tmp_mem[0].CHANCTRL[7]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[8], "vimREG_tmp_mem[0].CHANCTRL[8]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[9], "vimREG_tmp_mem[0].CHANCTRL[9]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[10], "vimREG_tmp_mem[0].CHANCTRL[10]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[11], "vimREG_tmp_mem[0].CHANCTRL[11]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[12], "vimREG_tmp_mem[0].CHANCTRL[12]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[13], "vimREG_tmp_mem[0].CHANCTRL[13]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[14], "vimREG_tmp_mem[0].CHANCTRL[14]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[15], "vimREG_tmp_mem[0].CHANCTRL[15]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[16], "vimREG_tmp_mem[0].CHANCTRL[16]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[17], "vimREG_tmp_mem[0].CHANCTRL[17]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[18], "vimREG_tmp_mem[0].CHANCTRL[18]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[19], "vimREG_tmp_mem[0].CHANCTRL[19]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[20], "vimREG_tmp_mem[0].CHANCTRL[20]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[21], "vimREG_tmp_mem[0].CHANCTRL[21]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[22], "vimREG_tmp_mem[0].CHANCTRL[22]");
	CS_UINT_OUTPUT(vimREG_tmp_mem[0].CHANCTRL[23], "vimREG_tmp_mem[0].CHANCTRL[23]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_vimChannelMap_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
