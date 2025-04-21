/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/19 00:13:28 $
 * $Revision: 1.21 $
 */

#ifndef _MSL_STRING_IO_H
#    define _MSL_STRING_IO_H

#    include <ansi_parms.h> /*- hh 971206 -*/
#    include <cstdio>       /*- hh 971206 -*/

_MSL_BEGIN_EXTERN_C         /*- cc 010409 -*/

    /*- hh 990121 -*/
    int
    __open_string_file(__std(FILE) *, char *str, __std(size_t) n, int io_state); /*- mf 990715 -*/
int __read_string(__std(__file_handle) handle, unsigned char *buffer, __std(size_t) * count,
                  __std(__idle_proc) idle_proc);
int __write_string(__std(__file_handle) handle, unsigned char *buffer, __std(size_t) * count,
                   __std(__idle_proc) idle_proc);
int __close_string(__std(__file_handle) handle);

_MSL_END_EXTERN_C                                                                /*- cc 010409 -*/

#endif                                                                           /* _MSL_STRING_IO_H */

                                                                                 /* Change record:
                                                                                  * hh  971206 namespace support
                                                                                  * hh  990121 Fixed __std 9 places
                                                                                  * mf  990715 Remove arg names in prototypes
                                                                                  * cc  010405 removed pragma options align native and reset
                                                                                  * cc  010409 updated to JWW new namespace macros
                                                                                  * JWW 010618 Use cname headers exclusively to prevent namespace pollution in C++
                                                                                  */
