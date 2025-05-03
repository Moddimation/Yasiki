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
void OSSetPeriodicAlarm (OSAlarm*       alarm,
                         OSTime         start,
                         OSTime         period,
                         OSAlarmHandler handler);
void OSCreateAlarm (OSAlarm* alarm);
void OSCancelAlarm (OSAlarm* alarm);

BOOL OSCheckAlarmQueue (void);

#endif // _DOLPHIN_OSALARM_H_
