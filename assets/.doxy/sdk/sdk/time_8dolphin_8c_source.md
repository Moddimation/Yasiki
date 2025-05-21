

# File time.dolphin.c

[**File List**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**os**](dir_2110adc24753dd29d2ec0361943e7a71.md) **>** [**time.dolphin.c**](time_8dolphin_8c.md)

[Go to the documentation of this file](time_8dolphin_8c.md)


```C++
#include <dolphin/os.h>

#include "OSPrivate.h"

s64
__get_clock (void)
{
    return -1;
}

u32
__get_time (void)
{
    return (u32)OSTicksToSeconds (OSGetTime()) - 0x43E83E00;
}

int
__to_gm_time ()
{
    return 0;
}
```


