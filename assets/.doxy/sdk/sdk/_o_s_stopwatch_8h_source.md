

# File OSStopwatch.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSStopwatch.h**](_o_s_stopwatch_8h.md)

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


