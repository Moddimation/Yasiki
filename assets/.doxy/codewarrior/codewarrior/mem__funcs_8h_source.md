

# File mem\_funcs.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**mem\_funcs.h**](mem__funcs_8h.md)

[Go to the documentation of this file](mem__funcs_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/12/04 00:02:01 $ 
 *  $Revision: 1.7.14.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  mem_funcs.h
 */
 
#ifndef __mem_funcs__
#define __mem_funcs__

#include <ansi_parms.h>                 /* mm 970905*/

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#define __min_bytes_for_long_copy   32      /* NEVER let this be < 16 */

#ifdef __cplusplus
    extern "C" {
#endif

void    __copy_mem                (void * dst, const void * src, unsigned long n);
void    __move_mem                (void * dst, const void * src, unsigned long n);
void    __copy_longs_aligned      (void * dst, const void * src, unsigned long n);
void    __copy_longs_rev_aligned  (void * dst, const void * src, unsigned long n);
void    __copy_longs_unaligned    (void * dst, const void * src, unsigned long n);
void    __copy_longs_rev_unaligned(void * dst, const void * src, unsigned long n);

void    __fill_mem(void * dst, int val, unsigned long n);

#ifdef __cplusplus
    }
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif
/*     Change record
 * mm 970905  added include of ansi_parms.h to avoid need for prefix file
 */
```


