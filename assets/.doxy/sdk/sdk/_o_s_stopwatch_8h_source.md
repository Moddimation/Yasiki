

# File OSStopwatch.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSStopwatch.h**](_o_s_stopwatch_8h.md)

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


