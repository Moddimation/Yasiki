

# File OSReset.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSReset.h**](_o_s_reset_8h.md)

[Go to the documentation of this file](_o_s_reset_8h.md)


```C++
#ifndef _DOLPHIN_OSRESET_H_
#define _DOLPHIN_OSRESET_H_

#include <types.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define OS_RESET_RESTART  0
#define OS_RESET_HOTRESET 1
#define OS_RESET_SHUTDOWN 2

struct OSResetFunctionQueue
{
    struct OSResetFunctionInfo* head;
    struct OSResetFunctionInfo* tail;
};

typedef BOOL (*OSResetFunction) (BOOL);

typedef struct OSResetFunctionInfo OSResetFunctionInfo;

struct OSResetFunctionInfo
{
    OSResetFunction      func;
    u32                  priority;
    OSResetFunctionInfo* next;
    OSResetFunctionInfo* prev;
};

void OSRegisterResetFunction (OSResetFunctionInfo* info);
void OSUnregisterResetFunction (OSResetFunctionInfo* info);
void OSResetSystem (int reset, u32 resetCode, BOOL forceMenu);
u32  OSGetResetCode ();

#ifdef __cplusplus
}
#endif

#endif
```


