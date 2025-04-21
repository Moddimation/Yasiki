/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/19 00:13:30 $
 * $Revision: 1.22 $
 */

#ifndef _MSL_STRTOLD_H
#    define _MSL_STRTOLD_H

#    include <ansi_parms.h>
#    include <cstdio> /*- mm 970905 -*/                         /*- hh 971206 -*/

_MSL_BEGIN_EXTERN_C                                             /*- cc 010409 -*/

    extern long double
    __strtold(int max_width, int (*ReadProc)(void *, int, int), /*- mm 990325 -*/
              void *ReadProcArg,                                /*- mm 990325 -*/
              int *chars_scanned, int *overflow);

_MSL_END_EXTERN_C                                               /*- cc 010409 -*/

#endif                                                          /* _MSL_STRTOLD_H */

                                                                /* Change record:
                                                                 * mm  970905 added include of stdio.h to allow this header to be included first.
                                                                 * hh  971206 namespace support
                                                                 * hh  990121 Fixed __std
                                                                 * mm  990325 Made to work with input functions passed by pointers
                                                                 * mf  990420 had to provide k6 wrap internal function __strtold as well
                                                                 * cc  010405 removed pragma options align native and reset
                                                                 * cc  010409 updated defines to JWW new namespace macros
                                                                 * JWW 010618 Use cname headers exclusively to prevent namespace pollution in C++
                                                                 */
