#line 2 "cs_test%systemPowerDown_test0%cs_error"
/* systemPowerDown_test0.c */
#ifndef __systemPowerDown_test0__
#define __systemPowerDown_test0__

#include "../factory/factory.h"

#include "systemPowerDown_test0.h"

void CS_TEST systemPowerDown_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(systemPowerDown_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_systemPowerDown_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 
	unsigned int mode  = 0; 

	/*Memory assign*/
	systemREG1_tmp = systemREG1_tmp_mem;

	/*Input*/
	systemREG1_tmp_mem[0].CSDISSET = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSDISSET");
	systemREG1_tmp_mem[0].CDDIS = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CDDIS");
	mode = CS_UINT_INPUT(unsigned int,"mode");



	/* systemPowerDown(unsigned int) */
	systemPowerDown(mode);




	/*Output*/
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CSDISSET, "systemREG1_tmp_mem[0].CSDISSET");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CDDIS, "systemREG1_tmp_mem[0].CDDIS");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_systemPowerDown_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
