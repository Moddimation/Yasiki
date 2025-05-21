

# File small\_string.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**PPC\_EABI**](dir_f6c4adf010e56356cc06c08ce198f64b.md) **>** [**SRC**](dir_394c6f6a5dc298f674b59e6fead1e53a.md) **>** [**small\_string.c**](small__string_8c.md)

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


