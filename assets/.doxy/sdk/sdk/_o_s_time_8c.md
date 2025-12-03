

# File OSTime.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSTime.c**](_o_s_time_8c.md)

[Go to the source code of this file](_o_s_time_8c_source.md)



* `#include <dolphin/exi.h>`
* `#include <dolphin/os.h>`
* `#include "OSPrivate.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LeapYearDays**](#variable-leapyeardays)   = `{ 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335 }`<br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**YearDays**](#variable-yeardays)   = `{ 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 }`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**OSCalendarTimeToTicks**](#function-oscalendartimetoticks) ([**OSCalendarTime**](struct_o_s_calendar_time.md) \* td) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**OSGetTick**](#function-osgettick) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**s64**](types_8h.md#typedef-s64) | [**OSGetTime**](#function-osgettime) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSTicksToCalendarTime**](#function-ostickstocalendartime) ([**s64**](types_8h.md#typedef-s64) ticks, [**OSCalendarTime**](struct_o_s_calendar_time.md) \* td) <br> |
|  [**s64**](types_8h.md#typedef-s64) | [**\_\_OSGetSystemTime**](#function-__osgetsystemtime) () <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSSetTick**](#function-__ossettick) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) newTicks) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSSetTime**](#function-__ossettime) ([**s64**](types_8h.md#typedef-s64) time) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GetDates**](#function-getdates) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) days, [**OSCalendarTime**](struct_o_s_calendar_time.md) \* td) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GetLeapDays**](#function-getleapdays) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) year) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GetYearDays**](#function-getyeardays) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) year, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) mon) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**IsLeapYear**](#function-isleapyear) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) year) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SetTime**](#function-__settime) ([**s64**](types_8h.md#typedef-s64) time) <br> |


























## Public Static Attributes Documentation




### variable LeapYearDays 

```C++
int LeapYearDays[MONTH_MAX];
```




<hr>



### variable YearDays 

```C++
int YearDays[MONTH_MAX];
```




<hr>
## Public Functions Documentation




### function OSCalendarTimeToTicks 

```C++
OSTime OSCalendarTimeToTicks (
    OSCalendarTime * td
) 
```




<hr>



### function OSGetTick 

```C++
asm  u32 OSGetTick (
    void
) 
```




<hr>



### function OSGetTime 

```C++
asm  s64 OSGetTime (
    void
) 
```




<hr>



### function OSTicksToCalendarTime 

```C++
void OSTicksToCalendarTime (
    s64 ticks,
    OSCalendarTime * td
) 
```




<hr>



### function \_\_OSGetSystemTime 

```C++
s64 __OSGetSystemTime () 
```




<hr>



### function \_\_OSSetTick 

```C++
asm  void __OSSetTick (
    register  u32 newTicks
) 
```




<hr>



### function \_\_OSSetTime 

```C++
void __OSSetTime (
    s64 time
) 
```




<hr>
## Public Static Functions Documentation




### function GetDates 

```C++
static void GetDates (
    int days,
    OSCalendarTime * td
) 
```




<hr>



### function GetLeapDays 

```C++
static int GetLeapDays (
    int year
) 
```




<hr>



### function GetYearDays 

```C++
static int GetYearDays (
    int year,
    int mon
) 
```




<hr>



### function IsLeapYear 

```C++
static int IsLeapYear (
    int year
) 
```




<hr>



### function \_\_SetTime 

```C++
static asm  void __SetTime (
    s64 time
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSTime.c`

