#line 2 "cs_test%mibspiPmodeSet_test0%cs_error"
/* mibspiPmodeSet_test0.c */
#ifndef __mibspiPmodeSet_test0__
#define __mibspiPmodeSet_test0__

#include "../factory/factory.h"

#include "mibspiPmodeSet_test0.h"

void CS_TEST mibspiPmodeSet_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(mibspiPmodeSet_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_mibspiPmodeSet_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	mibspiBASE_t * mibspi  = 0x0;
	struct mibspiBase mibspi_mem [1]={0,}; 
	enum mibspiPmode Pmode ; 
	enum mibspiDFMT DFMT ; 

	/*Memory assign*/
	mibspi = mibspi_mem;

	/*Input*/
	mibspi_mem[0].PMCTRL = CS_UINT_INPUT(unsigned int,"mibspi_mem[0].PMCTRL");
	Pmode = (enum mibspiPmode)CS_INT_INPUT(enum mibspiPmode,"Pmode");
	DFMT = (enum mibspiDFMT)CS_INT_INPUT(enum mibspiDFMT,"DFMT");



	/* mibspiPmodeSet(volatile struct mibspiBase *, enum mibspiPmode, enum mibspiDFMT) */
	mibspiPmodeSet(mibspi,Pmode,DFMT);




	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_mibspiPmodeSet_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
