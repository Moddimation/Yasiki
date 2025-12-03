

# File OSAlarm.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSAlarm.c**](_o_s_alarm_8c.md)

[Go to the source code of this file](_o_s_alarm_8c_source.md)



* `#include <dolphin/os.h>`
* `#include "OSPrivate.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**OSAlarmQueue**](struct_o_s_alarm_queue.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSAlarmQueue**](struct_o_s_alarm_queue.md) | [**OSAlarmQueue**](#typedef-osalarmqueue)  <br> |






## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**OSAlarmQueue**](struct_o_s_alarm_queue.md) | [**AlarmQueue**](#variable-alarmqueue)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSCancelAlarm**](#function-oscancelalarm) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSCheckAlarmQueue**](#function-oscheckalarmqueue) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSCreateAlarm**](#function-oscreatealarm) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitAlarm**](#function-osinitalarm) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetAbsAlarm**](#function-ossetabsalarm) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm, [**s64**](types_8h.md#typedef-s64) time, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**OSAlarm**](struct_o_s_alarm.md) \*, [**OSContext**](struct_o_s_context.md) \*) handler) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetAlarm**](#function-ossetalarm) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm, [**OSTime**](_o_s_time_8h.md#typedef-ostime) tick, [**OSAlarmHandler**](_o_s_alarm_8h.md#typedef-osalarmhandler) handler) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetPeriodicAlarm**](#function-ossetperiodicalarm) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm, [**OSTime**](_o_s_time_8h.md#typedef-ostime) start, [**OSTime**](_o_s_time_8h.md#typedef-ostime) period, [**OSAlarmHandler**](_o_s_alarm_8h.md#typedef-osalarmhandler) handler) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DecrementerExceptionCallback**](#function-decrementerexceptioncallback) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DecrementerExceptionHandler**](#function-decrementerexceptionhandler) ([**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DecrementerExceptionHandler**](#function-decrementerexceptionhandler) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**InsertAlarm**](#function-insertalarm) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm, [**OSTime**](_o_s_time_8h.md#typedef-ostime) fire, [**OSAlarmHandler**](_o_s_alarm_8h.md#typedef-osalarmhandler) handler) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SetTimer**](#function-settimer) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ASSERTREPORT**](_o_s_alarm_8c.md#define-assertreport) (line, cond) `/* multi line expression */`<br> |

## Public Types Documentation




### typedef OSAlarmQueue 

```C++
typedef struct OSAlarmQueue OSAlarmQueue;
```




<hr>
## Public Static Attributes Documentation




### variable AlarmQueue 

```C++
OSAlarmQueue AlarmQueue;
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
    s64 time,
    void (*)( OSAlarm *, OSContext *) handler
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
## Public Static Functions Documentation




### function DecrementerExceptionCallback 

```C++
static void DecrementerExceptionCallback (
    register  __OSException exception,
    register  OSContext * context
) 
```




<hr>



### function DecrementerExceptionHandler 

```C++
static void DecrementerExceptionHandler (
    __OSException exception,
    OSContext * context
) 
```




<hr>



### function DecrementerExceptionHandler 

```C++
static asm  void DecrementerExceptionHandler (
    register  __OSException exception,
    register  OSContext * context
) 
```




<hr>



### function InsertAlarm 

```C++
static void InsertAlarm (
    OSAlarm * alarm,
    OSTime fire,
    OSAlarmHandler handler
) 
```




<hr>



### function SetTimer 

```C++
static void SetTimer (
    OSAlarm * alarm
) 
```




<hr>
## Macro Definition Documentation





### define ASSERTREPORT 

```C++
#define ASSERTREPORT (
    line,
    cond
) `/* multi line expression */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSAlarm.c`

