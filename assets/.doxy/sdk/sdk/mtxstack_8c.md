

# File mtxstack.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**mtx**](dir_733f8da2b5f5697defdd7b5830b0b7b3.md) **>** [**mtxstack.c**](mtxstack_8c.md)

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
The documentation for this class was generated from the following file `SDK/src/dolphin/mtx/mtxstack.c`

