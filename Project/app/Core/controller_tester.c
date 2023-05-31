#include "controller_tester.h"

rtiBASE_t *rtiREG1_tmp = rtiREG1;
i2cBASE_t *i2cREG1_tmp = i2cREG1;
hetRAMBASE_t *hetRAM1_tmp = hetRAM1;
hetRAMBASE_t *hetRAM2_tmp = hetRAM2;
adcBASE_t *adcREG1_tmp = adcREG1;
adcBASE_t *adcREG2_tmp = adcREG2;
gioPORT_t *hetPORT1_tmp = hetPORT1;
gioPORT_t *hetPORT2_tmp = hetPORT2;
gioPORT_t *mibspiPORT1_tmp = mibspiPORT1;
gioPORT_t *mibspiPORT3_tmp = mibspiPORT3;
gioPORT_t *mibspiPORT5_tmp = mibspiPORT5;
gioPORT_t *linPORT_tmp = linPORT;
pcrBASE_t *pcrREG_tmp = pcrREG;
efcBASE_t *efcREG_tmp = efcREG;
pbistBASE_t *pbistREG_tmp = pbistREG;
systemBASE1_t *systemREG1_tmp = systemREG1;
systemBASE2_t *systemREG2_tmp = systemREG2;
esmBASE_t *esmREG_tmp = esmREG;
canBASE_t *canREG1_tmp = canREG1;
canBASE_t *canREG2_tmp = canREG2;
canBASE_t *canREG3_tmp = canREG3;
hetBASE_t *hetREG1_tmp = hetREG1;
hetBASE_t *hetREG2_tmp = hetREG2;
htuBASE_t *htuREG1_tmp = htuREG1;
htuBASE_t *htuREG2_tmp = htuREG2;
tcramBASE_t *tcram1REG_tmp = tcram1REG;
tcramBASE_t *tcram2REG_tmp = tcram2REG;
flashWBASE_t *flashWREG_tmp = flashWREG;
stcBASE_t *stcREG_tmp = stcREG;
mibspiBASE_t *mibspiREG1_tmp = mibspiREG1;
mibspiBASE_t *mibspiREG3_tmp = mibspiREG3;
mibspiBASE_t *mibspiREG5_tmp = mibspiREG5;
mibspiRAM_t *mibspiRAM1_tmp = mibspiRAM1;
mibspiRAM_t *mibspiRAM3_tmp = mibspiRAM3;
mibspiRAM_t *mibspiRAM5_tmp = mibspiRAM5;
vimBASE_t *vimREG_tmp = vimREG;
vimRAM_t *vimRAM_tmp = vimRAM;
sciBASE_t *sciREG_tmp = sciREG;
linBASE_t *linREG_tmp = linREG;
gioBASE_t *gioREG_tmp = gioREG;
gioPORT_t *gioPORTA_tmp = gioPORTA;
gioPORT_t *gioPORTB_tmp = gioPORTB;

uint32_t *pStackGuard_tmp = (uint32_t *)STACK_GUARD_ADDR;

uint8_t while_break;
uint32 CCMSR_tmp;
g_i2cTransfer_t g_i2cTransfer_tmp;
Queue_t g_qUart1;
uint32 LPO_TRIM_VALUE_tmp;
uint32 EFC_SELF_TEST_ERROR_tmp;
uint32 SCI_RX_INT_tmp = 0x000000200U;
uint32 DEVICE_ID_REV_tmp;
uint32 WATCHDOG_STATUS_tmp;

ConfLogic_t confLogic;
adcData_t conversion_data_tmp[3];