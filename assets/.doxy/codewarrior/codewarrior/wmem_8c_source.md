

# File wmem.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**wmem.c**](wmem_8c.md)

[Go to the documentation of this file](wmem_8c.md)


```C++
/*  Metrowerks Standard Library   */

/*  $Date: 1999/07/30 01:02:54 $ 
 *  $Revision: 1.8.4.1 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */
 
/*
 *  wcmem.c
 *  
 *  Routines
 *  --------
 *      wmemcpy
 *      wmemmove
 *      wmemset
 *      wmemchr
 *      wmemcmp
 *  
 *
*/

#pragma ANSI_strict off  /*  990729 vss  empty compilation unit illegal in ANSI C */

#ifndef __NO_WIDE_CHAR              /* mm 980204 */
 
#pragma ANSI_strict reset

#include <string.h>
#include <wchar.h>

wchar_t * (wmemcpy)(wchar_t * dst, const wchar_t * src, size_t n)
{
    return memcpy(dst, src, n * 2);
}
    
wchar_t * (wmemmove)(wchar_t * dst, const wchar_t * src, size_t n)
{
    return memmove(dst, src, n * 2);
}

wchar_t * (wmemset)(wchar_t * dst, wchar_t val, size_t n)
{
    wchar_t *save = dst;
    
    while (n)
    {
        *dst++ = val;
        n--;
    }
    
    return(dst);
}

wchar_t * (wmemchr)(const wchar_t * src, wchar_t val, size_t n)
{
    while (n)
    {
        if (*src == val) return (wchar_t *) src;
        src++;
        n--;
    }
    
    return(NULL);
}

int (wmemcmp)(const wchar_t * src1, const wchar_t * src2, size_t n)
{
    wchar_t diff;

    while (n)
    {
        diff = *src1 - *src2;
        if (diff) break;
        src1++;
        src2++;
        n--;
    }

    return(diff);
}

#endif /* #ifndef __NO_WIDE_CHAR */             /* mm 981030 */

/*  Change Record
 * jcm 980126  First code release.
 * mm  980909  Corrected prototypes to refer to wchar_t* instead of void*
 * mm  981030  Added #ifndef __NO_WIDE_CHAR wrappers
 * mm  981111  Corrected wmemchr() and wmemcmp() to return a meaningful result 
               and wmemset to work correctly---IL9811-0490  
 * blc 990112 Fixed all the implementation so they actually worked
*/
```


