

# File hio.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**hio.h**](hio_8h.md)

[Go to the source code of this file](hio_8h_source.md)



* `#include <types.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**HIOCallback**](#typedef-hiocallback)  <br> |
| typedef [**BOOL**](types_8h.md#typedef-bool)(\* | [**HIOEnumCallback**](#typedef-hioenumcallback)  <br> |




















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




























## Public Types Documentation




### typedef HIOCallback 

```C++
typedef void(* HIOCallback) (void);
```




<hr>



### typedef HIOEnumCallback 

```C++
typedef BOOL(* HIOEnumCallback) (s32 chan);
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

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/hio.h`

