

# File wstdio.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**wstdio.h**](wstdio_8h.md)

[Go to the documentation of this file](wstdio_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/01/22 23:40:32 $ 
 *  $Revision: 1.7 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  wstdio.h
 */

#ifndef __wstdio_h__
#define __wstdio_h__

#include <ansi_parms.h>
#include <cstddef>
#include <cstdio>

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus               /*  hh  971206 */
    #ifdef _MSL_USING_NAMESPACE
        namespace std {
    #endif
    extern "C" {
#endif

/* extern prototypes */

wchar_t putwc(wchar_t c, FILE * file);                                                              
wchar_t fputwc(wchar_t c, FILE * file);                                                             
wchar_t getwc(FILE * file);                                                                         
wchar_t fgetwc(FILE * file);                                                                        
int     fputws(const wchar_t * s, FILE * file);
wchar_t *fgetws(wchar_t * s, int n, FILE * file);
wchar_t putwchar(wchar_t c);                                                                        
wchar_t getwchar(void);     

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

#endif /* ifndef __wstdio_h__ */

/*  Change Record
 *  980121  JCM  First code release.
 */
 
```


