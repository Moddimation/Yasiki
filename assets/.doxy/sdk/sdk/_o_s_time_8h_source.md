

# File OSTime.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSTime.h**](_o_s_time_8h.md)

[Go to the documentation of this file](_o_s_time_8h.md)


```C++
#ifndef _DOLPHIN_OSTIME_H_
#define _DOLPHIN_OSTIME_H_

#include <types.h>

typedef s64 OSTime;
typedef u32 OSTick;

// Time base frequency = 1/4 bus clock
#define OS_TIME_SPEED       (OS_BUS_CLOCK / 4)

// OS time -> Real time
#define OS_TICKS_TO_SEC(x)  ((x) / (OS_TIME_SPEED))
#define OS_TICKS_TO_MSEC(x) ((x) / (OS_TIME_SPEED / 1000))
#define OS_TICKS_TO_USEC(x) (((x) * 8) / (OS_TIME_SPEED / 125000))
#define OS_TICKS_TO_NSEC(x) (((x) * 8000) / (OS_TIME_SPEED / 125000))

// Real time -> OS time
#define OS_SEC_TO_TICKS(x)  ((x) * (OS_TIME_SPEED))
#define OS_MSEC_TO_TICKS(x) ((x) * (OS_TIME_SPEED / 1000))
#define OS_USEC_TO_TICKS(x) ((x) * (OS_TIME_SPEED / 125000) / 8)
#define OS_NSEC_TO_TICKS(x) ((x) * (OS_TIME_SPEED / 125000) / 8000)

#define USEC_MAX            1000
#define MSEC_MAX            1000
#define MONTH_MAX           12
#define WEEK_DAY_MAX        7
#define YEAR_DAY_MAX        365

#define SECS_IN_MIN         60
#define SECS_IN_HOUR        (SECS_IN_MIN * 60)
#define SECS_IN_DAY         (SECS_IN_HOUR * 24)
#define SECS_IN_YEAR        (SECS_IN_DAY * 365)

#define BIAS                0xB2575

#endif // _DOLPHIN_OSTIME_H_
```


