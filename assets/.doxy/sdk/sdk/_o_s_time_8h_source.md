

# File OSTime.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSTime.h**](_o_s_time_8h.md)

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


