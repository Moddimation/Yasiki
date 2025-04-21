/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/22 14:11:47 $
 * $Revision: 1.24 $
 */

#ifndef _MSL_UNIX_H
#    define _MSL_UNIX_H

#    include <ansi_parms.h>                                                     /*- hh 971206 -*/
#    include <csignal>
#    include <stat.h>
#    include <utime.h>

#    if (__dest_os == __mac_os)
#        include <unix.mac.h>
#    endif

_MSL_BEGIN_EXTERN_C                                                             /*- cc 010409 -*/

#    if ((__dest_os == __win32_os || __dest_os == __mac_os) && defined(_POSIX)) /*- cc 000817 -*/
#        define _MSL_POSIX_PARAMS mode_t
#    else
#        define _MSL_POSIX_PARAMS int
#    endif

    _MSL_IMP_EXP_C int
                                 chmod(const char *, mode_t);
_MSL_IMP_EXP_C _MSL_POSIX_PARAMS umask(_MSL_POSIX_PARAMS);

#    if (__dest_os == __win32_os || __dest_os == __wince_os)
_MSL_IMP_EXP_C int               _chmod(const char *, mode_t);
_MSL_IMP_EXP_C _MSL_POSIX_PARAMS _umask(_MSL_POSIX_PARAMS);                     /*- cc 000210 -*/
#    endif

#    if !(defined(__BUILDING_MPW__))
__inline long
__myraise(long _a)
{
    return (__std(raise)(_a));
}
#    endif

_MSL_END_EXTERN_C                                                               /*- cc 010409 -*/

#endif                                                                          /* _MSL_UNIX_H */

                                                                                /* Change record:
                                                                                 * mm  960927 Inserted setting of __dest_os to __mac_os when not otherwise set.
                                                                                 * hh  971206 added #include <ansi_parms.h>
                                                                                 * cc  000517 Cleaned _umask and #include of header files
                                                                                 * cc  000817 fixed posixparams to be set to mode_t only when on mac or win
                                                                                 *            and the POSIX flag is on. Under all other cases posixparams is
                                                                                 *            an int (mode_t is set in stat.h according to OS).
                                                                                 * JWW 000928 balanced align directives (align=native needs align=reset)
                                                                                 * cc  010405 removed pragma options align native and reset
                                                                                 * cc  010409 updated defines to JWW new namespace macros
                                                                                 * JWW 010618 Use cname headers exclusively to prevent namespace pollution in C++
                                                                                 */
