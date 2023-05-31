#line 2 "cs_test%checkB0RAMECC_test0%cs_error"
/* checkB0RAMECC_test0.c */
#ifndef __checkB0RAMECC_test0__
#define __checkB0RAMECC_test0__

#include "../factory/factory.h"

#include "checkB0RAMECC_test0.h"

void CS_TEST checkB0RAMECC_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(checkB0RAMECC_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_checkB0RAMECC_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct tcramBase tcram1REG_tmp_mem [1]={0,}; 
	struct tcramBase tcram2REG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	esmREG_tmp = esmREG_tmp_mem;
	tcram1REG_tmp = tcram1REG_tmp_mem;
	tcram2REG_tmp = tcram2REG_tmp_mem;

	/*Input*/
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	tcram1REG_tmp_mem[0].RAMCTRL = CS_UINT_INPUT(unsigned int,"tcram1REG_tmp_mem[0].RAMCTRL");
	tcram1REG_tmp_mem[0].RAMTHRESHOLD = CS_UINT_INPUT(unsigned int,"tcram1REG_tmp_mem[0].RAMTHRESHOLD");
	tcram1REG_tmp_mem[0].RAMINTCTRL = CS_UINT_INPUT(unsigned int,"tcram1REG_tmp_mem[0].RAMINTCTRL");
	tcram1REG_tmp_mem[0].RAMERRSTATUS = CS_UINT_INPUT(unsigned int,"tcram1REG_tmp_mem[0].RAMERRSTATUS");
	tcram2REG_tmp_mem[0].RAMCTRL = CS_UINT_INPUT(unsigned int,"tcram2REG_tmp_mem[0].RAMCTRL");
	tcram2REG_tmp_mem[0].RAMTHRESHOLD = CS_UINT_INPUT(unsigned int,"tcram2REG_tmp_mem[0].RAMTHRESHOLD");
	tcram2REG_tmp_mem[0].RAMINTCTRL = CS_UINT_INPUT(unsigned int,"tcram2REG_tmp_mem[0].RAMINTCTRL");
	tcram2REG_tmp_mem[0].RAMERRSTATUS = CS_UINT_INPUT(unsigned int,"tcram2REG_tmp_mem[0].RAMERRSTATUS");



	/* checkB0RAMECC() */
	checkB0RAMECC();




	/*Output*/
	CS_UINT_OUTPUT(esmREG_tmp_mem[0].SR1[0], "esmREG_tmp_mem[0].SR1[0]");
	CS_UINT_OUTPUT(tcram1REG_tmp_mem[0].RAMCTRL, "tcram1REG_tmp_mem[0].RAMCTRL");
	CS_UINT_OUTPUT(tcram1REG_tmp_mem[0].RAMTHRESHOLD, "tcram1REG_tmp_mem[0].RAMTHRESHOLD");
	CS_UINT_OUTPUT(tcram1REG_tmp_mem[0].RAMINTCTRL, "tcram1REG_tmp_mem[0].RAMINTCTRL");
	CS_UINT_OUTPUT(tcram2REG_tmp_mem[0].RAMCTRL, "tcram2REG_tmp_mem[0].RAMCTRL");
	CS_UINT_OUTPUT(tcram2REG_tmp_mem[0].RAMTHRESHOLD, "tcram2REG_tmp_mem[0].RAMTHRESHOLD");
	CS_UINT_OUTPUT(tcram2REG_tmp_mem[0].RAMINTCTRL, "tcram2REG_tmp_mem[0].RAMINTCTRL");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_checkB0RAMECC_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
