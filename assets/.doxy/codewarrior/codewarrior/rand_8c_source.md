

# File rand.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**rand.c**](rand_8c.md)

[Go to the documentation of this file](rand_8c.md)


```C++
/*  Metrowerks Standard Library  */

/*  $Date: 1999/03/09 17:42:15 $ 
 *  $Revision: 1.10 $ 
 *  $NoKeywords: $ 
 *
 *      Copyright 1995-1999 Metrowerks, Inc.
 *      All rights reserved.
 */

/*
 *  rand.c
 *  
 *  Routines
 *  --------
 *      rand
 *      srand
 *
 *  Note
 *  ----
 *
 *      This is exactly the function described in the standard, including the
 *      assumption that RAND_MAX == 32767.
 *
 *
 */

#include <stdlib.h>

#if _MWMT && (__dest_os == __win32_os || __dest_os  == __wince_os)
    #include <ThreadLocalData.h>
#else

    __tls static unsigned long int next = 1;

#endif

int rand(void)
{
#if _MWMT && (__dest_os == __win32_os || __dest_os  == __wince_os)
    _GetThreadLocalData()->random_next =
            _GetThreadLocalData()->random_next * 1103515245 + 12345;
    return((_GetThreadLocalData()->random_next >> 16) & 0x7FFF);
#else
    next = next * 1103515245 + 12345;
    return((next >> 16) & 0x7FFF);
#endif
}

void srand(unsigned int seed)
{
#if _MWMT && (__dest_os == __win32_os || __dest_os  == __wince_os)
    _GetThreadLocalData()->random_next = seed;
#else
    next = seed;
#endif
}

/*  Change Record
 *  07-Jun-95 JFH  First code release.
 *  29-Apr-96 JFH  Merged Win32 changes in.
 *                      CTV
 *  19-Dec-96   KO      Changed this file to use the thread local data structure instead
 *                      of a global.
 * mf  980512       wince changes
 * mf  990309       use _MWMT instead of _MT for single threaded lib
*/
```


