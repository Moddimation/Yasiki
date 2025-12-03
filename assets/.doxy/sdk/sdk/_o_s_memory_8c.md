

# File OSMemory.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSMemory.c**](_o_s_memory_8c.md)

[Go to the source code of this file](_o_s_memory_8c_source.md)



* `#include "dolphin/types.h"`
* `#include <dolphin/dvd.h>`
* `#include <dolphin/os.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) [**\_\_OSPhysicalMemSize**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AT\_ADDRESS**](#function-at_address) ([**OS\_BASE\_CACHED**](os_8h.md#define-os_base_cached)\| 0x0028) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetConsoleSimulatedMemSize**](#function-osgetconsolesimulatedmemsize) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetPhysicalMemSize**](#function-osgetphysicalmemsize) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |




























## Public Functions Documentation




### function AT\_ADDRESS 

```C++
u32  __OSPhysicalMemSize AT_ADDRESS (
    OS_BASE_CACHED | 0x0028
) 
```




<hr>



### function OSGetConsoleSimulatedMemSize 

```C++
u32 OSGetConsoleSimulatedMemSize (
    void
) 
```




<hr>



### function OSGetPhysicalMemSize 

```C++
u32 OSGetPhysicalMemSize (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSMemory.c`

