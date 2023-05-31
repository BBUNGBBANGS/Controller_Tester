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
#include "adc_pwr.h"

#include "adc.h"
#include "serial.h"
#include "controller_tester.h"
//void	Adc_Measure(void);
//========================================================================
// Define

#define LOOP_CNT 10000


static int sum[3]={0,};

//========================================================================
// Function

void    AdcMeasure( void )
{
    int i,j;
    //static adcData_t conversion_data[3]; //ADC °ª ÀúÀå º¯¼ö ¼±¾ð.

    for(i=0;i<3;i++){
        sum[i]=0;
    }

    for(i=0;i<LOOP_CNT;i++){
          adcStartConversion(adcREG1_tmp,adcGROUP1); // ADC Convertion Start
          while(adcIsConversionComplete(adcREG1_tmp,adcGROUP1) == (uint32)0x00){
        	  ;
            if(while_break == 1)
            {
                break;
            }
          }


              adcGetData(adcREG1_tmp, adcGROUP1, conversion_data_tmp);
              sum[0]=sum[0]+(int)conversion_data_tmp[0].value;
              sum[1]=sum[1]+(int)conversion_data_tmp[1].value;
              sum[2]=sum[2]+(int)conversion_data_tmp[2].value;
          adcStopConversion(adcREG1_tmp,adcGROUP1); // ADC Convertion Stop
    }
}


double  AdcGetV1_2( void )
{
    AdcMeasure();

//    printf("ADC Value of V1.2=%.2f\r\n", (sum[0]/(double)LOOP_CNT) * 0.80586 *0.001);

    return (((double)sum[0]/(double)LOOP_CNT) * 0.80586 *0.001);
}

double  AdcGetV3_3( void )
{
    AdcMeasure();

//    printf("ADC Value of V3.3=%.2f\r\n", (sum[1]/(double)LOOP_CNT) * 0.80586 *0.001 *2.78);

    return (((double)sum[1]/(double)LOOP_CNT) * 0.80586 *0.001 *2.78);
}

double  AdcGetV5_0( void )
{
    AdcMeasure();

//    printf("ADC Value of 5V0=%.2f\r\n", (sum[2]/(double)LOOP_CNT) * 0.80586 *0.001 * 4.26);

    return (((double)sum[2]/(double)LOOP_CNT) * 0.80586 *0.001 * 4.26);
}


//========================================================================
