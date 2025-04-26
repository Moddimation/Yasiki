/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/21 23:25:49 $
 * $Revision: 1.20 $
 */

#ifndef _MSL_UTIME_H
#define _MSL_UTIME_H

#include <ansi_parms.h> /*- mf 042898 -*/
#include <ctime>

#if !defined(__dest_os)
#error __dest_os undefined
#endif                  /*- mm 960927 -*/

#if (__dest_os == __mac_os)
#include <utime.mac.h>
#elif (__dest_os == __win32_os || __dest_os == __wince_os)
#include <utime.win32.h>
#endif

#pragma options align = native
/* struct for utime */
struct utimbuf
{
    __std(time_t) actime;     /* access time  */
    __std(time_t) modtime;    /* modification time */
};
_MSL_BEGIN_EXTERN_C           /*- cc 010409 -*/

#if (__dest_os == __win32_os) /*- cc 000209 -*/
    _MSL_IMP_EXP_C int
    utime(const char*, struct utimbuf*);
#else
    _MSL_IMP_EXP_C int
    utime(const char*, const struct utimbuf*); /*- cc 000210 -*/
#endif

_MSL_IMP_EXP_C int utimes(const char* path, struct timeval buf[2]);

_MSL_END_EXTERN_C             /*- cc 010409 -*/

#pragma options align = reset

#endif                        /* _MSL_UTIME_H */

                              /* Change record:
                               * mm  960927 Inserted setting of __dest_os to __mac_os when not otherwise set.
                               * mf  980428 included ansi_parms.h and use #error instead of mac_os by default
                               * vss 990115 removed powerTV
                               * mf  000430 scoped time_t w/std
                               * JWW 000928 balanced align directives (align=native needs align=reset)
                               * JWW 001208 Added case for targeting Mach-O
                               * cc  010409 updated defines to JWW new namespace macros
                               * JWW 010510 Removed special case for Mach-O - the cname/name.h header split is
                               * a better fix                           JWW 010621 Moved #include <ctime> to
                               * the main utime.h header
                               */
