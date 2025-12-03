

# File rand.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**rand.c**](rand_8c.md)

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


