

# File mix.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**mix**](dir_8c0d7c793654bcf896507c25bcd4ddcc.md) **>** [**mix.c**](mix_8c.md)

[Go to the source code of this file](mix_8c_source.md)



* `#include <dolphin/mix.h>`
* `#include <dolphin.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**\_\_MIXAIVolumeTable**](#variable-__mixaivolumetable)   = `/* multi line expression */`<br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_MIXPanTableL**](#variable-__mixpantablel)   = `/* multi line expression */`<br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_MIXPanTableR**](#variable-__mixpantabler)   = `/* multi line expression */`<br> |
|  [**u16**](types_8h.md#typedef-u16) | [**\_\_MIXVolumeTable**](#variable-__mixvolumetable)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MIXChannel**](struct_m_i_x_channel.md) | [**\_\_MIXChannel**](#variable-__mixchannel)  <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_MIXDvdStreamAttenCurrent**](#variable-__mixdvdstreamattencurrent)  <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_MIXDvdStreamAttenUser**](#variable-__mixdvdstreamattenuser)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXAdjustAuxA**](#function-mixadjustauxa) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) dB) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXAdjustAuxB**](#function-mixadjustauxb) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) dB) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXAdjustFader**](#function-mixadjustfader) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) dB) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXAdjustInput**](#function-mixadjustinput) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) dB) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXAdjustPan**](#function-mixadjustpan) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) pan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXAdjustSPan**](#function-mixadjustspan) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) span) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXAuxAIsPostFader**](#function-mixauxaispostfader) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXAuxAPostFader**](#function-mixauxapostfader) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXAuxAPreFader**](#function-mixauxaprefader) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXAuxBIsPostFader**](#function-mixauxbispostfader) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXAuxBPostFader**](#function-mixauxbpostfader) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXAuxBPreFader**](#function-mixauxbprefader) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXGetAuxA**](#function-mixgetauxa) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXGetAuxB**](#function-mixgetauxb) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXGetDvdStreamFader**](#function-mixgetdvdstreamfader) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXGetFader**](#function-mixgetfader) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXGetInput**](#function-mixgetinput) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXGetPan**](#function-mixgetpan) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXGetSPan**](#function-mixgetspan) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXInit**](#function-mixinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXInitChannel**](#function-mixinitchannel) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* axvpb, [**u32**](types_8h.md#typedef-u32) mode, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) input, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) auxA, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) auxB, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) pan, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) span, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) fader) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXIsMute**](#function-mixismute) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXMute**](#function-mixmute) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXQuit**](#function-mixquit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXReleaseChannel**](#function-mixreleasechannel) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* axvpb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXResetControls**](#function-mixresetcontrols) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXSetAuxA**](#function-mixsetauxa) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) dB) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXSetAuxB**](#function-mixsetauxb) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) dB) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXSetDvdStreamFader**](#function-mixsetdvdstreamfader) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) dB) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXSetFader**](#function-mixsetfader) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) dB) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXSetInput**](#function-mixsetinput) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) dB) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXSetPan**](#function-mixsetpan) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) pan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXSetSPan**](#function-mixsetspan) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) span) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXUnMute**](#function-mixunmute) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MIXUpdateSettings**](#function-mixupdatesettings) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_MIXClampPan**](#function-__mixclamppan) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) pan) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_MIXGetPanL**](#function-__mixgetpanl) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) pan) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_MIXGetPanR**](#function-__mixgetpanr) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) pan) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**\_\_MIXGetVolume**](#function-__mixgetvolume) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) db) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_MIXResetChannel**](#function-__mixresetchannel) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MIXChannel**](struct_m_i_x_channel.md) \* channel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_MIXSetPan**](#function-__mixsetpan) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MIXChannel**](struct_m_i_x_channel.md) \* channel) <br> |


























## Public Attributes Documentation




### variable \_\_MIXAIVolumeTable 

```C++
u8 __MIXAIVolumeTable[50];
```




<hr>



### variable \_\_MIXPanTableL 

```C++
int __MIXPanTableL[128];
```




<hr>



### variable \_\_MIXPanTableR 

```C++
int __MIXPanTableR[128];
```




<hr>



### variable \_\_MIXVolumeTable 

```C++
u16 __MIXVolumeTable[965];
```




<hr>
## Public Static Attributes Documentation




### variable \_\_MIXChannel 

```C++
struct MIXChannel __MIXChannel[64];
```




<hr>



### variable \_\_MIXDvdStreamAttenCurrent 

```C++
int __MIXDvdStreamAttenCurrent;
```




<hr>



### variable \_\_MIXDvdStreamAttenUser 

```C++
int __MIXDvdStreamAttenUser;
```




<hr>
## Public Functions Documentation




### function MIXAdjustAuxA 

```C++
void MIXAdjustAuxA (
    AXVPB * p,
    int dB
) 
```




<hr>



### function MIXAdjustAuxB 

```C++
void MIXAdjustAuxB (
    AXVPB * p,
    int dB
) 
```




<hr>



### function MIXAdjustFader 

```C++
void MIXAdjustFader (
    AXVPB * p,
    int dB
) 
```




<hr>



### function MIXAdjustInput 

```C++
void MIXAdjustInput (
    AXVPB * p,
    int dB
) 
```




<hr>



### function MIXAdjustPan 

```C++
void MIXAdjustPan (
    AXVPB * p,
    int pan
) 
```




<hr>



### function MIXAdjustSPan 

```C++
void MIXAdjustSPan (
    AXVPB * p,
    int span
) 
```




<hr>



### function MIXAuxAIsPostFader 

```C++
int MIXAuxAIsPostFader (
    AXVPB * p
) 
```




<hr>



### function MIXAuxAPostFader 

```C++
void MIXAuxAPostFader (
    AXVPB * p
) 
```




<hr>



### function MIXAuxAPreFader 

```C++
void MIXAuxAPreFader (
    AXVPB * p
) 
```




<hr>



### function MIXAuxBIsPostFader 

```C++
int MIXAuxBIsPostFader (
    AXVPB * p
) 
```




<hr>



### function MIXAuxBPostFader 

```C++
void MIXAuxBPostFader (
    AXVPB * p
) 
```




<hr>



### function MIXAuxBPreFader 

```C++
void MIXAuxBPreFader (
    AXVPB * p
) 
```




<hr>



### function MIXGetAuxA 

```C++
int MIXGetAuxA (
    AXVPB * p
) 
```




<hr>



### function MIXGetAuxB 

```C++
int MIXGetAuxB (
    AXVPB * p
) 
```




<hr>



### function MIXGetDvdStreamFader 

```C++
int MIXGetDvdStreamFader (
    void
) 
```




<hr>



### function MIXGetFader 

```C++
int MIXGetFader (
    AXVPB * p
) 
```




<hr>



### function MIXGetInput 

```C++
int MIXGetInput (
    AXVPB * p
) 
```




<hr>



### function MIXGetPan 

```C++
int MIXGetPan (
    AXVPB * p
) 
```




<hr>



### function MIXGetSPan 

```C++
int MIXGetSPan (
    AXVPB * p
) 
```




<hr>



### function MIXInit 

```C++
void MIXInit (
    void
) 
```




<hr>



### function MIXInitChannel 

```C++
void MIXInitChannel (
    AXVPB * axvpb,
    u32 mode,
    int input,
    int auxA,
    int auxB,
    int pan,
    int span,
    int fader
) 
```




<hr>



### function MIXIsMute 

```C++
int MIXIsMute (
    AXVPB * p
) 
```




<hr>



### function MIXMute 

```C++
void MIXMute (
    AXVPB * p
) 
```




<hr>



### function MIXQuit 

```C++
void MIXQuit (
    void
) 
```




<hr>



### function MIXReleaseChannel 

```C++
void MIXReleaseChannel (
    AXVPB * axvpb
) 
```




<hr>



### function MIXResetControls 

```C++
void MIXResetControls (
    AXVPB * p
) 
```




<hr>



### function MIXSetAuxA 

```C++
void MIXSetAuxA (
    AXVPB * p,
    int dB
) 
```




<hr>



### function MIXSetAuxB 

```C++
void MIXSetAuxB (
    AXVPB * p,
    int dB
) 
```




<hr>



### function MIXSetDvdStreamFader 

```C++
void MIXSetDvdStreamFader (
    int dB
) 
```




<hr>



### function MIXSetFader 

```C++
void MIXSetFader (
    AXVPB * p,
    int dB
) 
```




<hr>



### function MIXSetInput 

```C++
void MIXSetInput (
    AXVPB * p,
    int dB
) 
```




<hr>



### function MIXSetPan 

```C++
void MIXSetPan (
    AXVPB * p,
    int pan
) 
```




<hr>



### function MIXSetSPan 

```C++
void MIXSetSPan (
    AXVPB * p,
    int span
) 
```




<hr>



### function MIXUnMute 

```C++
void MIXUnMute (
    AXVPB * p
) 
```




<hr>



### function MIXUpdateSettings 

```C++
void MIXUpdateSettings (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_MIXClampPan 

```C++
static int __MIXClampPan (
    int pan
) 
```




<hr>



### function \_\_MIXGetPanL 

```C++
static int __MIXGetPanL (
    int pan
) 
```




<hr>



### function \_\_MIXGetPanR 

```C++
static int __MIXGetPanR (
    int pan
) 
```




<hr>



### function \_\_MIXGetVolume 

```C++
static u16 __MIXGetVolume (
    int db
) 
```




<hr>



### function \_\_MIXResetChannel 

```C++
static void __MIXResetChannel (
    struct  MIXChannel * channel
) 
```




<hr>



### function \_\_MIXSetPan 

```C++
static void __MIXSetPan (
    struct  MIXChannel * channel
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/mix/mix.c`

