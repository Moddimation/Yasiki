

# File DebuggerDriver.h

[**File List**](files.md) **>** [**DolphinSDK**](dir_589cfa11d4061632acbe4793fd779b59.md) **>** [**include**](dir_7644eedc7175b1a7f62333257b733259.md) **>** [**OdemuExi2**](dir_1c4d0e8e05b17ab1fecdec2b41451b11.md) **>** [**DebuggerDriver.h**](_debugger_driver_8h.md)

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


