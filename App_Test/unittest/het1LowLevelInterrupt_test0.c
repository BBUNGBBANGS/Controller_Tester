#line 2 "cs_test%het1LowLevelInterrupt_test0%cs_error"
/* het1LowLevelInterrupt_test0.c */
#ifndef __het1LowLevelInterrupt_test0__
#define __het1LowLevelInterrupt_test0__

#include "../factory/factory.h"

#include "het1LowLevelInterrupt_test0.h"

void CS_TEST het1LowLevelInterrupt_test0()
{
	/*Do not modify CS_TEST_PARAMETER()*/
	CS_TEST_PARAMETER(het1LowLevelInterrupt_test0);
	/*Do not remove connect_stub_configuration()*/
	int cs_stub_connect_function_call = connect_het1LowLevelInterrupt_test0_stub_configuration();
	{/*<START TEST>*/

#line 1 "cs_test%het1LowLevelInterrupt_test0%User code start"
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
uint32_t g_nTick ;	//	???? Tick

uint32_t g_nTickBase ;	//	???? Tick Base ( 0 / 200000 / 400000 / ... )

uint32_t g_s_nTick ;	//	Tick ( 0 ~ 200000 )
uint32_t	g_tickPIEdge[4];	//	Time Stamp PI Edge
uint32_t	g_nOldPI[4];		//	Old PI Value
uint8_t SS1_Dir,SS2_Dir;
#line 76 "cs_test%het1LowLevelInterrupt_test0%cs_error"
	/*Declaration (parameter/return/target object) variables*/
	struct hetBase hetREG1_tmp_mem [1]={0,}; 
	struct rtiBase rtiREG1_tmp_mem [1]={0,}; 

	/*Memory assign*/
	hetREG1_tmp = hetREG1_tmp_mem;
	rtiREG1_tmp = rtiREG1_tmp_mem;

	/*Input*/
	g_nTick = CS_UINT_INPUT(unsigned int,"g_nTick");
	g_nTickBase = CS_UINT_INPUT(unsigned int,"g_nTickBase");
	g_s_nTick = CS_UINT_INPUT(unsigned int,"g_s_nTick");
	g_tickPIEdge[0] = CS_UINT_INPUT(unsigned int,"g_tickPIEdge[0]");
	hetREG1_tmp_mem[0].OFF2 = CS_UINT_INPUT(unsigned int,"hetREG1_tmp_mem[0].OFF2");
	rtiREG1_tmp_mem[0].COMPCTRL = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].COMPCTRL");
	rtiREG1_tmp_mem[0].CNT[0].FRCx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CNT[0].FRCx");
	rtiREG1_tmp_mem[0].CMP[0].COMPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].COMPx");
	rtiREG1_tmp_mem[0].CMP[0].UDCPx = CS_UINT_INPUT(unsigned int,"rtiREG1_tmp_mem[0].CMP[0].UDCPx");



	/* het1LowLevelInterrupt() */
	het1LowLevelInterrupt();




	/*Output*/
	CS_UINT_OUTPUT(SS1_Dir, "SS1_Dir");
	CS_UINT_OUTPUT(SS2_Dir, "SS2_Dir");
	CS_UINT_OUTPUT(g_nTick, "g_nTick");
	CS_UINT_OUTPUT(g_nTickBase, "g_nTickBase");
	CS_UINT_OUTPUT(g_s_nTick, "g_s_nTick");
	CS_UINT_OUTPUT(g_tickPIEdge[0], "g_tickPIEdge[0]");

	/*<END TEST>*/}
	/*<CS_DISCONNECT_CODE_START>*/
	/*Do not remove disConnect_stub_configuration()*/
	disConnect_het1LowLevelInterrupt_test0_stub_configuration();
	/*<CS_DISCONNECT_CODE_END>*/
}

#endif
