

# File MWMemory.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Inc**](dir_192ee455ef94b5a11e62d491224058e4.md) **>** [**MWMemory.h**](_m_w_memory_8h.md)

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


