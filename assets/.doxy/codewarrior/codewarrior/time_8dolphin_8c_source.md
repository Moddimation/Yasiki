

# File time.dolphin.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**PPC\_EABI**](dir_f6c4adf010e56356cc06c08ce198f64b.md) **>** [**SRC**](dir_394c6f6a5dc298f674b59e6fead1e53a.md) **>** [**time.dolphin.c**](time_8dolphin_8c.md)

[Go to the documentation of this file](time_8dolphin_8c.md)


```C++
/*---------------------------------------------------------------------------*
  Project:  Dolphin MSL time suppert
  File:     time.dolphin.c

  Copyright 2000 Nintendo.  All rights reserved.

  These coded instructions, statements, and computer programs contain
  proprietary information of Nintendo of America Inc. and/or Nintendo
  Company Ltd., and are protected by Federal copyright law.  They may
  not be disclosed to third parties or copied or duplicated in any form,
  in whole or in part, without the prior written consent of Nintendo.

  $Log: time.dolphin.c,v $
  Revision 1.1.2.1  2000/10/30 22:27:33  swells
  Updates for R1.0

  $NoKeywords: $
 *---------------------------------------------------------------------------*/
/*  Metrowerks Standard Library  Version 2.1.2  1997 May  */

// Include your OS dependent include files
#include <time.h>

// This has a dependency on the Dolphin OS existing
// OS.h is needed to get OS_TIMER_CLOCK and OSTicksToSeconds.
// swells on 08-22-00
#include <dolphin/os.h>

#define BIAS    ((100 * 365LU + 24) * 86400)    // Dolphin counts since midnight, 1/1/2000

// __get_clock returns the processor time used so far
// Dolphin returns -1 for now. Use OSGetTick or OSGetTime instead.
clock_t __get_clock(void)
{
   return (clock_t) -1;
}

// __get_time returns the current calendar time in seconds since midnight, 1/1/1900
time_t __get_time(void)
{
    return (time_t) (OSTicksToSeconds(OSGetTime())) + BIAS;
}

// Dolphin does not support time zone and just returns 0
int __to_gm_time(time_t* time)
{
    #pragma unused (time)
    return 0;
}
```


