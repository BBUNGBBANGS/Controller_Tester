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
#include <stdbool.h>
#include <stdlib.h>
#include "scm.h"		//	SCM_Halt()

#include "het.h"		//	PolarityHigh / PolarityLow

#include "logic.h"

#include "dio.h"
#include "pulse.h"
#include "controller_tester.h"
//========================================================================
// Define

//	DI	/	PI
int8_t		g_pinDI[MAX_DI];		//	GPIO DI Value	( Pin Value )
uint16_t	g_pinPI[MAX_PI];		//	PI Value		( Pin Value )
int8_t		g_pinDO[MAX_DO];		//	GPIO DO Value	( Pin Value )

int8_t		g_pinDIMsk[MAX_DI];		//	GPIO DI Manual Set Mask
int8_t		g_pinPIMsk[MAX_PI];		//	Pulse PI Manual Set Mask
int8_t		g_pinDOMsk[MAX_DO];		//	GPIO DO Manual Set Mask

SigDI_t		g_sigDI[MAX_DI];		//	sigDI#1 ~ #8
SigPI_t		g_sigPI[MAX_PI];		//	sigPI#1 ~ #2

//DI_t		g_DI[8];		//	DI#1 ~ #8
//PI_t		g_PI[2];		//	PI#1 ~ #2

//	DO
//DO_t		g_DO[MAX_DO];		//	DO#1 ~ #6
int8_t		g_pinHalt;				//	GPIO DO#7 ( Halt )

ConfLogic_t	g_ConfLogic[MAX_DO];		//	DO#1~6 설정값
//int				g_cntConf = 0;			//	Conf

int			g_bEnDOMonitor;			//	DO출력 변화값 모니터링.

//========================================================================
// Function

void	InitLogic		( void )
{
	//	Logic 변수 초기화.
	g_bEnDOMonitor = 1;
}

void	LogicSetConfig		( void )	//	Config 설정에 따른 Output 출력설정.
{
	int idx;
	int idxSize;
	int nPolarity;

	idxSize = (int)(sizeof( g_ConfLogic ) / sizeof( ConfLogic_t ));

	for ( idx = 0; idx < idxSize; idx++ )
	{
		if ( (g_ConfLogic[idx].DO.nNum) == ((uint8_t)idx + 1U) )
		{
			//	DO index값이 Valid한 경우 Config 설정.
			DO_t *pDO = &g_ConfLogic[idx].DO;

			nPolarity = ( pDO->nActiveLevel == ActLowToHigh )? PolarityHigh:PolarityLow;

			if ( pDO->nOutputType == Pulse )
			{
				PWMConfig( (int)pDO->nNum, (int)nPolarity, (int)pDO->nPeriod, (int)pDO->nDutyRatio );
			}
			else if ( pDO->nOutputType == (uint8_t)Impulse )
			{
				//	Impulse의 경우 Duty 100%
				//		-> 99%로 수정 100%일때 Puse 생성 안됨.
				PWMConfig( (int)pDO->nNum, (int)nPolarity, (int)pDO->nPeriod, 99 );//100 );
			}
		}
	}

}

void	LogicProc		( uint32_t elipsed )
{
	//	Logic 연산
	//	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	//	Input연산.
	LogicProcInput( elipsed );

	//	Output출력.
	LogicProcOutput( elipsed );
}

void	LogicProcInput	( uint32_t elipsed )
{
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	LogicProcInputDI( elipsed );
	LogicProcInputPI( elipsed );
}

int		LogicProcInputCompareDI	( void )
{
	//	Input Signal 비교.
	//	DIN_STAT#1~8	/	DIN_MON#1~8 비교.
	//	비교 후 -> g_pinDI 갱신.
	int i;

	//	printf( "%s(%d)\n", __FUNCTION__, __LINE__ );
	UpdateDI();

	for ( i = 0; i < MAX_DI; i++ )
	{
		if ( DIN_STAT[i] == DIN_MON[i] )
		{
			if ( g_pinDIMsk[i] == 0 )
			{
				//	DI Msk가 0인 경우 H/W GPIO값으로 설정.
				g_pinDI[i] = (int8_t)DIN_STAT[i];
			}
		}
		else
		{
			if ( (bool)g_bEnHalt )
			{
				//	Halt
				printf( "%s(%d) - Halt(DI#%d)\n", __FUNCTION__, __LINE__, i + 1 );
				SCM_Halt();
			}
		}
	}


	return TRUE;
}

int		LogicProcInputComparePI	( void )
{
	//	Input Pulse Signal 비교.
	//	SS#1~2_S1	/	SS#1~2_S2 비교.
	//	비교 후 -> g_pinPI 갱신.
	int i;
	static int		s_retryDiff[MAX_PI] = { 0, };
	static uint32_t s_nTick[MAX_PI];

	UpdatePI();

	//	printf( "%s(%d)\n", __FUNCTION__, __LINE__ );
	for ( i = 0; i < MAX_PI; i++ )
	{
		if ( abs( PI_STAT[i] - PI_MON[i] ) < LimitPulseDiff )
		{
			if ( g_pinPIMsk[i] == 0 )
			{
				//	DI Msk가 0인 경우 H/W GPIO값으로 설정.
				g_pinPI[i] = (uint16_t)(PI_STAT[i] + 0.5);	//	실수 => 정수 변환 ( 반올림 )
			}
			s_retryDiff[i] = 0;
		}
		else
		{
			if ( s_retryDiff[i] == 0 )
			{
				s_retryDiff[i]++;
				s_nTick[i] = getTick();
			}
			else if ( ( getTick() - s_nTick[i] ) > ChkPulsePeriod )
			{
				if ( (bool)g_bEnHalt )
				{
					//	Halt
					printf( "%s(%d) - Halt(PI#%d)\n", __FUNCTION__, __LINE__, i + 1 );
					printf( "	PI_STAT[%d] = %d, PI_MON[%d] = %d\n", i, (int)PI_STAT[i], i, (int)PI_MON[i] );
					SCM_Halt();	// while ( 1 );	//	Halt
				}
			}
		}
	}

//	if ( g_pinPIMsk[] == 0 )
	{
		//	DI Msk가 0인 경우 H/W Pulse값으로 설정.
	}

	return TRUE;
}

int		LogicProcOutputCompareDO	( void )
{
	//	Output Signal 비교.
	//	DO_ON1~7	/	DO_FB1~7 비교

	//	printf( "%s(%d)\n", __FUNCTION__, __LINE__ );

	//	g_pinDO[] #1 ~ 6 값 GPIO에 설정 후 Monitoring Pin과 값 비교.

	//	DO - Output출력에 따른 Feedback값 확인.
	int i;
	static int		s_retryDiff[MAX_DO] = { 0, };
	static uint32_t s_nTick[MAX_DO];

	UpdateDOFB();

	for( i = 0; i < MAX_DO; i++ )
	{
		if ( g_pinDO[i] != (int8_t)DO_FB[i] )
		{
			if ( s_retryDiff[i] == 0 )
			{
				s_retryDiff[i]++;
				s_nTick[i] = getTick();
			}
			else if ( ( getTick() - s_nTick[i] ) > ChkPulsePeriod )
			{
				if ( (bool)g_bEnHalt )
				{
					printf( "%s(%d) - Halt(DO#%d)\n", __FUNCTION__, __LINE__, i + 1 );
					SCM_Halt();		//while(1)	;	//	Halt
				}
			}
		}
		else
		{
			s_retryDiff[i] = 0;
		}
	}

	return TRUE;
}

void	LogicProcInputDI	( uint32_t elipsed )
{
	size_t idx,idxSize;
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	//	Input DI 신호 값 비교.
	LogicProcInputCompareDI();

	idxSize = sizeof( g_sigDI ) / sizeof( SigDI_t );
	//	SigDI -> DI 저장.
	for(idx=0U; idx < idxSize; idx++ )
	{
		if ( g_sigDI[idx].nValue != (uint8_t)g_pinDI[idx] )
		{
			//	DI 값이 변경된 경우.
			g_sigDI[idx].nValue = (uint8_t)g_pinDI[idx];
			g_sigDI[idx].nRemainTime = 0;
		}
		else
		{
			//	DI Value 유지시간 증가.
			g_sigDI[idx].nRemainTime += elipsed;
		}
	}
}

void	LogicProcInputPI	( uint32_t elipsed )
{
	size_t idx, idxSize;
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	//	Input Pulse 신호 값 비교.
	LogicProcInputComparePI();

	//	SigPI -> PI 저장.
	idxSize = sizeof( g_sigPI ) / sizeof( SigPI_t );
	for( idx = 0; idx < idxSize; idx++ )
	{
		g_sigPI[idx].nFreqency = g_pinPI[idx];
	}

	//	Pulse값에 따른 임계값 계산.

}


void	LogicProcCalcConfDI( uint32_t elipsed, ConfLogic_t *pConf )
{
	//	printf( "%s(%d)\n", __FUNCTION__, __LINE__ );

	//	DI	-	Update		Config에 따른 Positive / Negative Delay 적용.
	int idx;
	for ( idx = 0; idx < pConf->cntDI; idx++ )
	{
		//	Posi/Nega/Both Delay 적용.
		SigDI_t *pSigDI;
		DI_t *pDI = &pConf->DI[idx];

		if ( pDI->pSigDI == NULL )
		{
			continue;
		}

		pSigDI = pDI->pSigDI;
		if ( pSigDI->nValue != pDI->nDIVal )
		{
			//	DI Pin 입력값과 DI값이 다른경우.

			if ( pDI->nDType == (uint8_t)DTNone )
			{
				//	Delay없이 바로 적용.
				pDI->nDIVal = pSigDI->nValue;
			}
			else
			{
				if ( pSigDI->nValue == 1U )
				{
					//	High Edge
					if ( (bool)(pDI->nDType & DTPositive) )
					{
						//	Positive Delay 적용.
						if ( pDI->nDTime >= pSigDI->nRemainTime )
						{
							pDI->nDIVal = pSigDI->nValue;
						}
					}
					else
					{
						//	Delay없이 바로 적용.
						pDI->nDIVal = pSigDI->nValue;
					}
				}
				if ( pSigDI->nValue == 0U )
				{
					//	Low Edge
					if ( (bool)(pDI->nDType & DTNegative) )
					{
						//	Negative Delay 적용.
						if ( pDI->nDTime >= pSigDI->nRemainTime )
						{
							pDI->nDIVal = pSigDI->nValue;
						}
					}
					else
					{
						//	Delay없이 바로 적용.
						pDI->nDIVal = pSigDI->nValue;
					}
				}
			}
		}
		//	DI Value
		pDI->nValue = pDI->nDIVal ^ pDI->bInvert;
	}
}

void	LogicProcCalcConfPI( uint32_t elipsed, ConfLogic_t *pConf )
{
	//	printf("%s(%d)\n", __FUNCTION__, __LINE__);
		
	//	PI - Update
	int idx;

	for ( idx = 0; idx < pConf->cntPI; idx++ )
	{
		//	Posi/Nega/Both Delay 적용.
		PI_t *pPI = &pConf->PI[idx];
		SigPI_t *pSigPI;

		if ( pPI->pSigPI == NULL )
		{
			continue;
		}

		pSigPI = pPI->pSigPI;

		if ( pPI->nComp == High )
		{

			if ( pSigPI->nFreqency >= pPI->nFreqency )
			{
				pPI->nValue = TRUE;
			}
			else
			{
				pPI->nValue = FALSE;
			}
		}
		else if ( pPI->nComp == (uint8_t)Low )
		{
			if ( pSigPI->nFreqency < pPI->nFreqency )
			{
				pPI->nValue = TRUE;
			}
			else
			{
				pPI->nValue = FALSE;
			}
		}
		else
		{
			printf( "%s(%d) - Invalid Value\n", __FUNCTION__, __LINE__ );
		}
	}
}

/*
"PI1
PI1-DI1"

"PI1-DI1-DI2
PI1-DI1-DI2-DI3"

"DI1
DI2
DI3
DI1-DI2
DI1-DI3
DI2-DI3
DI1-DI2-DI3
PI1
DI1-PI1
DI2-PI1
DI3-PI1
DI1-DI2-PI1
DI1-DI3-PI1
DI2-DI3-PI1
DI1-DI2-DI3-PI1"
*/

uint8_t	LogicProcCalcConfLogicGate( uint32_t elipsed, ConfLogic_t *pConf )
{
	//	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	//	DI / PI값에 따른 Logic Gate 연산.
	int valDI = 0;
	int valPI = 0;
	int idx;
	bool	bVal;
	DI_t	*pDI;
	PI_t	*pPI;
	int nIdxDI = 0;
	int nIdxPI = 0;
	DO_t *pDO;
	uint8_t iret=1;


	//	OP / Item 갯수 확인.
	//pConf->cntDI;
	//pConf->cntPI;
	//pConf->cntOpGate;

	//	AND / OR / XOR
	//	&	/ |	 / ^

	bVal = false;	//	계산된 결과 값.

	//	DI or PI
	if ( (bool)pConf->cntDI )
	{
		pDI = &pConf->DI[nIdxDI];
		bVal = (bool)pDI->nValue;
		nIdxDI++;
	}
	else if ( (bool)pConf->cntPI )
	{
		pPI = &pConf->PI[nIdxPI];
		bVal = (bool)pPI->nValue;
		nIdxPI++;
	}
	else
	{
		printf( "%s(%d) - return ;\n", __FUNCTION__, __LINE__ );
		//return 0;
		iret = 0U;
	}

	//	Gate 값에 따른 Logic 연산.

	//	1. DI 연산
	if ( iret != 0U){
		for ( idx = 0; idx < pConf->cntOpGate; idx++ )
		{
			bool bIN;
			Gate_t	*pGate;

			if ( nIdxDI < pConf->cntDI )
			{
				pDI = &pConf->DI[nIdxDI];
				bIN = (bool)pDI->nValue;
				nIdxDI++;
			}
			else if ( nIdxPI < pConf->cntPI )
			{
				pPI = &pConf->PI[nIdxPI];
				bIN = (bool)pPI->nValue;
				nIdxPI++;
			}
			else
			{
				printf( "%s(%d) - return ;\n", __FUNCTION__, __LINE__ );
				//return 0;
				iret = 0;
			}

			//
			pGate = &pConf->opGate[idx];
			switch ( pGate->Gate )
			{
			case eAND:		bVal = bVal && bIN;				break;
			case eOR:		bVal = bVal || bIN;				break;
			case eXOR:		bVal = (bool)((uint8_t)bVal ^ (uint8_t)bIN);	break;
			case eNAND:		bVal = !( bVal && bIN );		break;
			case eNOR:		bVal = !( bVal || bIN );		break;
			case eXNOR:		bVal = !(bool)((uint8_t)bVal ^ (uint8_t)bIN);	break;
			case eNone:
			default:
				break;
			}
		}
	}
	//	최종 Output
	pDO = (DO_t *)&pConf->DO;
	pDO->nCalcVal = (uint8_t)bVal;
	return iret;
}

#if defined(USE_PWM_PULSE)
#else

uint8_t	LogicCalcImpulse	( uint32_t _nPulseTime, uint8_t nActLvl, uint16_t nPeriod )
{
	//	Level / Pulse / Impulse 로직에 대한 Output 출력구현.
	//	printf("%s(%d)\n", __FUNCTION__, __LINE__);
	uint8_t bVal = 0;

	if ( nActLvl == ActLowToHigh )
	{
		if ( _nPulseTime <= nPeriod )
		{
			bVal = 1;
		}
		else
		{
			bVal = 0;
		}
	}
	else if ( nActLvl == ActHighToLow )
	{
		if ( _nPulseTime <= nPeriod )
		{
			bVal = 0;
		}
		else
		{
			bVal = 1;
		}
	}
	else
	{
		printf( "%s(%d) - Invalid Value\n", __FUNCTION__, __LINE__ );
	}

	return bVal;
}

uint8_t	LogicCalcPulse		( uint32_t _nPulseTime, uint8_t nActLvl, uint16_t nPeriod, uint8_t nDutyRatio )
{
	//	Level / Pulse / Impulse 로직에 대한 Output 출력구현.
	//	printf("%s(%d)\n", __FUNCTION__, __LINE__);
	uint8_t bVal = 0;

	//
	uint32_t	_nUnitTime;		//	주기에 따른 단위시간.

	_nUnitTime = _nPulseTime % nPeriod;		//	단위시간 얻기.

	if ( nActLvl == (uint8_t)ActLowToHigh )
	{
		if ( (uint8_t)((uint16_t)_nUnitTime * 100U / nPeriod) <= (nDutyRatio) )
		{
			//	High
			bVal = 1;
		}
		else
		{
			//	Low
			bVal = 0;
		}
	}
	else if ( nActLvl == ActHighToLow )
	{
		if ( (_nUnitTime * 100U / nPeriod) <= (100U - nDutyRatio) )
		{
			//	Low
			bVal = 0;
		}
		else
		{
			//	High
			bVal = 1;
		}
	}
	else
	{
		printf( "%s(%d) - Invalid Value\n", __FUNCTION__, __LINE__ );
	}

	return bVal;
}

#endif

void LogicProcCalcConfDO( uint32_t elipsed, ConfLogic_t * pConf )
{
	//	Level / Pulse / Impulse 로직에 대한 Output 출력구현.
	//	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	DO_t *pDO = (DO_t *)&pConf->DO;

	if ( pDO->nOutputType == Level )
	{
		//	Level
		pDO->nValue = pDO->nCalcVal;
	}
	else if ( pDO->nOutputType == Impulse )
	{
#if defined(USE_PWM_PULSE)	//	Chip에서 지원하는 PWM Pulse 사용.

		if ( pDO->_DOSt == (uint8_t)DOStImpulse )
		{
			pDO->_nPulseTime += (uint16_t)elipsed;	//	시간차

			//	Impulse 는 시작 Event만 받은 후 Period 이후 종료.
			if ( pDO->_nPulseTime > pDO->nPeriod )
			{
				//	Impulse 종료.
				PWMStop( (int)pDO->nNum );
				pDO->_DOSt = DOStNone;
				pDO->_nPulseTime = 0;
			}
		}
		else if ( (pDO->_nOldCalcVal != pDO->nCalcVal) && (pDO->nCalcVal == 1U) )
		{
			//	Impulse 시작

			//	PWM 시작/종료 -> Impulse출력.
			//PWMImpulse( (int)pDO->nNum );
			PWMStart( (int)pDO->nNum );
			pDO->_DOSt = DOStImpulse;	//	Impulse 상태
			pDO->_nPulseTime = 0;
		}
		pDO->_nOldCalcVal = pDO->nCalcVal;

#else
		if ( pDO->_DOSt == (uint8_t)DOStImpulse )
		{
			pDO->_nPulseTime += (uint16_t)elipsed;	//	시간차

			//	Impulse 는 시작 Event만 받은 후 Period 이후 종료.
			if ( pDO->_nPulseTime > pDO->nPeriod )
			{
				//	Impulse 종료.
				pDO->nValue = ( pDO->nActiveLevel == ActHighToLow ) ? 1U : 0U;//LogicCalcImpulse( pDO->_nPulseTime, pDO->nActiveLevel, pDO->nPeriod );
				pDO->_DOSt = DOStNone;
				pDO->_nPulseTime = 0;
				pDO->_nOldCalcVal = pDO->nCalcVal;
			}
		}
		else if ( (pDO->_nOldCalcVal != pDO->nCalcVal) && (pDO->nCalcVal == 1U) )
		{
			//	Impulse 시작

			//	Start Impulse
			pDO->_DOSt = DOStImpulse;	//	Impulse 상태
			pDO->_nPulseTime = 0;

			pDO->nValue = LogicCalcImpulse( pDO->_nPulseTime, pDO->nActiveLevel, pDO->nPeriod );

			pDO->_nOldCalcVal = pDO->nCalcVal;
		}
		else
		{
			pDO->_nOldCalcVal = pDO->nCalcVal;
		}
#endif
	}
	else if ( pDO->nOutputType == Pulse )
	{
#if defined(USE_PWM_PULSE)	//	Chip에서 지원하는 PWM Pulse 사용.

		if ( pDO->_nOldCalcVal != pDO->nCalcVal)
		{
			if( pDO->nCalcVal == 1U)
			{
				//	Pulse 시작
				PWMStart( (int)pDO->nNum );
			}
			else
			{
				//	Pulse 종료
				PWMStop( (int)pDO->nNum );
			}
		}
		pDO->_nOldCalcVal = pDO->nCalcVal;

#else
		//	Pulse
		if ( pDO->_DOSt == (uint8_t)DOStPulse )
		{
			//	Pulse 는 종료시 1주기 수행 후 종료.
			if ( (pDO->_nOldCalcVal != pDO->nCalcVal) && (pDO->nCalcVal == 0U) )
			{
				//	종료조건.
				//	1주기가 끝나는 시점에서 종료.
				uint16_t _nUnitTime = (pDO->_nPulseTime % pDO->nPeriod);

				if ( (_nUnitTime <= pDO->nPeriod) && (pDO->nPeriod < (uint16_t)(_nUnitTime + (uint16_t)elipsed)) )
				{
					//	Pulse 종료.
					pDO->nValue = (pDO->nActiveLevel == ActHighToLow)?1U:0U;
					pDO->_DOSt = DOStNone;
					pDO->_nPulseTime = 0;
					pDO->_nOldCalcVal = pDO->nCalcVal;
				}
			}
			
			if ( pDO->_DOSt !=(uint8_t)DOStNone )
			{
				pDO->_nPulseTime += (uint16_t)elipsed;	//	시간차
				pDO->nValue = LogicCalcPulse( pDO->_nPulseTime, pDO->nActiveLevel, pDO->nPeriod, pDO->nDutyRatio );

				pDO->_nOldCalcVal = pDO->nCalcVal;
			}
		}
		else if ( (pDO->_nOldCalcVal != pDO->nCalcVal) && (pDO->nCalcVal == 1U) )
		{
			//	Pulse 시작

			//	Start Impulse
			pDO->_DOSt = DOStPulse;	//	Impulse 상태
			pDO->_nPulseTime = 0;

			pDO->nValue = LogicCalcPulse( pDO->_nPulseTime, pDO->nActiveLevel, pDO->nPeriod, pDO->nDutyRatio );

			pDO->_nOldCalcVal = pDO->nCalcVal;
		}
		else
		{
			pDO->_nOldCalcVal = pDO->nCalcVal;
		}
#endif
	}
	else
	{
		//	Invalid Value
		printf( "%s(%d) - Invalid ( DO %d )\n", __FUNCTION__, __LINE__, pDO->nNum );
	}
}

void	LogicProcCalcConfLogic( uint32_t elipsed, ConfLogic_t *pConf )
{
	//	DO#X 설정에 따른 DO계산.

	//	Update DI
	LogicProcCalcConfDI( elipsed, pConf );

	//	Update PI
	LogicProcCalcConfPI( elipsed, pConf );

	//	Calc Logic Gate
	LogicProcCalcConfLogicGate( elipsed, pConf );

	//	Update Output Value
	LogicProcCalcConfDO( elipsed, pConf );
}


void	LogicProcOutput	( uint32_t elipsed )		//	SIL2
{
//	printf("%s(%d)\n", __FUNCTION__, __LINE__);

	//	Output 출력 처리.
	size_t idx, idxSize;
	static int8_t s_pinDO[MAX_DO];
	
	idxSize = sizeof( g_ConfLogic ) / sizeof( ConfLogic_t );
	for ( idx = 0; idx < idxSize; idx++ )
	{
		if ( (g_ConfLogic[idx].DO.nNum) == (uint8_t)(idx + 1U) )
		{
			//	DO index값이 Valid한 경우 Logic 수행.
			LogicProcCalcConfLogic( elipsed, &g_ConfLogic[idx] );

			if ( g_pinDOMsk[idx] == 0 )
			{
				//	DO Msk가 0인 경우 계산된값으로 설정.
				g_pinDO[idx] = (int8_t)g_ConfLogic[idx].DO.nValue;
			}
			if ( g_pinDO[idx] != s_pinDO[idx] )
			{
				SetDO( (int)idx, (int)g_pinDO[idx] );		//	GPIO DO 값 설정.
			}
		}
	}

	if ( ( g_bEnDOMonitor == 1 )	//	DO Monitoring이 Enable인 경우.
		&& ( memcmp( s_pinDO, g_pinDO, sizeof( s_pinDO ) ) != 0 )
		)
	{
		//	DO값 변경시 : DI / PI / DO 출력.
		LogicDisp();
		memcpy( s_pinDO, g_pinDO, sizeof( s_pinDO ) );
	}

	//	FeedBack 결과 확인.
	LogicProcOutputCompareDO();
}

void LogicDisp( void )
{
	int i;

	printf( "[%8d] ", getTick() );	//	tick 시간정보

	printf( "[DI] : " );
	for ( i = 0; i < MAX_DI; i++ )
	{
		printf( "%d ", g_pinDI[i] );
	}
	printf( " / " );

	printf( "[PI] : " );
	for ( i = 0; i < MAX_PI; i++ )
	{
		printf( "%4d ", g_pinPI[i] );
	}
	printf( " / " );

	printf( "[DO] : " );
	for ( i = 0; i < MAX_DO; i++ )
	{
		printf( "%d ", g_pinDO[i] );	//g_ConfLogic[i].DO.nValue );
	}
	printf( "\n" );
}


//========================================================================

