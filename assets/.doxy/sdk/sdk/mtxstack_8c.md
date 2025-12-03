

# File mtxstack.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**mtx**](dir_26b6e6c4cda21e7491fcc30d526d19d0.md) **>** [**mtxstack.c**](mtxstack_8c.md)

[Go to the source code of this file](mtxstack_8c_source.md)



* `#include <dolphin/mtx.h>`
* `#include <dolphin.h>`
* `#include "fake_tgmath.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**Mtx**](mtx_8h.md#typedef-mtx) \* | [**MTXGetStackPtr**](#function-mtxgetstackptr) ([**MTXStack**](struct_m_t_x_stack.md) \* sPtr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXInitStack**](#function-mtxinitstack) ([**MTXStack**](struct_m_t_x_stack.md) \* sPtr, [**u32**](types_8h.md#typedef-u32) numMtx) <br> |
|  [**Mtx**](mtx_8h.md#typedef-mtx) \* | [**MTXPop**](#function-mtxpop) ([**MTXStack**](struct_m_t_x_stack.md) \* sPtr) <br> |
|  [**Mtx**](mtx_8h.md#typedef-mtx) \* | [**MTXPush**](#function-mtxpush) ([**MTXStack**](struct_m_t_x_stack.md) \* sPtr, [**Mtx**](mtx_8h.md#typedef-mtx) m) <br> |
|  [**Mtx**](mtx_8h.md#typedef-mtx) \* | [**MTXPushFwd**](#function-mtxpushfwd) ([**MTXStack**](struct_m_t_x_stack.md) \* sPtr, [**Mtx**](mtx_8h.md#typedef-mtx) m) <br> |
|  [**Mtx**](mtx_8h.md#typedef-mtx) \* | [**MTXPushInv**](#function-mtxpushinv) ([**MTXStack**](struct_m_t_x_stack.md) \* sPtr, [**Mtx**](mtx_8h.md#typedef-mtx) m) <br> |
|  [**Mtx**](mtx_8h.md#typedef-mtx) \* | [**MTXPushInvXpose**](#function-mtxpushinvxpose) ([**MTXStack**](struct_m_t_x_stack.md) \* sPtr, [**Mtx**](mtx_8h.md#typedef-mtx) m) <br> |




























## Public Functions Documentation




### function MTXGetStackPtr 

```C++
Mtx * MTXGetStackPtr (
    MTXStack * sPtr
) 
```




<hr>



### function MTXInitStack 

```C++
void MTXInitStack (
    MTXStack * sPtr,
    u32 numMtx
) 
```




<hr>



### function MTXPop 

```C++
Mtx * MTXPop (
    MTXStack * sPtr
) 
```




<hr>



### function MTXPush 

```C++
Mtx * MTXPush (
    MTXStack * sPtr,
    Mtx m
) 
```




<hr>



### function MTXPushFwd 

```C++
Mtx * MTXPushFwd (
    MTXStack * sPtr,
    Mtx m
) 
```




<hr>



### function MTXPushInv 

```C++
Mtx * MTXPushInv (
    MTXStack * sPtr,
    Mtx m
) 
```




<hr>



### function MTXPushInvXpose 

```C++
Mtx * MTXPushInvXpose (
    MTXStack * sPtr,
    Mtx m
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/mtx/mtxstack.c`

