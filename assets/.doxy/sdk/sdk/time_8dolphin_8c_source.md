

# File time.dolphin.c

[**File List**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**os**](dir_8207759a5d5564400a58f6bb524771f0.md) **>** [**time.dolphin.c**](time_8dolphin_8c.md)

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


