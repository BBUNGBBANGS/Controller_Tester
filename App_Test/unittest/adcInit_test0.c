#line 2 "cs_test%adcInit_test0%cs_error"
/* adcInit_test0.c */
#ifndef __adcInit_test0__
#define __adcInit_test0__

#include "../factory/factory.h"

#include "adcInit_test0.h"

void CS_TEST adcInit_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(adcInit_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_adcInit_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct adcBase adcREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	adcREG1_tmp = adcREG1_tmp_mem;

	/*Input*/
	adcREG1_tmp_mem[0].RSTCR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].RSTCR");
	adcREG1_tmp_mem[0].OPMODECR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].OPMODECR");
	adcREG1_tmp_mem[0].CLOCKCR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].CLOCKCR");
	adcREG1_tmp_mem[0].GxMODECR[0] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxMODECR[0]");
	adcREG1_tmp_mem[0].GxMODECR[1] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxMODECR[1]");
	adcREG1_tmp_mem[0].GxMODECR[2] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxMODECR[2]");
	adcREG1_tmp_mem[0].EVSRC = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].EVSRC");
	adcREG1_tmp_mem[0].G1SRC = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].G1SRC");
	adcREG1_tmp_mem[0].G2SRC = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].G2SRC");
	adcREG1_tmp_mem[0].BNDCR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].BNDCR");
	adcREG1_tmp_mem[0].BNDEND = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].BNDEND");
	adcREG1_tmp_mem[0].EVSAMP = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].EVSAMP");
	adcREG1_tmp_mem[0].G1SAMP = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].G1SAMP");
	adcREG1_tmp_mem[0].G2SAMP = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].G2SAMP");
	adcREG1_tmp_mem[0].EVTDIR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].EVTDIR");
	adcREG1_tmp_mem[0].EVTOUT = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].EVTOUT");
	adcREG1_tmp_mem[0].EVTPDR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].EVTPDR");
	adcREG1_tmp_mem[0].EVTDIS = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].EVTDIS");
	adcREG1_tmp_mem[0].EVTPSEL = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].EVTPSEL");
	adcREG1_tmp_mem[0].EVSAMPDISEN = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].EVSAMPDISEN");
	adcREG1_tmp_mem[0].G1SAMPDISEN = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].G1SAMPDISEN");
	adcREG1_tmp_mem[0].PARCR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].PARCR");



	/* adcInit() */
	adcInit();




	/*Output*/
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].RSTCR, "adcREG1_tmp_mem[0].RSTCR");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].OPMODECR, "adcREG1_tmp_mem[0].OPMODECR");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].CLOCKCR, "adcREG1_tmp_mem[0].CLOCKCR");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxMODECR[0], "adcREG1_tmp_mem[0].GxMODECR[0]");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxMODECR[1], "adcREG1_tmp_mem[0].GxMODECR[1]");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].GxMODECR[2], "adcREG1_tmp_mem[0].GxMODECR[2]");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].EVSRC, "adcREG1_tmp_mem[0].EVSRC");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].G1SRC, "adcREG1_tmp_mem[0].G1SRC");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].G2SRC, "adcREG1_tmp_mem[0].G2SRC");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].BNDCR, "adcREG1_tmp_mem[0].BNDCR");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].BNDEND, "adcREG1_tmp_mem[0].BNDEND");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].EVSAMP, "adcREG1_tmp_mem[0].EVSAMP");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].G1SAMP, "adcREG1_tmp_mem[0].G1SAMP");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].G2SAMP, "adcREG1_tmp_mem[0].G2SAMP");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].EVTDIR, "adcREG1_tmp_mem[0].EVTDIR");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].EVTOUT, "adcREG1_tmp_mem[0].EVTOUT");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].EVTPDR, "adcREG1_tmp_mem[0].EVTPDR");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].EVTDIS, "adcREG1_tmp_mem[0].EVTDIS");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].EVTPSEL, "adcREG1_tmp_mem[0].EVTPSEL");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].EVSAMPDISEN, "adcREG1_tmp_mem[0].EVSAMPDISEN");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].G1SAMPDISEN, "adcREG1_tmp_mem[0].G1SAMPDISEN");
	CS_UINT_OUTPUT(adcREG1_tmp_mem[0].PARCR, "adcREG1_tmp_mem[0].PARCR");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_adcInit_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
