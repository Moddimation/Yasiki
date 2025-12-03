

# File pad\_private.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**pad**](dir_2fb02ac7a51913d2d577d38d3f4d3e89.md) **>** [**pad\_private.h**](pad__private_8h.md)

[Go to the source code of this file](pad__private_8h_source.md)



* `#include <dolphin.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u16**](types_8h.md#typedef-u16) | [**\_\_OSWirelessPadFixMode**](#variable-__oswirelesspadfixmode)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**AnalogMode**](#variable-analogmode)   = `0x00000300`<br> |
|  [**u32**](types_8h.md#typedef-u32) | [**CheckingBits**](#variable-checkingbits)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**EnabledBits**](#variable-enabledbits)  <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**Initialized**](#variable-initialized)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**MakeStatus**](#variable-makestatus)   = `[**SPEC2\_MakeStatus**](_pad_8c.md#function-spec2_makestatus)`<br> |
|  [**PADStatus**](struct_p_a_d_status.md) | [**Origin**](#variable-origin)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PADType**](#variable-padtype)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**ProbingBits**](#variable-probingbits)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**RecalibrateBits**](#variable-recalibratebits)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**ResettingBits**](#variable-resettingbits)  <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**ResettingChan**](#variable-resettingchan)   = `0x00000020`<br> |
|  [**u32**](types_8h.md#typedef-u32) | [**Spec**](#variable-spec)   = `0x00000005`<br> |
|  [**u32**](types_8h.md#typedef-u32) | [**Type**](#variable-type)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**WaitingBits**](#variable-waitingbits)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**XPatchBits**](#variable-xpatchbits)   = `0xF0000000`<br> |
|  [**u32**](types_8h.md#typedef-u32) | [**cmdCalibrate**](#variable-cmdcalibrate)   = `0x42u &lt;&lt; 24`<br> |
|  [**u32**](types_8h.md#typedef-u32) | [**cmdFixDevice**](#variable-cmdfixdevice)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**cmdProbeDevice**](#variable-cmdprobedevice)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**cmdReadOrigin**](#variable-cmdreadorigin)   = `0x41u &lt;&lt; 24`<br> |
|  [**u32**](types_8h.md#typedef-u32) | [**cmdTypeAndStatus**](#variable-cmdtypeandstatus)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADControlAllMotors**](#function-padcontrolallmotors) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) \* commandArray) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADControlMotor**](#function-padcontrolmotor) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) command) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PADGetSpec**](#function-padgetspec) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADGetType**](#function-padgettype) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) \* type) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**PADInit**](#function-padinit) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PADRead**](#function-padread) ([**PADStatus**](struct_p_a_d_status.md) \* status) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**PADRecalibrate**](#function-padrecalibrate) ([**u32**](types_8h.md#typedef-u32) mask) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADReset**](#function-padreset) ([**u32**](types_8h.md#typedef-u32) mask) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADSetAnalogMode**](#function-padsetanalogmode) ([**u32**](types_8h.md#typedef-u32) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADSetSamplingRate**](#function-padsetsamplingrate) ([**u32**](types_8h.md#typedef-u32) msec) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADSetSpec**](#function-padsetspec) ([**u32**](types_8h.md#typedef-u32) spec) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**PADSync**](#function-padsync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_PADTestSamplingRate**](#function-__padtestsamplingrate) ([**u32**](types_8h.md#typedef-u32) tvmode) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**s8**](types_8h.md#typedef-s8) | [**ClampS8**](#function-clamps8) ([**s8**](types_8h.md#typedef-s8) var, [**s8**](types_8h.md#typedef-s8) org) <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**ClampU8**](#function-clampu8) ([**u8**](types_8h.md#typedef-u8) var, [**u8**](types_8h.md#typedef-u8) org) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DoReset**](#function-doreset) () <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**GetWirelessID**](#function-getwirelessid) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OnReset**](#function-onreset) ([**BOOL**](types_8h.md#typedef-bool) f) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADDisable**](#function-paddisable) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADEnable**](#function-padenable) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADFixCallback**](#function-padfixcallback) ([**s32**](types_8h.md#typedef-s32) unused, [**u32**](types_8h.md#typedef-u32) error, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADOriginCallback**](#function-padorigincallback) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) error, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADProbeCallback**](#function-padprobecallback) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) error, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADReceiveCheckCallback**](#function-padreceivecheckcallback) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) error, [**OSContext**](struct_o_s_context.md) \* arg2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADResetCallback**](#function-padresetcallback) ([**s32**](types_8h.md#typedef-s32) unused, [**u32**](types_8h.md#typedef-u32) error, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ProbeWireless**](#function-probewireless) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SPEC0\_MakeStatus**](#function-spec0_makestatus) ([**s32**](types_8h.md#typedef-s32) chan, [**PADStatus**](struct_p_a_d_status.md) \* status, [**u32**](types_8h.md#typedef-u32) data) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SPEC1\_MakeStatus**](#function-spec1_makestatus) ([**s32**](types_8h.md#typedef-s32) chan, [**PADStatus**](struct_p_a_d_status.md) \* status, [**u32**](types_8h.md#typedef-u32) data) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SPEC2\_MakeStatus**](#function-spec2_makestatus) ([**s32**](types_8h.md#typedef-s32) chan, [**PADStatus**](struct_p_a_d_status.md) \* status, [**u32**](types_8h.md#typedef-u32) data) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SetWirelessID**](#function-setwirelessid) ([**s32**](types_8h.md#typedef-s32) chan, [**u16**](types_8h.md#typedef-u16) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**UpdateOrigin**](#function-updateorigin) ([**s32**](types_8h.md#typedef-s32) chan) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**LATENCY**](pad__private_8h.md#define-latency)  `8`<br> |
| define  | [**PAD\_ALL**](pad__private_8h.md#define-pad_all)  `/* multi line expression */`<br> |

## Public Attributes Documentation




### variable \_\_OSWirelessPadFixMode 

```C++
u16 __OSWirelessPadFixMode;
```




<hr>
## Public Static Attributes Documentation




### variable AnalogMode 

```C++
u32 AnalogMode;
```




<hr>



### variable CheckingBits 

```C++
u32 CheckingBits;
```




<hr>



### variable EnabledBits 

```C++
u32 EnabledBits;
```




<hr>



### variable Initialized 

```C++
int Initialized;
```




<hr>



### variable MakeStatus 

```C++
void(* MakeStatus) (s32, PADStatus *, u32 *);
```




<hr>



### variable Origin 

```C++
PADStatus Origin[4];
```




<hr>



### variable PADType 

```C++
u32 PADType[4];
```




<hr>



### variable ProbingBits 

```C++
u32 ProbingBits;
```




<hr>



### variable RecalibrateBits 

```C++
u32 RecalibrateBits;
```




<hr>



### variable ResettingBits 

```C++
u32 ResettingBits;
```




<hr>



### variable ResettingChan 

```C++
s32 ResettingChan;
```




<hr>



### variable Spec 

```C++
u32 Spec;
```




<hr>



### variable Type 

```C++
u32 Type[4];
```




<hr>



### variable WaitingBits 

```C++
u32 WaitingBits;
```




<hr>



### variable XPatchBits 

```C++
u32 XPatchBits;
```




<hr>



### variable cmdCalibrate 

```C++
u32 cmdCalibrate;
```




<hr>



### variable cmdFixDevice 

```C++
u32 cmdFixDevice[4];
```




<hr>



### variable cmdProbeDevice 

```C++
u32 cmdProbeDevice[4];
```




<hr>



### variable cmdReadOrigin 

```C++
u32 cmdReadOrigin;
```




<hr>



### variable cmdTypeAndStatus 

```C++
u32 cmdTypeAndStatus;
```




<hr>
## Public Functions Documentation




### function PADControlAllMotors 

```C++
void PADControlAllMotors (
    const  u32 * commandArray
) 
```




<hr>



### function PADControlMotor 

```C++
void PADControlMotor (
    s32 chan,
    u32 command
) 
```




<hr>



### function PADGetSpec 

```C++
u32 PADGetSpec () 
```




<hr>



### function PADGetType 

```C++
int PADGetType (
    s32 chan,
    u32 * type
) 
```




<hr>



### function PADInit 

```C++
BOOL PADInit () 
```




<hr>



### function PADRead 

```C++
u32 PADRead (
    PADStatus * status
) 
```




<hr>



### function PADRecalibrate 

```C++
BOOL PADRecalibrate (
    u32 mask
) 
```




<hr>



### function PADReset 

```C++
int PADReset (
    u32 mask
) 
```




<hr>



### function PADSetAnalogMode 

```C++
void PADSetAnalogMode (
    u32 mode
) 
```




<hr>



### function PADSetSamplingRate 

```C++
void PADSetSamplingRate (
    u32 msec
) 
```




<hr>



### function PADSetSpec 

```C++
void PADSetSpec (
    u32 spec
) 
```




<hr>



### function PADSync 

```C++
BOOL PADSync (
    void
) 
```




<hr>



### function \_\_PADTestSamplingRate 

```C++
void __PADTestSamplingRate (
    u32 tvmode
) 
```




<hr>
## Public Static Functions Documentation




### function ClampS8 

```C++
static s8 ClampS8 (
    s8 var,
    s8 org
) 
```




<hr>



### function ClampU8 

```C++
static u8 ClampU8 (
    u8 var,
    u8 org
) 
```




<hr>



### function DoReset 

```C++
static int DoReset () 
```




<hr>



### function GetWirelessID 

```C++
static u16 GetWirelessID (
    s32 chan
) 
```




<hr>



### function OnReset 

```C++
static BOOL OnReset (
    BOOL f
) 
```




<hr>



### function PADDisable 

```C++
static void PADDisable (
    s32 chan
) 
```




<hr>



### function PADEnable 

```C++
static void PADEnable (
    s32 chan
) 
```




<hr>



### function PADFixCallback 

```C++
static void PADFixCallback (
    s32 unused,
    u32 error,
    OSContext * context
) 
```




<hr>



### function PADOriginCallback 

```C++
static void PADOriginCallback (
    s32 chan,
    u32 error,
    OSContext * context
) 
```




<hr>



### function PADProbeCallback 

```C++
static void PADProbeCallback (
    s32 chan,
    u32 error,
    OSContext * context
) 
```




<hr>



### function PADReceiveCheckCallback 

```C++
static void PADReceiveCheckCallback (
    s32 chan,
    u32 error,
    OSContext * arg2
) 
```




<hr>



### function PADResetCallback 

```C++
static void PADResetCallback (
    s32 unused,
    u32 error,
    OSContext * context
) 
```




<hr>



### function ProbeWireless 

```C++
static void ProbeWireless (
    s32 chan
) 
```




<hr>



### function SPEC0\_MakeStatus 

```C++
static void SPEC0_MakeStatus (
    s32 chan,
    PADStatus * status,
    u32 data
) 
```




<hr>



### function SPEC1\_MakeStatus 

```C++
static void SPEC1_MakeStatus (
    s32 chan,
    PADStatus * status,
    u32 data
) 
```




<hr>



### function SPEC2\_MakeStatus 

```C++
static void SPEC2_MakeStatus (
    s32 chan,
    PADStatus * status,
    u32 data
) 
```




<hr>



### function SetWirelessID 

```C++
static void SetWirelessID (
    s32 chan,
    u16 id
) 
```




<hr>



### function UpdateOrigin 

```C++
static void UpdateOrigin (
    s32 chan
) 
```




<hr>
## Macro Definition Documentation





### define LATENCY 

```C++
#define LATENCY `8`
```




<hr>



### define PAD\_ALL 

```C++
#define PAD_ALL `( PAD_BUTTON_LEFT | PAD_BUTTON_RIGHT | PAD_BUTTON_DOWN | PAD_BUTTON_UP | PAD_TRIGGER_Z |        \ PAD_TRIGGER_R | PAD_TRIGGER_L | PAD_BUTTON_A | PAD_BUTTON_B | PAD_BUTTON_X | PAD_BUTTON_Y |   \ PAD_BUTTON_MENU | 0x2000 | 0x0080)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/pad/pad_private.h`

