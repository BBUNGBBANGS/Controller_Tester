#line 2 "cs_test%gioGetConfigValue_test0%cs_error"
/* gioGetConfigValue_test0.c */
#ifndef __gioGetConfigValue_test0__
#define __gioGetConfigValue_test0__

#include "../factory/factory.h"

#include "gioGetConfigValue_test0.h"

void CS_TEST gioGetConfigValue_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(gioGetConfigValue_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_gioGetConfigValue_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct gioPort gioPORTA_tmp_mem [1]={0,}; 
	struct gioPort gioPORTB_tmp_mem [1]={0,}; 
	struct gioBase gioREG_tmp_mem [1]={0,}; 
	gio_config_reg_t * config_reg  = 0x0;
	struct gio_config_reg config_reg_mem [1]={0,}; 
	enum config_value_type type ; 

	/*Memory assign*/
	gioPORTA_tmp = gioPORTA_tmp_mem;
	gioPORTB_tmp = gioPORTB_tmp_mem;
	gioREG_tmp = gioREG_tmp_mem;
	config_reg = config_reg_mem;

	/*Input*/
	gioPORTA_tmp_mem[0].DIR = CS_UINT_INPUT(unsigned int,"gioPORTA_tmp_mem[0].DIR");
	gioPORTA_tmp_mem[0].PDR = CS_UINT_INPUT(unsigned int,"gioPORTA_tmp_mem[0].PDR");
	gioPORTA_tmp_mem[0].PULDIS = CS_UINT_INPUT(unsigned int,"gioPORTA_tmp_mem[0].PULDIS");
	gioPORTA_tmp_mem[0].PSL = CS_UINT_INPUT(unsigned int,"gioPORTA_tmp_mem[0].PSL");
	gioPORTB_tmp_mem[0].DIR = CS_UINT_INPUT(unsigned int,"gioPORTB_tmp_mem[0].DIR");
	gioPORTB_tmp_mem[0].PDR = CS_UINT_INPUT(unsigned int,"gioPORTB_tmp_mem[0].PDR");
	gioPORTB_tmp_mem[0].PULDIS = CS_UINT_INPUT(unsigned int,"gioPORTB_tmp_mem[0].PULDIS");
	gioPORTB_tmp_mem[0].PSL = CS_UINT_INPUT(unsigned int,"gioPORTB_tmp_mem[0].PSL");
	gioREG_tmp_mem[0].INTDET = CS_UINT_INPUT(unsigned int,"gioREG_tmp_mem[0].INTDET");
	gioREG_tmp_mem[0].POL = CS_UINT_INPUT(unsigned int,"gioREG_tmp_mem[0].POL");
	gioREG_tmp_mem[0].ENASET = CS_UINT_INPUT(unsigned int,"gioREG_tmp_mem[0].ENASET");
	gioREG_tmp_mem[0].LVLSET = CS_UINT_INPUT(unsigned int,"gioREG_tmp_mem[0].LVLSET");
	type = (enum config_value_type)CS_INT_INPUT(enum config_value_type,"type");



	/* gioGetConfigValue(struct gio_config_reg *, enum config_value_type) */
	gioGetConfigValue(config_reg,type);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_gioGetConfigValue_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
