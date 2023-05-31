/*------------------------------------------------------------------------------------------
    Project         : SCM
    Description     :

    Writer          :
    Revision        :
    Date            : 2022. 07.
    Copyright       :

    Revision History
    1. 2022. 07.    : Created
-------------------------------------------------------------------------------------------*/

//========================================================================
#ifndef TYPEDEF_H
#define TYPEDEF_H
//========================================================================


#include <stdint.h>


#ifdef _WIN32	/* FatFs development platform */

#include <windows.h>
#include <tchar.h>

#else			/* Embedded platform */

/* This type MUST be 8 bit */
typedef unsigned char	BYTE;

/* These types MUST be 16 bit */
typedef short			SHORT;
typedef unsigned short	WORD;
typedef unsigned short	WCHAR;

/* These types MUST be 16 bit or 32 bit */
typedef int				INT;
typedef unsigned int	UINT;

/* These types MUST be 32 bit */
typedef long			LONG;
typedef unsigned long	DWORD;

#endif

typedef char char_t;
//typedef unsigned char 		uchar;

typedef char                CHAR;
typedef signed char         INT8;
typedef unsigned char       UCHAR;
typedef unsigned char       UINT8;
//typedef unsigned char       BYTE;
typedef signed short        INT16;
typedef unsigned short      USHORT;
typedef unsigned short      UINT16;
//typedef unsigned short      WORD;
typedef signed int          INT32;
typedef unsigned int        UINT32;
typedef unsigned long       ULONG;


typedef unsigned char 		BIT;
typedef unsigned char 		U8;
typedef unsigned int 		U16;
typedef unsigned long 		U32;

typedef signed char 		S8;
typedef signed int 			S16;
typedef signed long 		S32;


#ifndef 	TRUE
#define		TRUE			(1)
#endif

#ifndef 	FALSE
#define		FALSE			(0)
#endif

//=============================================================================
#endif
//=============================================================================
