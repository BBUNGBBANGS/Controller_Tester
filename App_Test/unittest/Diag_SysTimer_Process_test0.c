#line 2 "cs_test%Diag_SysTimer_Process_test0%cs_error"
/* Diag_SysTimer_Process_test0.c */
#ifndef __Diag_SysTimer_Process_test0__
#define __Diag_SysTimer_Process_test0__

#include "../factory/factory.h"

#include "Diag_SysTimer_Process_test0.h"

void CS_TEST Diag_SysTimer_Process_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(Diag_SysTimer_Process_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_Diag_SysTimer_Process_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%Diag_SysTimer_Process_test0%User code start"

static volatile struct g_sciTransfer
{
    uint32   mode;         /* Used to check for TX interrupt Enable */  
    uint32   tx_length;    /* Transmit data length in number of Bytes */
	uint32   rx_length;    /* Receive data length in number of Bytes */  
    uint8    * tx_data;    /* Transmit data pointer */  	
    uint8    * rx_data;    /* Receive data pointer */  
} g_sciTransfer_t[2U];
#line 29 "cs_test%Diag_SysTimer_Process_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	unsigned char g_sciTransfer_t0_tx_data_mem [1]={0,}; 
	unsigned char g_sciTransfer_t0_rx_data_mem [1]={0,}; 
	struct rtiBase rtiREG1_tmp_mem [2]={0,}; 
	int returnVar = 0; 

	/*Memory assign*/
	g_sciTransfer_t[0].tx_data = g_sciTransfer_t0_tx_data_mem;
	g_sciTransfer_t[0].rx_data = g_sciTransfer_t0_rx_data_mem;
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	g_bEnHalt = CS_INT_INPUT(int,"g_bEnHalt");
	g_sciTransfer_t[0].mode = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].mode");
	g_sciTransfer_t[0].tx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].tx_length");
	g_sciTransfer_t[0].rx_length = CS_UINT_INPUT(unsigned int,"g_sciTransfer_t[0].rx_length");
	g_sciTransfer_t0_tx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_tx_data_mem[0]");
	g_sciTransfer_t0_rx_data_mem[0] = CS_UINT_INPUT(unsigned char,"g_sciTransfer_t0_rx_data_mem[0]");
	rtiREG1_tmp_mem[0].COMPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMPCTRL");
	rtiREG1_tmp_mem[0].CMP[0].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].COMPx");
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");
	rtiREG1_tmp_mem[0].CNT[0].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].FRCx");
	rtiREG1_tmp_mem[1].CMP[0].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[1].CMP[0].COMPx");
	rtiREG1_tmp_mem[1].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[1].CMP[0].UDCPx");
	rtiREG1_tmp_mem[1].CMP[1].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[1].CMP[1].UDCPx");
	rtiREG1_tmp_mem[1].CMP[1].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[1].CMP[1].COMPx");
	rtiREG1_tmp_mem[1].CMP[2].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[1].CMP[2].UDCPx");
	rtiREG1_tmp_mem[1].CMP[2].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[1].CMP[2].COMPx");
	rtiREG1_tmp_mem[1].CMP[3].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[1].CMP[3].UDCPx");
	rtiREG1_tmp_mem[1].CMP[3].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[1].CMP[3].COMPx");
	rtiREG1_tmp_mem[1].CNT[0].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[1].CNT[0].FRCx");
	rtiREG1_tmp_mem[1].CNT[1].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[1].CNT[1].FRCx");
	rtiREG1_tmp_mem[1].COMPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[1].COMPCTRL");


#line 1 "cs_test%Diag_SysTimer_Process_test0%BEFORE_CALL_CODE_KEY_Diag_SysTimer_Process1511068302"
typedef volatile struct rtiBase
{
    uint32 GCTRL;          /**< 0x0000: Global Control Register   */
    uint32 TBCTRL;         /**< 0x0004: Timebase Control Register */
    uint32 CAPCTRL;        /**< 0x0008: Capture Control Register  */
    uint32 COMPCTRL;       /**< 0x000C: Compare Control Register  */
    struct
    {
        uint32 FRCx;       /**< 0x0010,0x0030: Free Running Counter x Register         */
        uint32 UCx;        /**< 0x0014,0x0034: Up Counter x Register                   */
        uint32 CPUCx;      /**< 0x0018,0x0038: Compare Up Counter x Register           */
        uint32   rsvd1;    /**< 0x001C,0x003C: Reserved                                */
        uint32 CAFRCx;     /**< 0x0020,0x0040: Capture Free Running Counter x Register */
        uint32 CAUCx;      /**< 0x0024,0x0044: Capture Up Counter x Register           */
        uint32   rsvd2[2U]; /**< 0x0028,0x0048: Reserved                                */
    } CNT[2U];               /**< Counter x selection:
                                    - 0: Counter 0
                                    - 1: Counter 1                                       */
    struct
    {
        uint32 COMPx;      /**< 0x0050,0x0058,0x0060,0x0068: Compare x Register        */
        uint32 UDCPx;      /**< 0x0054,0x005C,0x0064,0x006C: Update Compare x Register */
    } CMP[4U];               /**< Compare x selection:
                                    - 0: Compare 0 
                                    - 1: Compare 1
                                    - 2: Compare 2
                                    - 3: Compare 3                                       */
    uint32 TBLCOMP;        /**< 0x0070: External Clock Timebase Low Compare Register   */
    uint32 TBHCOMP;        /**< 0x0074: External Clock Timebase High Compare Register  */
    uint32   rsvd3[2U];    /**< 0x0078: Reserved                                       */
    uint32 SETINTENA;      /**< 0x0080: Set/Status Interrupt Register                  */
    uint32 CLEARINTENA;    /**< 0x0084: Clear/Status Interrupt Register                */
    uint32 INTFLAG;        /**< 0x0088: Interrupt Flag Register                        */
    uint32   rsvd4;        /**< 0x008C: Reserved                                       */
    uint32 DWDCTRL;        /**< 0x0090: Digital Watchdog Control Register   */
    uint32 DWDPRLD;        /**< 0x0094: Digital Watchdog Preload Register */
    uint32 WDSTATUS;       /**< 0x0098: Watchdog Status Register  */
    uint32 WDKEY;          /**< 0x009C: Watchdog Key Register  */
    uint32 DWDCNTR;        /**< 0x00A0: Digital Watchdog Down Counter   */
    uint32 WWDRXNCTRL;     /**< 0x00A4: Digital Windowed Watchdog Reaction Control */
    uint32 WWDSIZECTRL;    /**< 0x00A8: Digital Windowed Watchdog Window Size Control  */
    uint32 INTCLRENABLE;   /**< 0x00AC: RTI Compare Interrupt Clear Enable Register  */
    uint32 COMP0CLR;       /**< 0x00B0: RTI Compare 0 Clear Register   */
    uint32 COMP1CLR;       /**< 0x00B4: RTI Compare 1 Clear Register */
    uint32 COMP2CLR;       /**< 0x00B8: RTI Compare 2 Clear Register  */
    uint32 COMP3CLR;       /**< 0x00BC: RTI Compare 3 Clear Register  */
} rtiBASE_t;
rtiBASE_t *rtiREG1_tmp;
#line 114 "cs_test%Diag_SysTimer_Process_test0%cs_error"
	/* int Diag_SysTimer_Process() */
	returnVar = Diag_SysTimer_Process();




	/*Output*/
	CS_UINT_OUTPUT(g_sciTransfer_t[0].mode, "g_sciTransfer_t[0].mode");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].tx_length, "g_sciTransfer_t[0].tx_length");
	CS_UINT_OUTPUT(g_sciTransfer_t[0].rx_length, "g_sciTransfer_t[0].rx_length");
	CS_INT_OUTPUT(returnVar, "returnVar");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_Diag_SysTimer_Process_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
