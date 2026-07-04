

# File OSTime.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSTime.h**](_o_s_time_8h.md)

[Go to the source code of this file](_o_s_time_8h_source.md)



* `#include <types.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**u32**](types_8h.md#typedef-u32) | [**OSTick**](#typedef-ostick)  <br> |
| typedef [**s64**](types_8h.md#typedef-s64) | [**OSTime**](#typedef-ostime)  <br> |















































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**BIAS**](_o_s_time_8h.md#define-bias)  `0xB2575`<br> |
| define  | [**MONTH\_MAX**](_o_s_time_8h.md#define-month_max)  `12`<br> |
| define  | [**MSEC\_MAX**](_o_s_time_8h.md#define-msec_max)  `1000`<br> |
| define  | [**OS\_MSEC\_TO\_TICKS**](_o_s_time_8h.md#define-os_msec_to_ticks) (x) `((x) \* ([**OS\_TIME\_SPEED**](_o_s_time_8h.md#define-os_time_speed) / 1000))`<br> |
| define  | [**OS\_NSEC\_TO\_TICKS**](_o_s_time_8h.md#define-os_nsec_to_ticks) (x) `((x) \* ([**OS\_TIME\_SPEED**](_o_s_time_8h.md#define-os_time_speed) / 125000) / 8000)`<br> |
| define  | [**OS\_SEC\_TO\_TICKS**](_o_s_time_8h.md#define-os_sec_to_ticks) (x) `((x) \* ([**OS\_TIME\_SPEED**](_o_s_time_8h.md#define-os_time_speed)))`<br> |
| define  | [**OS\_TICKS\_TO\_MSEC**](_o_s_time_8h.md#define-os_ticks_to_msec) (x) `((x) / ([**OS\_TIME\_SPEED**](_o_s_time_8h.md#define-os_time_speed) / 1000))`<br> |
| define  | [**OS\_TICKS\_TO\_NSEC**](_o_s_time_8h.md#define-os_ticks_to_nsec) (x) `(((x) \* 8000) / ([**OS\_TIME\_SPEED**](_o_s_time_8h.md#define-os_time_speed) / 125000))`<br> |
| define  | [**OS\_TICKS\_TO\_SEC**](_o_s_time_8h.md#define-os_ticks_to_sec) (x) `((x) / ([**OS\_TIME\_SPEED**](_o_s_time_8h.md#define-os_time_speed)))`<br> |
| define  | [**OS\_TICKS\_TO\_USEC**](_o_s_time_8h.md#define-os_ticks_to_usec) (x) `(((x) \* 8) / ([**OS\_TIME\_SPEED**](_o_s_time_8h.md#define-os_time_speed) / 125000))`<br> |
| define  | [**OS\_TIME\_SPEED**](_o_s_time_8h.md#define-os_time_speed)  `([**OS\_BUS\_CLOCK**](os_8h.md#define-os_bus_clock) / 4)`<br> |
| define  | [**OS\_USEC\_TO\_TICKS**](_o_s_time_8h.md#define-os_usec_to_ticks) (x) `((x) \* ([**OS\_TIME\_SPEED**](_o_s_time_8h.md#define-os_time_speed) / 125000) / 8)`<br> |
| define  | [**SECS\_IN\_DAY**](_o_s_time_8h.md#define-secs_in_day)  `([**SECS\_IN\_HOUR**](_o_s_time_8h.md#define-secs_in_hour) \* 24)`<br> |
| define  | [**SECS\_IN\_HOUR**](_o_s_time_8h.md#define-secs_in_hour)  `([**SECS\_IN\_MIN**](_o_s_time_8h.md#define-secs_in_min) \* 60)`<br> |
| define  | [**SECS\_IN\_MIN**](_o_s_time_8h.md#define-secs_in_min)  `60`<br> |
| define  | [**SECS\_IN\_YEAR**](_o_s_time_8h.md#define-secs_in_year)  `([**SECS\_IN\_DAY**](_o_s_time_8h.md#define-secs_in_day) \* 365)`<br> |
| define  | [**USEC\_MAX**](_o_s_time_8h.md#define-usec_max)  `1000`<br> |
| define  | [**WEEK\_DAY\_MAX**](_o_s_time_8h.md#define-week_day_max)  `7`<br> |
| define  | [**YEAR\_DAY\_MAX**](_o_s_time_8h.md#define-year_day_max)  `365`<br> |

## Public Types Documentation




### typedef OSTick 

```C++
typedef u32 OSTick;
```




<hr>



### typedef OSTime 

```C++
typedef s64 OSTime;
```




<hr>
## Macro Definition Documentation





### define BIAS 

```C++
#define BIAS `0xB2575`
```




<hr>



### define MONTH\_MAX 

```C++
#define MONTH_MAX `12`
```




<hr>



### define MSEC\_MAX 

```C++
#define MSEC_MAX `1000`
```




<hr>



### define OS\_MSEC\_TO\_TICKS 

```C++
#define OS_MSEC_TO_TICKS (
    x
) `((x) * ( OS_TIME_SPEED / 1000))`
```




<hr>



### define OS\_NSEC\_TO\_TICKS 

```C++
#define OS_NSEC_TO_TICKS (
    x
) `((x) * ( OS_TIME_SPEED / 125000) / 8000)`
```




<hr>



### define OS\_SEC\_TO\_TICKS 

```C++
#define OS_SEC_TO_TICKS (
    x
) `((x) * ( OS_TIME_SPEED ))`
```




<hr>



### define OS\_TICKS\_TO\_MSEC 

```C++
#define OS_TICKS_TO_MSEC (
    x
) `((x) / ( OS_TIME_SPEED / 1000))`
```




<hr>



### define OS\_TICKS\_TO\_NSEC 

```C++
#define OS_TICKS_TO_NSEC (
    x
) `(((x) * 8000) / ( OS_TIME_SPEED / 125000))`
```




<hr>



### define OS\_TICKS\_TO\_SEC 

```C++
#define OS_TICKS_TO_SEC (
    x
) `((x) / ( OS_TIME_SPEED ))`
```




<hr>



### define OS\_TICKS\_TO\_USEC 

```C++
#define OS_TICKS_TO_USEC (
    x
) `(((x) * 8) / ( OS_TIME_SPEED / 125000))`
```




<hr>



### define OS\_TIME\_SPEED 

```C++
#define OS_TIME_SPEED `( OS_BUS_CLOCK / 4)`
```




<hr>



### define OS\_USEC\_TO\_TICKS 

```C++
#define OS_USEC_TO_TICKS (
    x
) `((x) * ( OS_TIME_SPEED / 125000) / 8)`
```




<hr>



### define SECS\_IN\_DAY 

```C++
#define SECS_IN_DAY `( SECS_IN_HOUR * 24)`
```




<hr>



### define SECS\_IN\_HOUR 

```C++
#define SECS_IN_HOUR `( SECS_IN_MIN * 60)`
```




<hr>



### define SECS\_IN\_MIN 

```C++
#define SECS_IN_MIN `60`
```




<hr>



### define SECS\_IN\_YEAR 

```C++
#define SECS_IN_YEAR `( SECS_IN_DAY * 365)`
```




<hr>



### define USEC\_MAX 

```C++
#define USEC_MAX `1000`
```




<hr>



### define WEEK\_DAY\_MAX 

```C++
#define WEEK_DAY_MAX `7`
```




<hr>



### define YEAR\_DAY\_MAX 

```C++
#define YEAR_DAY_MAX `365`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSTime.h`

