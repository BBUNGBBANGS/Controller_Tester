#line 2 "cs_test%crcGetFailedSector_test0%cs_error"
/* crcGetFailedSector_test0.c */
#ifndef __crcGetFailedSector_test0__
#define __crcGetFailedSector_test0__

#include "../factory/factory.h"

#include "crcGetFailedSector_test0.h"

void CS_TEST crcGetFailedSector_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(crcGetFailedSector_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_crcGetFailedSector_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	crcBASE_t * crc  = 0x0;
	struct crcBase crc_mem [1]={0,}; 
	unsigned int channel  = 0; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	crc = crc_mem;

	/*Input*/
	crc_mem[0].CURSEC_REG1 = CS_UINT_INPUT(unsigned int,"crc_mem[0].CURSEC_REG1");
	crc_mem[0].CURSEC_REG2 = CS_UINT_INPUT(unsigned int,"crc_mem[0].CURSEC_REG2");
	channel = CS_UINT_INPUT(unsigned int,"channel");



	/* unsigned int crcGetFailedSector(volatile struct crcBase *, unsigned int) */
	returnVar = crcGetFailedSector(crc,channel);




	/*Output*/
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_crcGetFailedSector_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
