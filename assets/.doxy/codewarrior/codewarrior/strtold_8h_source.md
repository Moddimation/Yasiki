

# File strtold.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**strtold.h**](strtold_8h.md)

[Go to the documentation of this file](strtold_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/07/30 00:47:14 $ 
 *  $Revision: 1.9.4.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */
/*
 *  strtold.h
 */
 
#ifndef __strtold__
#define __strtold__

#include <ansi_parms.h>
#include <cstdio>               /* mm 970905 */ /*hh 971206  namespace support*/

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus          /*hh 971206  namespace support*/
    extern "C" {
#endif
#if __INTEL__
#pragma k63d_calls off
#endif
extern long double __strtold(int max_width,
                             int (*ReadProc)(void *, int, int), /* mm 990325 */
                             void * ReadProcArg,                /* mm 990325 */
                             int    * chars_scanned,
                             int    * overflow);

#if __INTEL__
#pragma k63d_calls reset
#endif

#ifdef __cplusplus          /*hh 971206  namespace support*/
    }
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif

/*     Change record
 * mm 970905  added include of stdio.h to allow this header to be included first.
 * hh 971206  namespace support
 * hh 990121  Fixed __std
 *  mm 990325       Made to work with input functions passed by pointers 
 *  mf 990420      had to provide k6 wrap internal function __strtold as well

*/ 
```


