/*  Metrowerks Standard Library  Version 4.0  1998 August 10  */

/*  $Date: 2000/08/23 18:14:43 $
 *  $Revision: 1.2 $
 *  $NoKeywords: $
 *
 *		Copyright C 1995-1998 Metrowerks, Inc.
 *		All rights reserved.
 *
 *
 *	FILE
 *
 *		UART.h
 *
 *	DESCRIPTION
 *
 *		Abstract interface to serial device (UART) for MetroTRK.
 *		For maximum portability, do not change this file.
 *
 *
 */

/****************************************************************************/

#ifndef uart_h_included
#define uart_h_included

#ifdef _No_Console
#error _No_Console must not be defined.
#endif

/****************************************************************************/

typedef int UARTError;
enum
{
    kUARTNoError = 0,
    kUARTUnknownBaudRate,
    kUARTConfigurationError,
    kUARTBufferOverflow, /* specified buffer was too small */
    kUARTNoData          /* no data available from polling */
};
/****************************************************************************/

typedef enum
{
    kBaudHWSet = -1, /* use HW settings such as DIP switches */
    kBaud300 = 300,  /* valid baud rates */
    kBaud600 = 600,
    kBaud1200 = 1200,
    kBaud1800 = 1800,
    kBaud2000 = 2000,
    kBaud2400 = 2400,
    kBaud3600 = 3600,
    kBaud4800 = 4800,
    kBaud7200 = 7200,
    kBaud9600 = 9600,
    kBaud19200 = 19200,
    kBaud38400 = 38400,
    kBaud57600 = 57600,
    kBaud115200 = 115200,
    kBaud230400 = 230400
} UARTBaudRate;
/****************************************************************************/

UARTError InitializeUART(UARTBaudRate baudRate);
UARTError TerminateUART(void);

UARTError ReadUARTPoll(char* c);

UARTError ReadUART1(char* c);
UARTError ReadUARTN(void* bytes, unsigned long length);
UARTError ReadUARTString(char* string, unsigned long limit, char terminateChar);

UARTError WriteUART1(char c);
UARTError WriteUARTN(const void* bytes, unsigned long length);
UARTError WriteUARTString(const char* string);

#endif /* uart_h_included */

/* 	Change Record
 *	=============
 *	961208 LLY	Created.
 *	970720 MEA	Added tests at top of file to make sure that MSL is
 *				set up correctly.
 *	000823	as	Removed requirement that _Unbuffered_Console must be defined.
 */
