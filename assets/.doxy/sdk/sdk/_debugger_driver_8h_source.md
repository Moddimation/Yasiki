

# File DebuggerDriver.h

[**File List**](files.md) **>** [**include**](dir_4fe8a5edf869208696d37e8a40956a24.md) **>** [**OdemuExi2**](dir_efe674220f21251f42a90eb495d2fb7e.md) **>** [**DebuggerDriver.h**](_debugger_driver_8h.md)

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


