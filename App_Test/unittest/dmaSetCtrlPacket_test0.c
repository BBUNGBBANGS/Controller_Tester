#line 2 "cs_test%dmaSetCtrlPacket_test0%cs_error"
/* dmaSetCtrlPacket_test0.c */
#ifndef __dmaSetCtrlPacket_test0__
#define __dmaSetCtrlPacket_test0__

#include "../factory/factory.h"

#include "dmaSetCtrlPacket_test0.h"

void CS_TEST dmaSetCtrlPacket_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(dmaSetCtrlPacket_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_dmaSetCtrlPacket_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct dmaRamBase dmaRAMREG_tmp_mem [1]={0,}; 
	struct dmaBase dmaREG_tmp_mem [1]={0,}; 
	unsigned int channel  = 0; 
	struct dmaCTRLPKT g_dmaCTRLPKT ; 

	/*Memory assign*/
	dmaRAMREG_tmp = dmaRAMREG_tmp_mem;
	dmaREG_tmp = dmaREG_tmp_mem;

	/*Input*/
	channel = CS_UINT_INPUT(unsigned int,"channel");
	g_dmaCTRLPKT.SADD = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.SADD");
	g_dmaCTRLPKT.DADD = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.DADD");
	g_dmaCTRLPKT.CHCTRL = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.CHCTRL");
	g_dmaCTRLPKT.FRCNT = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.FRCNT");
	g_dmaCTRLPKT.ELCNT = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.ELCNT");
	g_dmaCTRLPKT.ELDOFFSET = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.ELDOFFSET");
	g_dmaCTRLPKT.ELSOFFSET = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.ELSOFFSET");
	g_dmaCTRLPKT.FRDOFFSET = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.FRDOFFSET");
	g_dmaCTRLPKT.FRSOFFSET = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.FRSOFFSET");
	g_dmaCTRLPKT.PORTASGN = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.PORTASGN");
	g_dmaCTRLPKT.RDSIZE = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.RDSIZE");
	g_dmaCTRLPKT.WRSIZE = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.WRSIZE");
	g_dmaCTRLPKT.TTYPE = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.TTYPE");
	g_dmaCTRLPKT.ADDMODERD = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.ADDMODERD");
	g_dmaCTRLPKT.ADDMODEWR = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.ADDMODEWR");
	g_dmaCTRLPKT.AUTOINIT = CS_UINT_INPUT(unsigned int,"g_dmaCTRLPKT.AUTOINIT");



	/* dmaSetCtrlPacket(unsigned int, struct dmaCTRLPKT) */
	dmaSetCtrlPacket(channel,g_dmaCTRLPKT);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_dmaSetCtrlPacket_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif