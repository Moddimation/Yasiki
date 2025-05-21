

# File div\_t.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**div\_t.h**](div__t_8h.md)

[Go to the documentation of this file](div__t_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/02/22 15:05:51 $ 
 *  $Revision: 1.8 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  div_t.h
 */
 
#ifndef __div_t__
#define __div_t__

#include <ansi_parms.h>                 /* mm 970905*/

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus      /* hh  971206 */
    #ifdef _MSL_USING_NAMESPACE             /* mm 990217 */
        namespace std {                     /* mm 990217 */
    #endif                                  /* mm 990217 */
    extern "C" {
#endif

typedef struct {
    int quot;
    int rem;
} div_t;

typedef struct {
    long    quot;
    long    rem;
} ldiv_t;

/* hh 980122 added */
#ifdef __MSL_LONGLONG_SUPPORT__                 /* mm 981023 */
typedef struct 
{
    long long   quot;
    long long   rem;
} lldiv_t;
#endif  /* #ifdef __MSL_LONGLONG_SUPPORT__  */  /* mm 981023 */

#ifdef __cplusplus      /* hh  971206 */
    }
    #ifdef _MSL_USING_NAMESPACE                 /* mm 990217 */
        }                                       /* mm 990217 */
    #endif                                      /* mm 990217 */
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif

/*     Change record
 * mm 970905  added include of ansi_parms.h to avoid need for prefix file
 * hh  971206 added extern "C" (think maintenance).
 * hh 980122 added long long support
 * mm 981023 added wrappers round long long support
 * mm 990217 added namespace support    
 */
```


