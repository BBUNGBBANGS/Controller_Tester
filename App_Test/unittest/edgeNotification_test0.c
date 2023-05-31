#line 2 "cs_test%edgeNotification_test0%cs_error"
/* edgeNotification_test0.c */
#ifndef __edgeNotification_test0__
#define __edgeNotification_test0__

#include "../factory/factory.h"

#include "edgeNotification_test0.h"

void CS_TEST edgeNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(edgeNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_edgeNotification_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%edgeNotification_test0%User code start"

uint32_t g_nTick ;	//	???? Tick
uint32_t g_nTickBase ;	//	???? Tick Base ( 0 / 200000 / 400000 / ... )

uint32_t g_s_nTick ;	//	Tick ( 0 ~ 200000 )
#line 25 "cs_test%edgeNotification_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct hetBase hetREG1_tmp_mem [1]={0,}; 
	hetBASE_t * hetREG  = 0x0;
	struct hetBase hetREG_mem [1]={0,}; 
	unsigned int edge  = 0; 

	/*Memory assign*/
	hetREG1_tmp = hetREG1_tmp_mem;
	hetREG = hetREG_mem;

	/*Input*/
	g_nTick = CS_UINT_INPUT(unsigned int,"g_nTick");
	g_nTickBase = CS_UINT_INPUT(unsigned int,"g_nTickBase");
	g_s_nTick = CS_UINT_INPUT(unsigned int,"g_s_nTick");
	g_tickPIEdge[0] = CS_UINT_INPUT(unsigned int,"g_tickPIEdge[0]");
	hetREG_mem[0].DOUT = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].DOUT");
	hetREG_mem[0].PPR = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].PPR");
	hetREG_mem[0].PRY = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].PRY");
	hetREG_mem[0].FLG = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].FLG");
	hetREG_mem[0].REQENS = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].REQENS");
	hetREG_mem[0].SFPRLD = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].SFPRLD");
	hetREG_mem[0].PFR = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].PFR");
	hetREG_mem[0].LBPSEL = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].LBPSEL");
	hetREG_mem[0].PDR = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].PDR");
	hetREG_mem[0].HRSH = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].HRSH");
	hetREG_mem[0].AND = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].AND");
	hetREG_mem[0].GCR = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].GCR");
	hetREG_mem[0].SFENA = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].SFENA");
	hetREG_mem[0].ADDR = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].ADDR");
	hetREG_mem[0].REQENC = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].REQENC");
	hetREG_mem[0].PSL = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].PSL");
	hetREG_mem[0].DIR = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].DIR");
	hetREG_mem[0].REQDS = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].REQDS");
	hetREG_mem[0].rsvd4 = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].rsvd4");
	hetREG_mem[0].rsvd5 = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].rsvd5");
	hetREG_mem[0].DIN = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].DIN");
	hetREG_mem[0].DCLR = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].DCLR");
	hetREG_mem[0].INTENAC = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].INTENAC");
	hetREG_mem[0].EXC2 = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].EXC2");
	hetREG_mem[0].EXC1 = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].EXC1");
	hetREG_mem[0].rsvd1 = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].rsvd1");
	hetREG_mem[0].DSET = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].DSET");
	hetREG_mem[0].LBPDIR = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].LBPDIR");
	hetREG_mem[0].XOR = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].XOR");
	hetREG_mem[0].rsvd2 = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].rsvd2");
	hetREG_mem[0].rsvd3 = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].rsvd3");
	hetREG_mem[0].PCR = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].PCR");
	hetREG_mem[0].OFF1 = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].OFF1");
	hetREG_mem[0].PAR = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].PAR");
	hetREG_mem[0].PINDIS = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].PINDIS");
	hetREG_mem[0].INTENAS = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].INTENAS");
	hetREG_mem[0].OFF2 = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].OFF2");
	hetREG_mem[0].PULDIS = CS_UINT_INPUT(unsigned int,"hetREG_mem[0].PULDIS");
	edge = CS_UINT_INPUT(unsigned int,"edge");



	/* edgeNotification(volatile struct hetBase *, unsigned int) */
	edgeNotification(hetREG,edge);




	/*Output*/
	CS_UINT_OUTPUT(SS1_Dir, "SS1_Dir");
	CS_UINT_OUTPUT(SS2_Dir, "SS2_Dir");
	CS_UINT_OUTPUT(g_nTick, "g_nTick");
	CS_UINT_OUTPUT(g_nTickBase, "g_nTickBase");
	CS_UINT_OUTPUT(g_s_nTick, "g_s_nTick");
	CS_UINT_OUTPUT(g_tickPIEdge[0], "g_tickPIEdge[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_edgeNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
