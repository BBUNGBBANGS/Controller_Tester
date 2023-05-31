#line 2 "cs_test%crcSignGen_test0%cs_error"
/* crcSignGen_test0.c */
#ifndef __crcSignGen_test0__
#define __crcSignGen_test0__

#include "../factory/factory.h"

#include "crcSignGen_test0.h"

void CS_TEST crcSignGen_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(crcSignGen_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_crcSignGen_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	crcBASE_t * crc  = 0x0;
	struct crcBase crc_mem [3]={0,}; 
	crcModConfig_t * param  = 0x0;
	struct crcModConfig param_mem [3]={0,}; 
	unsigned long long param_mem0_src_data_pat_mem [1]={0,}; 
	unsigned long long param_mem1_src_data_pat_mem [1]={0,}; 
	unsigned long long param_mem2_src_data_pat_mem [1]={0,}; 

	/*Memory assign*/
	crc = crc_mem;
	param = param_mem;
	param_mem[0].src_data_pat = param_mem0_src_data_pat_mem;
	param_mem[1].src_data_pat = param_mem1_src_data_pat_mem;
	param_mem[2].src_data_pat = param_mem2_src_data_pat_mem;

	/*Input*/
	crc_mem[0].PSA_SIGREGL1 = CS_UINT_INPUT(unsigned int,"crc_mem[0].PSA_SIGREGL1");
	crc_mem[1].PSA_SIGREGL1 = CS_UINT_INPUT(unsigned int,"crc_mem[1].PSA_SIGREGL1");
	crc_mem[2].PSA_SIGREGL1 = CS_UINT_INPUT(unsigned int,"crc_mem[2].PSA_SIGREGL1");
	param_mem0_src_data_pat_mem[0] = CS_UINT_INPUT(unsigned long long,"param_mem0_src_data_pat_mem[0]");
	param_mem[0].data_length = CS_UINT_INPUT(unsigned int,"param_mem[0].data_length");
	param_mem[0].mode = CS_UINT_INPUT(unsigned int,"param_mem[0].mode");
	param_mem[0].crc_channel = CS_UINT_INPUT(unsigned int,"param_mem[0].crc_channel");
	param_mem[1].data_length = CS_UINT_INPUT(unsigned int,"param_mem[1].data_length");
	param_mem[1].mode = CS_UINT_INPUT(unsigned int,"param_mem[1].mode");
	param_mem1_src_data_pat_mem[0] = CS_UINT_INPUT(unsigned long long,"param_mem1_src_data_pat_mem[0]");
	param_mem[1].crc_channel = CS_UINT_INPUT(unsigned int,"param_mem[1].crc_channel");
	param_mem[2].data_length = CS_UINT_INPUT(unsigned int,"param_mem[2].data_length");
	param_mem2_src_data_pat_mem[0] = CS_UINT_INPUT(unsigned long long,"param_mem2_src_data_pat_mem[0]");
	param_mem[2].crc_channel = CS_UINT_INPUT(unsigned int,"param_mem[2].crc_channel");
	param_mem[2].mode = CS_UINT_INPUT(unsigned int,"param_mem[2].mode");



	/* crcSignGen(volatile struct crcBase *, struct crcModConfig *) */
	crcSignGen(crc,param);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_crcSignGen_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
