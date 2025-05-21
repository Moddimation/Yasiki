

# File dispatch.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Portable**](dir_f12ab36a6648fac4ab89605ba9aeecf6.md) **>** [**dispatch.c**](dispatch_8c.md)

[Go to the source code of this file](dispatch_8c_source.md)



* `#include "Portable/dispatch.h"`
* `#include "Portable/msgbuf.h"`
* `#include "Portable/msghndlr.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**DispatchEntry**](struct_dispatch_entry.md) <br> |






## Public Attributes

| Type | Name |
| ---: | :--- |
|  struct [**DispatchEntry**](struct_dispatch_entry.md) | [**gTRKDispatchTable**](#variable-gtrkdispatchtable)   = `/* multi line expression */`<br> |
|  u32 | [**gTRKDispatchTableSize**](#variable-gtrkdispatchtablesize)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDispatchMessage**](#function-trkdispatchmessage) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKInitializeDispatcher**](#function-trkinitializedispatcher) () <br> |




























## Public Attributes Documentation




### variable gTRKDispatchTable 

```C++
struct DispatchEntry gTRKDispatchTable[33];
```




<hr>



### variable gTRKDispatchTableSize 

```C++
u32 gTRKDispatchTableSize;
```




<hr>
## Public Functions Documentation




### function TRKDispatchMessage 

```C++
DSError TRKDispatchMessage (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKInitializeDispatcher 

```C++
DSError TRKInitializeDispatcher () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/MetroTRK/Src/Portable/dispatch.c`

