#line 2 "cs_test%crcGetSectorSig_test0%cs_error"
/* crcGetSectorSig_test0.c */
#ifndef __crcGetSectorSig_test0__
#define __crcGetSectorSig_test0__

#include "../factory/factory.h"

#include "crcGetSectorSig_test0.h"

void CS_TEST crcGetSectorSig_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(crcGetSectorSig_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_crcGetSectorSig_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct crcBase crcREG_tmp_mem [1]={0,}; 
	crcBASE_t * crc  = 0x0;
	struct crcBase crc_mem [1]={0,}; 
	unsigned int channel  = 0; 
	unsigned long long returnVar = 0; 

	/*Memory assign*/
	crcREG_tmp = crcREG_tmp_mem;
	crc = crc_mem;

	/*Input*/
	crcREG_tmp_mem[0].PSA_SIGREGL1 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].PSA_SIGREGL1");
	crcREG_tmp_mem[0].PSA_SIGREGH1 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].PSA_SIGREGH1");
	crcREG_tmp_mem[0].PSA_SIGREGL2 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].PSA_SIGREGL2");
	crcREG_tmp_mem[0].PSA_SIGREGH2 = CS_UINT_INPUT(unsigned int,"crcREG_tmp_mem[0].PSA_SIGREGH2");
	crc_mem[0].PSA_SECSIGREGL1 = CS_UINT_INPUT(unsigned int,"crc_mem[0].PSA_SECSIGREGL1");
	crc_mem[0].PSA_SECSIGREGH1 = CS_UINT_INPUT(unsigned int,"crc_mem[0].PSA_SECSIGREGH1");
	crc_mem[0].PSA_SECSIGREGL2 = CS_UINT_INPUT(unsigned int,"crc_mem[0].PSA_SECSIGREGL2");
	crc_mem[0].PSA_SECSIGREGH2 = CS_UINT_INPUT(unsigned int,"crc_mem[0].PSA_SECSIGREGH2");
	channel = CS_UINT_INPUT(unsigned int,"channel");



	/* unsigned long long crcGetSectorSig(volatile struct crcBase *, unsigned int) */
	returnVar = crcGetSectorSig(crc,channel);




	/*Output*/
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].PSA_SIGREGL1, "crcREG_tmp_mem[0].PSA_SIGREGL1");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].PSA_SIGREGH1, "crcREG_tmp_mem[0].PSA_SIGREGH1");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].PSA_SIGREGL2, "crcREG_tmp_mem[0].PSA_SIGREGL2");
	CS_UINT_OUTPUT(crcREG_tmp_mem[0].PSA_SIGREGH2, "crcREG_tmp_mem[0].PSA_SIGREGH2");
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_crcGetSectorSig_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
