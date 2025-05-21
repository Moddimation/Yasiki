

# File wcstold.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**wcstold.h**](wcstold_8h.md)

[Go to the documentation of this file](wcstold_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/07/30 00:49:19 $ 
 *  $Revision: 1.8.4.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  wcstold.h
 */
 
#ifndef __wcstold__
#define __wcstold__

#include <ansi_parms.h>
#include <cstdio>               /* mm 970905 */ /*hh 971206  namespace support*/

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus          /*hh 971206  namespace support*/
    extern "C" {
#endif

extern long double __wcstold(   int max_width,
                                __std(wint_t) (*ReadProc)(void *, __std(wint_t), int),      /* mm 990326, hh 990507 */
                                void * ReadProcArg,                             /* mm 990326 */
                                int * chars_scanned,
                                int * overflow);

#ifdef __cplusplus          /*hh 971206  namespace support*/
    }
#endif

#ifdef __cplusplus
    #ifdef _MSL_USING_NAMESPACE
        namespace std {
    #endif
    extern "C" {
#endif

/* prototypes */

double wcstod(const wchar_t * str, wchar_t ** end);
double watof(const wchar_t * str);

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

#endif /* #ifndef __wcstod__ */

/*     Change record
 * mm  970905  added include of stdio.h to allow this header to be included first.
 * hh  971206  namespace support
 * blc 980324  fixed prototype for C9X conformance
 * hh 990121 Fixed __std
 *  mm 990326   Changes to prototype to allow split of string functions from file i/o
 * hh 990507 Wrapped wint_t up in __std(), 2 places
 */
 
```


