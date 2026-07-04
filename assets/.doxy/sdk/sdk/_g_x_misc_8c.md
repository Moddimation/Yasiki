

# File GXMisc.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**gx**](dir_b80c028b3e970eff7f2a07684ffcf104.md) **>** [**GXMisc.c**](_g_x_misc_8c.md)

[Go to the source code of this file](_g_x_misc_8c_source.md)



* `#include <dolphin/base/PPCArch.h>`
* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include <stddef.h>`
* `#include "GXPrivate.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**DrawDone**](#variable-drawdone)  <br> |
|  [**GXDrawDoneCallback**](_g_x_manage_8h.md#typedef-gxdrawdonecallback) | [**DrawDoneCB**](#variable-drawdonecb)  <br> |
|  [**OSThreadQueue**](struct_o_s_thread_queue.md) | [**FinishQueue**](#variable-finishqueue)  <br> |
|  [**GXDrawSyncCallback**](_g_x_manage_8h.md#typedef-gxdrawsynccallback) | [**TokenCB**](#variable-tokencb)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXAbortFrame**](#function-gxabortframe) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GXCompressZ16**](#function-gxcompressz16) ([**u32**](types_8h.md#typedef-u32) z24, [**GXZFmt16**](_g_x_enum_8h.md#typedef-gxzfmt16) zfmt) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GXDecompressZ16**](#function-gxdecompressz16) ([**u32**](types_8h.md#typedef-u32) z16, [**GXZFmt16**](_g_x_enum_8h.md#typedef-gxzfmt16) zfmt) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXDrawDone**](#function-gxdrawdone) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXFlush**](#function-gxflush) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPeekARGB**](#function-gxpeekargb) ([**u16**](types_8h.md#typedef-u16) x, [**u16**](types_8h.md#typedef-u16) y, [**u32**](types_8h.md#typedef-u32) \* color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPeekZ**](#function-gxpeekz) ([**u16**](types_8h.md#typedef-u16) x, [**u16**](types_8h.md#typedef-u16) y, [**u32**](types_8h.md#typedef-u32) \* z) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPixModeSync**](#function-gxpixmodesync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeARGB**](#function-gxpokeargb) ([**u16**](types_8h.md#typedef-u16) x, [**u16**](types_8h.md#typedef-u16) y, [**u32**](types_8h.md#typedef-u32) color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeAlphaMode**](#function-gxpokealphamode) ([**GXCompare**](_g_x_enum_8h.md#typedef-gxcompare) func, [**u8**](types_8h.md#typedef-u8) threshold) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeAlphaRead**](#function-gxpokealpharead) ([**GXAlphaReadMode**](_g_x_enum_8h.md#typedef-gxalphareadmode) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeAlphaUpdate**](#function-gxpokealphaupdate) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) update\_enable) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeBlendMode**](#function-gxpokeblendmode) ([**GXBlendMode**](_g_x_enum_8h.md#typedef-gxblendmode) type, [**GXBlendFactor**](_g_x_enum_8h.md#typedef-gxblendfactor) src\_factor, [**GXBlendFactor**](_g_x_enum_8h.md#typedef-gxblendfactor) dst\_factor, [**GXLogicOp**](_g_x_enum_8h.md#typedef-gxlogicop) op) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeColorUpdate**](#function-gxpokecolorupdate) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) update\_enable) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeDither**](#function-gxpokedither) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) dither) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeDstAlpha**](#function-gxpokedstalpha) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) enable, [**u8**](types_8h.md#typedef-u8) alpha) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeZ**](#function-gxpokez) ([**u16**](types_8h.md#typedef-u16) x, [**u16**](types_8h.md#typedef-u16) y, [**u32**](types_8h.md#typedef-u32) z) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeZMode**](#function-gxpokezmode) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) compare\_enable, [**GXCompare**](_g_x_enum_8h.md#typedef-gxcompare) func, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) update\_enable) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**GXReadDrawSync**](#function-gxreaddrawsync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXResetWriteGatherPipe**](#function-gxresetwritegatherpipe) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetDrawDone**](#function-gxsetdrawdone) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**GXDrawDoneCallback**](_g_x_manage_8h.md#typedef-gxdrawdonecallback) | [**GXSetDrawDoneCallback**](#function-gxsetdrawdonecallback) ([**GXDrawDoneCallback**](_g_x_manage_8h.md#typedef-gxdrawdonecallback) cb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetDrawSync**](#function-gxsetdrawsync) ([**u16**](types_8h.md#typedef-u16) token) <br> |
|  [**GXDrawSyncCallback**](_g_x_manage_8h.md#typedef-gxdrawsynccallback) | [**GXSetDrawSyncCallback**](#function-gxsetdrawsynccallback) ([**GXDrawSyncCallback**](_g_x_manage_8h.md#typedef-gxdrawsynccallback) cb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetMisc**](#function-gxsetmisc) ([**GXMiscToken**](_g_x_enum_8h.md#typedef-gxmisctoken) token, [**u32**](types_8h.md#typedef-u32) val) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXTexModeSync**](#function-gxtexmodesync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXWaitDrawDone**](#function-gxwaitdrawdone) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXPEInit**](#function-__gxpeinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXFinishInterruptHandler**](#function-gxfinishinterrupthandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) interrupt, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXTokenInterruptHandler**](#function-gxtokeninterrupthandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) interrupt, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXAbortWait**](#function-__gxabortwait) ([**u32**](types_8h.md#typedef-u32) clocks) <br> |


























## Public Static Attributes Documentation




### variable DrawDone 

```C++
u8 DrawDone;
```




<hr>



### variable DrawDoneCB 

```C++
GXDrawDoneCallback DrawDoneCB;
```




<hr>



### variable FinishQueue 

```C++
OSThreadQueue FinishQueue;
```




<hr>



### variable TokenCB 

```C++
GXDrawSyncCallback TokenCB;
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



### function GXCompressZ16 

```C++
u32 GXCompressZ16 (
    u32 z24,
    GXZFmt16 zfmt
) 
```




<hr>



### function GXDecompressZ16 

```C++
u32 GXDecompressZ16 (
    u32 z16,
    GXZFmt16 zfmt
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



### function GXPeekARGB 

```C++
void GXPeekARGB (
    u16 x,
    u16 y,
    u32 * color
) 
```




<hr>



### function GXPeekZ 

```C++
void GXPeekZ (
    u16 x,
    u16 y,
    u32 * z
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



### function GXPokeARGB 

```C++
void GXPokeARGB (
    u16 x,
    u16 y,
    u32 color
) 
```




<hr>



### function GXPokeAlphaMode 

```C++
void GXPokeAlphaMode (
    GXCompare func,
    u8 threshold
) 
```




<hr>



### function GXPokeAlphaRead 

```C++
void GXPokeAlphaRead (
    GXAlphaReadMode mode
) 
```




<hr>



### function GXPokeAlphaUpdate 

```C++
void GXPokeAlphaUpdate (
    GXBool update_enable
) 
```




<hr>



### function GXPokeBlendMode 

```C++
void GXPokeBlendMode (
    GXBlendMode type,
    GXBlendFactor src_factor,
    GXBlendFactor dst_factor,
    GXLogicOp op
) 
```




<hr>



### function GXPokeColorUpdate 

```C++
void GXPokeColorUpdate (
    GXBool update_enable
) 
```




<hr>



### function GXPokeDither 

```C++
void GXPokeDither (
    GXBool dither
) 
```




<hr>



### function GXPokeDstAlpha 

```C++
void GXPokeDstAlpha (
    GXBool enable,
    u8 alpha
) 
```




<hr>



### function GXPokeZ 

```C++
void GXPokeZ (
    u16 x,
    u16 y,
    u32 z
) 
```




<hr>



### function GXPokeZMode 

```C++
void GXPokeZMode (
    GXBool compare_enable,
    GXCompare func,
    GXBool update_enable
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



### function \_\_GXPEInit 

```C++
void __GXPEInit (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function GXFinishInterruptHandler 

```C++
static void GXFinishInterruptHandler (
    __OSInterrupt interrupt,
    OSContext * context
) 
```




<hr>



### function GXTokenInterruptHandler 

```C++
static void GXTokenInterruptHandler (
    __OSInterrupt interrupt,
    OSContext * context
) 
```




<hr>



### function \_\_GXAbortWait 

```C++
static inline void __GXAbortWait (
    u32 clocks
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/gx/GXMisc.c`

