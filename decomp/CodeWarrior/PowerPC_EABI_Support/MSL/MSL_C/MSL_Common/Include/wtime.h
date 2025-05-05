/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/19 00:13:53 $
 * $Revision: 1.24 $
 */

#ifndef _MSL_WTIME_H
#define _MSL_WTIME_H

#include <ansi_parms.h>
#include <ctime>
#include <wchar_t.h>    /*- mm 990806 -*/

_MSL_BEGIN_EXTERN_C     /*- cc 010409 -*/

    _MSL_IMP_EXP_C
           __std (size_t) wcsftime (wchar_t* str,
                             __std (size_t) max_size,
                             const wchar_t* format_str,
                             const struct __std (tm) * timeptr);
static int wemit (wchar_t* str,
                  __std (size_t),
                  __std (size_t) * max_size,
                  const wchar_t* format_str,
                  ...); /*- mf 990715 -*/

_MSL_END_EXTERN_C       /*- cc 010409 -*/

#endif                  /* #ifndef _MSL_WTIME_H */

                        /* Change record:
                         * mm  970905 added include of stdio.h to allow this header to be included first.
                         * hh  971206 namespace support
                         * hh  990121 Fixed __std 7 places
                         * mf  990715 Remove arg name in prototype
                         * mm  990806 Removed include of cstdio and replaced include of cwchar
                         *            by one of wchar_t.h
                         * cc  000413 Added _MSL_IMP_EXP_C
                         * mm  010327 Commented wasctime and wctime out since they are not defined in C99
                         *and wasctime tampered with                     gmtime's                     threadlocal data
                         *cc                     010405 removed pragma options align native                     and reset                     cc                     010409 updated
                         *defines to                      JWW new namespace macros                     JWW                     010618 Use
                         *cname headers exclusively to prevent namespace pollution in C++
                         */
