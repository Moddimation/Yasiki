

# File CARDMount.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDMount.c**](_c_a_r_d_mount_8c.md)

[Go to the source code of this file](_c_a_r_d_mount_8c_source.md)



* `#include <dolphin.h>`
* `#include <dolphin/card.h>`
* `#include <dolphin/exi.h>`
* `#include "../os/OSPrivate.h"`
* `#include "CARDPrivate.h"`
* `#include "dolphin/os/OSAlarm.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**LatencyTable**](#variable-latencytable)   = `/* multi line expression */`<br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SectorSizeTable**](#variable-sectorsizetable)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDMount**](#function-cardmount) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* workArea, [**CARDCallback**](card_8h.md#typedef-cardcallback) detachCallback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDMountAsync**](#function-cardmountasync) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* workArea, [**CARDCallback**](card_8h.md#typedef-cardcallback) detachCallback, [**CARDCallback**](card_8h.md#typedef-cardcallback) attachCallback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**CARDProbe**](#function-cardprobe) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDProbeEx**](#function-cardprobeex) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) \* memSize, [**s32**](types_8h.md#typedef-s32) \* sectorSize) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDUnmount**](#function-cardunmount) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDMountCallback**](#function-__cardmountcallback) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) result) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**DoMount**](#function-domount) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DoUnmount**](#function-dounmount) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) v) <br> |


























## Public Static Attributes Documentation




### variable LatencyTable 

```C++
u32 LatencyTable[8];
```




<hr>



### variable SectorSizeTable 

```C++
u32 SectorSizeTable[8];
```




<hr>
## Public Functions Documentation




### function CARDMount 

```C++
s32 CARDMount (
    s32 chan,
    void * workArea,
    CARDCallback detachCallback
) 
```




<hr>



### function CARDMountAsync 

```C++
s32 CARDMountAsync (
    s32 chan,
    void * workArea,
    CARDCallback detachCallback,
    CARDCallback attachCallback
) 
```




<hr>



### function CARDProbe 

```C++
BOOL CARDProbe (
    s32 chan
) 
```




<hr>



### function CARDProbeEx 

```C++
s32 CARDProbeEx (
    s32 chan,
    s32 * memSize,
    s32 * sectorSize
) 
```




<hr>



### function CARDUnmount 

```C++
s32 CARDUnmount (
    s32 chan
) 
```




<hr>



### function \_\_CARDMountCallback 

```C++
void __CARDMountCallback (
    s32 chan,
    s32 result
) 
```




<hr>
## Public Static Functions Documentation




### function DoMount 

```C++
static s32 DoMount (
    s32 chan
) 
```




<hr>



### function DoUnmount 

```C++
static void DoUnmount (
    s32 chan,
    s32 v
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDMount.c`

