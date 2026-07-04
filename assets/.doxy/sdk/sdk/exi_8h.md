

# File exi.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**exi.h**](exi_8h.md)

[Go to the source code of this file](exi_8h_source.md)



* `#include <dolphin/os/OSContext.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**EXICallback**](#typedef-exicallback)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**EXIAttach**](#function-exiattach) ([**s32**](types_8h.md#typedef-s32) channel, [**EXICallback**](_amc_types_8h.md#typedef-exicallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**EXIDeselect**](#function-exideselect) ([**s32**](types_8h.md#typedef-s32) channel) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**EXIDetach**](#function-exidetach) ([**s32**](types_8h.md#typedef-s32) channel) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**EXIDma**](#function-exidma) ([**s32**](types_8h.md#typedef-s32) channel, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**s32**](types_8h.md#typedef-s32) length, [**u32**](types_8h.md#typedef-u32) type, [**EXICallback**](_amc_types_8h.md#typedef-exicallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**EXIGetID**](#function-exigetid) ([**s32**](types_8h.md#typedef-s32) channel, [**u32**](types_8h.md#typedef-u32) device, [**u32**](types_8h.md#typedef-u32) \* id) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**EXIGetState**](#function-exigetstate) ([**s32**](types_8h.md#typedef-s32) channel) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**EXIImm**](#function-exiimm) ([**s32**](types_8h.md#typedef-s32) channel, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**s32**](types_8h.md#typedef-s32) length, [**u32**](types_8h.md#typedef-u32) type, [**EXICallback**](_amc_types_8h.md#typedef-exicallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**EXIImmEx**](#function-exiimmex) ([**s32**](types_8h.md#typedef-s32) channel, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**s32**](types_8h.md#typedef-s32) length, [**u32**](types_8h.md#typedef-u32) type) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIInit**](#function-exiinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**EXILock**](#function-exilock) ([**s32**](types_8h.md#typedef-s32) channel, [**u32**](types_8h.md#typedef-u32) device, [**EXICallback**](_amc_types_8h.md#typedef-exicallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**EXIProbe**](#function-exiprobe) ([**s32**](types_8h.md#typedef-s32) channel) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**EXIProbeEx**](#function-exiprobeex) ([**s32**](types_8h.md#typedef-s32) channel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIProbeReset**](#function-exiprobereset) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**EXISelect**](#function-exiselect) ([**s32**](types_8h.md#typedef-s32) channel, [**u32**](types_8h.md#typedef-u32) device, [**u32**](types_8h.md#typedef-u32) frequency) <br> |
|  [**EXICallback**](_amc_types_8h.md#typedef-exicallback) | [**EXISetExiCallback**](#function-exisetexicallback) ([**s32**](types_8h.md#typedef-s32) channel, [**EXICallback**](_amc_types_8h.md#typedef-exicallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**EXISync**](#function-exisync) ([**s32**](types_8h.md#typedef-s32) channel) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**EXIUnlock**](#function-exiunlock) ([**s32**](types_8h.md#typedef-s32) channel) <br> |




























## Public Types Documentation




### typedef EXICallback 

```C++
typedef void(* EXICallback) (s32 chan, OSContext *context);
```




<hr>
## Public Functions Documentation




### function EXIAttach 

```C++
BOOL EXIAttach (
    s32 channel,
    EXICallback callback
) 
```




<hr>



### function EXIDeselect 

```C++
BOOL EXIDeselect (
    s32 channel
) 
```




<hr>



### function EXIDetach 

```C++
BOOL EXIDetach (
    s32 channel
) 
```




<hr>



### function EXIDma 

```C++
BOOL EXIDma (
    s32 channel,
    void * buffer,
    s32 length,
    u32 type,
    EXICallback callback
) 
```




<hr>



### function EXIGetID 

```C++
s32 EXIGetID (
    s32 channel,
    u32 device,
    u32 * id
) 
```




<hr>



### function EXIGetState 

```C++
u32 EXIGetState (
    s32 channel
) 
```




<hr>



### function EXIImm 

```C++
BOOL EXIImm (
    s32 channel,
    void * buffer,
    s32 length,
    u32 type,
    EXICallback callback
) 
```




<hr>



### function EXIImmEx 

```C++
BOOL EXIImmEx (
    s32 channel,
    void * buffer,
    s32 length,
    u32 type
) 
```




<hr>



### function EXIInit 

```C++
void EXIInit (
    void
) 
```




<hr>



### function EXILock 

```C++
BOOL EXILock (
    s32 channel,
    u32 device,
    EXICallback callback
) 
```




<hr>



### function EXIProbe 

```C++
BOOL EXIProbe (
    s32 channel
) 
```




<hr>



### function EXIProbeEx 

```C++
s32 EXIProbeEx (
    s32 channel
) 
```




<hr>



### function EXIProbeReset 

```C++
void EXIProbeReset (
    void
) 
```




<hr>



### function EXISelect 

```C++
BOOL EXISelect (
    s32 channel,
    u32 device,
    u32 frequency
) 
```




<hr>



### function EXISetExiCallback 

```C++
EXICallback EXISetExiCallback (
    s32 channel,
    EXICallback callback
) 
```




<hr>



### function EXISync 

```C++
BOOL EXISync (
    s32 channel
) 
```




<hr>



### function EXIUnlock 

```C++
BOOL EXIUnlock (
    s32 channel
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/exi.h`

