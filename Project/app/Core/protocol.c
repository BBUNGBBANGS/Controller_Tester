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
// Header

#include "can.h"
#include "sci.h"

#include "protocol.h"
#include "serial.h"

#include "logic.h"		//	pinDI / pinDO
#include "controller_tester.h"
//========================================================================
// Define

//========================================================================
//	CAN Tx
IntfSCM2ECPU0_t		g_IntfSCM2ECPU0;	//	SCM -> ECPU #0 : DO / DI / PI Á¤º¸
IntfSCM2ECPU1_t		g_IntfSCM2ECPU1;	//	SCM -> ECPU #1 : ³»ºÎÁ¤º¸
//========================================================================

//========================================================================
//	CAN Rx
IntfECPU2SCM0_t		g_IntfECPU2SCM0;	//	ECPU -> SCM #0 : ECPU Á¤º¸
IntfECPU2SCM1_t		g_IntfECPU2SCM1;	//	ECPU -> SCM #1 : (TBD)
IntfECPU2SCM2_t		g_IntfECPU2SCM2;	//	ECPU -> SCM #2 : (TBD)
IntfECPU2SCM3_t		g_IntfECPU2SCM3;	//	ECPU -> SCM #3 : (TBD)

int g_canRxComp0;
int g_canRxComp1;
int g_canRxComp2;
int g_canRxComp3;
//========================================================================


//========================================================================
// Function

void canMessageNotification(canBASE_t *node, uint32 messageBox)
{
	if ( node == canREG1_tmp )
	{
//		printf( "%s(%d) - Recv\n", __FUNCTION__, __LINE__ );

		if ( canIsRxMessageArrived( canREG1_tmp, canMESSAGE_BOX3 ) != 0U )
		{
//			printf( "%s(%d) - Recv Msg#3\n", __FUNCTION__, __LINE__ );
			canGetData( canREG1_tmp, canMESSAGE_BOX3, (uint8 *const)&g_IntfECPU2SCM0 );
			g_canRxComp0 = 1;
		}
		if ( canIsRxMessageArrived( canREG1_tmp, canMESSAGE_BOX4 ) != 0U )
		{
//			printf( "%s(%d) - Recv Msg#4\n", __FUNCTION__, __LINE__ );
			canGetData( canREG1_tmp, canMESSAGE_BOX4, (uint8 *const)&g_IntfECPU2SCM1 );
			g_canRxComp1 = 1;
		}
		if ( canIsRxMessageArrived( canREG1_tmp, canMESSAGE_BOX5 ) != 0U )
		{
//			printf( "%s(%d) - Recv Msg#5\n", __FUNCTION__, __LINE__ );
			canGetData( canREG1_tmp, canMESSAGE_BOX5, (uint8 *const)&g_IntfECPU2SCM2 );
			g_canRxComp2 = 1;
		}
		if ( canIsRxMessageArrived( canREG1_tmp, canMESSAGE_BOX6 ) != 0U )
		{
//			printf( "%s(%d) - Recv Msg#6\n", __FUNCTION__, __LINE__ );
			canGetData( canREG1_tmp, canMESSAGE_BOX6, (uint8 *const)&g_IntfECPU2SCM3 );
			g_canRxComp3 = 1;
		}
	}
}

int canProcRx( void )
{
	int i = 0;
	char *pBuf;

	if ( g_canRxComp0 != 0 )
	{
		printf("[CAN] ID %X : ", ECPU2SCM0);
		pBuf = (char *)&g_IntfECPU2SCM0;
		for( i = 0; i < 8; i++ )
		{
			printf("%02X ", pBuf[i]);
		}
		printf("\n");
		g_canRxComp0 = 0;
	}
	if ( g_canRxComp1 != 0 )
	{
		printf("[CAN] ID %X : ", ECPU2SCM1);
		pBuf = (char *)&g_IntfECPU2SCM1;
		for( i = 0; i < 8; i++ )
		{
			printf("%02X ", pBuf[i]);
		}
		printf("\n");
		g_canRxComp1 = 0;
	}
	if ( g_canRxComp2 != 0)
	{
		printf("[CAN] ID %X : ", ECPU2SCM2);
		pBuf = (char *)&g_IntfECPU2SCM2;
		for( i = 0; i < 8; i++ )
		{
			printf("%02X ", pBuf[i]);
		}
		printf("\n");
		g_canRxComp2 = 0;
	}
	if ( g_canRxComp3 != 0 )
	{
		printf("[CAN] ID %X : ", ECPU2SCM3);
		pBuf = (char *)&g_IntfECPU2SCM3;
		for( i = 0; i < 8; i++ )
		{
			printf("%02X ", pBuf[i]);
		}
		printf("\n");
		g_canRxComp3 = 0;
	}
	return 0;
}

int	canSendSCM2ECPU0( void )
{
	//	SCM2ECPU0 = 0x320,		//	DO/DI/PI Á¤º¸		/	200 msec	//	CAN Msg#1

	static uint8_t s_nSeqNo = 0;

	IntfSCM2ECPU0_t	*pPkt = &g_IntfSCM2ECPU0;

	pPkt->nSeqNo = s_nSeqNo++;

	//	DI
	pPkt->bDI1	=	(uint8_t)g_pinDI[0];
	pPkt->bDI2	=	(uint8_t)g_pinDI[1];
	pPkt->bDI3	=	(uint8_t)g_pinDI[2];
	pPkt->bDI4	=	(uint8_t)g_pinDI[3];
	pPkt->bDI5	=	(uint8_t)g_pinDI[4];
	pPkt->bDI6	=	(uint8_t)g_pinDI[5];
	pPkt->bDI7	=	(uint8_t)g_pinDI[6];
	pPkt->bDI8	=	(uint8_t)g_pinDI[7];

	//	DO
	pPkt->bDO1	=	(uint8_t)g_pinDO[0];
	pPkt->bDO2	=	(uint8_t)g_pinDO[1];
	pPkt->bDO3	=	(uint8_t)g_pinDO[2];
	pPkt->bDO4	=	(uint8_t)g_pinDO[3];
	pPkt->bDO5	=	(uint8_t)g_pinDO[4];
	pPkt->bDO6	=	(uint8_t)g_pinDO[5];

	//	v1.0
	pPkt->bSWVerXX_00 = 1U;		//	v1.0
	pPkt->bSWVer00_XX = 0U;

	canTransmit( canREG1_tmp, canMESSAGE_BOX1, (const uint8 *)pPkt ); //CAN_TData ¼Û½Å

	return (int)TRUE;
}

int	canSendSCM2ECPU1( void )
{
	//	SCM2ECPU1 = 0x321,		//	³»ºÎÁ¤º¸			/	200 msec	//	CAN Msg#2

	IntfSCM2ECPU1_t	*pPkt = &g_IntfSCM2ECPU1;


	static uint8_t s_nTemp = 0;
	pPkt->nTemperature = 0;//s_nTemp++;		//	TEST

	pPkt->nPulseInputUpper = (uint8_t)((g_sigPI[0].nFreqency>>8) & 0xFFU);
	pPkt->nPulseInputLower = (uint8_t)((g_sigPI[0].nFreqency & 0xFFU));

	canTransmit( canREG1_tmp, canMESSAGE_BOX2, (const uint8 *)pPkt ); //CAN_TData ¼Û½Å

	return (int)TRUE;
}


//========================================================================