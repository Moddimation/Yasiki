

# File div\_t.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**div\_t.h**](div__t_8h.md)

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


