

# File OSAlarm.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSAlarm.h**](_o_s_alarm_8h.md)

[Go to the source code of this file](_o_s_alarm_8h_source.md)



* `#include <dolphin/os/OSContext.h>`
* `#include <dolphin/os/OSTime.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**OSAlarm**](struct_o_s_alarm.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSAlarm**](struct_o_s_alarm.md) | [**OSAlarm**](#typedef-osalarm)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**OSAlarmHandler**](#typedef-osalarmhandler)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSCancelAlarm**](#function-oscancelalarm) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSCheckAlarmQueue**](#function-oscheckalarmqueue) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSCreateAlarm**](#function-oscreatealarm) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitAlarm**](#function-osinitalarm) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetAbsAlarm**](#function-ossetabsalarm) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm, [**OSTime**](_o_s_time_8h.md#typedef-ostime) time, [**OSAlarmHandler**](_o_s_alarm_8h.md#typedef-osalarmhandler) handler) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetAlarm**](#function-ossetalarm) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm, [**OSTime**](_o_s_time_8h.md#typedef-ostime) tick, [**OSAlarmHandler**](_o_s_alarm_8h.md#typedef-osalarmhandler) handler) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetPeriodicAlarm**](#function-ossetperiodicalarm) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm, [**OSTime**](_o_s_time_8h.md#typedef-ostime) start, [**OSTime**](_o_s_time_8h.md#typedef-ostime) period, [**OSAlarmHandler**](_o_s_alarm_8h.md#typedef-osalarmhandler) handler) <br> |




























## Public Types Documentation




### typedef OSAlarm 

```C++
typedef struct OSAlarm OSAlarm;
```




<hr>



### typedef OSAlarmHandler 

```C++
typedef void(* OSAlarmHandler) (OSAlarm *alarm, OSContext *context);
```




<hr>
## Public Functions Documentation




### function OSCancelAlarm 

```C++
void OSCancelAlarm (
    OSAlarm * alarm
) 
```




<hr>



### function OSCheckAlarmQueue 

```C++
BOOL OSCheckAlarmQueue (
    void
) 
```




<hr>



### function OSCreateAlarm 

```C++
void OSCreateAlarm (
    OSAlarm * alarm
) 
```




<hr>



### function OSInitAlarm 

```C++
void OSInitAlarm (
    void
) 
```




<hr>



### function OSSetAbsAlarm 

```C++
void OSSetAbsAlarm (
    OSAlarm * alarm,
    OSTime time,
    OSAlarmHandler handler
) 
```




<hr>



### function OSSetAlarm 

```C++
void OSSetAlarm (
    OSAlarm * alarm,
    OSTime tick,
    OSAlarmHandler handler
) 
```




<hr>



### function OSSetPeriodicAlarm 

```C++
void OSSetPeriodicAlarm (
    OSAlarm * alarm,
    OSTime start,
    OSTime period,
    OSAlarmHandler handler
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSAlarm.h`

