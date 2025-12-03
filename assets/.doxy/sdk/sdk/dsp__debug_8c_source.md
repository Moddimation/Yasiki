

# File dsp\_debug.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**dsp**](dir_37785f48a74f821d91c9dd23d9dd1487.md) **>** [**dsp\_debug.c**](dsp__debug_8c.md)

[Go to the documentation of this file](dsp__debug_8c.md)


```C++
#include <dolphin/dsp.h>

#include "dsp_private.h"

// this is duplicated from dsp.c
DSPTaskInfo* __DSP_first_task;
DSPTaskInfo* __DSP_last_task;
DSPTaskInfo* __DSP_curr_task;
DSPTaskInfo* __DSP_tmp_task;

void
__DSP_debug_printf (const char* fmt, ...)
{}

DSPTaskInfo*
__DSPGetCurrentTask (void)
{
    return __DSP_curr_task;
}
```


