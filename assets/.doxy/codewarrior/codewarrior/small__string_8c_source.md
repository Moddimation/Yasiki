

# File small\_string.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**PPC\_EABI**](dir_c1d1bd04e3565fc1d2309a4becb25213.md) **>** [**SRC**](dir_618995e550e2af44021355ee08c1ffde.md) **>** [**small\_string.c**](small__string_8c.md)

[Go to the documentation of this file](small__string_8c.md)


```C++
/*  Metrowerks Standard Library  Version 2.1.2  1997 May  */

/*
 *  string.c
 *  
 *      Copyright 1995-1998 Metrowerks, Inc.
 *      All rights reserved.
 *  
 *  Routines
 *  --------
 *      strcpy
 *      strcmp
 *
 *
 */

#include <string.h>

#if (__dest_os  != __ppc_eabi)
    #error
#endif

#pragma warn_possunwant off

char * (strcpy)(char * dst, const char * src)
{
    
    const   unsigned char * p = (unsigned char *) src - 1;
    unsigned char * q = (unsigned char *) dst - 1;
    
    while (*++q = *++p);
    
    return(dst);
}

int strcmp(const char * str1, const char * str2)
{
    
    const   unsigned char * p1 = (unsigned char *) str1 - 1;
    const   unsigned char * p2 = (unsigned char *) str2 - 1;
    unsigned long       c1, c2;
        
    while ((c1 = *++p1) == (c2 = *++p2))
        if (!c1)
            return(0);

    return(c1 - c2);

}


#pragma warn_possunwant reset

/*  Change Record
 *  980320  MEA     Created.
 */
```


