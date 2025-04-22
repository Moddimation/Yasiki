/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/05/21 20:15:56 $
 * $Revision: 1.12 $
 */

/*
 *	Content:	Interface file to standard UNIX-style entry points ...
 *
 *	NB:			This file implements some UNIX low level support.  These functions
 *				are not guaranteed to be 100% conformant.
 */

#ifndef _MSL_UTSNAME_H
#    define _MSL_UTSNAME_H

#    include <ansi_parms.h>

#    pragma options align = native

_MSL_BEGIN_EXTERN_C                  /*- cc 010409 -*/

#    define _UTSNAME_FIELD_LENGTH 32 /*- mm 990104 -*/
    /* struct for uname */
    struct utsname
{
    char sysname[_UTSNAME_FIELD_LENGTH];  /*- mm 990104 -*/
    char nodename[_UTSNAME_FIELD_LENGTH]; /*- mm 990104 -*/
    char release[_UTSNAME_FIELD_LENGTH];  /*- mm 990104 -*/
    char version[_UTSNAME_FIELD_LENGTH];  /*- mm 990104 -*/
    char machine[_UTSNAME_FIELD_LENGTH];  /*- mm 990104 -*/
};

_MSL_IMP_EXP_C int uname(struct utsname*);

#    if (__dest_os == __win32_os)
#        include <utsname.win32.h>
#    endif

_MSL_END_EXTERN_C                         /*- cc 010409 -*/

#    pragma options align = reset

#endif                                    /*_MSL_UTSNAME_H */

                                          /* Change record:
                                           * mm  970905 added include of ansi_parms.h to avoid need for prefix file
                                           * hh  971207 moved this higher in the file
                                           * vss 980807 remove pragma  - no longer supported by compiler
                                           * mm  990104 Made field length into defined constant
                                           * mf  000321 updated to using _POSIX to optionally use posix support
                                           * cc  000517 moved _POSIX block inside extern c
                                           * cc  010409 updated to JWW new namespace macros
                                           */
