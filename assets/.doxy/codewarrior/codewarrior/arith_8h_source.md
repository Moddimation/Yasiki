

# File arith.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**arith.h**](arith_8h.md)

[Go to the documentation of this file](arith_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/01/22 23:40:30 $ 
 *  $Revision: 1.7 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  arith.h
 */
 
#ifndef __arith__
#define __arith__

#include <ansi_parms.h>
#include <div_t.h>

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus          /*hh 971206  expanded __extern macro*/
    extern "C" {
#endif

int         __add (int  * x, int  y);
int         __ladd(long * x, long y);
#ifdef __MSL_LONGLONG_SUPPORT__                 /* mm 981023 */
int __lladd(long long * x, long long y);
#endif  /* #ifdef __MSL_LONGLONG_SUPPORT__  */  /* mm 981023 */

int         __mul (int  * x, int  y);
int         __lmul(long * x, long y);
#ifdef __MSL_LONGLONG_SUPPORT__                 /* mm 981023 */
int __llmul(long long * x, long long y);
#endif  /* #ifdef __MSL_LONGLONG_SUPPORT__  */  /* mm 981023 */

div_t       __div (int  x, int  y);
ldiv_t  __ldiv(long x, long y);
#ifdef __MSL_LONGLONG_SUPPORT__                 /* mm 981023 */
lldiv_t __lldiv(long long x, long long y);
#endif  /* #ifdef __MSL_LONGLONG_SUPPORT__  */  /* mm 981023 */

#ifndef __MOTO__
int         __mod (int  x, int  y);
long        __lmod(long x, long y);
#ifdef __MSL_LONGLONG_SUPPORT__                 /* mm 981023 */
long long __llmod(long long x, long long y);
#endif  /* #ifdef __MSL_LONGLONG_SUPPORT__  */  /* mm 981023 */
#endif

#ifdef __cplusplus          /*hh 971206  expanded __extern macro*/
    }
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif
/*     Change record
961221 bkoz lien 30 added mmoss's change
hh 971206  expanded __extern macro
 * mm 981023 added wrappers round long long support
*/
```


