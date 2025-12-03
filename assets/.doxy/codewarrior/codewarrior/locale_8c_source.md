

# File locale.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**locale.c**](locale_8c.md)

[Go to the documentation of this file](locale_8c.md)


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
 *  locale.c
 *
 *  Routines
 *  --------
 *      setlocale
 *      localeconv
 *
 *
 */

#include <locale.h>
#include <limits.h>
#include <string.h>
#include <stddef.h>
#include "lconv.h"

struct lconv __lconv = {
    "."             /* decimal_point            */,
    ""              /* thousands_sep            */,
    ""              /* grouping                 */,
    ""              /* int_curr_symbol          */,
    ""              /* currency_symbol          */,
    ""              /* mon_decimal_point        */,
    ""              /* mon_thousands_sep        */,
    ""              /* mon_grouping             */,
    ""              /* positive_sign            */,
    ""              /* negative_sign            */,
    CHAR_MAX        /* int_frac_digits          */,
    CHAR_MAX        /* frac_digits              */,
    CHAR_MAX        /* p_cs_precedes            */,
    CHAR_MAX        /* p_sep_by_space           */,
    CHAR_MAX        /* n_cs_precedes            */,
    CHAR_MAX        /* n_sep_by_space           */,
    CHAR_MAX        /* p_sign_posn              */,
    CHAR_MAX        /* n_sign_posn              */
};

static struct lconv public_lconv;

char * setlocale(int category, const char *locale)
{
    if (!locale || !strcmp(locale, "C") || !strcmp(locale, ""))
        if (category >= LC_FIRST && category <= LC_LAST)
            return("C");
    
    return(NULL);
}

struct lconv * localeconv(void)
{
    public_lconv = __lconv;
    
    return(&public_lconv);
}

/*  Change Record
 *  12-Jun-95 JFH  First code release.
*/
```


