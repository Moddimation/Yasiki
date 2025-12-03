

# File wctrans.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**wctrans.c**](wctrans_8c.md)

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


