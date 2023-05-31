#line 2 "cs_test%muxInit_test0%cs_error"
/* muxInit_test0.c */
#ifndef __muxInit_test0__
#define __muxInit_test0__

#include "../factory/factory.h"

#include "muxInit_test0.h"

void CS_TEST muxInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(muxInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_muxInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct pinMuxKicker kickerReg_tmp_mem [1]={0,}; 
	struct pinMuxBase pinMuxReg_tmp_mem [1]={0,}; 

	/*Memory assign*/
	kickerReg_tmp = kickerReg_tmp_mem;
	pinMuxReg_tmp = pinMuxReg_tmp_mem;

	/*Input*/
	kickerReg_tmp_mem[0].KICKER0 = CS_UINT_INPUT(unsigned int,"kickerReg_tmp_mem[0].KICKER0");
	kickerReg_tmp_mem[0].KICKER1 = CS_UINT_INPUT(unsigned int,"kickerReg_tmp_mem[0].KICKER1");
	pinMuxReg_tmp_mem[0].PINMMR0 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR0");
	pinMuxReg_tmp_mem[0].PINMMR1 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR1");
	pinMuxReg_tmp_mem[0].PINMMR2 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR2");
	pinMuxReg_tmp_mem[0].PINMMR3 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR3");
	pinMuxReg_tmp_mem[0].PINMMR4 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR4");
	pinMuxReg_tmp_mem[0].PINMMR5 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR5");
	pinMuxReg_tmp_mem[0].PINMMR6 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR6");
	pinMuxReg_tmp_mem[0].PINMMR7 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR7");
	pinMuxReg_tmp_mem[0].PINMMR8 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR8");
	pinMuxReg_tmp_mem[0].PINMMR9 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR9");
	pinMuxReg_tmp_mem[0].PINMMR10 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR10");
	pinMuxReg_tmp_mem[0].PINMMR11 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR11");
	pinMuxReg_tmp_mem[0].PINMMR12 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR12");
	pinMuxReg_tmp_mem[0].PINMMR13 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR13");
	pinMuxReg_tmp_mem[0].PINMMR14 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR14");
	pinMuxReg_tmp_mem[0].PINMMR15 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR15");
	pinMuxReg_tmp_mem[0].PINMMR16 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR16");
	pinMuxReg_tmp_mem[0].PINMMR17 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR17");
	pinMuxReg_tmp_mem[0].PINMMR18 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR18");
	pinMuxReg_tmp_mem[0].PINMMR19 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR19");
	pinMuxReg_tmp_mem[0].PINMMR20 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR20");
	pinMuxReg_tmp_mem[0].PINMMR21 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR21");
	pinMuxReg_tmp_mem[0].PINMMR22 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR22");
	pinMuxReg_tmp_mem[0].PINMMR23 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR23");
	pinMuxReg_tmp_mem[0].PINMMR24 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR24");
	pinMuxReg_tmp_mem[0].PINMMR25 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR25");
	pinMuxReg_tmp_mem[0].PINMMR26 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR26");
	pinMuxReg_tmp_mem[0].PINMMR27 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR27");
	pinMuxReg_tmp_mem[0].PINMMR28 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR28");
	pinMuxReg_tmp_mem[0].PINMMR29 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR29");



	/* muxInit() */
	muxInit();




	/*Output*/
	CS_UINT_OUTPUT(kickerReg_tmp_mem[0].KICKER0, "kickerReg_tmp_mem[0].KICKER0");
	CS_UINT_OUTPUT(kickerReg_tmp_mem[0].KICKER1, "kickerReg_tmp_mem[0].KICKER1");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR0, "pinMuxReg_tmp_mem[0].PINMMR0");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR1, "pinMuxReg_tmp_mem[0].PINMMR1");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR2, "pinMuxReg_tmp_mem[0].PINMMR2");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR3, "pinMuxReg_tmp_mem[0].PINMMR3");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR4, "pinMuxReg_tmp_mem[0].PINMMR4");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR5, "pinMuxReg_tmp_mem[0].PINMMR5");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR6, "pinMuxReg_tmp_mem[0].PINMMR6");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR7, "pinMuxReg_tmp_mem[0].PINMMR7");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR8, "pinMuxReg_tmp_mem[0].PINMMR8");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR9, "pinMuxReg_tmp_mem[0].PINMMR9");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR10, "pinMuxReg_tmp_mem[0].PINMMR10");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR11, "pinMuxReg_tmp_mem[0].PINMMR11");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR12, "pinMuxReg_tmp_mem[0].PINMMR12");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR13, "pinMuxReg_tmp_mem[0].PINMMR13");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR14, "pinMuxReg_tmp_mem[0].PINMMR14");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR15, "pinMuxReg_tmp_mem[0].PINMMR15");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR16, "pinMuxReg_tmp_mem[0].PINMMR16");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR17, "pinMuxReg_tmp_mem[0].PINMMR17");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR18, "pinMuxReg_tmp_mem[0].PINMMR18");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR19, "pinMuxReg_tmp_mem[0].PINMMR19");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR20, "pinMuxReg_tmp_mem[0].PINMMR20");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR21, "pinMuxReg_tmp_mem[0].PINMMR21");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR22, "pinMuxReg_tmp_mem[0].PINMMR22");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR23, "pinMuxReg_tmp_mem[0].PINMMR23");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR24, "pinMuxReg_tmp_mem[0].PINMMR24");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR25, "pinMuxReg_tmp_mem[0].PINMMR25");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR26, "pinMuxReg_tmp_mem[0].PINMMR26");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR27, "pinMuxReg_tmp_mem[0].PINMMR27");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR28, "pinMuxReg_tmp_mem[0].PINMMR28");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR29, "pinMuxReg_tmp_mem[0].PINMMR29");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_muxInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
