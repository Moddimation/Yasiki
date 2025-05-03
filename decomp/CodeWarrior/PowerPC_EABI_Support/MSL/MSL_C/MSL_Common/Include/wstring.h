/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/20 16:42:31 $
 * $Revision: 1.19 $
 */

#ifndef _MSL_WSTRING_H
#define _MSL_WSTRING_H

#include <ansi_parms.h>
#include <size_t.h>                         /*- mm 990806 -*/
#include <wchar_t.h>                        /*- mm 990806 -*/

_MSL_BEGIN_NAMESPACE_STD                    /*- cc 010409 -*/
    _MSL_BEGIN_EXTERN_C                     /*- cc 010409 -*/

        _MSL_IMP_EXP_C size_t (wcslen) (const wchar_t* str);
_MSL_IMP_EXP_C wchar_t*(wcscpy)(wchar_t* dst, const wchar_t* src);
_MSL_IMP_EXP_C wchar_t* wcsncpy (wchar_t* dst, const wchar_t* src, size_t n);
_MSL_IMP_EXP_C wchar_t* wcscat (wchar_t* dst, const wchar_t* src);
_MSL_IMP_EXP_C wchar_t* wcsncat (wchar_t* dst, const wchar_t* src, size_t n);
_MSL_IMP_EXP_C int      wcscmp (const wchar_t* str1, const wchar_t* str2);
_MSL_IMP_EXP_C int      wcsncmp (const wchar_t* str1, const wchar_t* str2, size_t n);
_MSL_IMP_EXP_C wchar_t* wcschr (const wchar_t* str, const wchar_t chr);
_MSL_IMP_EXP_C int      wcscoll (const wchar_t* str1, const wchar_t* str2);
_MSL_IMP_EXP_C size_t   wcsxfrm (wchar_t* str1, const wchar_t* str2, size_t n);
_MSL_IMP_EXP_C wchar_t* wcsrchr (const wchar_t* str, wchar_t chr);
_MSL_IMP_EXP_C wchar_t* wcspbrk (const wchar_t* str, const wchar_t* set);
_MSL_IMP_EXP_C size_t   wcsspn (const wchar_t* str, const wchar_t* set);
_MSL_IMP_EXP_C size_t   wcscspn (const wchar_t* str, const wchar_t* set);
_MSL_IMP_EXP_C wchar_t* wcsstr (const wchar_t* str, const wchar_t* pat);
_MSL_IMP_EXP_C wchar_t* wcstok (wchar_t*       str,
                                const wchar_t* set,
                                wchar_t**); /*- mm 000420 -*/

_MSL_END_EXTERN_C                           /*- cc 010409 -*/

#if defined(__cplusplus) && __embedded_cplusplus == 0

    inline wchar_t*
    wcschr (wchar_t* s, wchar_t c)
{
    return wcschr (static_cast<const wchar_t*> (s), c);
}
inline wchar_t*
wcspbrk (wchar_t* s1, const wchar_t* s2)
{
    return wcspbrk (static_cast<const wchar_t*> (s1), s2);
}
inline wchar_t*
wcsrchr (wchar_t* s, wchar_t c)
{
    return wcsrchr (static_cast<const wchar_t*> (s), c);
}
inline wchar_t*
wcsstr (wchar_t* s1, const wchar_t* s2)
{
    return wcsstr (static_cast<const wchar_t*> (s1), s2);
}
#endif

_MSL_END_NAMESPACE_STD                      /*- cc 010409 -*/

#endif                                      /* ifndef _MSL_WSTRING_H */

                                            /* Change record:
                                             * JCM 980121 First code release.
                                             * hh  991112 Added non-const inlines per C++ standard.
                                             * mm  000420 Corrected prototype for wcstok to match C99
                                             * cc  010405 removed pragma options align native and reset
                                             * cc  010409 updated defines to JWW new namespace macros
                                             */
