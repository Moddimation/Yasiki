

# File \_\_mem.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Inc**](dir_192ee455ef94b5a11e62d491224058e4.md) **>** [**\_\_mem.h**](____mem_8h.md)

[Go to the documentation of this file](____mem_8h.md)


```C++
/****************************************************************************/
/*

FILE
    __mem.h
    
DESCRIPTION
    
    Standalone Standard C Library Implementation for memory operations.
    This is a target-specific implementation for PowerPC.  It will
    probably work for other target processors as well, but this one
    has been improved specifically for PowerPC.
    
    memcpy and memset are  put into the .init section so that they will
    be available for use in copying sections (e.g. .text) from rom into ram.
    
    Derived from MSL C (CodeWarrior 10).
    
    __memcpy
    __memset

COPYRIGHT

    (c) 1996-7 Metrowerks Corporation
    All rights reserved.
    
*/
/****************************************************************************/

#pragma once

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#pragma section code_type ".init"

void * memcpy(void * dst, const void * src, size_t n);
void * memset(void * dst, int val, size_t n);
void __fill_mem(void * dst, int val, unsigned long n);

#pragma section code_type

#ifdef __cplusplus
}
#endif
```


