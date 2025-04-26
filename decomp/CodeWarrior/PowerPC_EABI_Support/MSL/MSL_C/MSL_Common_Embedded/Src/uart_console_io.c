/*  Metrowerks Standard Library  Version 2.1.2  1997 July  */

/*
 *	uart_console_io.c
 *
 *		CopyrighC 1997 Metrowerks, Inc.
 *		All rights reserved.
 *
 *	Routines
 *	--------
 *		__read_console
 *		__write_console
 *		__close_console
 *
 *	Implementation
 *	--------------
 *
 *		These routines implement low-level console IO routines using
 *		any UART library which conforms to the MetroTRK UART library
 *		interface.  They are intended to provide basic console IO
 *		services in an embedded environment which lacks OS console
 *		support.
 *
 *
 */

#ifndef _No_Console
#include <console_io.h>
#include <file_io.h>

#include "console_io.h"
#include "stdio.h"
#include "UART.h"
#include "uart_console_config.h"

/*
 * This is defined in the TRK library for GAMECUBE
 * It is used to check if this message should be
 * sent to TRK. If not connected, the message would
 * not be handled, and hence a exception would occur
 */

int __TRK_write_console(__file_handle handle, unsigned char* buffer, size_t* count,
                        __idle_proc idle_proc);

static UARTError __init_uart_console(void);

/************************************************************************/

#if 0
int		__read_console	  (__file_handle handle, unsigned char * buffer, 
							size_t * count, __idle_proc idle_proc)
{
#pragma unused(handle, idle_proc)

	size_t limit;
	UARTError err;

	if (__init_uart_console() != kUARTNoError)
		return( __io_error );

	/*
	** A console read should return when it encounters a line-ending
	** or after it has read the requested number of characters.
	*/

	limit = *count;
	*count = 0;
	err = kUARTNoError;

	while( *count <= limit && err == kUARTNoError )
	{
		/* Changed this to ReadUARTN and set the count to 1
		 * since it is the same functionality as ReadUART1,
		 * but ReadUART1 broke end user's implementations
		 */
		err = ReadUARTN( (char *)buffer, 1 );
		++(*count);
		if (*buffer == '\r')
			break;
		++buffer;
	}

	return( (err == kUARTNoError) ? __no_io_error : __io_error );
}

#endif

/************************************************************************/
#pragma overload int __write_console(__file_handle handle, unsigned char* buffer,   \
                                     size_t* count, __idle_proc idle_proc);
int
__write_console(__file_handle handle, unsigned char* buffer, size_t* count,
                __idle_proc idle_proc)
{
#pragma unused(handle, idle_proc)

    if (__init_uart_console() != kUARTNoError)
    {
        return (__io_error);
    }

    if (WriteUARTN(buffer, *count) != kUARTNoError)
    {
        *count = 0;
        return (__io_error);
    }

    /*
     * If TRK is connected, send a message out to it as well
     * as to the UART. This uses the mslsupp.c file supplied
     * with TRK that knows how to interface with TRK in order
     * to do serial and host i/o.
     *
     * NOTE this requires a TRK with a) framing enabled
     * and b) this function implemented that only starts up
     * when a connect message is received. Otherwise TRK
     * will get a trap (twi) instruction before it has even
     * been brought up, and hence the app will crash.
     */

    __TRK_write_console(handle, buffer, count, idle_proc);

    return (__no_io_error);
}
/************************************************************************/
int
__close_console(__file_handle handle)
{
#pragma unused(handle)

    return (__no_io_error);
}
/************************************************************************/
// #pragma overload UARTError __init_uart_console(void);

UARTError
__init_uart_console(void)
{
    UARTError  err = kUARTNoError;
    static int initialized = 0;

    if (initialized == 0)
    {
        err = InitializeUART(UART_CONSOLE_BAUD_RATE);

        if (err == kUARTNoError)
        {
            initialized = 1;
        }
    }

    return (err);
}
#endif /* _No_Console */
/*
 * Unimplemented for GCN  - Host IO does not support this
 */

int
__delete_file(const char* name)
{
    return kUARTNoError;
}
/*
 * Unimplemented for GCN  - Host IO does not support this
 */

int
__rename_file(const char* old_name, const char* new_name)
{
    return kUARTNoError;
}
/*
 * Unimplemented for GCN  - Host IO does not support this
 */
void
__temp_file_name(char* name_str, void* ptr)
{
    if (name_str)
    {
        name_str[0] = 0;
    }
}
/*	Change Record
 *	09-Jul-97 SCM	Created
 *	20-Aug-99 SCM	Enhanced __read_console() to return when it receives an EOL.
 *	29-Nov-99 SW	Changed ReadUART1 to ReadUARTN and set the count to 1 since it
 *					is the same functionality as ReadUART1, but ReadUART1 broke
 *					end user's implementations (SCM - copied comment here and
 *					checked in).
 */
