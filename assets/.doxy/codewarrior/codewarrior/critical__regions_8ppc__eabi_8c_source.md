

# File critical\_regions.ppc\_eabi.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**PPC\_EABI**](dir_f6c4adf010e56356cc06c08ce198f64b.md) **>** [**SRC**](dir_394c6f6a5dc298f674b59e6fead1e53a.md) **>** [**critical\_regions.ppc\_eabi.c**](critical__regions_8ppc__eabi_8c.md)

[Go to the documentation of this file](critical__regions_8ppc__eabi_8c.md)


```C++
/*  Metrowerks Standard Library  Version 2.1.2b6  1997 April  */

/*
 *  critical_regions.mac.c
 *  
 *      Copyright 1995-1996 Metrowerks, Inc.
 *      All rights reserved.
 *  
 *  Routines
 *  --------
 *      __init_critical_regions
 *      __begin_critical_region
 *      __end_critical_region
 *
 *  Implementation
 *  --------------
 *
 *      For the Mac, these routines are mere stubs. The Thread Manager doesn't
 *      support preemptive threads and the ANSI library code will never yield
 *      cooperatively - ever, much less during critical regions. Interrupt-level
 *      exclusion is not addressed because it is too fraught with the danger of
 *      deadlock.
 *
 *
 */

#include "critical_regions.h"

void __init_critical_regions(void)
{
}

void __kill_critical_regions(void)
{
}

#if _MWMT
void __begin_critical_region(int region)
{
#pragma unused(region)
}

void __end_critical_region(int region)
{
#pragma unused(region)
}
#endif

/*  Change Record
 *  16-Oct-95 JFH  First code release.
 *  990811  mea added _MWMT condition
*/
```


