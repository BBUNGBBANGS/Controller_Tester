#line 2 "cs_test%systemInit_test0%cs_error"
/* systemInit_test0.c */
#ifndef __systemInit_test0__
#define __systemInit_test0__

#include "../factory/factory.h"

#include "systemInit_test0.h"

void CS_TEST systemInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(systemInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_systemInit_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%systemInit_test0%User code start"
typedef volatile struct pinMuxBase
{
    uint32 PINMMR0;		/**< 0xEB10 Pin Mux 0 register*/
    uint32 PINMMR1;		/**< 0xEB14 Pin Mux 1 register*/
    uint32 PINMMR2;		/**< 0xEB18 Pin Mux 2 register*/
    uint32 PINMMR3;		/**< 0xEB1C Pin Mux 3 register*/
    uint32 PINMMR4;		/**< 0xEB20 Pin Mux 4 register*/
    uint32 PINMMR5;		/**< 0xEB24 Pin Mux 5 register*/
    uint32 PINMMR6;		/**< 0xEB28 Pin Mux 6 register*/
    uint32 PINMMR7;		/**< 0xEB2C Pin Mux 7 register*/
    uint32 PINMMR8;		/**< 0xEB30 Pin Mux 8 register*/
    uint32 PINMMR9;		/**< 0xEB34 Pin Mux 9 register*/
    uint32 PINMMR10;		/**< 0xEB38 Pin Mux 10 register*/
    uint32 PINMMR11;		/**< 0xEB3C Pin Mux 11 register*/
    uint32 PINMMR12;		/**< 0xEB40 Pin Mux 12 register*/
    uint32 PINMMR13;		/**< 0xEB44 Pin Mux 13 register*/
    uint32 PINMMR14;		/**< 0xEB48 Pin Mux 14 register*/
    uint32 PINMMR15;		/**< 0xEB4C Pin Mux 15 register*/
    uint32 PINMMR16;		/**< 0xEB50 Pin Mux 16 register*/
    uint32 PINMMR17;		/**< 0xEB54 Pin Mux 17 register*/
    uint32 PINMMR18;		/**< 0xEB58 Pin Mux 18 register*/
    uint32 PINMMR19;		/**< 0xEB5C Pin Mux 19 register*/
    uint32 PINMMR20;		/**< 0xEB60 Pin Mux 20 register*/
    uint32 PINMMR21;		/**< 0xEB64 Pin Mux 21 register*/
    uint32 PINMMR22;		/**< 0xEB68 Pin Mux 22 register*/
    uint32 PINMMR23;		/**< 0xEB6C Pin Mux 23 register*/
    uint32 PINMMR24;		/**< 0xEB70 Pin Mux 24 register*/
    uint32 PINMMR25;		/**< 0xEB74 Pin Mux 25 register*/
    uint32 PINMMR26;		/**< 0xEB78 Pin Mux 26 register*/
    uint32 PINMMR27;		/**< 0xEB7C Pin Mux 27 register*/
    uint32 PINMMR28;		/**< 0xEB80 Pin Mux 28 register*/
    uint32 PINMMR29;		/**< 0xEB84 Pin Mux 29 register*/
    uint32 PINMMR30;		/**< 0xEB88 Pin Mux 30 register*/
}pinMuxBASE_t;

typedef volatile struct pinMuxKicker
{
    uint32 KICKER0;       /* kicker 0 register */
    uint32 KICKER1;       /* kicker 1 register */
} pinMuxKICKER_t;

extern pinMuxBASE_t *pinMuxReg_tmp;
extern pinMuxKICKER_t *kickerReg_tmp;
#line 63 "cs_test%systemInit_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct efcBase efcREG_tmp_mem [1]={0,}; 
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct flashWBase flashWREG_tmp_mem [1]={0,}; 
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	struct pinMuxKicker kickerReg_tmp_mem [1]={0,}; 
	struct pcrBase pcrREG_tmp_mem [1]={0,}; 
	struct pinMuxBase pinMuxReg_tmp_mem [1]={0,}; 
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 
	struct systemBase2 systemREG2_tmp_mem [1]={0,}; 

	/*Memory assign*/
	efcREG_tmp = efcREG_tmp_mem;
	esmREG_tmp = esmREG_tmp_mem;
	flashWREG_tmp = flashWREG_tmp_mem;
	i2cREG1_tmp = i2cREG1_tmp_mem;
	kickerReg_tmp = kickerReg_tmp_mem;
	pcrREG_tmp = pcrREG_tmp_mem;
	pinMuxReg_tmp = pinMuxReg_tmp_mem;
	systemREG1_tmp = systemREG1_tmp_mem;
	systemREG2_tmp = systemREG2_tmp_mem;

	/*Input*/
	efcREG_tmp_mem[0].ERROR = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].ERROR");
	efcREG_tmp_mem[0].PINS = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].PINS");
	esmREG_tmp_mem[0].SR1[1] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[1]");
	esmREG_tmp_mem[0].SR1[2] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[2]");
	esmREG_tmp_mem[0].SR4[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR4[0]");
	i2cREG1_tmp_mem[0].DRR = CS_UINT_INPUT(unsigned char,"i2cREG1_tmp_mem[0].DRR");
	systemREG1_tmp_mem[0].GBLSTAT = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].GBLSTAT");
	systemREG1_tmp_mem[0].CSVSTAT = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSVSTAT");
	systemREG1_tmp_mem[0].CSDIS = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSDIS");
	systemREG1_tmp_mem[0].PLLCTL1 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].PLLCTL1");
	systemREG1_tmp_mem[0].PLLCTL2 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].PLLCTL2");
	systemREG2_tmp_mem[0].PLLCTL3 = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].PLLCTL3");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* systemInit() */
	systemInit();




	/*Output*/
	CS_UINT_OUTPUT(systemREG2_tmp_mem[0].PLLCTL3, "systemREG2_tmp_mem[0].PLLCTL3");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_systemInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
