

# File mbstring.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**mbstring.c**](mbstring_8c.md)

[Go to the documentation of this file](mbstring_8c.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/07/30 01:01:53 $ 
 *  $Revision: 1.7.4.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  mbstring.c
 *  
 *  Routines
 *  --------
 *      mblen
 *      mbtowc
 *      wctomb
 *      mbstowcs
 *      wcstombs
 *
 *
 *
 */

#pragma ANSI_strict off  /*  990729 vss  empty compilation illegal ANSI */

#ifndef __NO_WIDE_CHAR

#pragma __ANSI_strict reset

#include <stdlib.h>

int mblen(const char * s, size_t n)
{
    return(mbtowc(0, s, n));
}

int mbtowc(wchar_t * pwc, const char * s, size_t n)
{
    if (!s)
        return(0);
    
    if (!n)
        return(-1);
    
    if (pwc)
        *pwc = *s;
    
    if (!*s)
        return(0);
    
    return(1);
}

int wctomb(char * s, wchar_t wchar)
{
    if (!s)
        return(0);
    
    *s = wchar;
    
    return(1);
}

size_t mbstowcs(wchar_t * pwcs, const char * s, size_t n)
{
    size_t  i;
    
    for (i = 0; i < n; i++)
        if (!(*pwcs++ = *s++))
            break;
    
    return(i);
}

size_t wcstombs(char * s, const wchar_t * pwcs, size_t n)
{
    size_t  i;
    
    for (i = 0; i < n; i++)
        if (!(*s++ = *pwcs++))
            break;
    
    return(i);
}

#endif  /*  __NO_WIDE_CHAR  */

/*  Change Record
 *  24-Jul-95 JFH  First code release.
 *  990624  vss  protect for wide characters
*/
```


