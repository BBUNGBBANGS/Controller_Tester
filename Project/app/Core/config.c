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
//#include "sys_common.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include "config.h"

#include "logic.h"

#include "i2c_eep.h"
#include "hal_stdtypes.h"
#include "controller_tester.h"
//========================================================================
// Define


//========================================================================
const char *g_sConfigDefault = "\
[DO1]=[PI1:>100Hz]<NAND>[DI1]\n\
[DO2]=[PI1:<100Hz]<NOR>[DI1:PD/0ms]<OR>[DI2]<NOR>[DI3]\n\
[DO3]=[PI1:>100Hz]<AND>[DI1]<XOR>[DI2]<NOR>[DI3]\n\
[DO4:P/L2H/400ms/50%]=[PI1:<3000Hz]<NOR>[DI4]<XOR>[DI5]<XOR>[DI6]\n\
[DO5]=[PI1:<3000Hz]<OR>![DI6]<XOR>[DI7]<NOR>[DI8]\n\
[DO6:I/H2L/150ms]=![DI1]<XOR>![DI2]<NOR>[PI1:<3000Hz]\n\
";

//[DO6]=![DI7]<XOR>![DI8]<NOR>[PI1:<3000Hz]\n\
//[DO2:I/H2L/150ms]=[PI1:<100Hz]<NOR>[DI1:PD/0ms]<OR>[DI2]<NOR>[DI3]\n
//

char	g_sConfBuf[MAX_CONFIG][128];
char 	g_sConfData[1024];			//	Config Data Buffer

//========================================================================
// Function

int ParsDO ( DO_t *pDO, char *sConfig )
{
	//	[DO#]
	//	[DO#(:(P/I)/(L2H/H2L)/Xms/X%)]

		//	[DO4:P/L2H/100ms/50%]=[DI1]<XOR>![DI2]<NOR>[PI1:<3000Hz]

	//	[DO4:P/L2H/100ms/50%]
	//		=
	//			[DI1]
	//				<XOR>
	//					![DI2]<NOR>[PI1:<3000Hz]

	//	[DO4:P/L2H/100ms/50%]에 따른 설정값만 Parsing

	//	parsing [DO4:P/L2H/100ms/50%]
	//	[ / ] 체크
	int iRet = TRUE;
	size_t nLen = strlen( sConfig );
	uint8_t sBuf[20],dummy;
	unsigned char *pStr = NULL;

	if ( !( ((char)sConfig[0] == (char)'[') && ((char)sConfig[(char)nLen - 1] == ']')
		&& (nLen >= (size_t)5)	//	최소길이 [DIX]
		) )
	{
		printf( "%s(%d) - parse error return ;\n", __FUNCTION__, __LINE__ );
		iRet = FALSE;	// return false;
	}
	else
	{
		//	이름 설정
		//	[DOX]
		memset( sBuf, 0, sizeof( sBuf ) );
		strncpy( (char *)sBuf, (char *)&sConfig[1], 3 );
		dummy = (uint8_t)'0';
		pDO->nNum = (sBuf[2] - dummy);	//	DO 번호 저장
		//	setName( sBuf );
	}

	//	설정값이 없는경우 return
	if ( (iRet == (int)TRUE) && (nLen != (size_t)5) )	//return true;
	{
		//	parsing [DO4:P/L2H/100ms/50%]
		//				^
		pStr = (unsigned char *)&sConfig[4];
		if ( (char)*pStr != ':' )
		{
			iRet = FALSE;	//	 return false;	//	parsing error
		}
		else
		{
			pStr++;
		}

		//	Pulse / Impulse
		//	parsing [DO4:P/L2H/100ms/50%]
		//			    ^
		if ( (iRet == TRUE) && ((char)*pStr == 'P') )
		{
			unsigned char *pMS;
			char sNum[20];
			int nNum;
			char *pPer;

			//	Pulse
			pDO->nOutputType = Pulse;	//	setType( Pulse );

			pStr++;
			if ( (char)*pStr != '/' )
			{
				iRet = FALSE;	//	return false;	//	parsing error
			}
			else
			{
				pStr++;
			}

			//	ActLvl
			//	parsing [DO4:P/L2H/100ms/50%]
			//				   ^
			if ( iRet == TRUE )
			{
				if ( strncmp( (char *)pStr, "L2H", 3 ) == 0 )
				{
					pDO->nActiveLevel = ActLowToHigh;	//	setActLvl( ActLowToHigh );
					pDO->nValue = 0;					//	Default Low
				}
				else if ( strncmp( (char *)pStr, "H2L", 3 ) == 0 )
				{
					pDO->nActiveLevel = ActHighToLow;	//	setActLvl( ActHighToLow );
					pDO->nValue = 1;					//	Default High
				}
				else
				{
					iRet = FALSE;	//return false;	//	parsing error
				}
			}

			if ( iRet == TRUE )
			{
//				pStr += 3;	//	"L2H"
				pStr++;pStr++;pStr++;
				if ( (char)*pStr != '/' )
				{
					iRet = FALSE;	// return false;	//	parsing error
				}
				else
				{
					pStr++;
				}
			}

			//	Period
			//	parsing [DO4:P/L2H/100ms/50%]
			//					   ^
			// find "ms"
			if ( iRet == TRUE )
			{
				pMS = (unsigned char *)strstr( (const char *)pStr, "ms" );
				if ( pMS == NULL )
				{
					iRet = FALSE;	//return false;	//	parsing error
				}
			}

			//	Number
			if ( iRet == TRUE )
			{
				memset( sNum, 0, sizeof( sNum ) );
				strncpy( (char *)sNum, (char *)pStr, (size_t)((size_t)pMS - (size_t)pStr) );

				nNum = atoi( sNum );
				pDO->nPeriod = (uint16_t)nNum;	//		m_nPeriod = nNum;

				//pStr = pMS + 2;		//	"ms"
				pMS++;pMS++;
				pStr = pMS;
				if ( (char)*pStr != '/' )
				{
					iRet = FALSE;	// return false;	//	parsing error
				}
				else
				{
					pStr++;
				}
			}

			//	Duty
			//	parsing [DO4:P/L2H/100ms/50%]
			//							 ^
			// find "%"
			if ( iRet == TRUE )
			{
				pPer = strstr( (char *)pStr, "%" );
				if ( pPer == NULL )
				{
					iRet = FALSE;	// return false;	//	parsing error
				}
				else
				{
					//	Number
					memset( sNum, 0, sizeof( sNum ) );
					strncpy( (char *)sNum, (char *)pStr, (size_t)((size_t)pPer - (size_t)pStr) );

					nNum = atoi( sNum );
					pDO->nDutyRatio = (uint8_t)nNum;	//	 m_nDutyRatio = nNum;
				}
			}
		}
		else if ( (char)*pStr == 'I' )
		{
			char *pMS;
			char sNum[20];
			int nNum;

			//	Impulse
			pDO->nOutputType = Impulse;

			pStr++;
			if ( (char)*pStr != '/' )
			{
				iRet = FALSE;	// return false;	//	parsing error
			}
			else
			{
				pStr++;
			}

			//	ActLvl
			//	parsing [DO4:I/L2H/100ms]
			//				   ^
			if ( iRet == TRUE )
			{
				if ( strncmp( (char *)pStr, "L2H", 3 ) == 0 )
				{
					pDO->nActiveLevel = ActLowToHigh;
					pDO->nValue = 0;					//	Default Low
				}
				else if ( strncmp( (char *)pStr, "H2L", 3 ) == 0 )
				{
					pDO->nActiveLevel = ActHighToLow;
					pDO->nValue = 1;					//	Default High
				}

				//pStr += 3;	//	"L2H"
				pStr++;pStr++;pStr++;
				if ( (char)*pStr != '/' )
				{
					iRet = FALSE;	// return false;	//	parsing error
				}
				else
				{
					pStr++;
				}
			}

			//	Period
			//	parsing [DO4:I/L2H/100ms]
			//				       ^
			// find "ms"
			if ( iRet == TRUE )
			{
				pMS = strstr( (char *)pStr, "ms" );
				if ( pMS == NULL )
				{
					iRet = FALSE;	// return false;	//	parsing error
				}
				else
				{
					//	Number
					memset( sNum, 0, sizeof( sNum ) );
					strncpy( (char *)sNum, (char *)pStr, (size_t)((size_t)pMS - (size_t)pStr) );

					nNum = atoi( sNum );
					pDO->nPeriod = (uint16_t)nNum;
				}
			}
		}
	}

	return iRet;
}

int ParsDI ( DI_t *pDI, char *sConfig )
{
	//	parsing ![DI1]  /	[DI1:BD/0ms]
//	! / [ / ] 체크
	int		iRet = TRUE;
	size_t		nLen = strlen( sConfig );
	char	*pStr;
	char	sBuf[20],dummy;


	if ( !( ( ((( char)sConfig[0] == '[') && (( char)sConfig[(char)nLen - 1] == ']') )
		|| ( ((char)sConfig[0] == (char)'!') &&
				((char)sConfig[1] == '[') &&
				((char)sConfig[(char)nLen - 1] == ']') ) )
		&& (nLen >= (size_t)5)	//	최소길이 [DIX]
		) )
	{
		printf( "%s(%d) - parse error return ;\n", __FUNCTION__, __LINE__ );
		iRet = FALSE;	// return false;
	}
	else
	{
		pStr = &sConfig[0];

		//	![DI1]	-	Invert 설정
		if ( *pStr == '!' )
		{
			pDI->bInvert = 1;	//			setInvert( true );
			pStr++;
		}
		else
		{
			pDI->bInvert = 0;	//			setInvert( false );
		}

		pStr++;
		//	이름 설정
		//	[DOX]
		memset( sBuf, 0, sizeof( sBuf ) );
		strncpy( sBuf, pStr, 3 );
		//	setName( sBuf );
		dummy = '0';
		pDI->nNum = (int)((int)sBuf[2] - (int)dummy);	//	DO 번호 저장

		if ( (1 <= pDI->nNum) && (pDI->nNum <= MAX_DI) )
		{
			pDI->pSigDI = &g_sigDI[pDI->nNum - 1];

			//	설정값이 없는경우 return
			//	[DOX]
			//		^
			pStr += 3;
		}
		else
		{
			printf("%s(%d) - Out of range DI#(%d)\n", __FUNCTION__, __LINE__, pDI->nNum );
			iRet = FALSE;
		}
	}

	if ( (iRet == TRUE) && (*pStr != ']') )	//	return true;
	{
		//	parsing [DI1:BD/0ms]
		//				^
		pStr++;
		if ( *pStr != ':' )
		{
			iRet = FALSE;	// return false;	//	parsing error
		}
		else
		{
			pStr++;
		}

		//	Input Delay
		//	parsing [DI1:BD/0ms]
		//				 ^
		if ( iRet == TRUE )
		{
			if ( strncpy( pStr, "BD", 2 ) == NULL )
			{
				char *pMS = NULL;
				char sNum[20];
				int nNum;

				//	Both Delay

				pStr += 2;
				//	parsing [DI1:BD/0ms]
				//				   ^
				if ( *pStr != '/' )
				{
					iRet = FALSE;	// return false;	//	parsing error
				}
				else
				{
					pStr++;
					//	Period
					//	parsing [DI1:BD/0ms]
					//				    ^
					//	find "ms"
					pMS = strstr( pStr, "ms" );
					if ( pMS == NULL )
					{
						iRet = FALSE;	// return false;	//	parsing error
					}
					else
					{
						//	Number
						memset( sNum, 0, sizeof( sNum ) );
						strncpy( sNum, pStr, (size_t)((size_t)pMS - (size_t)pStr) );

						nNum = atoi( sNum );	//	Delay

						pDI->nDType = (uint8_t)DTBoth;
						pDI->nDTime = (uint16_t)nNum;
						//		setDelay( Both, nNum );
					}
				}
			}
			else if ( strncpy( pStr, "PD", 2 ) == NULL )
			{
				char *pMS;
				char sNum[20];
				int nNum;

				//	Positive Delay

				pStr += 2;
				//	parsing [DI1:BD/0ms]
				//				   ^
				if ( *pStr != '/' )
				{
					iRet = FALSE;	// return false;	//	parsing error
				}
				else
				{
					pStr++;

					//	Period
					//	parsing [DI1:BD/0ms]
					//				    ^
					//	find "ms"
					pMS = strstr( pStr, "ms" );
					if ( pMS == NULL )
					{
						iRet = FALSE;	// return false;	//	parsing error
					}
					else
					{
						//	Number
						memset( sNum, 0, sizeof( sNum ) );
						strncpy( sNum, pStr, (size_t)((size_t)pMS - (size_t)pStr) );

						nNum = atoi( sNum );	//	Delay

						pDI->nDType = DTPositive;
						pDI->nDTime = (uint16_t)nNum;
						//		setDelay( Positive, nNum );
					}
				}
			}
			else if ( strncpy( pStr, "ND", 2 ) == NULL )
			{
				char *pMS;
				char sNum[20];
				int nNum;

				//	Negative Delay

				pStr += 2;
				//	parsing [DI1:BD/0ms]
				//				   ^
				if ( *pStr != '/' )
				{
					iRet = FALSE;	// return false;	//	parsing error
				}
				else
				{
					pStr++;

					//	Period
					//	parsing [DI1:BD/0ms]
					//				    ^
					//	find "ms"
					pMS = strstr( pStr, "ms" );
					if ( pMS == NULL )
					{
						iRet = FALSE;	// return false;	//	parsing error
					}
					else
					{
						//	Number
						memset( sNum, 0, sizeof( sNum ) );
						strncpy( sNum, pStr, (size_t)((size_t)pMS - (size_t)pStr) );

						nNum = atoi( sNum );	//	Delay

						pDI->nDType = DTNegative;
						pDI->nDTime = (uint16_t)nNum;
						//		setDelay( Negative, nNum );
					}
				}
			}
			else
			{
				//	Parsing Error
				iRet = FALSE;	// return false;
			}
		}
	}

	return iRet;	//	 true;
}

int ParsPI ( PI_t *pPI, char *sConfig )
{
	//	parsing [PI1:>100Hz]

	//	[ / ] 체크
	int		iRet = TRUE;
	size_t		nLen = strlen( sConfig );
	char	*pStr;
	char	sBuf[20],dummy;

	if ( !( ( ((char)sConfig[0] == (char)'[') && ((char)sConfig[(char)nLen - 1] ==']') )
		&& (nLen >= (size_t)5)	//	최소길이 [DIX]
		) )
	{
		printf( "%s(%d) - parse error return ;\n", __FUNCTION__, __LINE__ );
		iRet = FALSE;	//return false;
	}
	else
	{
		pStr = &sConfig[0];

		pStr++;
		//	이름 설정
		//	[PIX]
		memset( sBuf, 0, sizeof( sBuf ) );
		strncpy( sBuf, pStr, 3 );
		//	setName( sBuf );
		dummy = '0';
		pPI->nNum = (int)((int)sBuf[2] - (int)dummy);	//	DO 번호 저장

		if ( (1 <= pPI->nNum) && (pPI->nNum <= MAX_PI) )
		{
			pPI->pSigPI = &g_sigPI[pPI->nNum - 1];

			//	설정값이 없는경우 return
			//	[PIX]
			//		^
			pStr += 3;
		}
		else
		{
			printf("%s(%d) - Out of range PI#(%d)\n", __FUNCTION__, __LINE__, pPI->nNum );
			iRet = FALSE;
		}
	}

	if ( (iRet == TRUE) && (*pStr != ']') )
	{
		//	parsing [PI1:>100Hz]
		//				^
		if ( *pStr != ':' )
		{
			iRet = FALSE;	// return false;	//	parsing error
		}
		else
		{
			pStr++;

			//	Input Delay
			//	parsing [PI1:>100Hz]
			//				 ^
			if ( *pStr == '>' )
			{
				//	> : High
				char *pHz;
				char sNum[20];
				int nNum;

				pStr++;

				//	Period
				//	parsing [PI1:>100Hz]
				//					 ^
				//	find "Hz"
				pHz = strstr( pStr, "Hz" );
				if ( pHz == NULL )
				{
					iRet = FALSE;	// return false;	//	parsing error
				}
				else
				{
					//	Number
					memset( sNum, 0, sizeof( sNum ) );
					strncpy( sNum, pStr, (size_t)((size_t)pHz - (size_t)pStr) );

					nNum = atoi( sNum );	//	Delay

					pPI->nComp = (uint8_t)High;
					pPI->nFreqency = (uint16_t)nNum;
					//		setCompare( High, nNum );
				}
			}
			else if ( *pStr == '<' )
			{
				//	< : Low
				char *pHz;
				char sNum[20];
				int nNum;

				pStr++;

				//	Period
				//	parsing [PI1:<100Hz]
				//					 ^
				//	find "Hz"
				pHz = strstr( pStr, "Hz" );

				if ( pHz == NULL )
				{
					iRet = FALSE;	// return false;	//	parsing error
				}
				else
				{
					//	Number
					memset( sNum, 0, sizeof( sNum ) );
					strncpy( sNum, pStr, (size_t)((size_t)pHz - (size_t)pStr) );

					nNum = atoi( sNum );	//	Delay

					pPI->nComp = (uint8_t)Low;
					pPI->nFreqency = (uint16_t)nNum;
					//		setCompare( Low, nNum );
				}
			}
			else
			{
				//	Parsing Error
				iRet = FALSE;	// return false;
			}
		}
	}

	return iRet;	// true;
}

int ParsGate ( Gate_t *pGate, char *sConfig )
{
	//	<Gate>
	//	<AND>/<OR>/<NAND>/<NOR>/<XOR>/<XNOR>
	int iRet = TRUE;

	if ( strcmp( sConfig, "<AND>" ) == 0 ){
		pGate->Gate = (uint8_t)eAND;		//	 = new AndGate();
	}
	else if ( strcmp( sConfig, "<OR>" ) == 0 ){
		pGate->Gate = (uint8_t)eOR;		//	 = new OrGate();
	}
	else if ( strcmp( sConfig, "<NAND>" ) == 0 ){
		pGate->Gate = eNAND;	//	 = new NandGate();
	}
	else if ( strcmp( sConfig, "<NOR>" ) == 0 ){
		pGate->Gate = eNOR;		//	 = new NorGate();
	}
	else if ( strcmp( sConfig, "<XOR>" ) == 0 ){
		pGate->Gate = eXOR;		//	 = new XorGate();
	}
	else if ( strcmp( sConfig, "<XNOR>" ) == 0 ){
		pGate->Gate = eXNOR;	//	 = new XnorGate();
	}
	else
	{
		iRet = FALSE;
	}

	return iRet;
}
//	*/

int ParsExprOperItem ( char* sExpr, ConfLogic_t *pConf )
{
	//	표현식 Parsing ( Line 단위 s

	//	![DI1]<XOR>[DI2]<NOR>[PI1:<3000Hz]
	//	![DI1]<XOR>![DI2]<NOR>[PI1:<3000Hz]

	//	<Oper> : <XOR>	/	<NOR>
	//	[Item] : ![DI1]	/	![DI2]	/	[PI1:<3000Hz]

	//	표현식 => 연산자 / 인자로 Parsing

	//	<Oper> : <AND> / <OR>
	//	[Item] : [DI#] or [PI#]
	int iRet = TRUE;
	char *pStr = sExpr;
	char sBuf[30];

	printf( "%s(%d)\n", __FUNCTION__, __LINE__ );

	while ( (iRet == (int)TRUE) && (*pStr != (char )NULL) )
	{
		if ( (*pStr == '[') || (*pStr == '!') )
		{
			//	[Item] Parsing
			char *pItemEnd = strstr( pStr, "]" );

			if ( pItemEnd == NULL )
			{
				iRet = FALSE;	// return FALSE;
			}
			else
			{
				strncpy( (char *)sBuf, pStr, (size_t)((size_t)pItemEnd - (size_t)pStr + (size_t)1) );
				sBuf[((size_t)pItemEnd - (size_t)pStr + (size_t)1)] = (char)'\0';
				printf( "%s(%d) [Item] : %s\n", __FUNCTION__, __LINE__, sBuf );

				//	DI/PI 생성
				if ( strncmp( sBuf, "[PI", 3 ) == 0 )
				{
					//	PI Loading
					ParsPI( &pConf->PI[pConf->cntPI], sBuf );
					pConf->cntPI++;
				}
				else if ( ( strncmp( sBuf, "[DI", 3 ) == 0 ) || ( strncmp( sBuf, "![DI", 4 ) == 0 ) )
				{
					//	DI Loading
					ParsDI( &pConf->DI[pConf->cntDI], sBuf );
					pConf->cntDI++;
				}
				else
				{
					printf( "%s(%d) - Parsing Error : %s\n", __FUNCTION__, __LINE__, pStr );
					iRet = FALSE;	// return FALSE;
				}

				pStr = pItemEnd + 1;
			}
		}
		else if ( *pStr == '<' )
		{
			//	<Oper> Parsing
			char *pOperEnd = strstr( pStr, ">" );

			if ( pOperEnd == NULL )
			{
				iRet = FALSE;	// return FALSE;
			}
			else
			{
				strncpy( (char *)sBuf, pStr, (size_t)((size_t)pOperEnd - (size_t)pStr + (size_t)1) );
				sBuf[(size_t)pOperEnd - (size_t)pStr + (size_t)1] = (char)'\0';
				printf( "%s(%d) <Oper> : %s\n", __FUNCTION__, __LINE__, sBuf );

				//	Oper
				ParsGate( &pConf->opGate[pConf->cntOpGate], sBuf );
				pConf->cntOpGate++;
			}

			pStr = pOperEnd + 1;
		}
		else
		{
			pStr++;
		}
	}

	printf( "%s(%d) - Oper : %d / Item : %d ( DI %d, PI %d )\n", __FUNCTION__, __LINE__,
		pConf->cntOpGate,
		pConf->cntDI + pConf->cntPI, pConf->cntDI, pConf->cntPI );

	if ( ( (pConf->cntDI == 0) && (pConf->cntPI == 0) ) ||
		( (pConf->cntOpGate + 1) != (pConf->cntDI + pConf->cntPI) )
		)
	{
		printf( "%s(%d) - Parsing Error - if ( DI == 0 && PI == 0 )\n", __FUNCTION__, __LINE__ );
		iRet = FALSE;	// return FALSE;
	}

	return iRet;	// TRUE;
}

int ParsExpr ( char *sExpr )
{
	int		iRet = TRUE;

	char	sBuf[256],dummy;
	char	*pStr = NULL;
	//ConfLogic_t		confLogic;
	ConfLogic_t		*pConf;
	int		nDO = 0;

	printf( "%s(%d)\n", __FUNCTION__, __LINE__ );
	//	표현식 Parsing ( Line 단위 )

	if ( sExpr == NULL )
	{
		printf( "%s(%d) - if ( sExpr == NULL )\n", __FUNCTION__, __LINE__ );
		iRet = FALSE;	// return FALSE;
	}

	//	[DO1]=[DI1]
	if ( (iRet == (int)TRUE) && (strlen( sExpr ) < 9U) )
	{
		printf( "%s(%d) - if ( strlen( sExpr ) < 9 )\n", __FUNCTION__, __LINE__ );
		iRet = FALSE;	//	return FALSE;
	}

	//	[DO5]=![DI1]<XOR>[DI2]<NOR>[PI1:<3000Hz]
	//	[DO6:I/H2L/150ms]=![DI1]<XOR>![DI2]<NOR>[PI1:<3000Hz]

	//	Expr표현식 => Oper연산자 / Item항목으로 Parsing

	//	DO찾기
	//	[DO#]
	if ( iRet == TRUE )
	{
		strcpy( sBuf, (const char *)sExpr );

		pStr = strtok( sBuf, "=" );

		memset( &confLogic, 0, sizeof( ConfLogic_t ) );
	}

	if ( pStr != NULL )
	{
		printf( "%s(%d) - Parsing(DO) : %s\n", __FUNCTION__, __LINE__, pStr );

		//	[DOX] Parsing

		//	DO Index 값 얻기.
		//	[DO1]
		if ( strncmp( pStr, "[DO", 3 ) != 0 )
		{
			printf( "%s(%d) - DO parsing Error : %s\n", __FUNCTION__, __LINE__, pStr );
			iRet = FALSE;	// return FALSE;
		}
		else
		{
			dummy = '0';
			nDO = (int)((int)pStr[3] - (int)dummy);
			if ( ( nDO < 1 ) || ( nDO > 6 ) )
			{
				printf( "%s(%d) - Out of range DO(%d)\n", __FUNCTION__, __LINE__, nDO );
				iRet = FALSE;	// return FALSE;
			}
			else
			{
				//	DO Config 설정.
				pConf = &confLogic;

				if ( (bool)ParsDO( &pConf->DO, pStr ) == false )
				{
					//	Parsing Error
					printf( "%s(%d) - Parse Error\n", __FUNCTION__, __LINE__ );
					pConf = NULL;

					iRet = FALSE;	//return FALSE;
				}
			}
		}
	}
	else
	{
		printf( "%s(%d) - Error\n", __FUNCTION__, __LINE__ );
		iRet = FALSE;	// return FALSE;
	}

	if ( iRet == TRUE )
	{
		pStr = strtok( NULL, "=" );

		//	표현식Parsing
		printf( "%s(%d) - Parsing =[Expr] : %s\n", __FUNCTION__, __LINE__, pStr );

		if ( ParsExprOperItem( pStr, pConf ) == FALSE )
		{
			printf( "%s(%d) - Parsing Result : Failed\n", __FUNCTION__, __LINE__ );
			iRet = TRUE;	// return FALSE;
		}
		else
		{
			//	Configuration 정상 Load 시.
			//	g_cntConf++;

			//	Config Buffer에 저장.
			strcpy( g_sConfBuf[nDO - 1], sExpr );
			memcpy( &g_ConfLogic[nDO - 1], pConf, sizeof( ConfLogic_t ) );
		}
	}

	return iRet;	// TRUE;
}

void InitConfig( void )
{
	printf( "%s(%d)\n", __FUNCTION__, __LINE__ );

	//	설정값 Load
	LoadConfig();
}


void LoadConfig( void )
{
	//	Line별 Parsing

	char	*pExpr[10];
	int		cntExpr = 0;
	int 	idx;
	size_t		cntConfig;
	uint8_t sBuf[2048];
	char 	*pStr, *pStrPrint;

	const char *sLoadConfig;// = g_sConfigDefault;
	uint16_t nSize;
	uint16_t i;

	i2c_Burst_R_EEP(EPPAddrConfValid, sBuf, 2);
	if ( (sBuf[0] == 0xAAU) && (sBuf[1] == 0x55U) )
	{
		//	EEPRom Config Valid
		i2c_Burst_R_EEP(EPPAddrConfSize, sBuf, 2);

		nSize = (uint16_t)(( (uint16_t)(sBuf[0]) << 8 ) | (sBuf[1]));

		printf("%s(%d) - Load EEProm Config(%d)\n", __FUNCTION__, __LINE__, nSize );
		memset( g_sConfData, 0, sizeof(g_sConfData));

		//	Config Data 저장
		i2c_Burst_R_EEP(EPPAddrConfData, (uint8_t *)g_sConfData, nSize);

//		printf(" Data : ");
//		for( i = 0; i < nSize; i++ )
//		{
//			printf("%c(%02X)", g_sConfData[i], g_sConfData[i] );
//		}
//		printf("\n");

		sLoadConfig = g_sConfData;
	}
	else
	{
		pStrPrint = (char *)"Load Default Config";
		printf("%s(%d) - %s\n", __FUNCTION__, __LINE__,pStrPrint );
		sLoadConfig = g_sConfigDefault;
	}

	printf( "%s(%d)\n", __FUNCTION__, __LINE__ );

	if ( sLoadConfig != NULL )	// return ;
	{
		cntConfig = strlen( sLoadConfig );

		printf( "%s(%d) - Config String Len : %d\n", __FUNCTION__, __LINE__, cntConfig );

		strcpy( (char *)sBuf, sLoadConfig );

		//	문자열 나누기 구분자 '\n'
		pStr = strtok( (char *)sBuf, "\n" );

		while ( pStr != NULL )
		{
			printf( "%s(%d) - Parsing : %s\n", __FUNCTION__, __LINE__, pStr );
			pExpr[cntExpr++] = pStr;

			pStr = strtok( NULL, "\n" );
		}

		//	표현식 파싱
		//		[DO1]=[PI1:>100Hz]<NAND>[DI1]	
		//		[DO2]=[PI1:<100Hz]<NOR>[DI1:PD/0ms]<OR>[DI2:0ms]
		for ( idx = 0; idx < cntExpr; idx++ )
		{
			if ( (bool)(ParsExpr( pExpr[idx] )) )
			{
				//	Parsing 성공
				printf( "%s(%d) - Parsing Success\n", __FUNCTION__, __LINE__ );
			}
			else
			{
				printf( "%s(%d) - Parsing Error\n", __FUNCTION__, __LINE__ );
			}
		}
	}

	LogicSetConfig();
}

void SaveConfig( void )
{
	int i;
	size_t nSize;
	uint8_t sBuf[20];
	char *pStr;

	printf( "%s(%d)\n", __FUNCTION__, __LINE__ );

	memset( g_sConfData, 0, sizeof(g_sConfData) );

	pStr = g_sConfData;
	for ( i = 0; i < 6; i++ )
	{
		printf("[%d] : %s\n", i, g_sConfBuf[i] );
		strcpy( pStr, g_sConfBuf[i] );
		printf("[%d] : %s\n", i, pStr );

		pStr += strlen( g_sConfBuf[i] );
		strcpy( pStr, "\n");
		pStr++;

//		printf("[%d] : %s\n", i, g_sConfData );
	}

	nSize = strlen( g_sConfData ) + (size_t)1;

	printf("%s(%d) - Save EEProm Config(%d)\n", __FUNCTION__, __LINE__, nSize );

	//	Config Data 저장
	i2c_Burst_W_EEP(EPPAddrConfData, (uint8_t *)g_sConfData, (uint16_t)nSize);

	sBuf[0] = (uint8_t)((nSize >> 8) & 0xFFU);
	sBuf[1] = (uint8_t)(nSize & 0xFFU);
	i2c_Burst_W_EEP(EPPAddrConfSize, sBuf, 2);

	sBuf[0] = 0xAA;
	sBuf[1] = 0x55;
	i2c_Burst_W_EEP(EPPAddrConfValid, sBuf, 2);
}

void SetConfigDefault( void )
{
	uint8_t sBuf[20];

	printf( "%s(%d)\n", __FUNCTION__, __LINE__ );

	//	Conf Valid 초기화
	sBuf[0] = 0x00;
	sBuf[1] = 0x00;
	i2c_Burst_W_EEP(EPPAddrConfValid, sBuf, 2);

	LoadConfig();
}

//========================================================================
