#line 2 "cs_test%gioInit_test0%cs_error"
/* gioInit_test0.c */
#ifndef __gioInit_test0__
#define __gioInit_test0__

#include "../factory/factory.h"

#include "gioInit_test0.h"

void CS_TEST gioInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(gioInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_gioInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct gioPort gioPORTA_tmp_mem [1]={0,}; 
	struct gioPort gioPORTB_tmp_mem [1]={0,}; 
	struct gioBase gioREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	gioPORTA_tmp = gioPORTA_tmp_mem;
	gioPORTB_tmp = gioPORTB_tmp_mem;
	gioREG_tmp = gioREG_tmp_mem;

	/*Input*/
	gioPORTA_tmp_mem[0].DIR = CS_UINT_INPUT(unsigned int,"gioPORTA_tmp_mem[0].DIR");
	gioPORTA_tmp_mem[0].DOUT = CS_UINT_INPUT(unsigned int,"gioPORTA_tmp_mem[0].DOUT");
	gioPORTA_tmp_mem[0].PDR = CS_UINT_INPUT(unsigned int,"gioPORTA_tmp_mem[0].PDR");
	gioPORTA_tmp_mem[0].PULDIS = CS_UINT_INPUT(unsigned int,"gioPORTA_tmp_mem[0].PULDIS");
	gioPORTA_tmp_mem[0].PSL = CS_UINT_INPUT(unsigned int,"gioPORTA_tmp_mem[0].PSL");
	gioPORTB_tmp_mem[0].DIR = CS_UINT_INPUT(unsigned int,"gioPORTB_tmp_mem[0].DIR");
	gioPORTB_tmp_mem[0].DOUT = CS_UINT_INPUT(unsigned int,"gioPORTB_tmp_mem[0].DOUT");
	gioPORTB_tmp_mem[0].PDR = CS_UINT_INPUT(unsigned int,"gioPORTB_tmp_mem[0].PDR");
	gioPORTB_tmp_mem[0].PULDIS = CS_UINT_INPUT(unsigned int,"gioPORTB_tmp_mem[0].PULDIS");
	gioPORTB_tmp_mem[0].PSL = CS_UINT_INPUT(unsigned int,"gioPORTB_tmp_mem[0].PSL");
	gioREG_tmp_mem[0].GCR0 = CS_UINT_INPUT(unsigned int,"gioREG_tmp_mem[0].GCR0");
	gioREG_tmp_mem[0].ENACLR = CS_UINT_INPUT(unsigned int,"gioREG_tmp_mem[0].ENACLR");
	gioREG_tmp_mem[0].LVLCLR = CS_UINT_INPUT(unsigned int,"gioREG_tmp_mem[0].LVLCLR");



	/* gioInit() */
	gioInit();




	/*Output*/
	CS_UINT_OUTPUT(gioPORTA_tmp_mem[0].DIR, "gioPORTA_tmp_mem[0].DIR");
	CS_UINT_OUTPUT(gioPORTA_tmp_mem[0].DOUT, "gioPORTA_tmp_mem[0].DOUT");
	CS_UINT_OUTPUT(gioPORTA_tmp_mem[0].PDR, "gioPORTA_tmp_mem[0].PDR");
	CS_UINT_OUTPUT(gioPORTA_tmp_mem[0].PULDIS, "gioPORTA_tmp_mem[0].PULDIS");
	CS_UINT_OUTPUT(gioPORTA_tmp_mem[0].PSL, "gioPORTA_tmp_mem[0].PSL");
	CS_UINT_OUTPUT(gioPORTB_tmp_mem[0].DIR, "gioPORTB_tmp_mem[0].DIR");
	CS_UINT_OUTPUT(gioPORTB_tmp_mem[0].DOUT, "gioPORTB_tmp_mem[0].DOUT");
	CS_UINT_OUTPUT(gioPORTB_tmp_mem[0].PDR, "gioPORTB_tmp_mem[0].PDR");
	CS_UINT_OUTPUT(gioPORTB_tmp_mem[0].PULDIS, "gioPORTB_tmp_mem[0].PULDIS");
	CS_UINT_OUTPUT(gioPORTB_tmp_mem[0].PSL, "gioPORTB_tmp_mem[0].PSL");
	CS_UINT_OUTPUT(gioREG_tmp_mem[0].GCR0, "gioREG_tmp_mem[0].GCR0");
	CS_UINT_OUTPUT(gioREG_tmp_mem[0].ENACLR, "gioREG_tmp_mem[0].ENACLR");
	CS_UINT_OUTPUT(gioREG_tmp_mem[0].LVLCLR, "gioREG_tmp_mem[0].LVLCLR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_gioInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
