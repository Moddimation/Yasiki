

# File wcstoul.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**wcstoul.h**](wcstoul_8h.md)

[Go to the documentation of this file](wcstoul_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/07/30 00:50:26 $ 
 *  $Revision: 1.8.4.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  wcstoul.h
 */
 
#ifndef __wcstoul__
#define __wcstoul__
#ifndef __NO_WIDE_CHAR

#include <ansi_parms.h>
#include <cstdio>          /*hh 971206  changed from stdio.h*/

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus          /*hh 971206  namespace support*/
    extern "C" {
#endif

extern unsigned long        __wcstoul(  int base, 
                                        int     max_width,
                                        __std(wint_t) (*ReadProc)(void *, __std(wint_t), int),  /* mm 990326, hh 990507 */
                                        void * ReadProcArg,                         /* mm 990326 */
                                        int * chars_scanned,
                                        int * negative,
                                        int * overflow);

#ifdef __MSL_LONGLONG_SUPPORT__              /*mm 970110*/
extern unsigned long long   __wcstoull( int base, 
                                        int     max_width,
                                        __std(wint_t) (*ReadProc)(void *, __std(wint_t), int),  /* mm 990326, hh 990507 */
                                        void * ReadProcArg,                         /* mm 990326 */
                                        int * chars_scanned,
                                        int * negative,
                                        int * overflow);
#endif   /*__MSL_LONGLONG_SUPPORT__*/        /*mm 970110*/

#ifdef __cplusplus          /*hh 971206  expanded __extern macro*/
    }
#endif

#ifdef __cplusplus
    #ifdef _MSL_USING_NAMESPACE
        namespace std {
    #endif
    extern "C" {
#endif

/* prototypes */

unsigned long       wcstoul (const wchar_t * str, wchar_t ** end, int base);
#ifdef __MSL_LONGLONG_SUPPORT__                 /* mm 981023 */
unsigned long long  wcstoull(const wchar_t * str, wchar_t ** end, int base);
long long           wcstoll (const wchar_t * str, wchar_t ** end, int base);
#endif  /* #ifdef __MSL_LONGLONG_SUPPORT__  */  /* mm 981023 */
long                wcstol  (const wchar_t * str, wchar_t ** end, int base);
int                 watoi   (const wchar_t * str);
long                watol   (const wchar_t * str);

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

#endif /* __NO_WIDE_CHAR  */
#endif /* #ifndef __wcstoul__ */

/*     Change record
 * mm 970110  Changed wrappers for long long support
 * hh 971206  namespace support added
 * blc 980324 fixed prototypes for C9X conformance
 * mm 981023 added wrappers round long long support
 * hh 990121 Fixed __std 2 places
 *  mm 990326   Prototype changes to allow splitting of string functions from file i/o
 * hh 990507 Wrapped wint_t up in __std(), 4 places
  */
```


