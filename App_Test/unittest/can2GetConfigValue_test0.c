#line 2 "cs_test%can2GetConfigValue_test0%cs_error"
/* can2GetConfigValue_test0.c */
#ifndef __can2GetConfigValue_test0__
#define __can2GetConfigValue_test0__

#include "../factory/factory.h"

#include "can2GetConfigValue_test0.h"

void CS_TEST can2GetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(can2GetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_can2GetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct canBase canREG2_tmp_mem [1]={0,}; 
	can_config_reg_t * config_reg  = 0x0;
	struct can_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	canREG2_tmp = canREG2_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	canREG2_tmp_mem[0].CTL = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].CTL");
	canREG2_tmp_mem[0].ES = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].ES");
	canREG2_tmp_mem[0].BTR = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].BTR");
	canREG2_tmp_mem[0].TEST = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].TEST");
	canREG2_tmp_mem[0].ABOTR = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].ABOTR");
	canREG2_tmp_mem[0].INTMUXx[0] = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].INTMUXx[0]");
	canREG2_tmp_mem[0].INTMUXx[1] = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].INTMUXx[1]");
	canREG2_tmp_mem[0].INTMUXx[2] = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].INTMUXx[2]");
	canREG2_tmp_mem[0].INTMUXx[3] = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].INTMUXx[3]");
	canREG2_tmp_mem[0].TIOC = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].TIOC");
	canREG2_tmp_mem[0].RIOC = CS_UINT_INPUT(unsigned int,"canREG2_tmp_mem[0].RIOC");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* can2GetConfigValue(struct can_config_reg *, enum config_value_type) */
	can2GetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_can2GetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
