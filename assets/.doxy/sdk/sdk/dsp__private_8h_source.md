

# File dsp\_private.h

[**File List**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**dsp**](dir_0a4192dfc5ccfb7b9712b3f4e28b673b.md) **>** [**dsp\_private.h**](dsp__private_8h.md)

[Go to the documentation of this file](dsp__private_8h.md)


```C++
#ifndef _DOLPHIN_DSP_INTERNAL_H_
#define _DOLPHIN_DSP_INTERNAL_H_

#include <dolphin/dsp.h>

#ifdef __cplusplus
extern "C"
{
#endif

extern DSPTaskInfo* __DSP_curr_task;
extern DSPTaskInfo* __DSP_last_task;
extern DSPTaskInfo* __DSP_first_task;

void __DSPHandler (__OSInterrupt, OSContext*);
void __DSP_exec_task (DSPTaskInfo*, DSPTaskInfo*);
void __DSP_boot_task (DSPTaskInfo*);
void __DSP_insert_task (DSPTaskInfo*);
void __DSP_add_task (DSPTaskInfo* task);
void __DSP_remove_task (DSPTaskInfo* task);
void __DSP_debug_printf (const char* fmt, ...);

#ifdef __cplusplus
}
#endif

#endif
```


