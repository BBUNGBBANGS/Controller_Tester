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

	* Format
		[DO#(:(P/I)/(L2H/H2L)/Xms/X%)]=(!)[DI#(:(PD/ND/BD)/Xms)]/[PI#:(>/<)XHz](AND/OR/NAND/NOR/XAND/XOR)...[PI#:(>/<)XHz]

	* Example

		[DO1]=[PI1:>100Hz]<NAND>[DI1]
		[DO2]=[PI1:<100Hz]<NOR>[DI1:PD/0ms]<OR>[DI2:0ms]
		[DO3]=[DI1:BD/0ms]<XOR>[DI2:0ms]<NOR>[PI1:>100Hz]
		[DO4:P/L2H/100ms/50%]=[DI1]<XOR>![DI2]<NOR>[PI1:<3000Hz]
		[DO5]=![DI1]XOR[DI2]<NOR>[PI1:<3000Hz]
		[DO6:I/H2L/150ms]=![DI1]<XOR>![DI2]<NOR>[PI1:<3000Hz]

	* Configure
		
		DO1(ZVR)			PI1		DI1
		DO2(Speed Limit)	PI1		DI1		DI2		DI3
		DO3					PI1		DI1		DI2		DI3
		DO4					PI1		DI4		DI5		DI6
		DO5					PI1		DI6		DI7		DI8
		DO6					PI1		PI2		DI7		DI8

 */

//========================================================================
#ifndef CONFIG_H
#define CONFIG_H
//========================================================================

#include "typedef.h"
#include "logic.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const char *g_sConfigDefault;

#define MAX_CONFIG 6

extern char		g_sConfBuf[MAX_CONFIG][128];
extern char 	g_sConfData[1024];			//	Config Data Buffer

void InitConfig( void );

void LoadConfig( void );
void SaveConfig( void );
void SetConfigDefault( void );


int ParsGate ( Gate_t *pGate, char *sConfig );
int ParsExpr ( char *sExpr );
int ParsDO ( DO_t *pDO, char *sConfig );
int ParsDI ( DI_t *pDI, char *sConfig );
int ParsExprOperItem ( char* sExpr, ConfLogic_t *pConf );
int ParsPI ( PI_t *pPI, char *sConfig );

//int cmd_confdisp( int argc, char *argv[] );
//int cmd_confset( int argc, char *argv[] );
//int cmd_conf( int argc, char *argv[] );		//	save / load / default

#ifdef __cplusplus
}
#endif


//========================================================================
#endif
//========================================================================


