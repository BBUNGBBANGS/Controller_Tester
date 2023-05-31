#line 2 "cs_test%adcGetData_test0%cs_error"
/* adcGetData_test0.c */
#ifndef __adcGetData_test0__
#define __adcGetData_test0__

#include "../factory/factory.h"

#include "adcGetData_test0.h"

void CS_TEST adcGetData_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(adcGetData_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_adcGetData_test0_stub_configuration();
	{/*<START TEST>*/


	/*Declaration (parameter/return/target object) variables*/
	struct adcBase adcREG1_tmp_mem [1]={0,}; 
	adcBASE_t * adc  = 0x0;
	struct adcBase adc_mem [1]={0,}; 
	unsigned int group  = 0; 
	adcData_t * data  = 0x0;
	struct adcData data_mem [16]={0,}; 
	unsigned int returnVar = 0; 

	/*Memory assign*/
	adcREG1_tmp = adcREG1_tmp_mem;
	adc = adc_mem;
	data = data_mem;

	/*Input*/
	adcREG1_tmp_mem[0].GxINTCR[0] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxINTCR[0]");
	adcREG1_tmp_mem[0].GxINTFLG[0] = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxINTFLG[0]");
	adcREG1_tmp_mem[0].OPMODECR = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].OPMODECR");
	adcREG1_tmp_mem[0].GxBUF[0].BUF0 = CS_UINT_INPUT(unsigned int,"adcREG1_tmp_mem[0].GxBUF[0].BUF0");
	adc_mem[0].GxINTCR[0] = CS_UINT_INPUT(unsigned int,"adc_mem[0].GxINTCR[0]");
	adc_mem[0].GxINTFLG[0] = CS_UINT_INPUT(unsigned int,"adc_mem[0].GxINTFLG[0]");
	adc_mem[0].GxBUF[0].BUF0 = CS_UINT_INPUT(unsigned int,"adc_mem[0].GxBUF[0].BUF0");
	adc_mem[0].OPMODECR = CS_UINT_INPUT(unsigned int,"adc_mem[0].OPMODECR");
	group = CS_UINT_INPUT(unsigned int,"group");
	data_mem[0].value = CS_UINT_INPUT(unsigned short,"data_mem[0].value");
	data_mem[0].id = CS_UINT_INPUT(unsigned int,"data_mem[0].id");
	data_mem[1].value = CS_UINT_INPUT(unsigned short,"data_mem[1].value");
	data_mem[1].id = CS_UINT_INPUT(unsigned int,"data_mem[1].id");
	data_mem[2].value = CS_UINT_INPUT(unsigned short,"data_mem[2].value");
	data_mem[2].id = CS_UINT_INPUT(unsigned int,"data_mem[2].id");
	data_mem[3].id = CS_UINT_INPUT(unsigned int,"data_mem[3].id");
	data_mem[3].value = CS_UINT_INPUT(unsigned short,"data_mem[3].value");
	data_mem[4].value = CS_UINT_INPUT(unsigned short,"data_mem[4].value");
	data_mem[4].id = CS_UINT_INPUT(unsigned int,"data_mem[4].id");
	data_mem[5].value = CS_UINT_INPUT(unsigned short,"data_mem[5].value");
	data_mem[5].id = CS_UINT_INPUT(unsigned int,"data_mem[5].id");
	data_mem[6].value = CS_UINT_INPUT(unsigned short,"data_mem[6].value");
	data_mem[6].id = CS_UINT_INPUT(unsigned int,"data_mem[6].id");
	data_mem[7].value = CS_UINT_INPUT(unsigned short,"data_mem[7].value");
	data_mem[7].id = CS_UINT_INPUT(unsigned int,"data_mem[7].id");
	data_mem[8].id = CS_UINT_INPUT(unsigned int,"data_mem[8].id");
	data_mem[8].value = CS_UINT_INPUT(unsigned short,"data_mem[8].value");
	data_mem[9].id = CS_UINT_INPUT(unsigned int,"data_mem[9].id");
	data_mem[9].value = CS_UINT_INPUT(unsigned short,"data_mem[9].value");
	data_mem[10].id = CS_UINT_INPUT(unsigned int,"data_mem[10].id");
	data_mem[10].value = CS_UINT_INPUT(unsigned short,"data_mem[10].value");
	data_mem[11].id = CS_UINT_INPUT(unsigned int,"data_mem[11].id");
	data_mem[11].value = CS_UINT_INPUT(unsigned short,"data_mem[11].value");
	data_mem[12].id = CS_UINT_INPUT(unsigned int,"data_mem[12].id");
	data_mem[12].value = CS_UINT_INPUT(unsigned short,"data_mem[12].value");
	data_mem[13].id = CS_UINT_INPUT(unsigned int,"data_mem[13].id");
	data_mem[13].value = CS_UINT_INPUT(unsigned short,"data_mem[13].value");
	data_mem[14].value = CS_UINT_INPUT(unsigned short,"data_mem[14].value");
	data_mem[14].id = CS_UINT_INPUT(unsigned int,"data_mem[14].id");
	data_mem[15].value = CS_UINT_INPUT(unsigned short,"data_mem[15].value");
	data_mem[15].id = CS_UINT_INPUT(unsigned int,"data_mem[15].id");



	/* unsigned int adcGetData(volatile struct adcBase *, unsigned int, struct adcData *) */
	returnVar = adcGetData(adc,group,data);




	/*Output*/
	CS_UINT_OUTPUT(adc_mem[0].GxINTFLG[0], "adc_mem[0].GxINTFLG[0]");
	CS_UINT_OUTPUT(data_mem[0].value, "data_mem[0].value");
	CS_UINT_OUTPUT(data_mem[0].id, "data_mem[0].id");
	CS_UINT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_adcGetData_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
