

# File pad.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**pad.h**](pad_8h.md)

[Go to the source code of this file](pad_8h_source.md)



* `#include <types.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**PADStatus**](struct_p_a_d_status.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**PADStatus**](struct_p_a_d_status.md) | [**PADStatus**](#typedef-padstatus)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADClamp**](#function-padclamp) ([**PADStatus**](struct_p_a_d_status.md) \* status) <br> |
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



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**PAD\_BUTTON\_A**](pad_8h.md#define-pad_button_a)  `(1 &lt;&lt; 8)`<br> |
| define  | [**PAD\_BUTTON\_B**](pad_8h.md#define-pad_button_b)  `(1 &lt;&lt; 9)`<br> |
| define  | [**PAD\_BUTTON\_DOWN**](pad_8h.md#define-pad_button_down)  `(1 &lt;&lt; 2)`<br> |
| define  | [**PAD\_BUTTON\_LEFT**](pad_8h.md#define-pad_button_left)  `(1 &lt;&lt; 0)`<br> |
| define  | [**PAD\_BUTTON\_MENU**](pad_8h.md#define-pad_button_menu)  `(1 &lt;&lt; 12)`<br> |
| define  | [**PAD\_BUTTON\_RIGHT**](pad_8h.md#define-pad_button_right)  `(1 &lt;&lt; 1)`<br> |
| define  | [**PAD\_BUTTON\_START**](pad_8h.md#define-pad_button_start)  `(1 &lt;&lt; 12)`<br> |
| define  | [**PAD\_BUTTON\_UP**](pad_8h.md#define-pad_button_up)  `(1 &lt;&lt; 3)`<br> |
| define  | [**PAD\_BUTTON\_X**](pad_8h.md#define-pad_button_x)  `(1 &lt;&lt; 10)`<br> |
| define  | [**PAD\_BUTTON\_Y**](pad_8h.md#define-pad_button_y)  `(1 &lt;&lt; 11)`<br> |
| define  | [**PAD\_CHAN0\_BIT**](pad_8h.md#define-pad_chan0_bit)  `0x80000000`<br> |
| define  | [**PAD\_ERR\_NONE**](pad_8h.md#define-pad_err_none)  `0`<br> |
| define  | [**PAD\_ERR\_NOT\_READY**](pad_8h.md#define-pad_err_not_ready)  `-2`<br> |
| define  | [**PAD\_ERR\_NO\_CONTROLLER**](pad_8h.md#define-pad_err_no_controller)  `-1`<br> |
| define  | [**PAD\_ERR\_TRANSFER**](pad_8h.md#define-pad_err_transfer)  `-3`<br> |
| define  | [**PAD\_MAX\_CONTROLLERS**](pad_8h.md#define-pad_max_controllers)  `4`<br> |
| define  | [**PAD\_MOTOR\_RUMBLE**](pad_8h.md#define-pad_motor_rumble)  `1`<br> |
| define  | [**PAD\_MOTOR\_STOP**](pad_8h.md#define-pad_motor_stop)  `0`<br> |
| define  | [**PAD\_MOTOR\_STOP\_HARD**](pad_8h.md#define-pad_motor_stop_hard)  `2`<br> |
| define  | [**PAD\_SPEC\_0**](pad_8h.md#define-pad_spec_0)  `0`<br> |
| define  | [**PAD\_SPEC\_1**](pad_8h.md#define-pad_spec_1)  `1`<br> |
| define  | [**PAD\_SPEC\_2**](pad_8h.md#define-pad_spec_2)  `2`<br> |
| define  | [**PAD\_SPEC\_3**](pad_8h.md#define-pad_spec_3)  `3`<br> |
| define  | [**PAD\_SPEC\_4**](pad_8h.md#define-pad_spec_4)  `4`<br> |
| define  | [**PAD\_SPEC\_5**](pad_8h.md#define-pad_spec_5)  `5`<br> |
| define  | [**PAD\_TRIGGER\_L**](pad_8h.md#define-pad_trigger_l)  `(1 &lt;&lt; 6)`<br> |
| define  | [**PAD\_TRIGGER\_R**](pad_8h.md#define-pad_trigger_r)  `(1 &lt;&lt; 5)`<br> |
| define  | [**PAD\_TRIGGER\_Z**](pad_8h.md#define-pad_trigger_z)  `(1 &lt;&lt; 4)`<br> |
| define  | [**RES\_WIRELESS\_LITE**](pad_8h.md#define-res_wireless_lite)  `0x40000`<br> |

## Public Types Documentation




### typedef PADStatus 

```C++
typedef struct PADStatus PADStatus;
```




<hr>
## Public Functions Documentation




### function PADClamp 

```C++
void PADClamp (
    PADStatus * status
) 
```




<hr>



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
## Macro Definition Documentation





### define PAD\_BUTTON\_A 

```C++
#define PAD_BUTTON_A `(1 << 8)`
```




<hr>



### define PAD\_BUTTON\_B 

```C++
#define PAD_BUTTON_B `(1 << 9)`
```




<hr>



### define PAD\_BUTTON\_DOWN 

```C++
#define PAD_BUTTON_DOWN `(1 << 2)`
```




<hr>



### define PAD\_BUTTON\_LEFT 

```C++
#define PAD_BUTTON_LEFT `(1 << 0)`
```




<hr>



### define PAD\_BUTTON\_MENU 

```C++
#define PAD_BUTTON_MENU `(1 << 12)`
```




<hr>



### define PAD\_BUTTON\_RIGHT 

```C++
#define PAD_BUTTON_RIGHT `(1 << 1)`
```




<hr>



### define PAD\_BUTTON\_START 

```C++
#define PAD_BUTTON_START `(1 << 12)`
```




<hr>



### define PAD\_BUTTON\_UP 

```C++
#define PAD_BUTTON_UP `(1 << 3)`
```




<hr>



### define PAD\_BUTTON\_X 

```C++
#define PAD_BUTTON_X `(1 << 10)`
```




<hr>



### define PAD\_BUTTON\_Y 

```C++
#define PAD_BUTTON_Y `(1 << 11)`
```




<hr>



### define PAD\_CHAN0\_BIT 

```C++
#define PAD_CHAN0_BIT `0x80000000`
```




<hr>



### define PAD\_ERR\_NONE 

```C++
#define PAD_ERR_NONE `0`
```




<hr>



### define PAD\_ERR\_NOT\_READY 

```C++
#define PAD_ERR_NOT_READY `-2`
```




<hr>



### define PAD\_ERR\_NO\_CONTROLLER 

```C++
#define PAD_ERR_NO_CONTROLLER `-1`
```




<hr>



### define PAD\_ERR\_TRANSFER 

```C++
#define PAD_ERR_TRANSFER `-3`
```




<hr>



### define PAD\_MAX\_CONTROLLERS 

```C++
#define PAD_MAX_CONTROLLERS `4`
```




<hr>



### define PAD\_MOTOR\_RUMBLE 

```C++
#define PAD_MOTOR_RUMBLE `1`
```




<hr>



### define PAD\_MOTOR\_STOP 

```C++
#define PAD_MOTOR_STOP `0`
```




<hr>



### define PAD\_MOTOR\_STOP\_HARD 

```C++
#define PAD_MOTOR_STOP_HARD `2`
```




<hr>



### define PAD\_SPEC\_0 

```C++
#define PAD_SPEC_0 `0`
```




<hr>



### define PAD\_SPEC\_1 

```C++
#define PAD_SPEC_1 `1`
```




<hr>



### define PAD\_SPEC\_2 

```C++
#define PAD_SPEC_2 `2`
```




<hr>



### define PAD\_SPEC\_3 

```C++
#define PAD_SPEC_3 `3`
```




<hr>



### define PAD\_SPEC\_4 

```C++
#define PAD_SPEC_4 `4`
```




<hr>



### define PAD\_SPEC\_5 

```C++
#define PAD_SPEC_5 `5`
```




<hr>



### define PAD\_TRIGGER\_L 

```C++
#define PAD_TRIGGER_L `(1 << 6)`
```




<hr>



### define PAD\_TRIGGER\_R 

```C++
#define PAD_TRIGGER_R `(1 << 5)`
```




<hr>



### define PAD\_TRIGGER\_Z 

```C++
#define PAD_TRIGGER_Z `(1 << 4)`
```




<hr>



### define RES\_WIRELESS\_LITE 

```C++
#define RES_WIRELESS_LITE `0x40000`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/pad.h`

