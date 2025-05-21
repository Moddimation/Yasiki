

# File OSAlarm.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSAlarm.h**](_o_s_alarm_8h.md)

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


