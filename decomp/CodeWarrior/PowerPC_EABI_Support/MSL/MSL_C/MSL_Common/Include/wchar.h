/* Metrowerks Standard Library
 * Copyright C 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/07/21 18:43:43 $
 * $Revision: 1.17.4.1 $
 */

#ifndef _MSL_WCHAR_H
#define _MSL_WCHAR_H

#if __MACH__
#warning The standard BSD headers do not have an equivalent wchar.h header to #include
#else

#include <cwchar>

#if defined(__cplusplus) && defined(_MSL_USING_NAMESPACE)
#ifndef __NO_WIDE_CHAR
using std::btowc;   /*- mm 010528 -*/
using std::fgetwc;
using std::fgetws;
using std::fputwc;
using std::fputws;
using std::fwide;
using std::fwprintf;
using std::fwscanf;
using std::getwc;
using std::getwchar;
using std::mbrlen;  /*- mm 010528 -*/
using std::mbrtowc; /*- mm 010528 -*/
using std::mbstate_t;
using std::size_t;
using std::wint_t;
/*	using std::mbsinit; */
using std::mbsrtowcs; /*- mm 010528 -*/
using std::putwc;
using std::putwchar;
using std::swprintf;
using std::swscanf;
using std::ungetwc;
using std::vfwprintf;
using std::vswprintf;
using std::vwprintf;
using std::wcrtomb;   /*- mm 010528 -*/
using std::wcscat;
using std::wcschr;
using std::wcscmp;
using std::wcscoll;
using std::wcscpy;
using std::wcscspn;
/*	using std::wcsftime; */
using std::wcslen;
using std::wcsncat;
using std::wcsncmp;
using std::wcsncpy;
using std::wcspbrk;
using std::wcsrchr;
using std::wcsrtombs; /*- mm 010528 -*/
using std::wcsspn;
using std::wcsstr;
using std::wcstod;
using std::wcstok;
using std::wcstol;
using std::wcstoul;
using std::wcsxfrm;
using std::wctob;
using std::wmemchr;
using std::wmemcmp;
using std::wmemcpy;
using std::wmemmove;
using std::wmemset;
using std::wprintf;
using std::wscanf;
#endif
#endif

#endif /* __MACH__ */

#endif /* _MSL_WCHAR_H */

       /* Change record:
        * 980121 JCM First code release.
        * 991112 hh  Fixed using bug.
        * 001208 JWW Added case for targeting Mach-O
        */
