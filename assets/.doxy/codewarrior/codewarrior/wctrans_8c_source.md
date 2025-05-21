

# File wctrans.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**wctrans.c**](wctrans_8c.md)

[Go to the documentation of this file](wctrans_8c.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/07/30 01:02:54 $ 
 *  $Revision: 1.7.4.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */
 
/*
 *  wctrans.c
 *  
 *  Routines
 *  --------
 *  
 *  towctrans
 *  wctrans
 *
*/

#pragma ANSI_strict off  /*  990729 vss  empty compilation unit illegal in ANSI C */

#ifndef __NO_WIDE_CHAR              /* mm 980204 */
 
#pragma ANSI_strict reset

#include <wctrans.h>

static const struct wctable 
{
    const char *string;
    wctype_t    value;
} 

wtable[] = 
{
    {"tolower", 0},
    {"toupper", 1},
    {(const char *)0, 0}
};

wint_t towctrans(wint_t c, wctrans_t value)
{
    return (value == 1 ? towupper(c) : towlower(c));
}

wctrans_t wctrans(const char *name)
{
    int i;
    
    for(i=0; wtable[i].string != 0; ++i)
    {
        if(strcmp(wtable[i].string, name) == 0)
        {
            return (wtable[i].value);
        }
    
    }

    return 0;
}

#endif /* #ifndef __NO_WIDE_CHAR */        /* 981030 */

/*  Change Record
 *  980126 JCM  First code release.
 * mm 981030  Added #ifndef __NO_WIDE_CHAR wrappers
*/
```


