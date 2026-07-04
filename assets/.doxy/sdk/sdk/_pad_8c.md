

# File Pad.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**pad**](dir_2fb02ac7a51913d2d577d38d3f4d3e89.md) **>** [**Pad.c**](_pad_8c.md)

[Go to the source code of this file](_pad_8c_source.md)



* `#include <dolphin/os/OSSerial.h>`
* `#include <dolphin/pad.h>`
* `#include <dolphin/si.h>`
* `#include <stddef.h>`
* `#include <stdlib.h>`
* `#include <string.h>`
* `#include "../os/OSPrivate.h"`
* `#include "pad_private.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**XY**](struct_x_y.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**XY**](struct_x_y.md) | [**XY**](#typedef-xy)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_PADFixBits**](#variable-__padfixbits)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_PADSpec**](#variable-__padspec)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**OSResetFunctionInfo**](struct_o_s_reset_function_info.md) | [**ResetFunctionInfo**](#variable-resetfunctioninfo)   = `/* multi line expression */`<br> |
|  [**XY**](struct_x_y.md) | [**XYNTSC**](#variable-xyntsc)   = `/* multi line expression */`<br> |
|  [**XY**](struct_x_y.md) | [**XYPAL**](#variable-xypal)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADControlAllMotors**](#function-padcontrolallmotors) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) \* commandArray) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADControlMotor**](#function-padcontrolmotor) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) command) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PADGetSpec**](#function-padgetspec) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADGetType**](#function-padgettype) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) \* type) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**PADInit**](#function-padinit) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PADRead**](#function-padread) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**PADStatus**](struct_p_a_d_status.md) \* status) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**PADRecalibrate**](#function-padrecalibrate) ([**u32**](types_8h.md#typedef-u32) mask) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADReset**](#function-padreset) ([**u32**](types_8h.md#typedef-u32) mask) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADSetAnalogMode**](#function-padsetanalogmode) ([**u32**](types_8h.md#typedef-u32) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADSetSamplingRate**](#function-padsetsamplingrate) ([**u32**](types_8h.md#typedef-u32) msec) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADSetSpec**](#function-padsetspec) ([**u32**](types_8h.md#typedef-u32) spec) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**PADSync**](#function-padsync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


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
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADFixCallback**](#function-padfixcallback) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) error, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADOriginCallback**](#function-padorigincallback) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) error, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADOriginUpdateCallback**](#function-padoriginupdatecallback) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) error, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADProbeCallback**](#function-padprobecallback) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) error, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADReceiveCheckCallback**](#function-padreceivecheckcallback) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) error, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADResetCallback**](#function-padresetcallback) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) error, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ProbeWireless**](#function-probewireless) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SPEC0\_MakeStatus**](#function-spec0_makestatus) ([**s32**](types_8h.md#typedef-s32) chan, [**PADStatus**](struct_p_a_d_status.md) \* status, [**u32**](types_8h.md#typedef-u32) data) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SPEC1\_MakeStatus**](#function-spec1_makestatus) ([**s32**](types_8h.md#typedef-s32) chan, [**PADStatus**](struct_p_a_d_status.md) \* status, [**u32**](types_8h.md#typedef-u32) data) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SPEC2\_MakeStatus**](#function-spec2_makestatus) ([**s32**](types_8h.md#typedef-s32) chan, [**PADStatus**](struct_p_a_d_status.md) \* status, [**u32**](types_8h.md#typedef-u32) data) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SetWirelessID**](#function-setwirelessid) ([**s32**](types_8h.md#typedef-s32) chan, [**u16**](types_8h.md#typedef-u16) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**UpdateOrigin**](#function-updateorigin) ([**s32**](types_8h.md#typedef-s32) chan) <br> |


























## Public Types Documentation




### typedef XY 

```C++
typedef struct XY XY;
```




<hr>
## Public Attributes Documentation




### variable \_\_PADFixBits 

```C++
u32 __PADFixBits;
```




<hr>



### variable \_\_PADSpec 

```C++
u32 __PADSpec;
```




<hr>
## Public Static Attributes Documentation




### variable ResetFunctionInfo 

```C++
OSResetFunctionInfo ResetFunctionInfo;
```




<hr>



### variable XYNTSC 

```C++
XY XYNTSC[12];
```




<hr>



### variable XYPAL 

```C++
XY XYPAL[12];
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
u32 PADGetSpec (
    void
) 
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
    struct  PADStatus * status
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
static inline u16 GetWirelessID (
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
    s32 chan,
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



### function PADOriginUpdateCallback 

```C++
static void PADOriginUpdateCallback (
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
    OSContext * context
) 
```




<hr>



### function PADResetCallback 

```C++
static void PADResetCallback (
    s32 chan,
    u32 error,
    OSContext * context
) 
```




<hr>



### function ProbeWireless 

```C++
static inline void ProbeWireless (
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
static inline void SetWirelessID (
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

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/pad/Pad.c`

