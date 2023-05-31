/*------------------------------------------------------------------------------------------
    Project         : SCM
    Description     : UART 관련된 함수들

    Writer          :
    Revision        :
    Date            : 2022. 07.
    Copyright       :

    Revision History
    1. 2022. 07.    : Created
-------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
//#include <stdarg.h>
#include <ctype.h>
#include <string.h>
//#include <stdarg.h>
#include <stdint.h>

#include "sci.h"

#include "serial.h"

#include "QBuf.h"		//	Queue_t
#include "controller_tester.h"
//Queue_t		g_qUart1;

uint8_t		dataRx1[8];		        //	UART1 - Console	- 115200


#if defined(_WIN32)
//  Windows Skip
#else

//===========================================================================
char getch(void)
//===========================================================================
{
    char    c;
    int		ret = 0;

    while( !(bool)qcount( &g_qUart1 ) )
    {
            ret = -1;      //  Non-Blocking ( OS less )
            if(while_break == 1)
            {
                break;
            }
    }
    if(ret != -1){
        ret = (int)qget( &g_qUart1 );
    }

    return (char)ret;
}

#endif

// ============================================================================
void sciNotification( sciBASE_t *sci, uint32 flags )
// ============================================================================
{
    //  문자 Queue에 쌓기.
    qput( &g_qUart1, dataRx1[0] );

    //  Receive Int
    sciReceive(sciREG_tmp,1,dataRx1);
}

// ============================================================================
void SerialInitQueue( void )
//===========================================================================
{
	//	Debug Queue
	init_queue( &g_qUart1 );
}

//===========================================================================
void SerialInit( void )
//===========================================================================
{
	SerialInitQueue();

    sciReceive(sciREG_tmp,1,dataRx1);
}

//===========================================================================
int input_check( void )
//===========================================================================
{
#if defined(_WIN32)
    return kbhit();
#else
    return qcount( &g_qUart1 );
#endif
}


//===========================================================================
int printf( const char *_format, ... )
//===========================================================================
{
   char str[128];
   int length = -1;

   va_list argList;
   va_start( argList, _format );

   length = vsnprintf(str, sizeof(str), _format, argList);

   va_end( argList );

   if (length > 0)
   {
      sciSend(sciREG_tmp, (unsigned)length, (unsigned char*)str);

      //    \n -> \n\r
      if ( str[length-1] == '\n' )
      {
          sciSend(sciREG_tmp, 1, (uint8 *)"\r");
      }
   }

   return length;
}


