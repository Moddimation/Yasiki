/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/22 14:14:52 $
 * $Revision: 1.3 $
 */

#ifndef _MSL_STDIO_POSIX_H
#define _MSL_STDIO_POSIX_H

#include <ansi_parms.h>

_MSL_BEGIN_EXTERN_C                                      /*- cc  010410 -*/

    _MSL_IMP_EXP_C int
               fileno (__std (FILE) *);                  /*- cc 000209 -*/
_MSL_IMP_EXP_C __std (FILE) * fdopen (int, const char*); /*- mm 010122 -*/

#if (__dest_os == __win32_os)
_MSL_IMP_EXP_C int _fileno (__std (FILE) *);
_MSL_IMP_EXP_C     __std (FILE) * _fdopen (int, const char*);
#endif

_MSL_END_EXTERN_C                                        /*- cc  010410 -*/
#endif                                                   /* _MSL_STDIO_POSIX_H */

                                                         /* Change record:
                                                          * cc 010521 made for _version of POSIX
                                                          */
