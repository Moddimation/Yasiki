

# File wprintf.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**wprintf.h**](wprintf_8h.md)

[Go to the documentation of this file](wprintf_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/01/22 23:40:32 $ 
 *  $Revision: 1.7 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  wchar_io.h
 */

#ifndef __fwprintf_h__
#define __fwprintf_h__

#include <ansi_parms.h>
#include <cstdio>

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus
    #ifdef _MSL_USING_NAMESPACE
        namespace std {
    #endif
    extern "C" {
#endif

/* extern prototypes */

int     fwprintf(FILE * file, const wchar_t * format, ...);
int     wprintf(const wchar_t * format, ...);
int     swprintf(wchar_t * s, size_t n, const wchar_t * format, ...);
int     vfwprintf(FILE * file, const wchar_t * format_str, va_list arg);
int     vswprintf(wchar_t * s, size_t n, const wchar_t * format, va_list arg);
int     vwprintf(const wchar_t * format, va_list arg);

#ifdef __cplusplus
    }
    #ifdef _MSL_USING_NAMESPACE
        }
    #endif
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif /* ifndef __fwprintf_h__ */

/*     Change record
*/
```


