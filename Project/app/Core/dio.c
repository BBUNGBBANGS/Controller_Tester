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

#include "gio.h"
#include "het.h"
#include "can.h"		//  CAN2~3 DO_FD( DO Feedback Pin )
#include "lin.h"		//  DO_FD4~5
#include "mibspi.h"		//  DI State / Monitor
#include "serial.h"
#include "sci.h"
#include "dio.h"
#include "controller_tester.h"

//========================================================================
// Define

uint8_t DIN_STAT[8];
uint8_t DIN_MON[8];

uint8_t DO_FB[7];


//========================================================================
// Function

void UpdateDI(void)
{
	DIN_STAT[0]=(uint8_t)gioGetBit(hetPORT1_tmp, PIN_HET_17);
	DIN_STAT[1]=(uint8_t)gioGetBit(hetPORT1_tmp, PIN_HET_19);
	DIN_STAT[2]=(uint8_t)gioGetBit(hetPORT1_tmp, PIN_HET_15);
	DIN_STAT[3]=(uint8_t)gioGetBit(hetPORT1_tmp, PIN_HET_23);
	DIN_STAT[4]=(uint8_t)gioGetBit(mibspiPORT1_tmp, PIN_SIMO);
	DIN_STAT[5]=(uint8_t)gioGetBit(mibspiPORT1_tmp, PIN_SOMI);
	DIN_STAT[6]=(uint8_t)gioGetBit(hetPORT1_tmp, PIN_HET_8);
	DIN_STAT[7]=(uint8_t)gioGetBit(mibspiPORT3_tmp, PIN_CLK);

	DIN_MON[0]=(uint8_t)gioGetBit(mibspiPORT3_tmp, PIN_CS0);
	DIN_MON[1]=(uint8_t)gioGetBit(hetPORT1_tmp, PIN_HET_25);
	DIN_MON[2]=(uint8_t)gioGetBit(hetPORT1_tmp, PIN_HET_11);
	DIN_MON[3]=(uint8_t)gioGetBit(hetPORT1_tmp, PIN_HET_31);
	DIN_MON[4]=(uint8_t)gioGetBit(mibspiPORT3_tmp, PIN_SIMO);
	DIN_MON[5]=(uint8_t)gioGetBit(mibspiPORT3_tmp, PIN_SOMI);
	DIN_MON[6]=(uint8_t)gioGetBit(mibspiPORT5_tmp, PIN_CLK);
	DIN_MON[7]=(uint8_t)gioGetBit(mibspiPORT5_tmp, PIN_CS0);
}

void SetDO( int idx, int bVal )
{
	switch( idx )
	{
	case 0:	gioSetBit(hetPORT1_tmp, PIN_HET_0, (uint32)bVal );	break;
	case 1:	gioSetBit(hetPORT1_tmp, PIN_HET_3, (uint32)bVal );	break;
	case 2:	gioSetBit(hetPORT1_tmp, PIN_HET_1, (uint32)bVal );	break;
	case 3:	gioSetBit(hetPORT1_tmp, PIN_HET_2, (uint32)bVal );	break;
	case 4:	gioSetBit(hetPORT1_tmp, PIN_HET_5, (uint32)bVal );	break;
	case 5:	gioSetBit(hetPORT2_tmp, PIN_HET_0, (uint32)bVal );	break;
	case 6:	gioSetBit(hetPORT2_tmp, PIN_HET_4, (uint32)bVal );	break;	//	Halt
	default:
		printf("%s(%d) - Invalid Value\n", __FUNCTION__, __LINE__);
		break;
	}
}

void UpdateDOFB( void )
{
	//  Output Feedback Update
	DO_FB[0] = ( (boolean)canIoTxGetBit( canREG2_tmp ) )?			1U:0U;	//  DO_FB1 ( DO Feedback )
	DO_FB[1] = ( canIoRxGetBit( canREG2_tmp ) != 0U )?				1U:0U;	//  DO_FB2 ( DO Feedback )
	DO_FB[2] = ( canIoTxGetBit( canREG3_tmp ) != 0U )?				1U:0U;
	DO_FB[3] = ( (boolean)gioGetBit( linPORT_tmp, 1 ) )?			1U:0U;	//PIN_LIN_RX 대신에 1을 사용하여야 한다. #define error?
	DO_FB[4] = ( (boolean)gioGetBit( linPORT_tmp, 2 ) )?			1U:0U;	//PIN_LIN_TX 대신에 2을 사용하여야 한다. #define error
	DO_FB[5] = ( (boolean)gioGetBit( mibspiPORT1_tmp, PIN_CLK ) )?	1U:0U;
	DO_FB[6] = ( (boolean)gioGetBit( mibspiPORT1_tmp, PIN_CS0 ) )?	1U:0U;
}

#if 0

void Test_DIO(void)
{
	char command;

	printf(" IO Test Start\r\n");
	printf("==================================\r\n");
	printf("== a. Digital Output Test	   == \r\n");
	printf("== b. Digital Input  Test	   == \r\n");
	printf("== c. Digital In/Out Aging Test == \r\n");
	printf("===================================\r\n");

	do
	{
		while( input_check() != 0 ){
			;
		}
		command = (char)getch();

		switch(command)
		{
			case 'a': DO_Test(); break;
			case 'b': DI_Test(); break;
			case 'c': DO_DI_Aging_Test(); break;
			default : break;
		}
	}while(command !='q');
}

void DO_Test(void)
{
	int i,j;
	char command;

	printf("Digital Output Test Start\r\n");
	printf("Input 'q' to quit test\r\n");

	do
	{
		for(i=0;i<7;i++){
			switch(i){
			case 0:
				gioSetBit(hetPORT1, PIN_HET_0, PIN_SET);
				gioSetBit(hetPORT1, PIN_HET_3, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_1, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_2, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_5, PIN_RESET);
				gioSetBit(hetPORT2, PIN_HET_0, PIN_RESET);
				gioSetBit(hetPORT2, PIN_HET_4, PIN_RESET);

				MY_Delay(10);

				if((boolean)canIoTxGetBit(canREG2)){	 //  DO_FB1 ( DO Feedback )
					DO_FB[0]=1;
				}
				else{
					printf("Digital Output Port1 is fail\r\n");
				}break;

			case 1:
				gioSetBit(hetPORT1, PIN_HET_0, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_3, PIN_SET);
				gioSetBit(hetPORT1, PIN_HET_1, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_2, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_5, PIN_RESET);
				gioSetBit(hetPORT2, PIN_HET_0, PIN_RESET);
				gioSetBit(hetPORT2, PIN_HET_4, PIN_RESET);

				MY_Delay(10);

				if(canIoRxGetBit(canREG2) != 0U){	 //  DO_FB2 ( DO Feedback )
					DO_FB[1]=1;
				 }
				 else{
					 printf("Digital Output Port2 is fail\r\n");
				 }break;

			case 2:
				gioSetBit(hetPORT1, PIN_HET_0, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_3, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_1, PIN_SET);
				gioSetBit(hetPORT1, PIN_HET_2, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_5, PIN_RESET);
				gioSetBit(hetPORT2, PIN_HET_0, PIN_RESET);
				gioSetBit(hetPORT2, PIN_HET_4, PIN_RESET);

				MY_Delay(10);

				if(canIoTxGetBit(canREG3) != 0U){
					DO_FB[2]=1;
				 }
				 else{
					 printf("Digital Output Port3 is fail\r\n");
				 }break;

			case 3:
				gioSetBit(hetPORT1, PIN_HET_0, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_3, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_1, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_2, PIN_SET);
				gioSetBit(hetPORT1, PIN_HET_5, PIN_RESET);
				gioSetBit(hetPORT2, PIN_HET_0, PIN_RESET);
				gioSetBit(hetPORT2, PIN_HET_4, PIN_RESET);

				MY_Delay(10);

				if((boolean)gioGetBit(linPORT,1)){ //PIN_LIN_RX 대신에 1을 사용하여야 한다. #define error?
					DO_FB[3]=1;
				 }
				 else{
					 printf("Digital Output Port4 is fail\r\n");
				 }break;

			case 4:
				gioSetBit(hetPORT1, PIN_HET_0, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_3, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_1, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_2, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_5, PIN_SET);
				gioSetBit(hetPORT2, PIN_HET_0, PIN_RESET);
				gioSetBit(hetPORT2, PIN_HET_4, PIN_RESET);

				MY_Delay(10);

				if((boolean)gioGetBit(linPORT, 2)){ //PIN_LIN_TX 대신에 2을 사용하여야 한다. #define error
					DO_FB[4]=1;
				 }
				 else{
					 printf("Digital Output Port5 is fail\r\n");
				 }break;

			case 5:
				gioSetBit(hetPORT1, PIN_HET_0, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_3, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_1, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_2, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_5, PIN_RESET);
				gioSetBit(hetPORT2, PIN_HET_0, PIN_SET);
				gioSetBit(hetPORT2, PIN_HET_4, PIN_RESET);

				MY_Delay(10);

				if((boolean)gioGetBit(mibspiPORT1, PIN_CLK)){
					DO_FB[5]=1;
				 }
				 else{
					 printf("Digital Output Port6 is fail\r\n");
				 }break;

			default:
				gioSetBit(hetPORT1, PIN_HET_0, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_3, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_1, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_2, PIN_RESET);
				gioSetBit(hetPORT1, PIN_HET_5, PIN_RESET);
				gioSetBit(hetPORT2, PIN_HET_0, PIN_RESET);
				gioSetBit(hetPORT2, PIN_HET_4, PIN_SET);

				MY_Delay(10);

				if((boolean)gioGetBit(mibspiPORT1, PIN_CS0)){
					DO_FB[6]=1;
				 }
				 else{
					 printf("Digital Output Port7 is fail\r\n");
				 }break;
			}

			for(j=0;j<7;j++){
				printf( "DO[%d]=%d\r\n", j+1,DO_FB[j]);
			}
			printf("\n");

			for(j=0;j<8;j++){
			   DO_FB[i]=0;
			}

			MY_Delay(1000);
		}
	}while( (char)getch() !='q');

	/* 시험 종료 후 DO 출력 Off 상태로 만들기 위함. */

	gioSetBit(hetPORT1, PIN_HET_0, PIN_RESET);
	gioSetBit(hetPORT1, PIN_HET_3, PIN_RESET);
	gioSetBit(hetPORT1, PIN_HET_1, PIN_RESET);
	gioSetBit(hetPORT1, PIN_HET_2, PIN_RESET);
	gioSetBit(hetPORT1, PIN_HET_5, PIN_RESET);
	gioSetBit(hetPORT2, PIN_HET_0, PIN_RESET);
	gioSetBit(hetPORT2, PIN_HET_4, PIN_RESET);
}

void DI_Test(void)
{

	 uint8_t DI_STATUS[8]={0,};

	 int i;
	printf("Digital Input Test Start\r\n");
	printf("Input 'q' to quit test\r\n");



	do{
		DIN_STAT[0]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_17);
		DIN_STAT[1]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_19);
		DIN_STAT[2]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_15);
		DIN_STAT[3]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_23);
		DIN_STAT[4]=(uint8_t)gioGetBit(mibspiPORT1, PIN_SIMO);
		DIN_STAT[5]=(uint8_t)gioGetBit(mibspiPORT1, PIN_SOMI);
		DIN_STAT[6]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_8);
		DIN_STAT[7]=(uint8_t)gioGetBit(mibspiPORT3, PIN_CLK);

		DIN_MON[0]=(uint8_t)gioGetBit(mibspiPORT3, PIN_CS0);
		DIN_MON[1]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_25);
		DIN_MON[2]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_11);
		DIN_MON[3]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_31);
		DIN_MON[4]=(uint8_t)gioGetBit(mibspiPORT3, PIN_SIMO);
		DIN_MON[5]=(uint8_t)gioGetBit(mibspiPORT3, PIN_SOMI);
		DIN_MON[6]=(uint8_t)gioGetBit(mibspiPORT5, PIN_CLK);
		DIN_MON[7]=(uint8_t)gioGetBit(mibspiPORT5, PIN_CS0);

		for(i=0;i<8;i++){
			DI_STATUS[i]=DIN_STAT[i] & DIN_MON[i];
		}

		for(i=0;i<8;i++){
			if(DIN_STAT[i] !=DIN_MON[i]){
			  printf("Digital Input Port[%d]: abnormal state\r\n",i+1);
			  printf("DIN_STAT[%d]=%d ,DIN_MON[%d]=%d\r\n",i+1,DIN_STAT[i], i+1,DIN_MON[i]);
			}
		}

		printf( "DI[1]=%d, DI[2]=%d, DI[3]=%d, DI[4]=%d\r\n", DI_STATUS[0], DI_STATUS[1],DI_STATUS[2],DI_STATUS[3]);
		printf( "DI[5]=%d, DI[6]=%d, DI[7]=%d, DI[8]=%d\r\n", DI_STATUS[4], DI_STATUS[5],DI_STATUS[6],DI_STATUS[7]);

		printf("\n");

		MY_Delay(1000);

	}while((char)getch() != 'q');
}

void DO_DI_Aging_Test(void)
{
	int i;

	int err=0,count=0;

	uint8_t state=0x00;

	printf("Digital In_Out Aging Test Start\r\n");
	printf("Input 'q' to quit test\r\n");



	do{
		for(i=0;i<7;i++)
		{
			//테스트 결과 조회//
		   if((char)getch()=='t')
		   {
			  printf( "Total Test Count=%d, Err=%d\r\n", count, err);
//			  command=0;
		   }

		   gioSetBit(hetPORT1, PIN_HET_0, PIN_RESET);
		   gioSetBit(hetPORT1, PIN_HET_3, PIN_RESET);
		   gioSetBit(hetPORT1, PIN_HET_1, PIN_RESET);
		   gioSetBit(hetPORT1, PIN_HET_2, PIN_RESET);
		   gioSetBit(hetPORT1, PIN_HET_5, PIN_RESET);
		   gioSetBit(hetPORT2, PIN_HET_0, PIN_RESET);
		   gioSetBit(hetPORT2, PIN_HET_4, PIN_RESET);

			switch(i){
			case 0:
				gioSetBit(hetPORT1, PIN_HET_0, PIN_SET);

				MY_Delay(100);

				state=DI_Input_state();

				if((boolean)(canIoTxGetBit(canREG2)) && (state==(uint8_t)0x01)){
					printf("Digital In_Out P1: OK\r\n");
				}
				else{
					err++;
				}break;

			case 1:
				gioSetBit(hetPORT1, PIN_HET_3, PIN_SET);

				MY_Delay(100);

				state=DI_Input_state();

				if((boolean)(canIoRxGetBit(canREG2)) && (state==(uint8_t)0x02)){
					printf("Digital In_Out P2: OK\r\n");
				}
				else{
					err++;
				}break;

			case 2:
				gioSetBit(hetPORT1, PIN_HET_1, PIN_SET);

				MY_Delay(100);

				state=DI_Input_state();

				if((boolean)(canIoTxGetBit(canREG3)) && (state==(uint8_t)0x04)){
					printf("Digital In_Out P3: OK\r\n");
				}
				else{
					err++;
				}break;

			case 3:
				gioSetBit(hetPORT1, PIN_HET_2, PIN_SET);

				MY_Delay(100);

				state=DI_Input_state();

				if((boolean)(gioGetBit(linPORT,1)) && (state==(uint8_t)0x08)){
					printf("Digital In_Out P4: OK\r\n");
				}
				else{
					err++;
				}break;

			case 4:
				gioSetBit(hetPORT1, PIN_HET_5, PIN_SET);

				MY_Delay(100);

				state=DI_Input_state();

				if((boolean)(gioGetBit(linPORT, 2)) && (state==(uint8_t)0x10)){
					printf("Digital In_Out P5: OK\r\n");
				}
				else{
					err++;
				}break;

			case 5:
				gioSetBit(hetPORT2, PIN_HET_0, PIN_SET);

				MY_Delay(100);

				state=DI_Input_state();

				if((boolean)(gioGetBit(mibspiPORT1, PIN_CLK)) && (state==(uint8_t)0x20)){
					printf("Digital In_Out P6: OK\r\n");
				}
				else{
					err++;
				}break;

			default:
				gioSetBit(hetPORT2, PIN_HET_4, PIN_SET);

				MY_Delay(100);

				state=DI_Input_state();

				if((boolean)(gioGetBit(mibspiPORT1, PIN_CS0)) && (state==(uint8_t)0x40)){
					printf("Digital In_Out P7: OK\r\n");
				}
				else{
					err++;
				}break;
			}

			MY_Delay(200);
		}

		count++;
	}while(((char)getch() != 'q'));

	/* 시험 종료 후 DO 출력 Off 상태로 만들기 위함. */
	gioSetBit(hetPORT1, PIN_HET_0, PIN_RESET);
	gioSetBit(hetPORT1, PIN_HET_3, PIN_RESET);
	gioSetBit(hetPORT1, PIN_HET_1, PIN_RESET);
	gioSetBit(hetPORT1, PIN_HET_2, PIN_RESET);
	gioSetBit(hetPORT1, PIN_HET_5, PIN_RESET);
	gioSetBit(hetPORT2, PIN_HET_0, PIN_RESET);
	gioSetBit(hetPORT2, PIN_HET_4, PIN_RESET);
}

uint8_t DI_Input_state(void )
{
	uint8_t stat=0x00;
	uint8_t mon=0x00;

	//uint8_t DIN_STAT[8]={0,};


	/* 디지털 입력 상태 감시 부분 */
	DIN_STAT[0]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_17);
	DIN_STAT[1]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_19);
	DIN_STAT[2]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_15);
	DIN_STAT[3]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_23);
	DIN_STAT[4]=(uint8_t)gioGetBit(mibspiPORT1, PIN_SIMO);
	DIN_STAT[5]=(uint8_t)gioGetBit(mibspiPORT1, PIN_SOMI);
	DIN_STAT[6]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_8);
	DIN_STAT[7]=(uint8_t)gioGetBit(mibspiPORT3, PIN_CLK);

	stat=(DIN_STAT[7]<<7) | (DIN_STAT[6]<<6) | (DIN_STAT[5]<<5) | (DIN_STAT[4]<<4) | (DIN_STAT[3]<<3) | (DIN_STAT[2]<<2) | (DIN_STAT[1]<<1) | (DIN_STAT[0]);

	DIN_MON[0]=(uint8_t)gioGetBit(mibspiPORT3, PIN_CS0);
	DIN_MON[1]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_25);
	DIN_MON[2]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_11);
	DIN_MON[3]=(uint8_t)gioGetBit(hetPORT1, PIN_HET_31);
	DIN_MON[4]=(uint8_t)gioGetBit(mibspiPORT3, PIN_SIMO);
	DIN_MON[5]=(uint8_t)gioGetBit(mibspiPORT3, PIN_SOMI);
	DIN_MON[6]=(uint8_t)gioGetBit(mibspiPORT5, PIN_CLK);
	DIN_MON[7]=(uint8_t)gioGetBit(mibspiPORT5, PIN_CS0);

	mon=(DIN_MON[7]<<7) | (DIN_MON[6]<<6) | (DIN_MON[5]<<5) | (DIN_MON[4]<<4) | (DIN_MON[3]<<3) | (DIN_MON[2]<<2) | (DIN_MON[1]<<1) | (DIN_MON[0]);

	return (stat | mon);
}

#endif

//========================================================================
