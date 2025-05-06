

# File OSAlarm.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSAlarm.h**](_o_s_alarm_8h.md)

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


