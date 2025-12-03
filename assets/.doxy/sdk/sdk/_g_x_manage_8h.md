

# File GXManage.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXManage.h**](_g_x_manage_8h.md)

[Go to the source code of this file](_g_x_manage_8h_source.md)



* `#include <dolphin/gx/GXFifo.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**GXDrawDoneCallback**](#typedef-gxdrawdonecallback)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**GXDrawSyncCallback**](#typedef-gxdrawsynccallback)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXAbortFrame**](#function-gxabortframe) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXDrawDone**](#function-gxdrawdone) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXFlush**](#function-gxflush) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**GXFifoObj**](struct_g_x_fifo_obj.md) \* | [**GXInit**](#function-gxinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* base, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPixModeSync**](#function-gxpixmodesync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**GXReadDrawSync**](#function-gxreaddrawsync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXResetWriteGatherPipe**](#function-gxresetwritegatherpipe) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetDrawDone**](#function-gxsetdrawdone) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**GXDrawDoneCallback**](_g_x_manage_8h.md#typedef-gxdrawdonecallback) | [**GXSetDrawDoneCallback**](#function-gxsetdrawdonecallback) ([**GXDrawDoneCallback**](_g_x_manage_8h.md#typedef-gxdrawdonecallback) cb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetDrawSync**](#function-gxsetdrawsync) ([**u16**](types_8h.md#typedef-u16) token) <br> |
|  [**GXDrawSyncCallback**](_g_x_manage_8h.md#typedef-gxdrawsynccallback) | [**GXSetDrawSyncCallback**](#function-gxsetdrawsynccallback) ([**GXDrawSyncCallback**](_g_x_manage_8h.md#typedef-gxdrawsynccallback) cb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetMisc**](#function-gxsetmisc) ([**GXMiscToken**](_g_x_enum_8h.md#typedef-gxmisctoken) token, [**u32**](types_8h.md#typedef-u32) val) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXTexModeSync**](#function-gxtexmodesync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXWaitDrawDone**](#function-gxwaitdrawdone) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**IsWriteGatherBufferEmpty**](#function-iswritegatherbufferempty) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |




























## Public Types Documentation




### typedef GXDrawDoneCallback 

```C++
typedef void(* GXDrawDoneCallback) (void);
```




<hr>



### typedef GXDrawSyncCallback 

```C++
typedef void(* GXDrawSyncCallback) (u16 token);
```




<hr>
## Public Functions Documentation




### function GXAbortFrame 

```C++
void GXAbortFrame (
    void
) 
```




<hr>



### function GXDrawDone 

```C++
void GXDrawDone (
    void
) 
```




<hr>



### function GXFlush 

```C++
void GXFlush (
    void
) 
```




<hr>



### function GXInit 

```C++
GXFifoObj * GXInit (
    void * base,
    u32 size
) 
```




<hr>



### function GXPixModeSync 

```C++
void GXPixModeSync (
    void
) 
```




<hr>



### function GXReadDrawSync 

```C++
u16 GXReadDrawSync (
    void
) 
```




<hr>



### function GXResetWriteGatherPipe 

```C++
void GXResetWriteGatherPipe (
    void
) 
```




<hr>



### function GXSetDrawDone 

```C++
void GXSetDrawDone (
    void
) 
```




<hr>



### function GXSetDrawDoneCallback 

```C++
GXDrawDoneCallback GXSetDrawDoneCallback (
    GXDrawDoneCallback cb
) 
```




<hr>



### function GXSetDrawSync 

```C++
void GXSetDrawSync (
    u16 token
) 
```




<hr>



### function GXSetDrawSyncCallback 

```C++
GXDrawSyncCallback GXSetDrawSyncCallback (
    GXDrawSyncCallback cb
) 
```




<hr>



### function GXSetMisc 

```C++
void GXSetMisc (
    GXMiscToken token,
    u32 val
) 
```




<hr>



### function GXTexModeSync 

```C++
void GXTexModeSync (
    void
) 
```




<hr>



### function GXWaitDrawDone 

```C++
void GXWaitDrawDone (
    void
) 
```




<hr>



### function IsWriteGatherBufferEmpty 

```C++
BOOL IsWriteGatherBufferEmpty (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/gx/GXManage.h`

