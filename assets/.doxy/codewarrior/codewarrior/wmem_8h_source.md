

# File wmem.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**wmem.h**](wmem_8h.md)

[Go to the documentation of this file](wmem_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/01/23 02:22:31 $ 
 *  $Revision: 1.9 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  mem_funcs.h
 */
 
#ifndef __wmem_funcs__
#define __wmem_funcs__

#include <ansi_parms.h>                 /* mm 970905*/
#include <mem_funcs.h>
#include <cstddef>

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

wchar_t * (wmemcpy) (wchar_t * s1, const wchar_t * s2, size_t n);   /* mm 980909 */
wchar_t * (wmemmove)(wchar_t *s1, const wchar_t *s2, size_t n);     /* mm 980909 */
wchar_t * (wmemset) (wchar_t *s, wchar_t c, size_t n);              /* mm 980909 */
wchar_t * (wmemchr) (const wchar_t *s, wchar_t c, size_t n);        /* mm 980909 */
int       (wmemcmp) (const wchar_t * s1, const wchar_t * s2, size_t n);   /* mm 980909 */

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

#endif  /* #ifndef __wmem_funcs__ */

/*     Change record
 * mm 970905  added include of ansi_parms.h to avoid need for prefix file
 * mm 980909  Corrected prototypes to refer to wchar_t* instead of void*
 */
```


