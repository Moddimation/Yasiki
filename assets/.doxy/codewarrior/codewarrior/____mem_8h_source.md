

# File \_\_mem.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Runtime**](dir_ab14c6633277f31934f3117250613416.md) **>** [**Inc**](dir_897f0b8955620369fec815c20eca3684.md) **>** [**\_\_mem.h**](____mem_8h.md)

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


