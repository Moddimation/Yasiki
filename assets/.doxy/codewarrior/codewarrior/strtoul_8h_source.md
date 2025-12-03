

# File strtoul.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**strtoul.h**](strtoul_8h.md)

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


