

# File mem\_funcs.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**mem\_funcs.h**](mem__funcs_8h.md)

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


