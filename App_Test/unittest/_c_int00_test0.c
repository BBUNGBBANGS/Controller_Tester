#line 2 "cs_test%_c_int00_test0%cs_error"
/* _c_int00_test0.c */
#ifndef ___c_int00_test0__
#define ___c_int00_test0__

#include "../factory/factory.h"

#include "_c_int00_test0.h"

void CS_TEST _c_int00_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(_c_int00_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect__c_int00_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%_c_int00_test0%User code start"
#define MAX_DI 8
#define MAX_PI 2
#define MAX_DO 6
#define MAX_CONFIG 6
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
#define rtiCOMPARE0 0U

uint32_t	g_tickPIEdge[4];	//	Time Stamp PI Edge
uint32_t	g_nOldPI[4];		//	Old PI Value

static int sum[3]={0,};
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

uint8_t DIN_STAT[8];
uint8_t DIN_MON[8];

uint8_t DO_FB[7];
double	PI_STAT[MAX_PI];
double	PI_MON[MAX_PI];
int8_t		g_pinDI[MAX_DI];		//	GPIO DI Value	( Pin Value )
uint16_t	g_pinPI[MAX_PI];		//	PI Value		( Pin Value )
int8_t		g_pinDO[MAX_DO];		//	GPIO DO Value	( Pin Value )

int8_t		g_pinDIMsk[MAX_DI];		//	GPIO DI Manual Set Mask
int8_t		g_pinPIMsk[MAX_PI];		//	Pulse PI Manual Set Mask
int8_t		g_pinDOMsk[MAX_DO];		//	GPIO DO Manual Set Mask

SigDI_t		g_sigDI[MAX_DI];		//	sigDI#1 ~ #8
SigPI_t		g_sigPI[MAX_PI];		//	sigPI#1 ~ #2
uint8_t		dataRx1[8];
int			g_bEnDOMonitor;
int			g_bEnHalt;
int g_canRxComp0;
int g_canRxComp1;
int g_canRxComp2;
int g_canRxComp3;
char	g_sConfBuf[MAX_CONFIG][128];
char 	g_sConfData[1024];			//	Config Data Buffer



typedef volatile struct pinMuxBase
{
    uint32 PINMMR0;		/**< 0xEB10 Pin Mux 0 register*/
    uint32 PINMMR1;		/**< 0xEB14 Pin Mux 1 register*/
    uint32 PINMMR2;		/**< 0xEB18 Pin Mux 2 register*/
    uint32 PINMMR3;		/**< 0xEB1C Pin Mux 3 register*/
    uint32 PINMMR4;		/**< 0xEB20 Pin Mux 4 register*/
    uint32 PINMMR5;		/**< 0xEB24 Pin Mux 5 register*/
    uint32 PINMMR6;		/**< 0xEB28 Pin Mux 6 register*/
    uint32 PINMMR7;		/**< 0xEB2C Pin Mux 7 register*/
    uint32 PINMMR8;		/**< 0xEB30 Pin Mux 8 register*/
    uint32 PINMMR9;		/**< 0xEB34 Pin Mux 9 register*/
    uint32 PINMMR10;		/**< 0xEB38 Pin Mux 10 register*/
    uint32 PINMMR11;		/**< 0xEB3C Pin Mux 11 register*/
    uint32 PINMMR12;		/**< 0xEB40 Pin Mux 12 register*/
    uint32 PINMMR13;		/**< 0xEB44 Pin Mux 13 register*/
    uint32 PINMMR14;		/**< 0xEB48 Pin Mux 14 register*/
    uint32 PINMMR15;		/**< 0xEB4C Pin Mux 15 register*/
    uint32 PINMMR16;		/**< 0xEB50 Pin Mux 16 register*/
    uint32 PINMMR17;		/**< 0xEB54 Pin Mux 17 register*/
    uint32 PINMMR18;		/**< 0xEB58 Pin Mux 18 register*/
    uint32 PINMMR19;		/**< 0xEB5C Pin Mux 19 register*/
    uint32 PINMMR20;		/**< 0xEB60 Pin Mux 20 register*/
    uint32 PINMMR21;		/**< 0xEB64 Pin Mux 21 register*/
    uint32 PINMMR22;		/**< 0xEB68 Pin Mux 22 register*/
    uint32 PINMMR23;		/**< 0xEB6C Pin Mux 23 register*/
    uint32 PINMMR24;		/**< 0xEB70 Pin Mux 24 register*/
    uint32 PINMMR25;		/**< 0xEB74 Pin Mux 25 register*/
    uint32 PINMMR26;		/**< 0xEB78 Pin Mux 26 register*/
    uint32 PINMMR27;		/**< 0xEB7C Pin Mux 27 register*/
    uint32 PINMMR28;		/**< 0xEB80 Pin Mux 28 register*/
    uint32 PINMMR29;		/**< 0xEB84 Pin Mux 29 register*/
    uint32 PINMMR30;		/**< 0xEB88 Pin Mux 30 register*/
}pinMuxBASE_t;
typedef volatile struct pinMuxKicker
{
    uint32 KICKER0;       /* kicker 0 register */
    uint32 KICKER1;       /* kicker 1 register */
} pinMuxKICKER_t;
extern pinMuxBASE_t *pinMuxReg_tmp;
extern pinMuxKICKER_t *kickerReg_tmp;


extern volatile uint32 *address_0xFFFF0400U;
extern volatile uint32 *address_0xFFFF040CU;
extern volatile uint32 *address_0xFFFFE400U;
extern volatile uint32 *address_0xFFFFE440U;
extern volatile uint32 *address_0xFFFFE404U;
extern volatile uint32 *address_0xFFFFE444U;
extern volatile uint32 *address_0xFFFFE408U;
extern volatile uint32 *address_0xFFFFE448U;
extern volatile uint32 *address_0xFFFFE40CU;
extern volatile uint32 *address_0xFFFFE44CU;
extern volatile uint32 *address_0xFFFFE410U;
extern volatile uint32 *address_0xFFFFE450U;
extern volatile uint32 *address_0xFFFFE540U;
extern volatile uint32 *address_0xFFFFE550U;
extern volatile uint32 *address_0xFFFFE530U;
extern volatile uint32 *address_0xFFFFE520U;
extern volatile uint32 *address_0xFFFFE524U;
extern volatile uint32 *address_0xFFFFE414U;
extern volatile uint32 *address_0xFFFFE454U;
extern volatile uint32 *address_0xFFFFE418U;
extern volatile uint32 *address_0xFFFFE458U;


#define VIM_CHANNELS 96
#define SCI_RX_INT 0x00000200U


#line 179 "cs_test%_c_int00_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct adcBase adcREG1_tmp_mem [1]={0,}; 
	struct adcBase adcREG2_tmp_mem [1]={0,}; 
	unsigned int address_0xFFFF0400U_mem [1]={0,}; 
	unsigned int address_0xFFFF040CU_mem [1]={0,}; 
	unsigned int address_0xFFFFE400U_mem [1]={0,}; 
	unsigned int address_0xFFFFE404U_mem [1]={0,}; 
	unsigned int address_0xFFFFE408U_mem [1]={0,}; 
	unsigned int address_0xFFFFE40CU_mem [1]={0,}; 
	unsigned int address_0xFFFFE410U_mem [1]={0,}; 
	unsigned int address_0xFFFFE414U_mem [1]={0,}; 
	unsigned int address_0xFFFFE418U_mem [1]={0,}; 
	unsigned int address_0xFFFFE440U_mem [1]={0,}; 
	unsigned int address_0xFFFFE444U_mem [1]={0,}; 
	unsigned int address_0xFFFFE448U_mem [1]={0,}; 
	unsigned int address_0xFFFFE44CU_mem [1]={0,}; 
	unsigned int address_0xFFFFE450U_mem [1]={0,}; 
	unsigned int address_0xFFFFE454U_mem [1]={0,}; 
	unsigned int address_0xFFFFE458U_mem [1]={0,}; 
	unsigned int address_0xFFFFE520U_mem [1]={0,}; 
	unsigned int address_0xFFFFE524U_mem [1]={0,}; 
	unsigned int address_0xFFFFE530U_mem [1]={0,}; 
	unsigned int address_0xFFFFE540U_mem [1]={0,}; 
	unsigned int address_0xFFFFE550U_mem [1]={0,}; 
	struct canBase canREG1_tmp_mem [1]={0,}; 
	struct canBase canREG2_tmp_mem [1]={0,}; 
	struct canBase canREG3_tmp_mem [1]={0,}; 
	struct _SigPI_t confLogic_PI0_pSigPI_mem [1]={0,}; 
	struct _SigDI_t confLogic_DI0_pSigDI_mem [1]={0,}; 
	struct efcBase efcREG_tmp_mem [1]={0,}; 
	struct esmBase esmREG_tmp_mem [1]={0,}; 
	struct flashWBase flashWREG_tmp_mem [1]={0,}; 
	unsigned char g_i2cTransfer_tmp_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct gioPort gioPORTA_tmp_mem [1]={0,}; 
	struct gioPort gioPORTB_tmp_mem [1]={0,}; 
	struct gioBase gioREG_tmp_mem [1]={0,}; 
	struct gioPort hetPORT2_tmp_mem [1]={0,}; 
	struct het1RamBase hetRAM1_tmp_mem [1]={0,}; 
	struct het1RamBase hetRAM2_tmp_mem [1]={0,}; 
	struct hetBase hetREG1_tmp_mem [1]={0,}; 
	struct hetBase hetREG2_tmp_mem [1]={0,}; 
	struct htuBase htuREG1_tmp_mem [1]={0,}; 
	struct htuBase htuREG2_tmp_mem [1]={0,}; 
	struct i2cBase i2cREG1_tmp_mem [1]={0,}; 
	struct pinMuxKicker kickerReg_tmp_mem [1]={0,}; 
	struct linBase linREG_tmp_mem [1]={0,}; 
	struct mibspiRamBase mibspiRAM1_tmp_mem [1]={0,}; 
	struct mibspiRamBase mibspiRAM3_tmp_mem [1]={0,}; 
	struct mibspiRamBase mibspiRAM5_tmp_mem [1]={0,}; 
	struct mibspiBase mibspiREG1_tmp_mem [1]={0,}; 
	struct mibspiBase mibspiREG3_tmp_mem [1]={0,}; 
	struct mibspiBase mibspiREG5_tmp_mem [1]={0,}; 
	unsigned int pStackGuard_tmp_mem [1]={0,}; 
	struct pbistBase pbistREG_tmp_mem [1]={0,}; 
	struct pcrBase pcrREG_tmp_mem [1]={0,}; 
	struct pinMuxBase pinMuxReg_tmp_mem [1]={0,}; 
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 
	struct sciBase sciREG_tmp_mem [1]={0,}; 
	struct stcBase stcREG_tmp_mem [1]={0,}; 
	struct systemBase1 systemREG1_tmp_mem [1]={0,}; 
	struct systemBase2 systemREG2_tmp_mem [1]={0,}; 
	struct tcramBase tcram1REG_tmp_mem [1]={0,}; 
	struct tcramBase tcram2REG_tmp_mem [1]={0,}; 
	struct vimRam vimRAM_tmp_mem [1]={0,}; 
	struct vimBase vimREG_tmp_mem [1]={0,}; 

	/*Memory assign*/
	adcREG1_tmp = adcREG1_tmp_mem;
	adcREG2_tmp = adcREG2_tmp_mem;
	address_0xFFFF0400U = address_0xFFFF0400U_mem;
	address_0xFFFF040CU = address_0xFFFF040CU_mem;
	address_0xFFFFE400U = address_0xFFFFE400U_mem;
	address_0xFFFFE404U = address_0xFFFFE404U_mem;
	address_0xFFFFE408U = address_0xFFFFE408U_mem;
	address_0xFFFFE40CU = address_0xFFFFE40CU_mem;
	address_0xFFFFE410U = address_0xFFFFE410U_mem;
	address_0xFFFFE414U = address_0xFFFFE414U_mem;
	address_0xFFFFE418U = address_0xFFFFE418U_mem;
	address_0xFFFFE440U = address_0xFFFFE440U_mem;
	address_0xFFFFE444U = address_0xFFFFE444U_mem;
	address_0xFFFFE448U = address_0xFFFFE448U_mem;
	address_0xFFFFE44CU = address_0xFFFFE44CU_mem;
	address_0xFFFFE450U = address_0xFFFFE450U_mem;
	address_0xFFFFE454U = address_0xFFFFE454U_mem;
	address_0xFFFFE458U = address_0xFFFFE458U_mem;
	address_0xFFFFE520U = address_0xFFFFE520U_mem;
	address_0xFFFFE524U = address_0xFFFFE524U_mem;
	address_0xFFFFE530U = address_0xFFFFE530U_mem;
	address_0xFFFFE540U = address_0xFFFFE540U_mem;
	address_0xFFFFE550U = address_0xFFFFE550U_mem;
	canREG1_tmp = canREG1_tmp_mem;
	canREG2_tmp = canREG2_tmp_mem;
	canREG3_tmp = canREG3_tmp_mem;
	confLogic.PI[0].pSigPI = confLogic_PI0_pSigPI_mem;
	confLogic.DI[0].pSigDI = confLogic_DI0_pSigDI_mem;
	efcREG_tmp = efcREG_tmp_mem;
	esmREG_tmp = esmREG_tmp_mem;
	flashWREG_tmp = flashWREG_tmp_mem;
	g_i2cTransfer_tmp.data = g_i2cTransfer_tmp_data_mem;
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	gioPORTA_tmp = gioPORTA_tmp_mem;
	gioPORTB_tmp = gioPORTB_tmp_mem;
	gioREG_tmp = gioREG_tmp_mem;
	hetPORT2_tmp = hetPORT2_tmp_mem;
	hetRAM1_tmp = hetRAM1_tmp_mem;
	hetRAM2_tmp = hetRAM2_tmp_mem;
	hetREG1_tmp = hetREG1_tmp_mem;
	hetREG2_tmp = hetREG2_tmp_mem;
	htuREG1_tmp = htuREG1_tmp_mem;
	htuREG2_tmp = htuREG2_tmp_mem;
	i2cREG1_tmp = i2cREG1_tmp_mem;
	kickerReg_tmp = kickerReg_tmp_mem;
	linREG_tmp = linREG_tmp_mem;
	mibspiRAM1_tmp = mibspiRAM1_tmp_mem;
	mibspiRAM3_tmp = mibspiRAM3_tmp_mem;
	mibspiRAM5_tmp = mibspiRAM5_tmp_mem;
	mibspiREG1_tmp = mibspiREG1_tmp_mem;
	mibspiREG3_tmp = mibspiREG3_tmp_mem;
	mibspiREG5_tmp = mibspiREG5_tmp_mem;
	pStackGuard_tmp = pStackGuard_tmp_mem;
	pbistREG_tmp = pbistREG_tmp_mem;
	pcrREG_tmp = pcrREG_tmp_mem;
	pinMuxReg_tmp = pinMuxReg_tmp_mem;
	rtiREG1_tmp = rtiREG1_tmp_mem;
	sciREG_tmp = sciREG_tmp_mem;
	stcREG_tmp = stcREG_tmp_mem;
	systemREG1_tmp = systemREG1_tmp_mem;
	systemREG2_tmp = systemREG2_tmp_mem;
	tcram1REG_tmp = tcram1REG_tmp_mem;
	tcram2REG_tmp = tcram2REG_tmp_mem;
	vimRAM_tmp = vimRAM_tmp_mem;
	vimRAM_tmp_mem[0].ISR[0] = 0x0;
	vimREG_tmp = vimREG_tmp_mem;

	/*Input*/
	CCMSR_tmp = CS_UINT_INPUT(unsigned int,"CCMSR_tmp");
	DEVICE_ID_REV_tmp = CS_UINT_INPUT(unsigned int,"DEVICE_ID_REV_tmp");
	DIN_MON[0] = CS_UINT_INPUT(unsigned char,"DIN_MON[0]");
	DIN_STAT[0] = CS_UINT_INPUT(unsigned char,"DIN_STAT[0]");
	DO_FB[0] = CS_UINT_INPUT(unsigned char,"DO_FB[0]");
	EFC_SELF_TEST_ERROR_tmp = CS_UINT_INPUT(unsigned int,"EFC_SELF_TEST_ERROR_tmp");
	LPO_TRIM_VALUE_tmp = CS_UINT_INPUT(unsigned int,"LPO_TRIM_VALUE_tmp");
	PI_MON[0] = CS_FLT_INPUT(double,"PI_MON[0]");
	PI_STAT[0] = CS_FLT_INPUT(double,"PI_STAT[0]");
	SCI_RX_INT_tmp = CS_UINT_INPUT(unsigned int,"SCI_RX_INT_tmp");
	SYS_EXCEPTION_tmp = CS_UINT_INPUT(unsigned int,"SYS_EXCEPTION_tmp");
	WATCHDOG_STATUS_tmp = CS_UINT_INPUT(unsigned int,"WATCHDOG_STATUS_tmp");
	address_0xFFFF0400U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFF0400U_mem[0]");
	address_0xFFFF040CU_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFF040CU_mem[0]");
	address_0xFFFFE400U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE400U_mem[0]");
	address_0xFFFFE404U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE404U_mem[0]");
	address_0xFFFFE408U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE408U_mem[0]");
	address_0xFFFFE40CU_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE40CU_mem[0]");
	address_0xFFFFE410U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE410U_mem[0]");
	address_0xFFFFE414U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE414U_mem[0]");
	address_0xFFFFE418U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE418U_mem[0]");
	address_0xFFFFE440U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE440U_mem[0]");
	address_0xFFFFE444U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE444U_mem[0]");
	address_0xFFFFE448U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE448U_mem[0]");
	address_0xFFFFE44CU_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE44CU_mem[0]");
	address_0xFFFFE450U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE450U_mem[0]");
	address_0xFFFFE454U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE454U_mem[0]");
	address_0xFFFFE458U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE458U_mem[0]");
	address_0xFFFFE520U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE520U_mem[0]");
	address_0xFFFFE524U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE524U_mem[0]");
	address_0xFFFFE530U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE530U_mem[0]");
	address_0xFFFFE540U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE540U_mem[0]");
	address_0xFFFFE550U_mem[0] = CS_UINT_INPUT(unsigned int,"address_0xFFFFE550U_mem[0]");
	confLogic.cntDI = CS_INT_INPUT(int,"confLogic.cntDI");
	confLogic.DI[0].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[0].bInvert");
	confLogic.DI[1].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[1].bInvert");
	confLogic.DI[2].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[2].bInvert");
	confLogic.DI[3].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[3].bInvert");
	confLogic.DI[4].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[4].bInvert");
	confLogic.DI[5].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[5].bInvert");
	confLogic.DI[6].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[6].bInvert");
	confLogic.DI[7].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[7].bInvert");
	confLogic.DI[8].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[8].bInvert");
	confLogic.DI[9].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[9].bInvert");
	confLogic.DI[10].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[10].bInvert");
	confLogic.DI[11].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[11].bInvert");
	confLogic.DI[12].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[12].bInvert");
	confLogic.DI[13].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[13].bInvert");
	confLogic.DI[14].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[14].bInvert");
	confLogic.DI[15].bInvert = CS_UINT_INPUT(unsigned char,"confLogic.DI[15].bInvert");
	confLogic.cntPI = CS_INT_INPUT(int,"confLogic.cntPI");
	dataRx1[0] = CS_UINT_INPUT(unsigned char,"dataRx1[0]");
	efcREG_tmp_mem[0].ERROR = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].ERROR");
	efcREG_tmp_mem[0].PINS = CS_UINT_INPUT(unsigned int,"efcREG_tmp_mem[0].PINS");
	esmREG_tmp_mem[0].SR1[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[0]");
	esmREG_tmp_mem[0].SR1[1] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[1]");
	esmREG_tmp_mem[0].SR1[2] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR1[2]");
	esmREG_tmp_mem[0].SR4[0] = CS_UINT_INPUT(unsigned int,"esmREG_tmp_mem[0].SR4[0]");
	flashWREG_tmp_mem[0].FRDCNTL = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FRDCNTL");
	flashWREG_tmp_mem[0].FBFALLBACK = CS_UINT_INPUT(unsigned int,"flashWREG_tmp_mem[0].FBFALLBACK");
	g_ConfLogic[0].DO.nNum = CS_UINT_INPUT(unsigned char,"g_ConfLogic[0].DO.nNum");
	g_ConfLogic[0].DO.nOutputType = CS_UINT_INPUT(unsigned char,"g_ConfLogic[0].DO.nOutputType");
	g_ConfLogic[0].DI[0].bInvert = CS_UINT_INPUT(unsigned char,"g_ConfLogic[0].DI[0].bInvert");
	g_ConfLogic[1].DO.nOutputType = CS_UINT_INPUT(unsigned char,"g_ConfLogic[1].DO.nOutputType");
	g_ConfLogic[1].DO.nNum = CS_UINT_INPUT(unsigned char,"g_ConfLogic[1].DO.nNum");
	g_ConfLogic[1].DI[0].bInvert = CS_UINT_INPUT(unsigned char,"g_ConfLogic[1].DI[0].bInvert");
	g_ConfLogic[2].DO.nNum = CS_UINT_INPUT(unsigned char,"g_ConfLogic[2].DO.nNum");
	g_ConfLogic[2].DO.nOutputType = CS_UINT_INPUT(unsigned char,"g_ConfLogic[2].DO.nOutputType");
	g_ConfLogic[2].DI[0].bInvert = CS_UINT_INPUT(unsigned char,"g_ConfLogic[2].DI[0].bInvert");
	g_ConfLogic[3].DI[0].bInvert = CS_UINT_INPUT(unsigned char,"g_ConfLogic[3].DI[0].bInvert");
	g_ConfLogic[3].DO.nOutputType = CS_UINT_INPUT(unsigned char,"g_ConfLogic[3].DO.nOutputType");
	g_ConfLogic[3].DO.nNum = CS_UINT_INPUT(unsigned char,"g_ConfLogic[3].DO.nNum");
	g_ConfLogic[4].DO.nNum = CS_UINT_INPUT(unsigned char,"g_ConfLogic[4].DO.nNum");
	g_ConfLogic[4].DO.nOutputType = CS_UINT_INPUT(unsigned char,"g_ConfLogic[4].DO.nOutputType");
	g_ConfLogic[4].DI[0].bInvert = CS_UINT_INPUT(unsigned char,"g_ConfLogic[4].DI[0].bInvert");
	g_ConfLogic[5].DO.nOutputType = CS_UINT_INPUT(unsigned char,"g_ConfLogic[5].DO.nOutputType");
	g_ConfLogic[5].DO.nNum = CS_UINT_INPUT(unsigned char,"g_ConfLogic[5].DO.nNum");
	g_ConfLogic[5].DI[0].bInvert = CS_UINT_INPUT(unsigned char,"g_ConfLogic[5].DI[0].bInvert");
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
	g_sigDI[0].nRemainTime = CS_UINT_INPUT(unsigned int,"g_sigDI[0].nRemainTime");
	g_sigDI[0].nValue = CS_UINT_INPUT(unsigned char,"g_sigDI[0].nValue");
	g_sigPI[0].nFreqency = CS_UINT_INPUT(unsigned short,"g_sigPI[0].nFreqency");
	g_tickPIEdge[0] = CS_UINT_INPUT(unsigned int,"g_tickPIEdge[0]");
	hetPORT2_tmp_mem[0].DCLR = CS_UINT_INPUT(unsigned int,"hetPORT2_tmp_mem[0].DCLR");
	hetPORT2_tmp_mem[0].DSET = CS_UINT_INPUT(unsigned int,"hetPORT2_tmp_mem[0].DSET");
	kickerReg_tmp_mem[0].KICKER0 = CS_UINT_INPUT(unsigned int,"kickerReg_tmp_mem[0].KICKER0");
	kickerReg_tmp_mem[0].KICKER1 = CS_UINT_INPUT(unsigned int,"kickerReg_tmp_mem[0].KICKER1");
	mibspiREG1_tmp_mem[0].GCR0 = CS_UINT_INPUT(unsigned int,"mibspiREG1_tmp_mem[0].GCR0");
	mibspiREG3_tmp_mem[0].GCR0 = CS_UINT_INPUT(unsigned int,"mibspiREG3_tmp_mem[0].GCR0");
	mibspiREG5_tmp_mem[0].GCR0 = CS_UINT_INPUT(unsigned int,"mibspiREG5_tmp_mem[0].GCR0");
	pStackGuard_tmp_mem[0] = CS_UINT_INPUT(unsigned int,"pStackGuard_tmp_mem[0]");
	pbistREG_tmp_mem[0].FSRF0 = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].FSRF0");
	pbistREG_tmp_mem[0].PACT = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].PACT");
	pbistREG_tmp_mem[0].rsvd1[0] = CS_UINT_INPUT(unsigned int,"pbistREG_tmp_mem[0].rsvd1[0]");
	pcrREG_tmp_mem[0].PSPWRDWNCLR0 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PSPWRDWNCLR0");
	pcrREG_tmp_mem[0].PSPWRDWNCLR3 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PSPWRDWNCLR3");
	pcrREG_tmp_mem[0].PSPWRDWNCLR1 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PSPWRDWNCLR1");
	pcrREG_tmp_mem[0].PSPWRDWNCLR2 = CS_UINT_INPUT(unsigned int,"pcrREG_tmp_mem[0].PSPWRDWNCLR2");
	pinMuxReg_tmp_mem[0].PINMMR0 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR0");
	pinMuxReg_tmp_mem[0].PINMMR1 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR1");
	pinMuxReg_tmp_mem[0].PINMMR2 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR2");
	pinMuxReg_tmp_mem[0].PINMMR3 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR3");
	pinMuxReg_tmp_mem[0].PINMMR4 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR4");
	pinMuxReg_tmp_mem[0].PINMMR5 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR5");
	pinMuxReg_tmp_mem[0].PINMMR6 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR6");
	pinMuxReg_tmp_mem[0].PINMMR7 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR7");
	pinMuxReg_tmp_mem[0].PINMMR8 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR8");
	pinMuxReg_tmp_mem[0].PINMMR9 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR9");
	pinMuxReg_tmp_mem[0].PINMMR10 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR10");
	pinMuxReg_tmp_mem[0].PINMMR11 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR11");
	pinMuxReg_tmp_mem[0].PINMMR12 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR12");
	pinMuxReg_tmp_mem[0].PINMMR13 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR13");
	pinMuxReg_tmp_mem[0].PINMMR14 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR14");
	pinMuxReg_tmp_mem[0].PINMMR15 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR15");
	pinMuxReg_tmp_mem[0].PINMMR16 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR16");
	pinMuxReg_tmp_mem[0].PINMMR17 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR17");
	pinMuxReg_tmp_mem[0].PINMMR18 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR18");
	pinMuxReg_tmp_mem[0].PINMMR19 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR19");
	pinMuxReg_tmp_mem[0].PINMMR20 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR20");
	pinMuxReg_tmp_mem[0].PINMMR21 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR21");
	pinMuxReg_tmp_mem[0].PINMMR22 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR22");
	pinMuxReg_tmp_mem[0].PINMMR23 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR23");
	pinMuxReg_tmp_mem[0].PINMMR24 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR24");
	pinMuxReg_tmp_mem[0].PINMMR25 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR25");
	pinMuxReg_tmp_mem[0].PINMMR26 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR26");
	pinMuxReg_tmp_mem[0].PINMMR27 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR27");
	pinMuxReg_tmp_mem[0].PINMMR28 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR28");
	pinMuxReg_tmp_mem[0].PINMMR29 = CS_UINT_INPUT(unsigned int,"pinMuxReg_tmp_mem[0].PINMMR29");
	rtiREG1_tmp_mem[0].DWDPRLD = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].DWDPRLD");
	rtiREG1_tmp_mem[0].COMPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMPCTRL");
	rtiREG1_tmp_mem[0].DWDCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].DWDCTRL");
	rtiREG1_tmp_mem[0].GCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].GCTRL");
	rtiREG1_tmp_mem[0].SETINTENA = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].SETINTENA");
	rtiREG1_tmp_mem[0].WDKEY = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].WDKEY");
	rtiREG1_tmp_mem[0].CLEARINTENA = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CLEARINTENA");
	rtiREG1_tmp_mem[0].INTFLAG = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].INTFLAG");
	rtiREG1_tmp_mem[0].TBLCOMP = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].TBLCOMP");
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	rtiREG1_tmp_mem[0].CMP[0].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].COMPx");
	rtiREG1_tmp_mem[0].COMP0CLR = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMP0CLR");
	rtiREG1_tmp_mem[0].DWDCNTR = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].DWDCNTR");
	rtiREG1_tmp_mem[0].TBCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].TBCTRL");
	rtiREG1_tmp_mem[0].COMP2CLR = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMP2CLR");
	rtiREG1_tmp_mem[0].TBHCOMP = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].TBHCOMP");
	rtiREG1_tmp_mem[0].INTCLRENABLE = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].INTCLRENABLE");
	rtiREG1_tmp_mem[0].WDSTATUS = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].WDSTATUS");
	rtiREG1_tmp_mem[0].WWDSIZECTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].WWDSIZECTRL");
	rtiREG1_tmp_mem[0].WWDRXNCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].WWDRXNCTRL");
	rtiREG1_tmp_mem[0].rsvd3[0] = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].rsvd3[0]");
	rtiREG1_tmp_mem[0].rsvd4 = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].rsvd4");
	rtiREG1_tmp_mem[0].CNT[0].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].FRCx");
	rtiREG1_tmp_mem[0].CAPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CAPCTRL");
	rtiREG1_tmp_mem[0].COMP1CLR = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMP1CLR");
	rtiREG1_tmp_mem[0].COMP3CLR = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMP3CLR");
	s_het1pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het1pwmPolarity[0]");
	s_het2pwmPolarity[0] = CS_UINT_INPUT(unsigned int,"s_het2pwmPolarity[0]");
	sciREG_tmp_mem[0].SETINT = CS_UINT_INPUT(unsigned int,"sciREG_tmp_mem[0].SETINT");
	stcREG_tmp_mem[0].STCSCSCR = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCSCSCR");
	stcREG_tmp_mem[0].STCGSTAT = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCGSTAT");
	stcREG_tmp_mem[0].STCGCR1 = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCGCR1");
	stcREG_tmp_mem[0].STCGCR0 = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCGCR0");
	stcREG_tmp_mem[0].STCTPR = CS_UINT_INPUT(unsigned int,"stcREG_tmp_mem[0].STCTPR");
	sum[0] = CS_INT_INPUT(int,"sum[0]");
	systemREG1_tmp_mem[0].CSDISSET = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSDISSET");
	systemREG1_tmp_mem[0].GBLSTAT = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].GBLSTAT");
	systemREG1_tmp_mem[0].CSVSTAT = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSVSTAT");
	systemREG1_tmp_mem[0].CSDIS = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CSDIS");
	systemREG1_tmp_mem[0].MSTGCR = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MSTGCR");
	systemREG1_tmp_mem[0].MSINENA = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MSINENA");
	systemREG1_tmp_mem[0].MSTCGSTAT = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].MSTCGSTAT");
	systemREG1_tmp_mem[0].CLKCNTL = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].CLKCNTL");
	systemREG1_tmp_mem[0].PLLCTL1 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].PLLCTL1");
	systemREG1_tmp_mem[0].PLLCTL2 = CS_UINT_INPUT(unsigned int,"systemREG1_tmp_mem[0].PLLCTL2");
	systemREG2_tmp_mem[0].STCCLKDIV = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].STCCLKDIV");
	systemREG2_tmp_mem[0].PLLCTL3 = CS_UINT_INPUT(unsigned int,"systemREG2_tmp_mem[0].PLLCTL3");
	tcram1REG_tmp_mem[0].RAMCTRL = CS_UINT_INPUT(unsigned int,"tcram1REG_tmp_mem[0].RAMCTRL");
	tcram1REG_tmp_mem[0].RAMTHRESHOLD = CS_UINT_INPUT(unsigned int,"tcram1REG_tmp_mem[0].RAMTHRESHOLD");
	tcram1REG_tmp_mem[0].RAMOCCUR = CS_UINT_INPUT(unsigned int,"tcram1REG_tmp_mem[0].RAMOCCUR");
	tcram1REG_tmp_mem[0].RAMINTCTRL = CS_UINT_INPUT(unsigned int,"tcram1REG_tmp_mem[0].RAMINTCTRL");
	tcram1REG_tmp_mem[0].RAMERRSTATUS = CS_UINT_INPUT(unsigned int,"tcram1REG_tmp_mem[0].RAMERRSTATUS");
	tcram2REG_tmp_mem[0].RAMCTRL = CS_UINT_INPUT(unsigned int,"tcram2REG_tmp_mem[0].RAMCTRL");
	tcram2REG_tmp_mem[0].RAMTHRESHOLD = CS_UINT_INPUT(unsigned int,"tcram2REG_tmp_mem[0].RAMTHRESHOLD");
	tcram2REG_tmp_mem[0].RAMOCCUR = CS_UINT_INPUT(unsigned int,"tcram2REG_tmp_mem[0].RAMOCCUR");
	tcram2REG_tmp_mem[0].RAMINTCTRL = CS_UINT_INPUT(unsigned int,"tcram2REG_tmp_mem[0].RAMINTCTRL");
	tcram2REG_tmp_mem[0].RAMERRSTATUS = CS_UINT_INPUT(unsigned int,"tcram2REG_tmp_mem[0].RAMERRSTATUS");
	while_break = CS_UINT_INPUT(unsigned char,"while_break");



	/* _c_int00() */
	_c_int00();
#line 1 "cs_test%_c_int00_test0%AFTER_CALL_CODE_KEY__c_int001899332845"
PWMConfig(0,0,0,0);
if(CS_TESTCASENO() == 50)
{
	pbistPortTestStatus((uint32)PBIST_PORT1);
}

#line 538 "cs_test%_c_int00_test0%cs_error"



	/*Output*/
	CS_UINT_OUTPUT(DIN_MON[0], "DIN_MON[0]");
	CS_UINT_OUTPUT(DIN_STAT[0], "DIN_STAT[0]");
	CS_UINT_OUTPUT(DO_FB[0], "DO_FB[0]");
	CS_FLT_OUTPUT(PI_MON[0], "PI_MON[0]");
	CS_FLT_OUTPUT(PI_STAT[0], "PI_STAT[0]");
	CS_UINT_OUTPUT(address_0xFFFF0400U_mem[0], "address_0xFFFF0400U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFF040CU_mem[0], "address_0xFFFF040CU_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE400U_mem[0], "address_0xFFFFE400U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE404U_mem[0], "address_0xFFFFE404U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE408U_mem[0], "address_0xFFFFE408U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE40CU_mem[0], "address_0xFFFFE40CU_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE410U_mem[0], "address_0xFFFFE410U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE414U_mem[0], "address_0xFFFFE414U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE418U_mem[0], "address_0xFFFFE418U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE440U_mem[0], "address_0xFFFFE440U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE444U_mem[0], "address_0xFFFFE444U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE448U_mem[0], "address_0xFFFFE448U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE44CU_mem[0], "address_0xFFFFE44CU_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE450U_mem[0], "address_0xFFFFE450U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE454U_mem[0], "address_0xFFFFE454U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE458U_mem[0], "address_0xFFFFE458U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE520U_mem[0], "address_0xFFFFE520U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE524U_mem[0], "address_0xFFFFE524U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE530U_mem[0], "address_0xFFFFE530U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE540U_mem[0], "address_0xFFFFE540U_mem[0]");
	CS_UINT_OUTPUT(address_0xFFFFE550U_mem[0], "address_0xFFFFE550U_mem[0]");
	CS_UINT_OUTPUT(confLogic.DI[0].bInvert, "confLogic.DI[0].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[1].bInvert, "confLogic.DI[1].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[2].bInvert, "confLogic.DI[2].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[3].bInvert, "confLogic.DI[3].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[4].bInvert, "confLogic.DI[4].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[5].bInvert, "confLogic.DI[5].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[6].bInvert, "confLogic.DI[6].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[7].bInvert, "confLogic.DI[7].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[8].bInvert, "confLogic.DI[8].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[9].bInvert, "confLogic.DI[9].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[10].bInvert, "confLogic.DI[10].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[11].bInvert, "confLogic.DI[11].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[12].bInvert, "confLogic.DI[12].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[13].bInvert, "confLogic.DI[13].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[14].bInvert, "confLogic.DI[14].bInvert");
	CS_UINT_OUTPUT(confLogic.DI[15].bInvert, "confLogic.DI[15].bInvert");
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].FRDCNTL, "flashWREG_tmp_mem[0].FRDCNTL");
	CS_UINT_OUTPUT(flashWREG_tmp_mem[0].FBFALLBACK, "flashWREG_tmp_mem[0].FBFALLBACK");
	CS_UINT_OUTPUT(g_ConfLogic[0].DI[0].bInvert, "g_ConfLogic[0].DI[0].bInvert");
	CS_UINT_OUTPUT(g_ConfLogic[1].DI[0].bInvert, "g_ConfLogic[1].DI[0].bInvert");
	CS_UINT_OUTPUT(g_ConfLogic[2].DI[0].bInvert, "g_ConfLogic[2].DI[0].bInvert");
	CS_UINT_OUTPUT(g_ConfLogic[3].DI[0].bInvert, "g_ConfLogic[3].DI[0].bInvert");
	CS_UINT_OUTPUT(g_ConfLogic[4].DI[0].bInvert, "g_ConfLogic[4].DI[0].bInvert");
	CS_UINT_OUTPUT(g_ConfLogic[5].DI[0].bInvert, "g_ConfLogic[5].DI[0].bInvert");
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
	CS_UINT_OUTPUT(g_sigDI[0].nRemainTime, "g_sigDI[0].nRemainTime");
	CS_UINT_OUTPUT(g_sigDI[0].nValue, "g_sigDI[0].nValue");
	CS_UINT_OUTPUT(g_sigPI[0].nFreqency, "g_sigPI[0].nFreqency");
	CS_UINT_OUTPUT(hetPORT2_tmp_mem[0].DCLR, "hetPORT2_tmp_mem[0].DCLR");
	CS_UINT_OUTPUT(hetPORT2_tmp_mem[0].DSET, "hetPORT2_tmp_mem[0].DSET");
	CS_UINT_OUTPUT(kickerReg_tmp_mem[0].KICKER0, "kickerReg_tmp_mem[0].KICKER0");
	CS_UINT_OUTPUT(kickerReg_tmp_mem[0].KICKER1, "kickerReg_tmp_mem[0].KICKER1");
	CS_UINT_OUTPUT(mibspiREG1_tmp_mem[0].GCR0, "mibspiREG1_tmp_mem[0].GCR0");
	CS_UINT_OUTPUT(mibspiREG3_tmp_mem[0].GCR0, "mibspiREG3_tmp_mem[0].GCR0");
	CS_UINT_OUTPUT(mibspiREG5_tmp_mem[0].GCR0, "mibspiREG5_tmp_mem[0].GCR0");
	CS_UINT_OUTPUT(pStackGuard_tmp_mem[0], "pStackGuard_tmp_mem[0]");
	CS_UINT_OUTPUT(pbistREG_tmp_mem[0].PACT, "pbistREG_tmp_mem[0].PACT");
	CS_UINT_OUTPUT(pbistREG_tmp_mem[0].rsvd1[0], "pbistREG_tmp_mem[0].rsvd1[0]");
	CS_UINT_OUTPUT(pcrREG_tmp_mem[0].PSPWRDWNCLR0, "pcrREG_tmp_mem[0].PSPWRDWNCLR0");
	CS_UINT_OUTPUT(pcrREG_tmp_mem[0].PSPWRDWNCLR3, "pcrREG_tmp_mem[0].PSPWRDWNCLR3");
	CS_UINT_OUTPUT(pcrREG_tmp_mem[0].PSPWRDWNCLR1, "pcrREG_tmp_mem[0].PSPWRDWNCLR1");
	CS_UINT_OUTPUT(pcrREG_tmp_mem[0].PSPWRDWNCLR2, "pcrREG_tmp_mem[0].PSPWRDWNCLR2");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR0, "pinMuxReg_tmp_mem[0].PINMMR0");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR1, "pinMuxReg_tmp_mem[0].PINMMR1");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR2, "pinMuxReg_tmp_mem[0].PINMMR2");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR3, "pinMuxReg_tmp_mem[0].PINMMR3");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR4, "pinMuxReg_tmp_mem[0].PINMMR4");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR5, "pinMuxReg_tmp_mem[0].PINMMR5");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR6, "pinMuxReg_tmp_mem[0].PINMMR6");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR7, "pinMuxReg_tmp_mem[0].PINMMR7");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR8, "pinMuxReg_tmp_mem[0].PINMMR8");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR9, "pinMuxReg_tmp_mem[0].PINMMR9");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR10, "pinMuxReg_tmp_mem[0].PINMMR10");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR11, "pinMuxReg_tmp_mem[0].PINMMR11");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR12, "pinMuxReg_tmp_mem[0].PINMMR12");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR13, "pinMuxReg_tmp_mem[0].PINMMR13");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR14, "pinMuxReg_tmp_mem[0].PINMMR14");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR15, "pinMuxReg_tmp_mem[0].PINMMR15");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR16, "pinMuxReg_tmp_mem[0].PINMMR16");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR17, "pinMuxReg_tmp_mem[0].PINMMR17");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR18, "pinMuxReg_tmp_mem[0].PINMMR18");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR19, "pinMuxReg_tmp_mem[0].PINMMR19");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR20, "pinMuxReg_tmp_mem[0].PINMMR20");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR21, "pinMuxReg_tmp_mem[0].PINMMR21");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR22, "pinMuxReg_tmp_mem[0].PINMMR22");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR23, "pinMuxReg_tmp_mem[0].PINMMR23");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR24, "pinMuxReg_tmp_mem[0].PINMMR24");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR25, "pinMuxReg_tmp_mem[0].PINMMR25");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR26, "pinMuxReg_tmp_mem[0].PINMMR26");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR27, "pinMuxReg_tmp_mem[0].PINMMR27");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR28, "pinMuxReg_tmp_mem[0].PINMMR28");
	CS_UINT_OUTPUT(pinMuxReg_tmp_mem[0].PINMMR29, "pinMuxReg_tmp_mem[0].PINMMR29");
	CS_UINT_OUTPUT(s_het1pwmPolarity[0], "s_het1pwmPolarity[0]");
	CS_UINT_OUTPUT(s_het2pwmPolarity[0], "s_het2pwmPolarity[0]");
	CS_UINT_OUTPUT(sciREG_tmp_mem[0].SETINT, "sciREG_tmp_mem[0].SETINT");
	CS_UINT_OUTPUT(stcREG_tmp_mem[0].STCSCSCR, "stcREG_tmp_mem[0].STCSCSCR");
	CS_UINT_OUTPUT(stcREG_tmp_mem[0].STCGSTAT, "stcREG_tmp_mem[0].STCGSTAT");
	CS_UINT_OUTPUT(stcREG_tmp_mem[0].STCGCR1, "stcREG_tmp_mem[0].STCGCR1");
	CS_UINT_OUTPUT(stcREG_tmp_mem[0].STCGCR0, "stcREG_tmp_mem[0].STCGCR0");
	CS_UINT_OUTPUT(stcREG_tmp_mem[0].STCTPR, "stcREG_tmp_mem[0].STCTPR");
	CS_INT_OUTPUT(sum[0], "sum[0]");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].GBLSTAT, "systemREG1_tmp_mem[0].GBLSTAT");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].MSTGCR, "systemREG1_tmp_mem[0].MSTGCR");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].MSINENA, "systemREG1_tmp_mem[0].MSINENA");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].MSTCGSTAT, "systemREG1_tmp_mem[0].MSTCGSTAT");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].CLKCNTL, "systemREG1_tmp_mem[0].CLKCNTL");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].PLLCTL1, "systemREG1_tmp_mem[0].PLLCTL1");
	CS_UINT_OUTPUT(systemREG1_tmp_mem[0].PLLCTL2, "systemREG1_tmp_mem[0].PLLCTL2");
	CS_UINT_OUTPUT(systemREG2_tmp_mem[0].STCCLKDIV, "systemREG2_tmp_mem[0].STCCLKDIV");
	CS_UINT_OUTPUT(systemREG2_tmp_mem[0].PLLCTL3, "systemREG2_tmp_mem[0].PLLCTL3");
	CS_UINT_OUTPUT(tcram1REG_tmp_mem[0].RAMCTRL, "tcram1REG_tmp_mem[0].RAMCTRL");
	CS_UINT_OUTPUT(tcram1REG_tmp_mem[0].RAMTHRESHOLD, "tcram1REG_tmp_mem[0].RAMTHRESHOLD");
	CS_UINT_OUTPUT(tcram1REG_tmp_mem[0].RAMOCCUR, "tcram1REG_tmp_mem[0].RAMOCCUR");
	CS_UINT_OUTPUT(tcram1REG_tmp_mem[0].RAMINTCTRL, "tcram1REG_tmp_mem[0].RAMINTCTRL");
	CS_UINT_OUTPUT(tcram1REG_tmp_mem[0].RAMERRSTATUS, "tcram1REG_tmp_mem[0].RAMERRSTATUS");
	CS_UINT_OUTPUT(tcram2REG_tmp_mem[0].RAMCTRL, "tcram2REG_tmp_mem[0].RAMCTRL");
	CS_UINT_OUTPUT(tcram2REG_tmp_mem[0].RAMTHRESHOLD, "tcram2REG_tmp_mem[0].RAMTHRESHOLD");
	CS_UINT_OUTPUT(tcram2REG_tmp_mem[0].RAMOCCUR, "tcram2REG_tmp_mem[0].RAMOCCUR");
	CS_UINT_OUTPUT(tcram2REG_tmp_mem[0].RAMINTCTRL, "tcram2REG_tmp_mem[0].RAMINTCTRL");
	CS_UINT_OUTPUT(tcram2REG_tmp_mem[0].RAMERRSTATUS, "tcram2REG_tmp_mem[0].RAMERRSTATUS");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect__c_int00_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
