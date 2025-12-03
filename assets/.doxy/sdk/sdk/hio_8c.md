

# File hio.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**hio**](dir_82a3697ba9bf7d96fa9fa5802fe18e01.md) **>** [**hio.c**](hio_8c.md)

[Go to the source code of this file](hio_8c_source.md)



* `#include <macros.h>`
* `#include <dolphin/exi.h>`
* `#include <dolphin/hio.h>`
* `#include <dolphin/hw_regs.h>`
* `#include <dolphin/os.h>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**Chan**](#variable-chan)   = `-1`<br> |
|  [**HIOCallback**](hio_8h.md#typedef-hiocallback) | [**ExiCallback**](#variable-exicallback)  <br> |
|  [**HIOCallback**](hio_8h.md#typedef-hiocallback) | [**RxCallback**](#variable-rxcallback)  <br> |
|  [**HIOCallback**](hio_8h.md#typedef-hiocallback) | [**TxCallback**](#variable-txcallback)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**HIOEnumDevices**](#function-hioenumdevices) ([**HIOEnumCallback**](hio_8h.md#typedef-hioenumcallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**HIOInit**](#function-hioinit) ([**s32**](types_8h.md#typedef-s32) chan, [**HIOCallback**](hio_8h.md#typedef-hiocallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**HIORead**](#function-hioread) ([**u32**](types_8h.md#typedef-u32) addr, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**s32**](types_8h.md#typedef-s32) size) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**HIOReadAsync**](#function-hioreadasync) ([**u32**](types_8h.md#typedef-u32) addr, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**s32**](types_8h.md#typedef-s32) size, [**HIOCallback**](hio_8h.md#typedef-hiocallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**HIOReadMailbox**](#function-hioreadmailbox) ([**u32**](types_8h.md#typedef-u32) \* word) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**HIOReadStatus**](#function-hioreadstatus) ([**u32**](types_8h.md#typedef-u32) \* status) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**HIOWrite**](#function-hiowrite) ([**u32**](types_8h.md#typedef-u32) addr, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**s32**](types_8h.md#typedef-s32) size) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**HIOWriteAsync**](#function-hiowriteasync) ([**u32**](types_8h.md#typedef-u32) addr, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**s32**](types_8h.md#typedef-s32) size, [**HIOCallback**](hio_8h.md#typedef-hiocallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**HIOWriteMailbox**](#function-hiowritemailbox) ([**u32**](types_8h.md#typedef-u32) word) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DbgHandler**](#function-dbghandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) interrupt, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ExiHandler**](#function-exihandler) ([**s32**](types_8h.md#typedef-s32) chan, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ExtHandler**](#function-exthandler) ([**s32**](types_8h.md#typedef-s32) chan, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**RxHandler**](#function-rxhandler) ([**s32**](types_8h.md#typedef-s32) chan, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**TxHandler**](#function-txhandler) ([**s32**](types_8h.md#typedef-s32) chan, [**OSContext**](struct_o_s_context.md) \* context) <br> |


























## Public Static Attributes Documentation




### variable Chan 

```C++
s32 Chan;
```




<hr>



### variable ExiCallback 

```C++
HIOCallback ExiCallback;
```




<hr>



### variable RxCallback 

```C++
HIOCallback RxCallback;
```




<hr>



### variable TxCallback 

```C++
HIOCallback TxCallback;
```




<hr>
## Public Functions Documentation




### function HIOEnumDevices 

```C++
BOOL HIOEnumDevices (
    HIOEnumCallback callback
) 
```




<hr>



### function HIOInit 

```C++
BOOL HIOInit (
    s32 chan,
    HIOCallback callback
) 
```




<hr>



### function HIORead 

```C++
BOOL HIORead (
    u32 addr,
    void * buffer,
    s32 size
) 
```




<hr>



### function HIOReadAsync 

```C++
BOOL HIOReadAsync (
    u32 addr,
    void * buffer,
    s32 size,
    HIOCallback callback
) 
```




<hr>



### function HIOReadMailbox 

```C++
BOOL HIOReadMailbox (
    u32 * word
) 
```




<hr>



### function HIOReadStatus 

```C++
BOOL HIOReadStatus (
    u32 * status
) 
```




<hr>



### function HIOWrite 

```C++
BOOL HIOWrite (
    u32 addr,
    void * buffer,
    s32 size
) 
```




<hr>



### function HIOWriteAsync 

```C++
BOOL HIOWriteAsync (
    u32 addr,
    void * buffer,
    s32 size,
    HIOCallback callback
) 
```




<hr>



### function HIOWriteMailbox 

```C++
BOOL HIOWriteMailbox (
    u32 word
) 
```




<hr>
## Public Static Functions Documentation




### function DbgHandler 

```C++
static void DbgHandler (
    __OSInterrupt interrupt,
    OSContext * context
) 
```




<hr>



### function ExiHandler 

```C++
static void ExiHandler (
    s32 chan,
    OSContext * context
) 
```




<hr>



### function ExtHandler 

```C++
static void ExtHandler (
    s32 chan,
    OSContext * context
) 
```




<hr>



### function RxHandler 

```C++
static void RxHandler (
    s32 chan,
    OSContext * context
) 
```




<hr>



### function TxHandler 

```C++
static void TxHandler (
    s32 chan,
    OSContext * context
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/hio/hio.c`

