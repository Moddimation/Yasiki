

# File time.stub.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**PPC\_EABI**](dir_c1d1bd04e3565fc1d2309a4becb25213.md) **>** [**SRC**](dir_618995e550e2af44021355ee08c1ffde.md) **>** [**time.stub.c**](time_8stub_8c.md)

[Go to the documentation of this file](time_8stub_8c.md)


```C++
/*  Metrowerks Standard Library  Version 2.1.2  1997 May  */

/*
 *  time.mac.c
 *  
 *      Copyright 1995-1997 Metrowerks, Inc.
 *      All rights reserved.
 *  
 *  Routines
 *  --------
 *      __get_clock
 *      __get_time
 *
 *      __to_gm_time
 *
 *
 */

// Include your OS dependent include files
#include <time.h>

#ifdef _No_Time_OS_Support
#error time.stub.c can't be in your project if _No_Time_OS_Support is defined.
#endif

clock_t __get_clock(void)
{
    return 0; // replace with an OS call.
}

time_t __get_time(void)
{
    return 0; // replace with an OS call.
}

int __to_gm_time(time_t * time)
{
    return 0; // replace with an OS call.
}
/*  Change Record
 *  20-Jul-97 MEA  First code release.
*/
```


