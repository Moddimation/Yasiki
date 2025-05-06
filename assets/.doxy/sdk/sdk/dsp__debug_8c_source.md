

# File dsp\_debug.c

[**File List**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**dsp**](dir_2b383f91e1d643b9208f9f190fe59d53.md) **>** [**dsp\_debug.c**](dsp__debug_8c.md)

[Go to the documentation of this file](dsp__debug_8c.md)


```C++
#include <dolphin/dsp.h>

#include "DSPPrivate.h"

// this is duplicated from dsp.c
DSPTaskInfo* __DSP_first_task;
DSPTaskInfo* __DSP_last_task;
DSPTaskInfo* __DSP_curr_task;
DSPTaskInfo* __DSP_tmp_task;

void
__DSP_debug_printf (const char* fmt, ...)
{
}

DSPTaskInfo*
__DSPGetCurrentTask (void)
{
    return __DSP_curr_task;
}
```


