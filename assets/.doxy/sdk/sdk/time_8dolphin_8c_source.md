

# File time.dolphin.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**time.dolphin.c**](time_8dolphin_8c.md)

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


