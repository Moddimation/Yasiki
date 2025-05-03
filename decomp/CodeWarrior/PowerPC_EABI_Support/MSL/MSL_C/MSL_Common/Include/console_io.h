/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/19 00:13:03 $
 * $Revision: 1.19 $
 */

#ifndef _MSL_CONSOLE_IO_H
#define _MSL_CONSOLE_IO_H

#include <ansi_parms.h>
#include <cstdio>

_MSL_BEGIN_EXTERN_C /*- cc 010409 -*/

/*- hh 990121 -*/
#ifndef _No_Console /*- 990128 -*/
    int
    __read_console (__std (__file_handle) handle,
                    unsigned char* buffer,
                    __std (size_t) * count,
                    __std (__idle_proc) idle_proc);
int __write_console (__std (__file_handle) handle,
                     unsigned char* buffer,
                     __std (size_t) * count,
                     __std (__idle_proc) idle_proc);
int __close_console (__std (__file_handle) handle);
#endif

_MSL_END_EXTERN_C   /*- cc 010409 -*/

#endif              /* _MSL_CONSOLE_IO_H */

                    /* Change record:
                     * hh  971206 Namespace support
                     * hh  990121 Fixed __std 7 places
                     * ad  990128 Added #ifndef _No_Console
                     * cc  010405 removed pragma options align native and reset
                     * cc  010409 updated defines to JWW new namespace macros
                     * JWW 010618 Use cname headers exclusively to prevent namespace pollution in C++
                     */
