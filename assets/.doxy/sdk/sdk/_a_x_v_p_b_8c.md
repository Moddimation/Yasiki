

# File AXVPB.c



[**FileList**](files.md) **>** [**ax**](dir_284807f63fc993a939ff676a07eb86c2.md) **>** [**AXVPB.c**](_a_x_v_p_b_8c.md)

[Go to the source code of this file](_a_x_v_p_b_8c_source.md)



* `#include <dolphin/ax.h>`
* `#include <dolphin.h>`
* `#include "AXPrivate.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXMaxDspCycles**](#variable-__axmaxdspcycles)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXMixCycles**](#variable-__axmixcycles)   = `/* multi line expression */`<br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXNumVoices**](#variable-__axnumvoices)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXRecDspCycles**](#variable-__axrecdspcycles)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXSrcCycles**](#variable-__axsrccycles)   = `{ 0x00000DF8, 0x00000F78, 0x000014B8, 0x000019F8, 0x000019F8 }`<br> |
|  [**AXVPB**](ax_8h.md#typedef-axvpb) | [**\_\_AXVPB**](#variable-__axvpb)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**AXGetDspCycles**](#function-axgetdspcycles) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**AXGetMaxDspCycles**](#function-axgetmaxdspcycles) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetMaxDspCycles**](#function-axsetmaxdspcycles) ([**u32**](types_8h.md#typedef-u32) cycles) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceAddr**](#function-axsetvoiceaddr) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**AXPBADDR**](ax_8h.md#typedef-axpbaddr) \* addr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceAdpcm**](#function-axsetvoiceadpcm) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**AXPBADPCM**](ax_8h.md#typedef-axpbadpcm) \* adpcm) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceAdpcmLoop**](#function-axsetvoiceadpcmloop) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**AXPBADPCMLOOP**](ax_8h.md#typedef-axpbadpcmloop) \* adpcmloop) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceCurrentAddr**](#function-axsetvoicecurrentaddr) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**u32**](types_8h.md#typedef-u32) addr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceDpop**](#function-axsetvoicedpop) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**AXPBDPOP**](ax_8h.md#typedef-axpbdpop) \* dpop) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceEndAddr**](#function-axsetvoiceendaddr) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**u32**](types_8h.md#typedef-u32) addr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceFir**](#function-axsetvoicefir) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**AXPBFIR**](ax_8h.md#typedef-axpbfir) \* fir) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceItdOn**](#function-axsetvoiceitdon) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceItdTarget**](#function-axsetvoiceitdtarget) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**u16**](types_8h.md#typedef-u16) lShift, [**u16**](types_8h.md#typedef-u16) rShift) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceLoop**](#function-axsetvoiceloop) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**u16**](types_8h.md#typedef-u16) loop) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceLoopAddr**](#function-axsetvoiceloopaddr) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**u32**](types_8h.md#typedef-u32) addr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceMix**](#function-axsetvoicemix) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**AXPBMIX**](ax_8h.md#typedef-axpbmix) \* mix) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceSrc**](#function-axsetvoicesrc) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**AXPBSRC**](ax_8h.md#typedef-axpbsrc) \* src\_) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceSrcRatio**](#function-axsetvoicesrcratio) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) ratio) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceSrcType**](#function-axsetvoicesrctype) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**u32**](types_8h.md#typedef-u32) type) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceState**](#function-axsetvoicestate) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**u16**](types_8h.md#typedef-u16) state) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceType**](#function-axsetvoicetype) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**u16**](types_8h.md#typedef-u16) type) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceUpdateIncrement**](#function-axsetvoiceupdateincrement) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceUpdateWrite**](#function-axsetvoiceupdatewrite) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**u16**](types_8h.md#typedef-u16) param, [**u16**](types_8h.md#typedef-u16) data) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceVe**](#function-axsetvoiceve) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**AXPBVE**](ax_8h.md#typedef-axpbve) \* ve) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoiceVeDelta**](#function-axsetvoicevedelta) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**s16**](types_8h.md#typedef-s16) delta) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXDumpVPB**](#function-__axdumpvpb) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* pvpb) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXGetNumVoices**](#function-__axgetnumvoices) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**AXPB**](ax_8h.md#typedef-axpb) \* | [**\_\_AXGetPBs**](#function-__axgetpbs) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXServiceVPB**](#function-__axservicevpb) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* pvpb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXSetPBDefault**](#function-__axsetpbdefault) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXSyncPBs**](#function-__axsyncpbs) ([**u32**](types_8h.md#typedef-u32) lessDspCycles) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXVPBInit**](#function-__axvpbinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXVPBQuit**](#function-__axvpbquit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**AXPB**](ax_8h.md#typedef-axpb) [**\_\_AXPB**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[[**AX\_MAX\_VOICES**](ax_8h.md#define-ax_max_voices)] | [**ALIGN**](#function-align) (32) <br> |


























## Public Static Attributes Documentation




### variable \_\_AXMaxDspCycles 

```C++
u32 __AXMaxDspCycles;
```




<hr>



### variable \_\_AXMixCycles 

```C++
u32 __AXMixCycles[32];
```




<hr>



### variable \_\_AXNumVoices 

```C++
u32 __AXNumVoices;
```




<hr>



### variable \_\_AXRecDspCycles 

```C++
u32 __AXRecDspCycles;
```




<hr>



### variable \_\_AXSrcCycles 

```C++
u32 __AXSrcCycles[5];
```




<hr>



### variable \_\_AXVPB 

```C++
AXVPB __AXVPB[AX_MAX_VOICES];
```




<hr>
## Public Functions Documentation




### function AXGetDspCycles 

```C++
u32 AXGetDspCycles (
    void
) 
```




<hr>



### function AXGetMaxDspCycles 

```C++
u32 AXGetMaxDspCycles (
    void
) 
```




<hr>



### function AXSetMaxDspCycles 

```C++
void AXSetMaxDspCycles (
    u32 cycles
) 
```




<hr>



### function AXSetVoiceAddr 

```C++
void AXSetVoiceAddr (
    AXVPB * p,
    AXPBADDR * addr
) 
```




<hr>



### function AXSetVoiceAdpcm 

```C++
void AXSetVoiceAdpcm (
    AXVPB * p,
    AXPBADPCM * adpcm
) 
```




<hr>



### function AXSetVoiceAdpcmLoop 

```C++
void AXSetVoiceAdpcmLoop (
    AXVPB * p,
    AXPBADPCMLOOP * adpcmloop
) 
```




<hr>



### function AXSetVoiceCurrentAddr 

```C++
void AXSetVoiceCurrentAddr (
    AXVPB * p,
    u32 addr
) 
```




<hr>



### function AXSetVoiceDpop 

```C++
void AXSetVoiceDpop (
    AXVPB * p,
    AXPBDPOP * dpop
) 
```




<hr>



### function AXSetVoiceEndAddr 

```C++
void AXSetVoiceEndAddr (
    AXVPB * p,
    u32 addr
) 
```




<hr>



### function AXSetVoiceFir 

```C++
void AXSetVoiceFir (
    AXVPB * p,
    AXPBFIR * fir
) 
```




<hr>



### function AXSetVoiceItdOn 

```C++
void AXSetVoiceItdOn (
    AXVPB * p
) 
```




<hr>



### function AXSetVoiceItdTarget 

```C++
void AXSetVoiceItdTarget (
    AXVPB * p,
    u16 lShift,
    u16 rShift
) 
```




<hr>



### function AXSetVoiceLoop 

```C++
void AXSetVoiceLoop (
    AXVPB * p,
    u16 loop
) 
```




<hr>



### function AXSetVoiceLoopAddr 

```C++
void AXSetVoiceLoopAddr (
    AXVPB * p,
    u32 addr
) 
```




<hr>



### function AXSetVoiceMix 

```C++
void AXSetVoiceMix (
    AXVPB * p,
    AXPBMIX * mix
) 
```




<hr>



### function AXSetVoiceSrc 

```C++
void AXSetVoiceSrc (
    AXVPB * p,
    AXPBSRC * src_
) 
```




<hr>



### function AXSetVoiceSrcRatio 

```C++
void AXSetVoiceSrcRatio (
    AXVPB * p,
    float ratio
) 
```




<hr>



### function AXSetVoiceSrcType 

```C++
void AXSetVoiceSrcType (
    AXVPB * p,
    u32 type
) 
```




<hr>



### function AXSetVoiceState 

```C++
void AXSetVoiceState (
    AXVPB * p,
    u16 state
) 
```




<hr>



### function AXSetVoiceType 

```C++
void AXSetVoiceType (
    AXVPB * p,
    u16 type
) 
```




<hr>



### function AXSetVoiceUpdateIncrement 

```C++
void AXSetVoiceUpdateIncrement (
    AXVPB * p
) 
```




<hr>



### function AXSetVoiceUpdateWrite 

```C++
void AXSetVoiceUpdateWrite (
    AXVPB * p,
    u16 param,
    u16 data
) 
```




<hr>



### function AXSetVoiceVe 

```C++
void AXSetVoiceVe (
    AXVPB * p,
    AXPBVE * ve
) 
```




<hr>



### function AXSetVoiceVeDelta 

```C++
void AXSetVoiceVeDelta (
    AXVPB * p,
    s16 delta
) 
```




<hr>



### function \_\_AXDumpVPB 

```C++
void __AXDumpVPB (
    AXVPB * pvpb
) 
```




<hr>



### function \_\_AXGetNumVoices 

```C++
u32 __AXGetNumVoices (
    void
) 
```




<hr>



### function \_\_AXGetPBs 

```C++
AXPB * __AXGetPBs (
    void
) 
```




<hr>



### function \_\_AXServiceVPB 

```C++
void __AXServiceVPB (
    AXVPB * pvpb
) 
```




<hr>



### function \_\_AXSetPBDefault 

```C++
void __AXSetPBDefault (
    AXVPB * p
) 
```




<hr>



### function \_\_AXSyncPBs 

```C++
void __AXSyncPBs (
    u32 lessDspCycles
) 
```




<hr>



### function \_\_AXVPBInit 

```C++
void __AXVPBInit (
    void
) 
```




<hr>



### function \_\_AXVPBQuit 

```C++
void __AXVPBQuit (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function ALIGN 

```C++
static AXPB  __AXPB [ AX_MAX_VOICES ] ALIGN (
    32
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/ax/AXVPB.c`

