#line 2 "cs_test%vimGetConfigValue_test0%cs_error"
/* vimGetConfigValue_test0.c */
#ifndef __vimGetConfigValue_test0__
#define __vimGetConfigValue_test0__

#include "../factory/factory.h"

#include "vimGetConfigValue_test0.h"

void CS_TEST vimGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(vimGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_vimGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct vimBase vimREG_tmp_mem [1]={0,}; 
	vim_config_reg_t * config_reg  = 0x0;
	struct vim_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	vimREG_tmp = vimREG_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	vimREG_tmp_mem[0].WAKEMASKSET1 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].WAKEMASKSET1");
	vimREG_tmp_mem[0].WAKEMASKSET0 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].WAKEMASKSET0");
	vimREG_tmp_mem[0].WAKEMASKSET3 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].WAKEMASKSET3");
	vimREG_tmp_mem[0].WAKEMASKSET2 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].WAKEMASKSET2");
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
	vimREG_tmp_mem[0].REQMASKSET2 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKSET2");
	vimREG_tmp_mem[0].REQMASKSET3 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKSET3");
	vimREG_tmp_mem[0].REQMASKSET0 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKSET0");
	vimREG_tmp_mem[0].REQMASKSET1 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].REQMASKSET1");
	vimREG_tmp_mem[0].FIRQPR1 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].FIRQPR1");
	vimREG_tmp_mem[0].FIRQPR0 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].FIRQPR0");
	vimREG_tmp_mem[0].FIRQPR3 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].FIRQPR3");
	vimREG_tmp_mem[0].FIRQPR2 = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].FIRQPR2");
	vimREG_tmp_mem[0].CAPEVT = CS_UINT_INPUT(unsigned int,"vimREG_tmp_mem[0].CAPEVT");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* vimGetConfigValue(struct vim_config_reg *, enum config_value_type) */
	vimGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_vimGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
