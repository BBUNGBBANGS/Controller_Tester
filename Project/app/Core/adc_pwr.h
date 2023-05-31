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
#include "adc.h"
//========================================================================
#ifndef ADC_PWR_H
#define ADC_PWR_H
//========================================================================

//void	Adc_Measure(void);

double	AdcGetV1_2(void);
double	AdcGetV3_3(void);
double	AdcGetV5_0(void);

//void	Test_ADC(void);
double  AdcGetV5_0( void );
void    Test_ADC( void );
void    AdcMeasure( void );

//========================================================================
#endif
//========================================================================

