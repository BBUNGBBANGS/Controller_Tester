#line 2 "cs_test%LogicProcCalcConfDI_test0%cs_error"
/* LogicProcCalcConfDI_test0.c */
#ifndef __LogicProcCalcConfDI_test0__
#define __LogicProcCalcConfDI_test0__

#include "../factory/factory.h"

#include "LogicProcCalcConfDI_test0.h"

void CS_TEST LogicProcCalcConfDI_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(LogicProcCalcConfDI_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_LogicProcCalcConfDI_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	unsigned int elipsed  = 0; 
	ConfLogic_t * pConf  = 0x0;
	struct _ConfLogic_t pConf_mem [1]={0,}; 
	struct _SigDI_t pConf_mem0_DI0_pSigDI_mem [1]={0,}; 

	/*Memory assign*/
	pConf = pConf_mem;
	pConf_mem[0].DI[0].pSigDI = pConf_mem0_DI0_pSigDI_mem;

	/*Input*/
	elipsed = CS_UINT_INPUT(unsigned int,"elipsed");
	pConf_mem0_DI0_pSigDI_mem[0].nValue = CS_UINT_INPUT(unsigned char,"pConf_mem0_DI0_pSigDI_mem[0].nValue");
	pConf_mem0_DI0_pSigDI_mem[0].nRemainTime = CS_UINT_INPUT(unsigned int,"pConf_mem0_DI0_pSigDI_mem[0].nRemainTime");
	pConf_mem[0].DI[0].nDType = CS_UINT_INPUT(unsigned char,"pConf_mem[0].DI[0].nDType");
	pConf_mem[0].DI[0].nDTime = CS_UINT_INPUT(unsigned short,"pConf_mem[0].DI[0].nDTime");
	pConf_mem[0].DI[0].nDIVal = CS_UINT_INPUT(unsigned char,"pConf_mem[0].DI[0].nDIVal");
	pConf_mem[0].DI[0].bInvert = CS_UINT_INPUT(unsigned char,"pConf_mem[0].DI[0].bInvert");
	pConf_mem[0].cntDI = CS_INT_INPUT(int,"pConf_mem[0].cntDI");



	/* LogicProcCalcConfDI(unsigned int, struct _ConfLogic_t *) */
	LogicProcCalcConfDI(elipsed,pConf);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_LogicProcCalcConfDI_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
