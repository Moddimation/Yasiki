

# File OSStopwatch.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSStopwatch.h**](_o_s_stopwatch_8h.md)

[Go to the documentation of this file](_o_s_stopwatch_8h.md)


```C++
#ifndef _DOLPHIN_OSSTOPWATCH_H_
#define _DOLPHIN_OSSTOPWATCH_H_

struct OSStopwatch
{
    char* name;
    s64   total;
    u32   hits;
    s64   min;
    s64   max;
    s64   last;
    int   running;
};

void OSInitStopwatch (struct OSStopwatch* sw, char* name);
void OSStartStopwatch (struct OSStopwatch* sw);
void OSStopStopwatch (struct OSStopwatch* sw);
s64  OSCheckStopwatch (struct OSStopwatch* sw);
void OSResetStopwatch (struct OSStopwatch* sw);
void OSDumpStopwatch (struct OSStopwatch* sw);

#endif // _DOLPHIN_OSSTOPWATCH_H_
```


