#ifndef _CONTROLLER_TESTER_H
#define _CONTROLLER_TESTER_H

#include "../include/reg_rti.h"
#include "../include/reg_i2c.h"
#include "../include/reg_het.h"
#include "../include/reg_adc.h"
#include "../include/reg_gio.h"
#include "../include/reg_mibspi.h"
#include "../include/reg_lin.h"
#include "../include/reg_pcr.h"
#include "../include/reg_efc.h"
#include "../include/reg_pbist.h"
#include "../include/reg_system.h"
#include "../include/reg_can.h"
#include "../include/reg_esm.h"
#include "../include/reg_htu.h"
#include "../include/reg_tcram.h"
#include "../include/reg_flash.h"
#include "../include/reg_stc.h"
#include "diag.h"
#include "../include/sys_vim.h"
#include "../include/reg_sci.h"
#include "../include/i2c.h"
#include "QBuf.h"
#include "logic.h"
#include "adc.h"

extern rtiBASE_t *rtiREG1_tmp;
extern i2cBASE_t *i2cREG1_tmp;
extern hetRAMBASE_t *hetRAM1_tmp;
extern hetRAMBASE_t *hetRAM2_tmp;
extern adcBASE_t *adcREG1_tmp;
extern adcBASE_t *adcREG2_tmp;
extern gioPORT_t *hetPORT1_tmp;
extern gioPORT_t *hetPORT2_tmp;
extern gioPORT_t *mibspiPORT1_tmp;
extern gioPORT_t *mibspiPORT3_tmp;
extern gioPORT_t *mibspiPORT5_tmp;
extern gioPORT_t *linPORT_tmp;
extern pcrBASE_t *pcrREG_tmp;
extern efcBASE_t *efcREG_tmp;
extern pbistBASE_t *pbistREG_tmp;
extern systemBASE1_t *systemREG1_tmp;
extern systemBASE2_t *systemREG2_tmp;
extern esmBASE_t *esmREG_tmp;
extern canBASE_t *canREG1_tmp;
extern canBASE_t *canREG2_tmp;
extern canBASE_t *canREG3_tmp;
extern hetBASE_t *hetREG1_tmp;
extern hetBASE_t *hetREG2_tmp;
extern htuBASE_t *htuREG1_tmp;
extern htuBASE_t *htuREG2_tmp;
extern tcramBASE_t *tcram1REG_tmp;
extern tcramBASE_t *tcram2REG_tmp;
extern flashWBASE_t *flashWREG_tmp;
extern stcBASE_t *stcREG_tmp;
extern mibspiBASE_t *mibspiREG1_tmp;
extern mibspiBASE_t *mibspiREG3_tmp;
extern mibspiBASE_t *mibspiREG5_tmp;
extern mibspiRAM_t *mibspiRAM1_tmp;
extern mibspiRAM_t *mibspiRAM3_tmp;
extern mibspiRAM_t *mibspiRAM5_tmp;
extern vimBASE_t *vimREG_tmp;
extern vimRAM_t *vimRAM_tmp;
extern sciBASE_t *sciREG_tmp;
extern linBASE_t *linREG_tmp;
extern gioBASE_t *gioREG_tmp;
extern gioPORT_t *gioPORTA_tmp;
extern gioPORT_t *gioPORTB_tmp;

extern uint32_t *pStackGuard_tmp;
extern uint8_t while_break;
extern uint32 CCMSR_tmp;
extern g_i2cTransfer_t g_i2cTransfer_tmp;
extern Queue_t g_qUart1;
extern uint32 LPO_TRIM_VALUE_tmp;
extern uint32 EFC_SELF_TEST_ERROR_tmp;



extern uint32 SCI_RX_INT_tmp;
extern uint32 DEVICE_ID_REV_tmp;
extern uint32 WATCHDOG_STATUS_tmp;
extern ConfLogic_t confLogic;
extern adcData_t conversion_data_tmp[3];
#endif