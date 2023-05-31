#line 2 "cs_test%mibspiSetData_test0%cs_error"
/* mibspiSetData_test0.c */
#ifndef __mibspiSetData_test0__
#define __mibspiSetData_test0__

#include "../factory/factory.h"

#include "mibspiSetData_test0.h"

void CS_TEST mibspiSetData_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(mibspiSetData_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_mibspiSetData_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct mibspiRamBase mibspiRAM5_tmp_mem [1]={0,}; 
	mibspiBASE_t * mibspi  = 0x0;
	struct mibspiBase mibspi_mem [2]={0,}; 
	unsigned int group  = 0; 
	uint16 * data  = 0x0;
	unsigned short data_mem [1]={0,}; 

	/*Memory assign*/
	mibspiRAM5_tmp = mibspiRAM5_tmp_mem;
	mibspi = mibspi_mem;
	data = data_mem;

	/*Input*/
	mibspiRAM5_tmp_mem[0].tx[0].data = CS_UINT_INPUT(unsigned short,"mibspiRAM5_tmp_mem[0].tx[0].data");
	mibspiRAM5_tmp_mem[0].tx[127].data = CS_UINT_INPUT(unsigned short,"mibspiRAM5_tmp_mem[0].tx[127].data");
	mibspi_mem[0].LTGPEND = CS_UINT_INPUT(unsigned int,"mibspi_mem[0].LTGPEND");
	mibspi_mem[0].TGCTRL[0] = CS_UINT_INPUT(unsigned int,"mibspi_mem[0].TGCTRL[0]");
	mibspi_mem[1].TGCTRL[0] = CS_UINT_INPUT(unsigned int,"mibspi_mem[1].TGCTRL[0]");
	mibspi_mem[1].TGCTRL[1] = CS_UINT_INPUT(unsigned int,"mibspi_mem[1].TGCTRL[1]");
	mibspi_mem[1].TGCTRL[2] = CS_UINT_INPUT(unsigned int,"mibspi_mem[1].TGCTRL[2]");
	mibspi_mem[1].TGCTRL[3] = CS_UINT_INPUT(unsigned int,"mibspi_mem[1].TGCTRL[3]");
	mibspi_mem[1].TGCTRL[4] = CS_UINT_INPUT(unsigned int,"mibspi_mem[1].TGCTRL[4]");
	mibspi_mem[1].TGCTRL[5] = CS_UINT_INPUT(unsigned int,"mibspi_mem[1].TGCTRL[5]");
	mibspi_mem[1].TGCTRL[6] = CS_UINT_INPUT(unsigned int,"mibspi_mem[1].TGCTRL[6]");
	mibspi_mem[1].TGCTRL[7] = CS_UINT_INPUT(unsigned int,"mibspi_mem[1].TGCTRL[7]");
	group = CS_UINT_INPUT(unsigned int,"group");
	data_mem[0] = CS_UINT_INPUT(unsigned short,"data_mem[0]");



	/* mibspiSetData(volatile struct mibspiBase *, unsigned int, unsigned short *) */
	mibspiSetData(mibspi,group,data);




	/*Output*/
	CS_UINT_OUTPUT(mibspiRAM5_tmp_mem[0].tx[0].data, "mibspiRAM5_tmp_mem[0].tx[0].data");
	CS_UINT_OUTPUT(mibspiRAM5_tmp_mem[0].tx[127].data, "mibspiRAM5_tmp_mem[0].tx[127].data");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_mibspiSetData_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
