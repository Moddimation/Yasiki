/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/20 16:42:30 $
 * $Revision: 1.19 $
 */

#ifndef _MSL_WPRINTF_H
#    define _MSL_WPRINTF_H

#    include <ansi_parms.h>
#    include <file_struc.h>
#    include <va_list.h>

_MSL_BEGIN_NAMESPACE_STD                                      /*- cc 010409 -*/
    _MSL_BEGIN_EXTERN_C                                       /*- cc 010409 -*/

        _MSL_IMP_EXP_C int
                   fwprintf(FILE*, const wchar_t*, ...);      /*- mf 990715 -*/
_MSL_IMP_EXP_C int wprintf(const wchar_t*, ...);
_MSL_IMP_EXP_C int swprintf(wchar_t*, size_t, const wchar_t*, ...);
_MSL_IMP_EXP_C int vfwprintf(FILE*, const wchar_t*, va_list); /*- mf 990715 -*/
_MSL_IMP_EXP_C int vswprintf(wchar_t*, size_t, const wchar_t*, va_list);
_MSL_IMP_EXP_C int vwprintf(const wchar_t*, va_list);

_MSL_END_EXTERN_C                                             /*- cc 010409 -*/
    _MSL_END_NAMESPACE_STD                                    /*- cc 010409 -*/

#endif                                                        /* ifndef _MSL_WPRINTF_H */

    /* Change record:
     * mf  990715 remove arg names in prototypes
     * mm  990806 Replaced #include <cstdio> by #include <va_list.h> and file_struc.h
     * cc  010405 removed pragma options align native and reset
     * cc  010409 updated defines to JWW new namespace macros
     */
