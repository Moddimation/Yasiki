

# File critical\_regions.ppc\_eabi.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**PPC\_EABI**](dir_c1d1bd04e3565fc1d2309a4becb25213.md) **>** [**SRC**](dir_618995e550e2af44021355ee08c1ffde.md) **>** [**critical\_regions.ppc\_eabi.c**](critical__regions_8ppc__eabi_8c.md)

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


