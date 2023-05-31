#line 2 "cs_test%main_test0%cs_error"
/* main_test0.c */
#ifndef __main_test0__
#define __main_test0__

#include "../factory/factory.h"

#include "main_test0.h"

void CS_TEST main_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(main_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_main_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%main_test0%User code start"
static volatile struct g_sciTransfer
{
    uint32   mode;         /* Used to check for TX interrupt Enable */  
    uint32   tx_length;    /* Transmit data length in number of Bytes */
	uint32   rx_length;    /* Receive data length in number of Bytes */  
    uint8    * tx_data;    /* Transmit data pointer */  	
    uint8    * rx_data;    /* Receive data pointer */  
} g_sciTransfer_t[2U];

typedef struct _SigDI_t
{
	//	Current Signal Value Status
	uint8_t		nValue;					//	0: Low / 1: High
	uint32_t	nRemainTime;			//	msec : ?? ???? ???? ??? ???? ?©£?. ( 100 ~ 65000 )
} SigDI_t, *PSigDI_t;

typedef struct _SigPI_t
{
	//	Current Signal Value Status
	uint16_t	nFreqency;				//	0: No Signal / 1 ~ 4000 Hz : Pulse Value

} SigPI_t, *PSigPI_t;
#define MAX_DI 8
#define MAX_PI 2
#define MAX_DO 6
#define MAX_CONFIG 6
uint8_t DIN_STAT[8];
uint8_t DIN_MON[8];

uint8_t DO_FB[7];
double	PI_STAT[MAX_PI];
double	PI_MON[MAX_PI];
uint8_t		dataRx1[8];		        //	UART1 - Console	- 115200
int			g_bEnDOMonitor;			//	DO??? ????? ??????.
int g_canRxComp0;
int g_canRxComp1;
int g_canRxComp2;
int g_canRxComp3;

uint32_t	g_tickPIEdge[4];	//	Time Stamp PI Edge
uint32_t	g_nOldPI[4];		//	Old PI Value
uint32_t g_nTick ;	//	???? Tick
uint32_t g_nTickBase ;	//	???? Tick Base ( 0 / 200000 / 400000 / ... )
uint32_t g_s_nTick ;	//	Tick ( 0 ~ 200000 )

int8_t		g_pinDI[MAX_DI];		//	GPIO DI Value	( Pin Value )
uint16_t	g_pinPI[MAX_PI];		//	PI Value		( Pin Value )
int8_t		g_pinDO[MAX_DO];		//	GPIO DO Value	( Pin Value )

int8_t		g_pinDIMsk[MAX_DI];		//	GPIO DI Manual Set Mask
int8_t		g_pinPIMsk[MAX_PI];		//	Pulse PI Manual Set Mask
int8_t		g_pinDOMsk[MAX_DO];		//	GPIO DO Manual Set Mask

SigDI_t		g_sigDI[MAX_DI];		//	sigDI#1 ~ #8
SigPI_t		g_sigPI[MAX_PI];		//	sigPI#1 ~ #2
char	g_sConfBuf[MAX_CONFIG][128];
char 	g_sConfData[1024];			//	Config Data Buffer

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

#line 104 "cs_test%main_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct adcBase adcREG1_tmp_mem [1]={0,}; 
	struct canBase canREG1_tmp_mem [1]={0,}; 
	struct canBase canREG2_tmp_mem [1]={0,}; 
	struct canBase canREG3_tmp_mem [1]={0,}; 
	unsigned char g_i2cTransfer_tmp_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct gioPort gioPORTA_tmp_mem [1]={0,}; 
	struct gioPort gioPORTB_tmp_mem [1]={0,}; 
	struct gioBase gioREG_tmp_mem [1]={0,}; 
	struct gioPort hetPORT2_tmp_mem [1]={0,}; 
	struct hetBase hetREG1_tmp_mem [1]={0,}; 
	struct hetBase hetREG2_tmp_mem [1]={0,}; 
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	struct linBase linREG_tmp_mem [1]={0,}; 
	struct mibspiRamBase mibspiRAM1_tmp_mem [1]={0,}; 
	struct mibspiRamBase mibspiRAM3_tmp_mem [1]={0,}; 
	struct mibspiRamBase mibspiRAM5_tmp_mem [1]={0,}; 
	struct mibspiBase mibspiREG1_tmp_mem [1]={0,}; 
	struct mibspiBase mibspiREG3_tmp_mem [1]={0,}; 
	struct mibspiBase mibspiREG5_tmp_mem [1]={0,}; 
	unsigned int pStackGuard_tmp_mem [1]={0,}; 
	struct pcrBase pcrREG_tmp_mem [1]={0,}; 
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	struct sciBase sciREG_tmp_mem [1]={0,}; 
	int returnVar = 0; 

	/*Memory assign*/
	adcREG1_tmp = adcREG1_tmp_mem;
	canREG1_tmp = canREG1_tmp_mem;
	canREG2_tmp = canREG2_tmp_mem;
	canREG3_tmp = canREG3_tmp_mem;
	g_i2cTransfer_tmp.data = g_i2cTransfer_tmp_data_mem;
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	gioPORTA_tmp = gioPORTA_tmp_mem;
	gioPORTB_tmp = gioPORTB_tmp_mem;
	gioREG_tmp = gioREG_tmp_mem;
	hetPORT2_tmp = hetPORT2_tmp_mem;
	hetREG1_tmp = hetREG1_tmp_mem;
	hetREG2_tmp = hetREG2_tmp_mem;
	i2cREG1_tmp = i2cREG1_tmp_mem;
	linREG_tmp = linREG_tmp_mem;
	mibspiRAM1_tmp = mibspiRAM1_tmp_mem;
	mibspiRAM3_tmp = mibspiRAM3_tmp_mem;
	mibspiRAM5_tmp = mibspiRAM5_tmp_mem;
	mibspiREG1_tmp = mibspiREG1_tmp_mem;
	mibspiREG3_tmp = mibspiREG3_tmp_mem;
	mibspiREG5_tmp = mibspiREG5_tmp_mem;
	pStackGuard_tmp = pStackGuard_tmp_mem;
	pcrREG_tmp = pcrREG_tmp_mem;
	rtiREG1_tmp = rtiREG1_tmp_mem;
	sciREG_tmp = sciREG_tmp_mem;

	/*Input*/
	DIN_MON[0] = CS_UINT_INPUT(unsigned char,"DIN_MON[0]");
	DIN_STAT[0] = CS_UINT_INPUT(unsigned char,"DIN_STAT[0]");
	DO_FB[0] = CS_UINT_INPUT(unsigned char,"DO_FB[0]");
	PI_MON[0] = CS_FLT_INPUT(double,"PI_MON[0]");
	PI_STAT[0] = CS_FLT_INPUT(double,"PI_STAT[0]");
	dataRx1[0] = CS_UINT_INPUT(unsigned char,"dataRx1[0]");
	g_bEnDOMonitor = CS_INT_INPUT(int,"g_bEnDOMonitor");
	g_bEnHalt = CS_INT_INPUT(int,"g_bEnHalt");
	g_canRxComp0 = CS_INT_INPUT(int,"g_canRxComp0");
	g_canRxComp1 = CS_INT_INPUT(int,"g_canRxComp1");
	g_canRxComp2 = CS_INT_INPUT(int,"g_canRxComp2");
	g_canRxComp3 = CS_INT_INPUT(int,"g_canRxComp3");
	g_i2cTransfer_tmp.mode = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.mode");
	g_i2cTransfer_tmp.length = CS_UINT_INPUT(unsigned int,"g_i2cTransfer_tmp.length");
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
	hetREG1_tmp_mem[0].PFR = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].PFR");
	hetREG1_tmp_mem[0].AND = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].AND");
	hetREG1_tmp_mem[0].HRSH = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].HRSH");
	hetREG1_tmp_mem[0].XOR = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].XOR");
	hetREG1_tmp_mem[0].DIR = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].DIR");
	hetREG1_tmp_mem[0].DOUT = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].DOUT");
	hetREG1_tmp_mem[0].PDR = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].PDR");
	hetREG1_tmp_mem[0].PULDIS = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].PULDIS");
	hetREG1_tmp_mem[0].PSL = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].PSL");
	hetREG1_tmp_mem[0].PCR = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].PCR");
	i2cREG1_tmp_mem[0].IMR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].IMR");
	i2cREG1_tmp_mem[0].CKL = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].CKL");
	i2cREG1_tmp_mem[0].CKH = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].CKH");
	i2cREG1_tmp_mem[0].CNT = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].CNT");
	i2cREG1_tmp_mem[0].MDR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].MDR");
	i2cREG1_tmp_mem[0].EMDR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].EMDR");
	i2cREG1_tmp_mem[0].PSC = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PSC");
	i2cREG1_tmp_mem[0].DMACR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].DMACR");
	i2cREG1_tmp_mem[0].PFNC = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PFNC");
	i2cREG1_tmp_mem[0].DIR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].DIR");
	i2cREG1_tmp_mem[0].DIN = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].DIN");
	i2cREG1_tmp_mem[0].DOUT = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].DOUT");
	i2cREG1_tmp_mem[0].PDR = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PDR");
	i2cREG1_tmp_mem[0].PDIS = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PDIS");
	i2cREG1_tmp_mem[0].PSEL = CS_UINT_INPUT(unsigned int,"i2cREG1_tmp_mem[0].PSEL");
	s_het1pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het1pwmPolarity[0]");
	s_het2pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het2pwmPolarity[0]");
	sciREG_tmp_mem[0].PIO3 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO3");
	sciREG_tmp_mem[0].GCR0 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].GCR0");
	sciREG_tmp_mem[0].GCR1 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].GCR1");
	sciREG_tmp_mem[0].PIO6 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO6");
	sciREG_tmp_mem[0].PIO7 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO7");
	sciREG_tmp_mem[0].PIO8 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO8");
	sciREG_tmp_mem[0].FORMAT = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].FORMAT");
	sciREG_tmp_mem[0].PIO0 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO0");
	sciREG_tmp_mem[0].PIO1 = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].PIO1");
	sciREG_tmp_mem[0].SETINT = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].SETINT");
	sciREG_tmp_mem[0].CLEARINT = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].CLEARINT");
	sciREG_tmp_mem[0].BRS = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].BRS");
	sciREG_tmp_mem[0].CLEARINTLVL = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].CLEARINTLVL");
	sciREG_tmp_mem[0].SETINTLVL = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].SETINTLVL");
	sum[0] = CS_INT_INPUT(int,"sum[0]");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* int main() */
	returnVar = main();




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
	CS_UINT_OUTPUT(g_i2cTransfer_tmp.mode, "g_i2cTransfer_tmp.mode");
	CS_UINT_OUTPUT(g_i2cTransfer_tmp.length, "g_i2cTransfer_tmp.length");
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
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].PFR, "hetREG1_tmp_mem[0].PFR");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].AND, "hetREG1_tmp_mem[0].AND");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].HRSH, "hetREG1_tmp_mem[0].HRSH");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].XOR, "hetREG1_tmp_mem[0].XOR");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].DIR, "hetREG1_tmp_mem[0].DIR");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].DOUT, "hetREG1_tmp_mem[0].DOUT");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].PDR, "hetREG1_tmp_mem[0].PDR");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].PULDIS, "hetREG1_tmp_mem[0].PULDIS");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].PSL, "hetREG1_tmp_mem[0].PSL");
	CS_UINT_OUTPUT(hetREG1_tmp_mem[0].PCR, "hetREG1_tmp_mem[0].PCR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].IMR, "i2cREG1_tmp_mem[0].IMR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].CKL, "i2cREG1_tmp_mem[0].CKL");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].CKH, "i2cREG1_tmp_mem[0].CKH");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].CNT, "i2cREG1_tmp_mem[0].CNT");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].MDR, "i2cREG1_tmp_mem[0].MDR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].EMDR, "i2cREG1_tmp_mem[0].EMDR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].PSC, "i2cREG1_tmp_mem[0].PSC");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].DMACR, "i2cREG1_tmp_mem[0].DMACR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].PFNC, "i2cREG1_tmp_mem[0].PFNC");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].DIR, "i2cREG1_tmp_mem[0].DIR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].DIN, "i2cREG1_tmp_mem[0].DIN");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].DOUT, "i2cREG1_tmp_mem[0].DOUT");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].PDR, "i2cREG1_tmp_mem[0].PDR");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].PDIS, "i2cREG1_tmp_mem[0].PDIS");
	CS_UINT_OUTPUT(i2cREG1_tmp_mem[0].PSEL, "i2cREG1_tmp_mem[0].PSEL");
	CS_UINT_OUTPUT(s_het1pwmPolarity[0], "s_het1pwmPolarity[0]");
	CS_UINT_OUTPUT(s_het2pwmPolarity[0], "s_het2pwmPolarity[0]");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].PIO3, "sciREG_tmp_mem[0].PIO3");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].GCR0, "sciREG_tmp_mem[0].GCR0");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].GCR1, "sciREG_tmp_mem[0].GCR1");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].PIO6, "sciREG_tmp_mem[0].PIO6");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].PIO7, "sciREG_tmp_mem[0].PIO7");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].PIO8, "sciREG_tmp_mem[0].PIO8");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].FORMAT, "sciREG_tmp_mem[0].FORMAT");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].PIO0, "sciREG_tmp_mem[0].PIO0");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].PIO1, "sciREG_tmp_mem[0].PIO1");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].SETINT, "sciREG_tmp_mem[0].SETINT");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].CLEARINT, "sciREG_tmp_mem[0].CLEARINT");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].BRS, "sciREG_tmp_mem[0].BRS");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].CLEARINTLVL, "sciREG_tmp_mem[0].CLEARINTLVL");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].SETINTLVL, "sciREG_tmp_mem[0].SETINTLVL");
	CS_INT_OUTPUT(sum[0], "sum[0]");
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_main_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
