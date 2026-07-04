

# File DebuggerDriver.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**OdemuExi2**](dir_a6845862282e3a780646b391adbdaf4e.md) **>** [**DebuggerDriver.h**](_debugger_driver_8h.md)

[Go to the documentation of this file](_debugger_driver_8h.md)


```C++
#ifndef ODEMUEXI_DEBUGGER_DRIVER_H
#define ODEMUEXI_DEBUGGER_DRIVER_H

#include <dolphin/os.h>

#ifdef __cplusplus
extern "C"
{
#endif

int Hu_IsStub ();

void DBInitComm (volatile u8** param_1, __OSInterruptHandler param_2);
void DBInitInterrupts (void);
u32  DBQueryData (void);
int  DBRead (void* data, u32 size);
int  DBWrite (const void* data, u32 size);
void DBOpen (void);
void DBClose (void);

#ifdef __cplusplus
}
#endif

#endif
```


