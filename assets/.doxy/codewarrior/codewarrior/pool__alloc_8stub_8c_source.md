

# File pool\_alloc.stub.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**PPC\_EABI**](dir_c1d1bd04e3565fc1d2309a4becb25213.md) **>** [**SRC**](dir_618995e550e2af44021355ee08c1ffde.md) **>** [**pool\_alloc.stub.c**](pool__alloc_8stub_8c.md)

[Go to the documentation of this file](pool__alloc_8stub_8c.md)


```C++
/*  Metrowerks Standard Library  Version 2.1.2  1997 May  */

/*
 *  pool_alloc.stub.c
 *  
 *      Copyright 1995-1997 Metrowerks, Inc.
 *      All rights reserved.
 *  
 *  Routines
 *  --------
 *      __sys_alloc
 *      __sys_free
 *
 *  Note
 *  ----
 *
 *      These routines, being platform-specific, were split off of pool_alloc.c.
 *  
 *
 */

// Include your OS dependent include files
#include "pool_alloc.h"

#ifdef _No_Alloc_OS_Support
#error pool_alloc.stub.c can't be in your project if _No_Alloc_OS_Support is defined.
#endif

void * __sys_alloc(__std(size_t) size)
{
    return 0; // replace 0 with a call to your OS'es allocator
}

void __sys_free(void *ptr)
{
    // replace 0 with a call to your OS'es deallocator
}
/*  Change Record
 *  20-Jul-97 MEA  First code release.
*/
```


