

# File dispatch.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Portable**](dir_5cbf840bf773d4847fc83ef20b01209e.md) **>** [**dispatch.c**](dispatch_8c.md)

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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Src/Portable/dispatch.c`

