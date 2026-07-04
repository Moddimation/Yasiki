

# File dsp\_private.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**dsp**](dir_37785f48a74f821d91c9dd23d9dd1487.md) **>** [**dsp\_private.h**](dsp__private_8h.md)

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


