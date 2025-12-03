

# File OSAlarm.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSAlarm.h**](_o_s_alarm_8h.md)

[Go to the documentation of this file](_o_s_alarm_8h.md)


```C++
#ifndef _DOLPHIN_OSALARM_H_
#define _DOLPHIN_OSALARM_H_

#include <dolphin/os/OSContext.h>
#include <dolphin/os/OSTime.h>

typedef struct OSAlarm OSAlarm;
typedef void           (*OSAlarmHandler) (OSAlarm* alarm, OSContext* context);

struct OSAlarm
{
    OSAlarmHandler handler; 
    u32            tag;     
    OSTime         fire;    
    OSAlarm*       prev;    
    OSAlarm*       next;    

    OSTime period;          
    OSTime start;           
};

void OSInitAlarm (void);
void OSSetAlarm (OSAlarm* alarm, OSTime tick, OSAlarmHandler handler);
void OSSetAbsAlarm (OSAlarm* alarm, OSTime time, OSAlarmHandler handler);
void OSSetPeriodicAlarm (OSAlarm* alarm, OSTime start, OSTime period, OSAlarmHandler handler);
void OSCreateAlarm (OSAlarm* alarm);
void OSCancelAlarm (OSAlarm* alarm);

BOOL OSCheckAlarmQueue (void);

#endif                      // _DOLPHIN_OSALARM_H_
```


