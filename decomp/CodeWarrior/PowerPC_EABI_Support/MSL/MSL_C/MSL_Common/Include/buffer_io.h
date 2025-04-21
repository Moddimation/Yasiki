/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/19 00:12:56 $
 * $Revision: 1.18 $
 */

#ifndef _MSL_BUFFER_IO_H
#    define _MSL_BUFFER_IO_H

#    include <ansi_parms.h>
#    include <cstdio>

_MSL_BEGIN_EXTERN_C                                                             /*- cc 010409 -*/

    enum
{
    __align_buffer,
    __dont_align_buffer
};

void __convert_from_newlines(unsigned char *p, __std(size_t) * n);              /*- hh 990121 -*/
void __convert_to_newlines(unsigned char *p, __std(size_t) * n);
void __prep_buffer(__std(FILE) *);                                              /*- mf 990715 -*/
int  __load_buffer(__std(FILE) *, __std(size_t) * bytes_loaded, int alignment); /*- mf 990715 -*/
int  __flush_buffer(__std(FILE) *, __std(size_t) * bytes_flushed);              /*- mf 990715 -*/

_MSL_END_EXTERN_C                                                               /*- cc 010409 -*/

#endif                                                                          /* _MSL_BUFFER_IO_H */

                                                                                /* Change record:
                                                                                 * hh  971206 namespace support
                                                                                 * hh  990121 Fixed __std 7 places
                                                                                 * mf  990715 Arg names in prototype cause conflicts
                                                                                 * cc  010405 removed pragma options align native and reset
                                                                                 * cc  010409 updated defines to JWW new namespace macros
                                                                                 * JWW 010618 Use cname headers exclusively to prevent namespace pollution in C++
                                                                                 */
