

# File dsp\_debug.c

[**File List**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**dsp**](dir_0a4192dfc5ccfb7b9712b3f4e28b673b.md) **>** [**dsp\_debug.c**](dsp__debug_8c.md)

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


