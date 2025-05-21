

# File wctrans.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**wctrans.h**](wctrans_8h.md)

[Go to the documentation of this file](wctrans_8h.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/07/30 00:51:07 $ 
 *  $Revision: 1.7.4.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  mem_funcs.h
 */
 
#ifndef __wctrans_h__
#define __wctrans_h__

#include <ansi_parms.h>                 /* mm 970905*/

#ifndef __NO_WIDE_CHAR  /*  990624 vss  */

#include <cstring>

#include <cwchar>
#include <cwctype>

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

typedef wchar_t wctrans_t;

/* extern prototypes */

wint_t      towctrans(wint_t c, wctrans_t value);
wctrans_t   wctrans(const char *name);

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

#endif  /*  NO_WIDE_CHAR  */

#endif  /* #ifndef __wctrans_h__ */

/*     Change record
 * mm 970905  added include of ansi_parms.h to avoid need for prefix file
 */
 
```


