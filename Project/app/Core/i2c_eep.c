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

// Header

#include "sys_common.h"
#include "typedef.h"

#include "i2c_eep.h"
#include "i2c.h"

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "scm.h"
#include "diag.h"		//	Diag_EEPRom()
#include "controller_tester.h"
//========================================================================
// Define




//========================================================================
// Function


uint32_t I2C_EEP_Slave_Address_tmp;
uint8_t *i2c_Burst_W_EEP(uint16_t add, uint8_t *wdata, uint16_t data_length)
{
	///////////////////////////////////////////////////////////////
	//		Master Transfer Functionality					  //
	///////////////////////////////////////////////////////////////
	/* I2C Init as per GUI
	 *  Mode = Master - Transmitter
	 *  baud rate = 400KHz
	 *  Count = data_length
	 *  Bit Count = 8bit
	 */
	uint8 i, *ret;
	uint8_t TX_Data_Master[DATA_COUNT+2];

	uint16_t nSize;

	ret = &wdata[0];

	while( data_length > 0U )
	{
		//	한번에 쓸수있는 크기 64 Byte
		if ( ( add % DATA_COUNT ) != 0U )
		{
			//	DATA_COUNT(64) Byte Align Write
			//	MemAddress 16 Byte 단위에 맞추기.
			uint16_t nMargin = ( DATA_COUNT - (add % DATA_COUNT) );

			if (data_length < (uint16_t)nMargin){
				nSize = data_length;
			}
			else {
				nSize = nMargin;
			}
		}
		else if ( data_length < DATA_COUNT ){
			nSize = data_length;
		}
		else{
			nSize = DATA_COUNT;
		}

		/*TX_Data_Master 의 값 초기화 : High Address Bytes + Low Address Bytes + Write_data (data_length) */
		/************************************************************************************************ */

//		TX_Data_Master=(uint8_t *)malloc((uint16)(data_length + 2)); // TX_Data_Master를 위한 메모리 생성

		TX_Data_Master[0]=(uint8_t)((uint16_t)(add>>8) & (uint16_t)0xff);  // EEPROM address High Byte;
		TX_Data_Master[1]=(uint8_t)((uint16_t)add & (uint16_t)0x00ff);	   // EEPROM address Low Byte;

		for(i=0U;i<nSize;i++)
		{
			TX_Data_Master[i + 2U] = wdata[i];
		}

		/************************************************************************************************ */

		/* Configure address of Slave to talk to */
		i2cSetSlaveAdd(i2cREG1_tmp, (uint32)I2C_EEP_Slave_Address_tmp>>1); //Device Address Setting

		/* Set direction to Transmitter */
		i2cSetDirection(i2cREG1_tmp, I2C_TRANSMITTER);

		/* Configure Data count */
		i2cSetCount(i2cREG1_tmp, (uint32)(nSize+(uint32)2U));

		/* Set mode as Master */
		i2cSetMode(i2cREG1_tmp, I2C_MASTER);

		/* Set Stop after programmed Count */
		i2cSetStop(i2cREG1_tmp);

		/* Transmit Start Condition */
		i2cSetStart(i2cREG1_tmp);

		/* Tranmit DATA_COUNT number of data in Polling mode */

		while((bool)(i2cREG1_tmp->STR & ((uint32)I2C_TX | (uint32)I2C_ARDY)) == (bool)false){
			if(while_break == 1)
			{
				break;
			}
		}
		i2cSend(i2cREG1_tmp, (uint32)(nSize+(uint32)2), &TX_Data_Master[0]);

		/* Wait until Bus Busy is cleared */
		while(i2cIsBusBusy(i2cREG1_tmp) == (bool)true){
			if(while_break == 1)
			{
				break;
			}
		}

		/* Wait until Stop is detected */
		while(i2cIsStopDetected(i2cREG1_tmp) == (uint32)0){
			if(while_break == 1)
			{
				break;
			}
		}

		/* Clear the Stop condition */

		i2cClearSCD(i2cREG1_tmp);

//		free(TX_Data_Master);

		delay(40);//50);//100);			//	Write Delay. ( 40 msec )

		wdata = &wdata[nSize];
		add += nSize;
		data_length -= nSize;
	}

	return ret;//&wdata[0];
}

uint8_t *i2c_Burst_R_EEP(uint16_t add, uint8_t *rdata, uint16_t data_length)
{
	///////////////////////////////////////////////////////////////
	//		Master Receive Functionality					  //
	///////////////////////////////////////////////////////////////
	uint8_t RX_Data_Master[2], *ret;

	uint16_t nSize;

	ret = &rdata[0];

	while( data_length > 0U )
	{
//		RX_Data_Master=(uint8_t *)malloc(2); // TX_Data_Master를 위한 메모리 생성
		//	한번에 쓸수있는 크기 DATA_COUNT(64) Byte
		if ( ( add % DATA_COUNT ) != 0U )
		{
			//	DATA_COUNT(64) Byte Align Write
			//	MemAddress 64 Byte 단위에 맞추기.
			uint16_t nMargin = (DATA_COUNT - (add % DATA_COUNT) );
			if (data_length < nMargin){
				nSize = data_length;
			}
			else {
				nSize = nMargin;
			}
		}
		else if ( data_length < DATA_COUNT ){
			nSize = data_length;
		}
		else{
			nSize = DATA_COUNT;
		}

//		printf("%s(%d) - addr:0x%08X / nSize : %d / data_length : %d\n", __FUNCTION__, __LINE__, add, nSize, data_length );

		RX_Data_Master[1]=(uint8_t)add & (uint8_t)0x00ff;	   // EEPROM address Low Byte;
		RX_Data_Master[0]=(uint8_t)(add>>8) & (uint8_t)0xff;  // EEPROM address High Byte;

		/* Configure address of Slave to talk to */
		i2cSetSlaveAdd(i2cREG1_tmp, (uint32)((uint32)I2C_EEP_Slave_Address_tmp>>1U));

		/* Set direction to Transmitter */
		i2cSetDirection(i2cREG1_tmp, I2C_TRANSMITTER);

		/* Configure Data count */ //At this time, Should DATA_COUNT-1 because only Address byte is sent.
		i2cSetCount(i2cREG1_tmp, 2);

		i2cSetMode(i2cREG1_tmp, I2C_MASTER);

		/* Set Stop after programmed Count */
		i2cSetStop(i2cREG1_tmp);

		/* Transmit Start Condition */
		i2cSetStart(i2cREG1_tmp);

		/* Transmit DATA_COUNT number of data in Polling mode */
		while((bool)(i2cREG1_tmp->STR & ((uint32)I2C_TX | (uint32)I2C_ARDY)) == (bool)false){
			;
			if(while_break == 1)
			{
				break;
			}
		}
		i2cSend(i2cREG1_tmp, 2, &RX_Data_Master[0]);

		/* Set direction to Receiver */
		i2cSetDirection(i2cREG1_tmp, I2C_RECEIVER);

		/* Configure Data count */ //At this time, Should DATA_COUNT-1 because only Address byte is sent.
		i2cSetCount(i2cREG1_tmp, nSize);

		/* Set Stop after programmed Count */
		i2cSetStop(i2cREG1_tmp);

		/* Receive Start Condition */
		i2cSetStart(i2cREG1_tmp);

		/* Store Receive Data to RX_Data_buffer in Polling mode */
		while((bool)(i2cREG1_tmp->STR &((uint32)I2C_RX | (uint32)I2C_ARDY)) == (bool)true){
			;
			if(while_break == 1)
			{
				break;
			}
		}
		i2cReceive(i2cREG1_tmp, nSize, rdata);

		/* Wait until Bus Busy is cleared */
		while(i2cIsBusBusy(i2cREG1_tmp) == (bool)true){
			;
			if(while_break == 1)
			{
				break;
			}
		}

		/* Wait until Stop is detected */
		while(i2cIsStopDetected(i2cREG1_tmp) == (uint32_t)0){
			;
			if(while_break == 1)
			{
				break;
			}
		}

		/* Clear the Stop condition */
		i2cClearSCD(i2cREG1_tmp);

		rdata = &rdata[nSize];
		add += nSize;
		data_length -= nSize;
	}
	return ret;
}

#if 0
void Test_i2c_eep( void )
{
	uint8_t i;
	uint8_t j;
	uint16_t eep_add=0x0000;
	uint8_t wdata[DATA_COUNT];
	uint8_t rdata[DATA_COUNT];

	int err=0,test_count=0;

	uint8_t *transmit_d, *receive_d;

	i2cInit();  //   i2c 포트 초기화

	for(j=(uint8_t)0;j<(uint8_t)255;j++)
	{
		eep_add = eep_add + (1U<<6);

		for(i=(uint8_t)0;i<(uint8_t)(DATA_COUNT);i++){  //wdata 값 설정.
			wdata[i]=i;
		}

		for(i=(uint8_t)0;i<(uint8_t)(DATA_COUNT);i++){  //rdata 값 초기화.
			rdata[i]=(uint8_t)0x00;
		}

		transmit_d=i2c_Burst_W_EEP((uint16_t)eep_add, (uint8_t*)wdata, (uint8_t)DATA_COUNT);

//		delay(40);//50);//100);			//	실제 Delay발생.
//DEL		MY_Delay(100);	//	Release모드에선 동작 X

		receive_d=i2c_Burst_R_EEP(eep_add, rdata, DATA_COUNT);

		for(i=(uint8_t)0;i<(uint8_t)DATA_COUNT;i++)
		{
			if(transmit_d[i] != receive_d[i])
			{
				err++;
				printf("received_data[%d]=%x, transmit_data[%d]=%x\r\n", i, receive_d[i], i, transmit_d[i]);
			}
		}

		test_count++;

		printf("EEP_Page%d has been tested\r\n", eep_add/(uint16_t)0x40);

		//eep_add=0x0000;
	}
	printf("Total test_count=%d, Total err=%d\r\n", test_count, err);

}
#endif

#include "QBuf.h"

QBuf_t  g_qLog;

union
{
	uint8_t cBuf[2];
	uint16_t nVal;
} s_n16Val;

//const int s_cLogBufSize = 256;
#define s_cLogBufSize  256
uint8 s_sLogBuf[257];



//========================================================================
uint16_t EEPWrite16(uint16_t nAddr, uint16_t _nVal)
//========================================================================
{
	s_n16Val.nVal = _nVal;

	i2c_Burst_W_EEP( nAddr, s_n16Val.cBuf, 2U);

	return s_n16Val.nVal;
}



//========================================================================
int EEPLogWrite(char *sBuf)
//========================================================================
{
	//  원형큐 로그 저장.
	int nLen;
	nLen = (int)strlen(sBuf);

	printf("%s(%d) - rear(%d) / len(%d) / %s\n", __FUNCTION__, __LINE__, g_qLog.rear, nLen, sBuf);

#ifndef _WIN32

	if ( (g_qLog.rear + nLen) > g_qLog.size )
	{
		//  [[  A  ]   Buf   [  B  ]]
		//				   ^-rear
//		uint8_t *pBuf = (uint8_t *)sBuf;
		uint8_t pBuf[100];
		int nIdx;
		int nSize;
		uint8_t *sNull = (uint8_t *)"\0";

		nIdx = g_qLog.rear;

		nSize = g_qLog.size - g_qLog.rear;

		//  [  B  ]
		i2c_Burst_W_EEP( (uint16_t)((uint16_t)EPPAddrQBufLog + (uint16_t)g_qLog.rear), pBuf, (uint8_t)nSize);
		i2c_Burst_W_EEP( (uint16_t)((uint16_t)EPPAddrQBufLog + (uint16_t)g_qLog.size), sNull, (uint8_t)1U);	  //  마지막문자 '\0'

		//  [  A  ]
//		pBuf += nSize;
		memcpy(pBuf, sBuf, (size_t)nLen);

		nSize = nLen - nSize;
		i2c_Burst_W_EEP( (uint16_t)EPPAddrQBufLog, &pBuf[nSize], (uint8_t)((uint8_t)nSize + (uint8_t)1U));

		g_qLog.rear = nSize;
		EEPWrite16((uint16_t)EPPAddrQBufEndH, (uint16_t)g_qLog.rear);

		g_qLog.front = ( g_qLog.rear + 2 ) % g_qLog.size;
		EEPWrite16((uint16_t)EPPAddrQBufStartH, (uint16_t)g_qLog.front);
	}
	else
	{
		i2c_Burst_W_EEP( (uint16_t)((uint16_t)EPPAddrQBufLog + (uint16_t)g_qLog.rear), (uint8_t *)sBuf, (uint8_t)((uint8_t)nLen + (uint8_t)1U));

		if (((g_qLog.rear + 2) % g_qLog.size) == g_qLog.front)
		{
			//  Buffer Full
			g_qLog.rear = (g_qLog.rear + nLen) % g_qLog.size;
			EEPWrite16((uint16_t)(EPPAddrQBufEndH+0), (uint16_t)g_qLog.rear);

			g_qLog.front = (g_qLog.rear + 2) % g_qLog.size;
			EEPWrite16((uint16_t)EPPAddrQBufStartH, (uint16_t)g_qLog.front);
		}
		else
		{
			g_qLog.rear = (g_qLog.rear + nLen) % g_qLog.size;
			EEPWrite16((uint16_t)EPPAddrQBufEndH, (uint16_t)g_qLog.rear);
		}
	}

#endif

//  printf("%s(%d) - front(%d) / rear(%d)\n", __FUNCTION__, __LINE__, g_qLog.front, g_qLog.rear);

	/*

	i2c_Burst_R_EEP( EPPAddrQBufLog + g_qLog.rear, s_sLogBuf, nLen + 1);
//  HAL_Delay(10);
	//  s_sLogBuf[nLen] = '\0';
	printf(s_sLogBuf);

	//  */
	return 0;

}

//========================================================================
int EEPLogPrint(void)
//========================================================================
{
	//  원형큐 로그 출력.


	int nIdx;
	int nSize;
	int nRxSize;

	nIdx = g_qLog.front;
	nSize = qBufCnt(&g_qLog);

	printf("%s(%d)\n", __FUNCTION__, __LINE__);
	printf("%s(%d) - logsize(%d) / front(%d)/rear(%d)\n", __FUNCTION__, __LINE__,
		   nSize, g_qLog.front, g_qLog.rear );

	if ( g_qLog.front == g_qLog.rear )
	{
		//  Skip - No Log
		printf("%s(%d) - No Log Skip ( front(0x%02X) / rear(0x%02X) )\n",
			__FUNCTION__, __LINE__, g_qLog.front, g_qLog.rear );
	}
	else if ( g_qLog.front < g_qLog.rear )
	{
		//  [[	 Log	 ]	Buf	 ]
		//   ^-front	   ^-rear

		//  순서대로 출력.
		while ( nIdx < g_qLog.rear )
		{
			nRxSize = g_qLog.rear - nIdx;

			// printf("%s(%d) - nIdx(%d) / nRxSize(%d)\n",
			//	 __FUNCTION__, __LINE__, nIdx, nRxSize);

			if ( nRxSize < s_cLogBufSize )
			{
				// 마지막 로그 출력.
				i2c_Burst_R_EEP( (uint16_t)((uint16_t)EPPAddrQBufLog + (uint16_t)nIdx), (uint8_t *)s_sLogBuf, (uint8_t)nRxSize);
				s_sLogBuf[nRxSize] = (uint8_t)'\0';
				printf((char *)s_sLogBuf);
				nIdx += nRxSize;
				break;
			}
			else
			{
				i2c_Burst_R_EEP( (uint16_t)((uint16_t)EPPAddrQBufLog + (uint16_t)nIdx),(uint8_t *) s_sLogBuf, (uint8_t)s_cLogBufSize);
				s_sLogBuf[s_cLogBufSize] = (uint8_t)'\0';
				printf((char *)s_sLogBuf);
				nIdx += s_cLogBufSize;
			}

			// printf("\n");
		}
	}
	else
	{
		//  [[  A  ]   Buf   [  B  ]]
		//		 ^-rear	^-front

		//  [  B  ] 출력
		while ( nIdx < g_qLog.size )
		{
			nRxSize = g_qLog.size - nIdx;

			// printf("%s(%d) - nIdx(%d) / nRxSize(%d)\n",
			//	 __FUNCTION__, __LINE__, nIdx, nRxSize);

			if (nRxSize < s_cLogBufSize)
			{
				// 마지막 로그 출력.
				i2c_Burst_R_EEP( (uint16_t)((uint16_t)EPPAddrQBufLog + (uint16_t)nIdx), (uint8_t*)s_sLogBuf, (uint8_t)nRxSize);
				s_sLogBuf[nRxSize] = (uint8_t)'\0';
				printf((char *)s_sLogBuf);
				nIdx += nRxSize;
				break;
			}
			else
			{
				i2c_Burst_R_EEP( (uint16_t)((uint16_t)EPPAddrQBufLog + (uint16_t)nIdx), (uint8_t*)s_sLogBuf, (uint8_t)s_cLogBufSize);
				s_sLogBuf[s_cLogBufSize] = (uint8_t)'\0';
				printf((char *)s_sLogBuf);
				nIdx += s_cLogBufSize;
			}
		}

		//  [  A  ] 출력
		nIdx = 0;
		while (nIdx < g_qLog.rear)
		{
			nRxSize = g_qLog.rear - nIdx;

			if (nRxSize < s_cLogBufSize)
			{
				// 마지막 로그 출력.
				i2c_Burst_R_EEP( (uint16_t)((uint16_t)EPPAddrQBufLog + (uint16_t)nIdx), (uint8_t*)s_sLogBuf, (uint8_t)nRxSize);
				s_sLogBuf[nRxSize] = (uint8_t)'\0';
				printf((char *)s_sLogBuf);
				nIdx += nRxSize;
				break;
			}
			else
			{
				i2c_Burst_R_EEP( (uint16_t)((uint16_t)EPPAddrQBufLog + (uint16_t)nIdx), (uint8_t*)s_sLogBuf, (uint8_t)s_cLogBufSize);
				s_sLogBuf[s_cLogBufSize] = (uint8_t)'\0';
				printf((char *)s_sLogBuf);
				nIdx += s_cLogBufSize;
			}
		}
	}
	return 0;
}

//========================================================================



//========================================================================
