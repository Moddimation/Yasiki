

# File locale.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**locale.c**](locale_8c.md)

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


