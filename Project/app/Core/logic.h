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

/*

	* Input
		1) Positive Delay	: Low to High 신호에 대해 일정시간 High가 유지되어야 실제 신호로 인식.
		2) Negative Delay	: High to Low 신호에 대해 일정시간 Low가 유지되어야 실제 신호로 인식.

		3) Invert			: DI입력신호를 반전시키는 기능. ( 입력지연을 먼저 적용 후 로직 게이트의 입력으로 사용되기 전 반전. )

	* Output
		1) Level			: 로직게이트의 출력과 동일한 레벨의 파형을 출력
		2) Pulse			: 로직 게이트의 출력이 High인 경우 특정 주기의 펄스를 출력
			- active level		: Low to High / High to Low
			- duty ratio		: 펄스의 1주기 동안 High인 신호의 비율.
			- Period			: 펄스의 1주기 시간, High와 Low로 인가되는 주기는 duty ratio에 의해 자동 계산.
		3) Impulse			: 로직 게이트의 출력이 High인 경우 단일 펄스를 출력.
			- active level		: Low to High / High to Low
			- Period			: active 신호가 유지되는 시간.

 */

//========================================================================
#ifndef LOGIC_H
#define LOGIC_H
//========================================================================

#include "typedef.h"

/*

	DI / DO 입출력 관련.
		SigDI_t -> DI_t -> [ 연산수행 ] -> DO_t

*/

//========================================================================
// Define

#define		USE_PWM_PULSE		1			//	Chip에서 지원하는 PWM Pulse 사용.

//	DO Check Period
#define		ChkDOPeriod			1000		//	msec

enum eDIPI
{
	MAX_DI	=	8,		//	DI#1 ~ #8
	MAX_PI	=	2,		//	PI#1 ~ #2
	MAX_DO	=	6		//	DO#1 ~ #6
};
#define MAX_DI 8
#define MAX_PI 2
#define MAX_DO 6

enum ePIEnv
{
	MAX_PI_PULSE	=	4489	//	4489 Hz
};

typedef struct _SigDI_t
{
	//	Current Signal Value Status
	uint8_t		nValue;					//	0: Low / 1: High
	uint32_t	nRemainTime;			//	msec : 값 변경 이후 신호 유지 시간. ( 100 ~ 65000 )
} SigDI_t, *PSigDI_t;

typedef struct _SigPI_t
{
	//	Current Signal Value Status
	uint16_t	nFreqency;				//	0: No Signal / 1 ~ 4000 Hz : Pulse Value

} SigPI_t, *PSigPI_t;

//	DI Logic : 설정

enum eDelayType
{
	DTNone = 0x0,
	DTPositive = 0x1,
	DTNegative = 0x2,
	DTBoth = 0x3
};
#define DTNone  0x0U
#define DTPositive 0x1U
#define DTNegative 0x2U
#define DTBoth 0x3U

typedef struct _DI_t
{
	SigDI_t		*pSigDI;				//	0: Disable / [ptr]: Enable
	int			nNum;					//	DI Number #1~8

	uint32_t	nUpdateTime;			//	msec

	uint8_t		nDType;					//	None / Posi / Nega / Both
	uint16_t	nDTime;					//	msec ( 100 msec ~ 65000 msec )

	uint8_t		nDIVal;					//	최종 입력 Value
	//	Input Operator
	uint8_t		bInvert;				//	0: None / 1: Invert

	//	Result Current Value
	uint8_t		nValue;					//	0: Low / 1: High : Invert 적용 Value.
} DI_t, *PDI_t;


enum eCompFreq
{
	None,		//	-
	High,		//	>	m_nFreq
	Low			//	<	m_nFreq
};

#define None 0U
#define High 1U
#define Low 2U

//	PI (Pulse Input) Logic : 설정
typedef struct _PI_t
{
	SigPI_t		*pSigPI;				//	0: Disable / [ptr]: Enable
	int			nNum;					//	PI Number #1~2

	uint16_t	nFreqency;				//	1 ~ 4000 Hz

	//	Input Operator
	uint8_t		nComp;					//	[Freqency]  > [Pulse Input] / [Freqency] < [Pulse Input]

	//	Result Current Value
	uint8_t		nValue;					//	0:Low / 1:High

	uint8_t		nSpare3[3];
} PI_t, *PPI_t;


//	DO Logic : 설정

enum eOutputType
{
	Level  ,
	Pulse ,
	Impulse
};

#define Level 0U
#define Pulse 1U
#define Impulse 2U


enum eActiveLevel
{
	ActNone ,
	ActLowToHigh ,
	ActHighToLow
};
#define ActNone 0U
#define ActLowToHigh 1U
#define ActHighToLow 2U

enum eDOState
{
	DOStNone = 0,
	DOStImpulse = 1,
	DOStPulse = 2
};
#define DOStNone 0
#define DOStImpulse 1
#define DOStPulse 2

typedef struct _DO_t
{
	uint8_t		nNum;					//	DO 번호 ( #1 ~ 6 )
	uint8_t		nOutputType;			//	Level / Pulse / Impulse
	uint8_t		nActiveLevel;
	uint8_t		nDutyRatio;				//	0 ~ 100 % : 펄스 1주기 동안 High인 신호의 비율.
	uint16_t	nPeriod;				//	Pulse or Active 신호가 유지되는 시간.

	uint8_t		_nOldCalcVal;			//	이전 계산된 출력 값. ( Pulse / Impulse 에서 사용 )
	uint8_t		nCalcVal;				//	계산된 출력 값.

	uint8_t		_DOSt;					//	DO State ( None / Impulse / Pulse )

	uint16_t	_nPulseTime;			//	Pulse 수행시간.

	uint8_t		nValue;					//	출력 Value

} DO_t, *PDO_t;


//	연산관련.

//	Gate : Logic Gate 설정
enum eLogicGate
{
	eNone = 0,
	eAND = 1,
	eOR = 2,
	eNAND = 3,
	eNOR = 4,
	eXOR = 5,
	eXNOR = 6
};
#define eNone 0
#define eAND 1
#define eOR 2
#define eNAND 3
#define eNOR  4
#define eXOR 5
#define eXNOR  6

typedef struct _Gate_t
{

	uint8_t		Gate;			//

} Gate_t, *PGate_t;


//	Config Logic
#define		MAX_CONF_DI		16
#define		MAX_CONF_PI		16
#define		MAX_CONF_GATE	16

typedef struct _ConfLogic_t
{
	DI_t	DI[MAX_CONF_DI];			//	DI#1~8
	int		cntDI;						//	DI 갯수

	PI_t	PI[MAX_CONF_PI];			//	PI#1~2
	int		cntPI;						//	PI 갯수

	Gate_t	opGate[MAX_CONF_GATE];		//	연산 Gate
	int		cntOpGate;

	DO_t	DO;
} ConfLogic_t, *PConfLogic_t;



extern int8_t			g_pinDI[MAX_DI];		//	GPIO DI Value	( Pin Value )
extern uint16_t			g_pinPI[MAX_PI];		//	PI Value		( Pin Value )
extern int8_t			g_pinDO[MAX_DO];		//	GPIO DO Value	( Pin Value )

extern int8_t		g_pinDIMsk[MAX_DI];		//	GPIO DI Manual Set Mask
extern int8_t		g_pinPIMsk[MAX_PI];		//	Pulse PI Manual Set Mask
extern int8_t		g_pinDOMsk[MAX_DO];		//	GPIO DO Manual Set Mask


extern SigDI_t			g_sigDI[MAX_DI];		//	sigDI#1 ~ #8
extern SigPI_t			g_sigPI[MAX_PI];		//	sigPI#1 ~ #2

//extern DO_t				g_DO[MAX_DO];			//	DO#1 ~ #6

extern ConfLogic_t		g_ConfLogic[MAX_DO];	//	DO#1~6 설정값
//extern int				g_cntConf;			//	Conf
extern double			PI_STAT[MAX_PI];
extern double			PI_MON[MAX_PI];


extern int				g_bEnDOMonitor;			//	DO출력 변화값 모니터링.

//========================================================================
// Function

void	InitLogic			( void );

void	LogicSetConfig		( void );	//	Config 설정에 따른 Output 출력설정.

void	LogicProc			( uint32_t elipsed );

void	LogicProcInput		( uint32_t elipsed );

int		LogicProcInputCompareDI		( void );
int		LogicProcInputComparePI		( void );
int		LogicProcOutputCompareDO	( void );

void	LogicProcInputDI	( uint32_t elipsed );
void	LogicProcInputPI	( uint32_t elipsed );

void	LogicProcOutput		( uint32_t elipsed );

void	LogicDisp			( void );

//========================================================================

//int cmd_di		( int argc, char *argv[] );		//	DI 설정
//int cmd_pi		( int argc, char *argv[] );		//	PI 설정
//int cmd_do		( int argc, char *argv[] );		//	DO 출력

//int cmd_mon		( int argc, char *argv[] );		//	Monitoring

//========================================================================


void	LogicProcCalcConfDI	( uint32_t elipsed, ConfLogic_t *pConf );
void	LogicProcCalcConfPI	( uint32_t elipsed, ConfLogic_t *pConf );
uint8_t	LogicProcCalcConfLogicGate( uint32_t elipsed, ConfLogic_t *pConf );

#if defined(USE_PWM_PULSE)
#else
uint8_t	LogicCalcImpulse	( uint32_t _nPulseTime, uint8_t nActLvl, uint16_t nPeriod );
uint8_t	LogicCalcPulse		( uint32_t _nPulseTime, uint8_t nActLvl, uint16_t nPeriod, uint8_t nDutyRatio );
#endif

void	LogicProcCalcConfDO	( uint32_t elipsed, ConfLogic_t *pConf );

void	LogicProcCalcConfLogic( uint32_t elipsed, ConfLogic_t *pConf );



//========================================================================
#endif
//========================================================================


