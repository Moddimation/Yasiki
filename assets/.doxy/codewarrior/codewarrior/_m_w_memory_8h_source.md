

# File MWMemory.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Runtime**](dir_ab14c6633277f31934f3117250613416.md) **>** [**Inc**](dir_897f0b8955620369fec815c20eca3684.md) **>** [**MWMemory.h**](_m_w_memory_8h.md)

[Go to the documentation of this file](_m_w_memory_8h.md)


```C++
/*
 *  MWMemory.h  -   MW runtime suport definitions
 *
 *  Copyright 1995-1999 Metrowerks, Inc.  All rights reserved.
 *
 */

#ifndef __MWMEMORY_H__
#define __MWMEMORY_H__

typedef char *Ptr;
typedef Ptr *Handle;
typedef int OSErr;

extern pascal Handle NewHandle(long dataSize);
extern pascal void DisposeHandle(Handle h);

#endif /* __MWMEMORY_H__ */
```


