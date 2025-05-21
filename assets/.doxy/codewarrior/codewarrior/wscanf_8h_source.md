

# File wscanf.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**wscanf.h**](wscanf_8h.md)

[Go to the documentation of this file](wscanf_8h.md)


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

#ifndef __fwscanf_h__
#define __fwscanf_h__

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

int     fwscanf(FILE * file, const wchar_t * format, ...);
int     wscanf(const wchar_t * format, ...);
int     swscanf(const wchar_t * s, const wchar_t * format, ...);
int     __vswscanf(const wchar_t * s, const wchar_t * format, va_list arg);
int     __vfwscanf(FILE * file, const wchar_t * format_str, va_list arg);
int     vwscanf(const wchar_t * format, va_list arg);

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

#endif /* ifndef __fwscanf_h__ */

/*  Change Record
 *  980121  JCM  First code release.
 */
 
```


