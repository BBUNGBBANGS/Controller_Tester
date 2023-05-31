#line 2 "cs_test%crcSendPowerDown_test0%cs_error"
/* crcSendPowerDown_test0.c */
#ifndef __crcSendPowerDown_test0__
#define __crcSendPowerDown_test0__

#include "../factory/factory.h"

#include "crcSendPowerDown_test0.h"

void CS_TEST crcSendPowerDown_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(crcSendPowerDown_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_crcSendPowerDown_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	crcBASE_t * crc  = 0x0;
	struct crcBase crc_mem [1]={0,}; 

	/*Memory assign*/
	crc = crc_mem;



	/* crcSendPowerDown(volatile struct crcBase *) */
	crcSendPowerDown(crc);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_crcSendPowerDown_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
