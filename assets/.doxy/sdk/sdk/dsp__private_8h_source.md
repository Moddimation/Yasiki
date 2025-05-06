

# File dsp\_private.h

[**File List**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**dsp**](dir_2b383f91e1d643b9208f9f190fe59d53.md) **>** [**dsp\_private.h**](dsp__private_8h.md)

[Go to the documentation of this file](dsp__private_8h.md)


```C++
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
```


