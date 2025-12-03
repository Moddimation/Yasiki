

# File mbstring.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**mbstring.c**](mbstring_8c.md)

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


