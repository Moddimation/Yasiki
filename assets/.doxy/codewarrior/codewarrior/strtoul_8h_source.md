

# File strtoul.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**strtoul.h**](strtoul_8h.md)

[Go to the documentation of this file](strtoul_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/03/26 19:49:17 $ 
 *  $Revision: 1.8 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  strtoul.h
 */
 
#ifndef __strtoul__
#define __strtoul__

#include <ansi_parms.h>
#include <cstdio>          /*hh 971206  changed from stdio.h*/

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus          /*hh 971206  namespace support*/
    extern "C" {
#endif

extern unsigned long        __strtoul(  int     base, 
                                        int     max_width,
                                        int (*ReadProc)(void *, int, int),          /* mm 990325 */
                                        void * ReadProcArg,                         /* mm 990325 */
                                        int * chars_scanned,
                                        int * negative,
                                        int * overflow);

#ifdef __MSL_LONGLONG_SUPPORT__              /*mm 970110*/
extern unsigned long long   __strtoull( int     base, 
                                        int     max_width,
                                        int (*ReadProc)(void *, int, int),          /* mm 990325 */
                                        void * ReadProcArg,                         /* mm 990325 */
                                        int * chars_scanned,
                                        int * negative,
                                        int * overflow);
#endif   /*__MSL_LONGLONG_SUPPORT__*/        /*mm 970110*/

#ifdef __cplusplus          /*hh 971206  expanded __extern macro*/
    }
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif

/*     Change record
mm 970110  Changed wrappers for long long support
hh 971206  namespace support added
hh 990121 Fixed __std 2 places
*  mm 990325    Changes to prototypes to allow use of input functions passed by pointer
*/
```


