

# File OSReset.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSReset.h**](_o_s_reset_8h.md)

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


