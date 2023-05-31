#line 2 "cs_test%crcEnableNotification_test0%cs_error"
/* crcEnableNotification_test0.c */
#ifndef __crcEnableNotification_test0__
#define __crcEnableNotification_test0__

#include "../factory/factory.h"

#include "crcEnableNotification_test0.h"

void CS_TEST crcEnableNotification_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(crcEnableNotification_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_crcEnableNotification_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	crcBASE_t * crc  = 0x0;
	struct crcBase crc_mem [1]={0,}; 
	unsigned int flags  = 0; 

	/*Memory assign*/
	crc = crc_mem;

	/*Input*/
	flags = CS_UINT_INPUT(unsigned int,"flags");



	/* crcEnableNotification(volatile struct crcBase *, unsigned int) */
	crcEnableNotification(crc,flags);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_crcEnableNotification_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
