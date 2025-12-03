

# File clocale

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**clocale**](clocale.md)

[Go to the documentation of this file](clocale.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/01/22 23:40:30 $ 
 *  $Revision: 1.7 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  clocale       hh  971206 filename used to be locale.h
 */
 
#ifndef __clocale__
#define __clocale__

#include <ansi_parms.h>

#ifndef RC_INVOKED   /* hh 971230 */

#pragma options align=native
#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import on
#endif

#ifdef __cplusplus        /* hh  971206 */
    #ifdef _MSL_USING_NAMESPACE
        namespace std {
    #endif
    extern "C" {
#endif

struct lconv {
    char    * decimal_point;
    char    * thousands_sep;
    char    * grouping;
    char    * int_curr_symbol;
    char    * currency_symbol;
    char    * mon_decimal_point;
    char    * mon_thousands_sep;
    char    * mon_grouping;
    char    * positive_sign;
    char    * negative_sign;
    char      int_frac_digits;
    char      frac_digits;
    char      p_cs_precedes;
    char      p_sep_by_space;
    char      n_cs_precedes;
    char      n_sep_by_space;
    char      p_sign_posn;
    char      n_sign_posn;
};

#define LC_FIRST        0

#define LC_COLLATE      0x01  /* hh 980415 Changed values to cooperate with C++ locale */
#define LC_CTYPE        0x02
#define LC_MONETARY     0x04
#define LC_NUMERIC      0x08
#define LC_TIME         0x10
#define LC_MESSAGES     0x20  /* hh 980415 added */
#define LC_ALL          0x3F

#define LC_LAST         LC_ALL

char                    * setlocale(int category, const char *locale);
struct lconv    * localeconv(void);

#ifdef __cplusplus              /* hh  971206 */
    }
    #ifdef _MSL_USING_NAMESPACE
        }
    #endif
#endif

#if defined(__CFM68K__) && !defined(__USING_STATIC_LIBS__)
    #pragma import reset
#endif
#pragma options align=reset

#endif /* RC_INVOKED */

#endif /* __clocale__ */
/*     Change record
 * hh  971206 Changed filename from locale.h to clocale and added namespace support.
 * hh 971230 added RC_INVOKED wrapper
*/
```


