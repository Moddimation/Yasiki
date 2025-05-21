

# File time.stub.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**PPC\_EABI**](dir_f6c4adf010e56356cc06c08ce198f64b.md) **>** [**SRC**](dir_394c6f6a5dc298f674b59e6fead1e53a.md) **>** [**time.stub.c**](time_8stub_8c.md)

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


