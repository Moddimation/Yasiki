/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/06/19 00:13:50 $
 * $Revision: 1.24 $
 */

#ifndef _MSL_WMEM_H
#    define _MSL_WMEM_H

#    include <ansi_parms.h>                                                 /*- mm 970905 -*/
#    include <cstddef>
#    include <mem_funcs.h>

_MSL_BEGIN_NAMESPACE_STD                                                    /*- cc 010409 -*/
    _MSL_BEGIN_EXTERN_C                                                     /*- cc 010409 -*/

        _MSL_IMP_EXP_C wchar_t*(wmemcpy)(wchar_t*, const wchar_t*, size_t); /*- mm 980909 -*/
_MSL_IMP_EXP_C wchar_t*(wmemmove)(wchar_t*, const wchar_t*, size_t);        /*- mm 980909 -*/
_MSL_IMP_EXP_C wchar_t*(wmemset)(wchar_t*, wchar_t, size_t);                /*- mm 980909 -*/
_MSL_IMP_EXP_C wchar_t*(wmemchr)(const wchar_t*, wchar_t, size_t);          /*- mm 980909 -*/
_MSL_IMP_EXP_C int(wmemcmp)(const wchar_t*, const wchar_t*, size_t);        /*- mm 980909 -*/

_MSL_END_EXTERN_C                                                           /*- cc 010409 -*/

#    if defined(__cplusplus) && __embedded_cplusplus == 0

    inline wchar_t*
    wmemchr(wchar_t* s, wchar_t c, size_t n)
{
    return wmemchr(static_cast<const wchar_t*>(s), c, n);
}

#    endif

_MSL_END_NAMESPACE_STD                                                      /*- cc 010409 -*/

#endif                                                                      /* #ifndef _MSL_WMEM_H */

                                                                            /* Change record:
                                                                             * mm  970905 added include of ansi_parms.h to avoid need for prefix file
                                                                             * mm  980909 Corrected prototypes to refer to wchar_t* instead of void*
                                                                             * hh  991112 Added non-const inlines per C++ standard.
                                                                             * cc  010405 removed pragma options align native and reset
                                                                             * cc  010409 updated defines to JWW new namespace macros
                                                                             * JWW 010618 Use cname headers exclusively to prevent namespace pollution in C++
                                                                             */
