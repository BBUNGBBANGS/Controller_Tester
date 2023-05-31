#line 2 "cs_test%crcSetConfig_test0%cs_error"
/* crcSetConfig_test0.c */
#ifndef __crcSetConfig_test0__
#define __crcSetConfig_test0__

#include "../factory/factory.h"

#include "crcSetConfig_test0.h"

void CS_TEST crcSetConfig_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(crcSetConfig_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_crcSetConfig_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	crcBASE_t * crc  = 0x0;
	struct crcBase crc_mem [1]={0,}; 
	crcConfig_t * param  = 0x0;
	struct crcConfig param_mem [1]={0,}; 

	/*Memory assign*/
	crc = crc_mem;
	param = param_mem;

	/*Input*/
	param_mem[0].crc_channel = CS_UINT_INPUT(unsigned int,"param_mem[0].crc_channel");
	param_mem[0].mode = CS_UINT_INPUT(unsigned int,"param_mem[0].mode");
	param_mem[0].pcount = CS_UINT_INPUT(unsigned int,"param_mem[0].pcount");
	param_mem[0].scount = CS_UINT_INPUT(unsigned int,"param_mem[0].scount");
	param_mem[0].wdg_preload = CS_UINT_INPUT(unsigned int,"param_mem[0].wdg_preload");
	param_mem[0].block_preload = CS_UINT_INPUT(unsigned int,"param_mem[0].block_preload");



	/* crcSetConfig(volatile struct crcBase *, struct crcConfig *) */
	crcSetConfig(crc,param);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_crcSetConfig_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
