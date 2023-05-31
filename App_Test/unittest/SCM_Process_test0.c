#line 2 "cs_test%SCM_Process_test0%cs_error"
/* SCM_Process_test0.c */
#ifndef __SCM_Process_test0__
#define __SCM_Process_test0__

#include "../factory/factory.h"

#include "SCM_Process_test0.h"

void CS_TEST SCM_Process_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(SCM_Process_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_SCM_Process_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%SCM_Process_test0%User code start"
static struct g_i2cTransfer
{
    uint32  mode;
    uint32  length;
    uint8   * data;
} g_i2cTransfer_t;
static volatile struct g_sciTransfer
{
    uint32   mode;         /* Used to check for TX interrupt Enable */  
    uint32   tx_length;    /* Transmit data length in number of Bytes */
	uint32   rx_length;    /* Receive data length in number of Bytes */  
    uint8    * tx_data;    /* Transmit data pointer */  	
    uint8    * rx_data;    /* Receive data pointer */  
} g_sciTransfer_t[2U];
uint32_t g_nTick ;	//	???? Tick

uint32_t g_nTickBase ;	//	???? Tick Base ( 0 / 200000 / 400000 / ... )

uint32_t g_s_nTick ;	//	Tick ( 0 ~ 200000 )
uint32_t	g_tickPIEdge[4];	//	Time Stamp PI Edge
uint32_t	g_nOldPI[4];		//	Old PI Value

int g_canRxComp0;
int g_canRxComp1;
int g_canRxComp2;
int g_canRxComp3;

static uint32 s_het1pwmPolarity[8U] =
{
    3U,
    1U,
    3U,
    3U,
    3U,
    1U,
    3U,
    3U,
};

static uint32 s_het2pwmPolarity[8U] =
{
    3U,
    3U,
    3U,
    3U,
    3U,
    3U,
    3U,
    3U,
};

static int sum[3]={0,};
#define EPPAddrConfValid	120

#line 74 "cs_test%SCM_Process_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct gioPort hetPORT2_tmp_mem [1]={0,}; 
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	unsigned int pStackGuard_tmp_mem [1]={0,}; 
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	hetPORT2_tmp = hetPORT2_tmp_mem;
	i2cREG1_tmp = i2cREG1_tmp_mem;
	pStackGuard_tmp = pStackGuard_tmp_mem;
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	DIN_MON[0] = CS_UINT_INPUT(unsigned char,"DIN_MON[0]");
	DIN_STAT[0] = CS_UINT_INPUT(unsigned char,"DIN_STAT[0]");
	DO_FB[0] = CS_UINT_INPUT(unsigned char,"DO_FB[0]");
	PI_MON[0] = CS_FLT_INPUT(double,"PI_MON[0]");
	PI_STAT[0] = CS_FLT_INPUT(double,"PI_STAT[0]");
	g_bEnDOMonitor = CS_INT_INPUT(int,"g_bEnDOMonitor");
	g_bEnHalt = CS_INT_INPUT(int,"g_bEnHalt");
	g_canRxComp0 = CS_INT_INPUT(int,"g_canRxComp0");
	g_canRxComp1 = CS_INT_INPUT(int,"g_canRxComp1");
	g_canRxComp2 = CS_INT_INPUT(int,"g_canRxComp2");
	g_canRxComp3 = CS_INT_INPUT(int,"g_canRxComp3");
	g_nOldPI[0] = CS_UINT_INPUT(unsigned int,"g_nOldPI[0]");
	g_nTick = CS_UINT_INPUT(unsigned int,"g_nTick");
	g_nTickBase = CS_UINT_INPUT(unsigned int,"g_nTickBase");
	g_pinDI[0] = CS_INT_INPUT(signed char,"g_pinDI[0]");
	g_pinDIMsk[0] = CS_INT_INPUT(signed char,"g_pinDIMsk[0]");
	g_pinDO[0] = CS_INT_INPUT(signed char,"g_pinDO[0]");
	g_pinDOMsk[0] = CS_INT_INPUT(signed char,"g_pinDOMsk[0]");
	g_pinPI[0] = CS_UINT_INPUT(unsigned short,"g_pinPI[0]");
	g_pinPIMsk[0] = CS_INT_INPUT(signed char,"g_pinPIMsk[0]");
	CS_STRNCPY(g_sConfBuf[0],CS_STR_INPUT(char[128],"g_sConfBuf[0]"),127);
	CS_STRNCPY(g_sConfData,CS_STR_INPUT(char[1024],"g_sConfData"),1023);
	g_s_nTick = CS_UINT_INPUT(unsigned int,"g_s_nTick");
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	g_sigDI[0].nValue = CS_UINT_INPUT(unsigned char,"g_sigDI[0].nValue");
	g_sigDI[0].nRemainTime = CS_UINT_INPUT(unsigned int,"g_sigDI[0].nRemainTime");
	g_sigPI[0].nFreqency = CS_UINT_INPUT(unsigned short,"g_sigPI[0].nFreqency");
	g_tickPIEdge[0] = CS_UINT_INPUT(unsigned int,"g_tickPIEdge[0]");
	i2cREG1_tmp_mem[0].STR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].STR");
	i2cREG1_tmp_mem[0].SAR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].SAR");
	pStackGuard_tmp_mem[0] = CS_UINT_INPUT(unsigned int,"pStackGuard_tmp_mem[0]");
	rtiREG1_tmp_mem[0].COMPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMPCTRL");
	rtiREG1_tmp_mem[0].CMP[0].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].COMPx");
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	rtiREG1_tmp_mem[0].CNT[0].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].FRCx");
	s_het1pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het1pwmPolarity[0]");
	s_het2pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het2pwmPolarity[0]");
	sum[0] = CS_INT_INPUT(int,"sum[0]");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* SCM_Process() */
	SCM_Process();




	/*Output*/
	CS_UINT_OUTPUT(DIN_MON[0], "DIN_MON[0]");
	CS_UINT_OUTPUT(DIN_STAT[0], "DIN_STAT[0]");
	CS_UINT_OUTPUT(DO_FB[0], "DO_FB[0]");
	CS_FLT_OUTPUT(PI_MON[0], "PI_MON[0]");
	CS_FLT_OUTPUT(PI_STAT[0], "PI_STAT[0]");
	CS_INT_OUTPUT(g_bEnDOMonitor, "g_bEnDOMonitor");
	CS_INT_OUTPUT(g_bEnHalt, "g_bEnHalt");
	CS_INT_OUTPUT(g_canRxComp0, "g_canRxComp0");
	CS_INT_OUTPUT(g_canRxComp1, "g_canRxComp1");
	CS_INT_OUTPUT(g_canRxComp2, "g_canRxComp2");
	CS_INT_OUTPUT(g_canRxComp3, "g_canRxComp3");
	CS_UINT_OUTPUT(g_nOldPI[0], "g_nOldPI[0]");
	CS_UINT_OUTPUT(g_nTick, "g_nTick");
	CS_UINT_OUTPUT(g_nTickBase, "g_nTickBase");
	CS_INT_OUTPUT(g_pinDI[0], "g_pinDI[0]");
	CS_INT_OUTPUT(g_pinDO[0], "g_pinDO[0]");
	CS_UINT_OUTPUT(g_pinPI[0], "g_pinPI[0]");
	CS_UINT_OUTPUT(g_s_nTick, "g_s_nTick");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_UINT_OUTPUT(g_sigDI[0].nValue, "g_sigDI[0].nValue");
	CS_UINT_OUTPUT(g_sigDI[0].nRemainTime, "g_sigDI[0].nRemainTime");
	CS_UINT_OUTPUT(g_sigPI[0].nFreqency, "g_sigPI[0].nFreqency");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].SAR, "i2cREG1_tmp_mem[0].SAR");
	CS_UINT_OUTPUT(pStackGuard_tmp_mem[0], "pStackGuard_tmp_mem[0]");
	CS_UINT_OUTPUT(s_het1pwmPolarity[0], "s_het1pwmPolarity[0]");
	CS_UINT_OUTPUT(s_het2pwmPolarity[0], "s_het2pwmPolarity[0]");
	CS_INT_OUTPUT(sum[0], "sum[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_SCM_Process_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
