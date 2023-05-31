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
#include "sys_common.h"

#include "i2c_temp.h"
#include "i2c.h"

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "sci.h"
#include "controller_tester.h"
//========================================================================
// Define

/*
	Temperature		Digital Output
				Binary 			Hex
	+125吏퇒 		0 1111 1010 	0FAh
	+25吏퇒 		0 0011 0010 	032h
	+0.5吏퇒 		0 0000 0001 	001h
	0吏퇒 		0 0000 0000 	000h
	占쎈땵0.5吏퇒 		1 1111 1111 	1FFh
	占쎈땵25吏퇒 		1 1100 1110 	1CEh
	占쎈땵55吏퇒 		1 1001 0010 	192h
 */

//void MY_Delay(int count); //Delay 占쎈맙占쎈땾

//========================================================================
// Function


uint8_t *i2c_W(uint8_t add, uint8_t *wdata, uint8_t data_length)
{
    ///////////////////////////////////////////////////////////////
    //        Master Transfer Functionality                      //
    ///////////////////////////////////////////////////////////////
    /* I2C Init as per GUI
     *  Mode = Master - Transmitter
     *  baud rate = 400KHz
     *  Count = data_length
     *  Bit Count = 8bit
     */
	uint8_t TX_Data_Master[20];	//data_length+1U];
	uint8_t i;
	uint8_t *iret;

	if(data_length >=3U){
		printf("data_length should between 1 and 2\r\n");
		//return 0;
		iret = NULL;
	}
    /*Configuration of TEMP : Pointer Bytes + Write_data (data_length-1) in this case data_length=2*/
    /*Tos & Thyst of TEMP   : Pointer Bytes + Low Address Bytes + Write_data (data_length-1) in this case data_length=3*/
    /************************************************************************************************ */
	else
	{
		TX_Data_Master[0]=add & 0xffU;       // Pointer Byte;

		for(i=0U;i<data_length;i++){
			TX_Data_Master[i+1U]= wdata[i];
		}

	/************************************************************************************************ */
//        i2cInit();  //Why i2cInit() needs per every times???

		/* Configure address of Slave to talk to */
		i2cSetSlaveAdd(i2cREG1_tmp, (uint32_t)I2C_TEMP_Slave_Address>>1U); //Device Address Setting

		/* Set direction to Transmitter */
		i2cSetDirection(i2cREG1_tmp, I2C_TRANSMITTER);

		/* Configure Data count */
		i2cSetCount(i2cREG1_tmp, ((uint32_t)data_length+1U));

		/* Set mode as Master */
		i2cSetMode(i2cREG1_tmp, I2C_MASTER);

		/* Set Stop after programmed Count */
		i2cSetStop(i2cREG1_tmp);

		/* Transmit Start Condition */
		i2cSetStart(i2cREG1_tmp);

		/* Tranmit DATA_COUNT number of data in Polling mode */

//        while((i2cREG1->STR & (I2C_TX | I2C_ARDY)) == false);
		i2cSend(i2cREG1_tmp, (uint32)((uint32)data_length+1U), &TX_Data_Master[0]);

		/* Wait until Bus Busy is cleared */
		while(i2cIsBusBusy(i2cREG1_tmp) == true){
		};

		/* Wait until Stop is detected */
		while(i2cIsStopDetected(i2cREG1_tmp) == 0U){
		};


		/* Clear the Stop condition */

		i2cClearSCD(i2cREG1_tmp);

		iret = &wdata[0];
	}
	return iret;
}

uint8_t *i2c_R(uint8_t add, uint8_t *rdata, uint8_t data_length)
{
    ///////////////////////////////////////////////////////////////
    //        Master Receive Functionality                      //
    ///////////////////////////////////////////////////////////////
	uint8_t *iret;
	uint32 I2C_TEMP_Slave_Address_local = 0x92U; //EEPROM Device Address

    if(data_length >=3U)
    {
        printf("data_length should between 1 and 2\r\n");
        //return 0;
        iret = NULL;
    }
    else{
		i2cSetSlaveAdd(i2cREG1_tmp, I2C_TEMP_Slave_Address_local>>1U);

		/* Set direction to Transmitter */
		i2cSetDirection(i2cREG1_tmp, I2C_TRANSMITTER);

		/* Configure Data count */ //At this time, Should DATA_COUNT-1 because only Address byte is sent.
		i2cSetCount(i2cREG1_tmp, 1);

		i2cSetMode(i2cREG1_tmp, I2C_MASTER);

		/* Set Stop after programmed Count */
		i2cSetStop(i2cREG1_tmp);

		/* Transmit Start Condition */
		i2cSetStart(i2cREG1_tmp);

		/* Transmit DATA_COUNT number of data in Polling mode */
	//	while((bool)(i2cREG1->STR & ((uint32)I2C_TX | (uint32)I2C_ARDY)) == (bool)false){
	//		;
	//	}
		i2cSend(i2cREG1_tmp, 1, &add);

		/* Wait until Bus Busy is cleared */
		while(i2cIsBusBusy(i2cREG1_tmp) == true){

		};

		/* Wait until Stop is detected */
		while(i2cIsStopDetected(i2cREG1_tmp) == 0U){
			if(while_break == 1)
			{
				break;
			}

		};

		i2cSetSlaveAdd(i2cREG1_tmp, (uint32_t)I2C_TEMP_Slave_Address>>1U);
		/* Set direction to Receiver */
		i2cSetDirection(i2cREG1_tmp, I2C_RECEIVER);

		/* Data count */

		i2cSetCount(i2cREG1_tmp, data_length);

		i2cSetMode(i2cREG1_tmp, I2C_MASTER);

		/* Set Stop after programmed Count */
		i2cSetStop(i2cREG1_tmp);

		/* Receive Start Condition */
		i2cSetStart(i2cREG1_tmp);

		/* Store Receive Data to RX_Data_buffer in Polling mode */
	//    while((i2cREG1->STR &(I2C_RX | I2C_ARDY)) == true);
		i2cReceive(i2cREG1_tmp, data_length, rdata);

		/* Wait until Bus Busy is cleared */
		while(i2cIsBusBusy(i2cREG1_tmp) == true){

		};

		/* Wait until Stop is detected */
		while(i2cIsStopDetected(i2cREG1_tmp) == 0U){
			if(while_break == 1)
			{
				break;
			}
		};

		/* Clear the Stop condition */
		i2cClearSCD(i2cREG1_tmp);
		iret = &rdata[0];
    }
    return iret;
}


void InitTemperature( void )
{
    uint8_t *receive_d;

    uint8_t config_data=0x08;
    uint8_t Thyst_set[2]={0x5a,0x00};
    uint8_t Tos_set[2]={0x64,0x00};
	static uint8_t *wdata;
	static uint8_t rdata[2];

	printf("%s(%d)\n", __FUNCTION__, __LINE__);

    //LM75 �룯�뜃由곤옙�넅
    //Configuration Data Write_Read
    i2c_W(Config_Pointer, &config_data, 1);

    //Thyst Set Data Write_Read
    i2c_W(Thyst_Pointer, Thyst_set, 2);

    //Thyst Set Data Write_Read
    i2c_W(Tos_Pointer, Tos_set, 2);
}

int		GetTemperature( void )
{
    uint8_t *receive_d;
	static uint8_t *wdata;
	static uint8_t rdata[2];

	//
	uint8_t P_temp=0,temp;
	int temp_integer=0;

	double temp_real=0.0;
//	MY_Delay(100);

//	i2c_W(Temp_Pointer, NULL, 1);

	receive_d=i2c_R(Temp_Pointer, rdata, 2);

	/*
	 * 1.12 TEMPERATURE REGISTER (Read Only):
	 * 			receive_d[0]				receive_d[1]
		D15 D14 D13 D12 D11 D10 D9 D8 	D7  D6 D5 D4 D3 D2 D1 D0
		MSB 7   6   5   4   3   2  1  	LSB X  X  X  X  X  X  X
		D0占쎈컛6: Undefined. D7占쎈컛15: Temperature Data. One LSB = 0.5吏퇒. Two's complement format.
	 */

	//MISRA 12-2 receive_d揶쏉옙 1byte占쎌뿫占쎌몵嚥∽옙 8bit,15bit shift占쎈뮉 占쎌벥沃섓옙 占쎈씨占쎌벉
	P_temp=((receive_d[0]>>(uint8_t)7) & (uint8_t)0x01);//占쎌겫占쎄맒,占쎌겫占쎈릭 野껉퀣�젟.

//	int16_t		sTemp = ((int8_t)receive_d[0] << 1) | (receive_d[1] >> 7);

	temp_integer=(int8_t)receive_d[0];
//	printf("Current Temperature = %d%s\n", (int8_t)temp_integer, (receive_d[1] & 0x80U)? ".5" : "" );

	return temp_integer;
}



//========================================================================
