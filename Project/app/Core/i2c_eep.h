/*------------------------------------------------------------------------------------------
	Project			: SCM Board
	Description		: 

	Writer			: 
	Revision		: 
	Date			: 2022. 07.
	Copyright		:
	 
	Revision History 
	1. 2022. 07.	: Created
-------------------------------------------------------------------------------------------*/

//========================================================================
#ifndef I2C_EEP_H
#define I2C_EEP_H
//========================================================================


#define I2C_EEP_Slave_Address 	0xa0 		//	EEPROM Device Address
#define DATA_COUNT 		64U
#define	MAX_EEP_ADDR	(256 * DATA_COUNT)

uint8_t *i2c_Burst_W_EEP(uint16_t add, uint8_t *wdata, uint16_t data_length);
uint8_t *i2c_Burst_R_EEP(uint16_t add, uint8_t *rdata, uint16_t data_length);

uint16_t EEPWrite16(uint16_t nAddr, uint16_t _nVal);
uint16_t EEPRead16(uint16_t nAddr);

//void Test_i2c_eep( void );

enum eEEPAddr
{
    EPPAddrQBufLog,

    EPPAddrMagicNumH,
    EPPAddrMagicNumL,
    EPPAddrMaxLogSizeH,
    EPPAddrMaxLogSizeL,
    EPPAddrQBufStartH,
    EPPAddrQBufStartL,
    EPPAddrQBufEndH,
    EPPAddrQBufEndL
};

#define EPPAddrQBufLog  	64//0x100
#define EPPAddrMagicNumH  	(EPPAddrQBufLog - 8)
#define EPPAddrMagicNumL 	(EPPAddrQBufLog - 7)
#define EPPAddrMaxLogSizeH	(EPPAddrQBufLog - 6)
#define EPPAddrMaxLogSizeL  (EPPAddrQBufLog - 5)
#define EPPAddrQBufStartH 	(EPPAddrQBufLog - 4)
#define EPPAddrQBufStartL   (EPPAddrQBufLog - 3)
#define EPPAddrQBufEndH     (EPPAddrQBufLog - 2)
#define EPPAddrQBufEndL     (EPPAddrQBufLog - 1)

#define EPPAddrConfData		128		//	128		//	Config Data
#define EPPAddrConfValid	120		//	0xAA55
#define EPPAddrConfSize		122		//	Config Data Size

#define EPPDiagPageCnt		16			//	EEP Size
#define EPPDiagAddr			((256-EPPDiagPageCnt)*DATA_COUNT)	//	EEP Address

enum eEEPVal
{
    EEPMagicNumH ,
    EEPMagicNumL,

    EEPLogMaxSize
//  EEPLogMaxSize = 0x40, /*    64 Byte - 원형큐 시험용.*/
};
#define EEPMagicNumH  0xAA
#define EEPMagicNumL  0x55
#define EEPLogMaxSize 64	//0x800

void TestEEPLog(void);

int EEPLogInit      ( void );
int EEPLogReset     ( void );

int EEPLogGetMaxSize( void );
int EEPLogGetSize   ( void );

int EEPLogWrite     ( char sBuf[] );
//int EEPLogRead        ( char sBuf[] );

//int EEPLogPrint     ( void );

//int cmd_logPrint    ( int argc, char *argv[] );
//int cmd_logTest     ( int argc, char *argv[] );
//int cmd_logReset    ( int argc, char *argv[] );

//int cmd_eeptest		( int argc, char *argv[] );

//int cmd_eepwrite	( int argc, char *argv[] );
//int cmd_eepread		( int argc, char *argv[] );


//========================================================================
#endif  //  I2C_EEP_H
//========================================================================


