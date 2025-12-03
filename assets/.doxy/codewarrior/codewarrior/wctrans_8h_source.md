

# File wctrans.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**wctrans.h**](wctrans_8h.md)

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


