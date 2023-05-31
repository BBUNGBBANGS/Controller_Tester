#line 2 "cs_test%mibspiEnableGroupNotification_test0%cs_error"
/* mibspiEnableGroupNotification_test0.c */
#ifndef __mibspiEnableGroupNotification_test0__
#define __mibspiEnableGroupNotification_test0__

#include "../factory/factory.h"

#include "mibspiEnableGroupNotification_test0.h"

void CS_TEST mibspiEnableGroupNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(mibspiEnableGroupNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_mibspiEnableGroupNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	mibspiBASE_t * mibspi  = 0x0;
	struct mibspiBase mibspi_mem [1]={0,}; 
	unsigned int group  = 0; 
	unsigned int level  = 0; 

	/*Memory assign*/
	mibspi = mibspi_mem;

	/*Input*/
	mibspi_mem[0].TGITENST = CS_UINT_INPUT(unsigned int,"mibspi_mem[0].TGITENST");
	mibspi_mem[0].TGITLVST = CS_UINT_INPUT(unsigned int,"mibspi_mem[0].TGITLVST");
	mibspi_mem[0].TGITLVCR = CS_UINT_INPUT(unsigned int,"mibspi_mem[0].TGITLVCR");
	group = CS_UINT_INPUT(unsigned int,"group");
	level = CS_UINT_INPUT(unsigned int,"level");



	/* mibspiEnableGroupNotification(volatile struct mibspiBase *, unsigned int, unsigned int) */
	mibspiEnableGroupNotification(mibspi,group,level);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_mibspiEnableGroupNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
