

# File dsp.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**dsp.h**](dsp_8h.md)

[Go to the documentation of this file](dsp_8h.md)


```C++
#ifndef _DOLPHIN_DSP_H_
#define _DOLPHIN_DSP_H_

#include <dolphin/os.h>

typedef void (*DSPCallback) (void* task);

typedef struct STRUCT_DSP_TASK
{
    volatile u32            state;             
    volatile u32            priority;          
    volatile u32            flags;             
    u16*                    iram_mmem_addr;    
    u32                     iram_length;       
    u32                     iram_addr;         
    u16*                    dram_mmem_addr;    
    u32                     dram_length;       
    u32                     dram_addr;         
    u16                     dsp_init_vector;   
    u16                     dsp_resume_vector; 
    DSPCallback             init_cb;           
    DSPCallback             res_cb;            
    DSPCallback             done_cb;           
    DSPCallback             req_cb;            
    struct STRUCT_DSP_TASK* next;              
    struct STRUCT_DSP_TASK* prev;              
    OSTime                  t_context;
    OSTime                  t_task;
} DSPTaskInfo;

u32          DSPCheckMailToDSP (void);
u32          DSPCheckMailFromDSP (void);
u32          DSPReadCPUToDSPMbox (void);
u32          DSPReadMailFromDSP (void);
void         DSPSendMailToDSP (u32 mail);
void         DSPAssertInt (void);
void         DSPInit (void);
BOOL         DSPCheckInit (void);
void         DSPReset (void);
void         DSPHalt (void);
void         DSPUnhalt (void);
u32          DSPGetDMAStatus (void);
DSPTaskInfo* DSPAddTask (DSPTaskInfo* task);
DSPTaskInfo* DSPCancelTask (DSPTaskInfo* task);
DSPTaskInfo* DSPAssertTask (DSPTaskInfo* task);

DSPTaskInfo* __DSPGetCurrentTask (void);

#endif
```


