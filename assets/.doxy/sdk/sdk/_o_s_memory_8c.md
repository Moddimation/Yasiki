

# File OSMemory.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**os**](dir_8207759a5d5564400a58f6bb524771f0.md) **>** [**OSMemory.c**](_o_s_memory_8c.md)

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
The documentation for this class was generated from the following file `SDK/src/dolphin/os/OSMemory.c`

