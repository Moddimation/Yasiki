#ifndef _DOLPHIN_OSALARM_H_
#define _DOLPHIN_OSALARM_H_

#include <dolphin/os/OSContext.h>
#include <dolphin/os/OSTime.h>

typedef struct OSAlarm OSAlarm;
typedef void           (*OSAlarmHandler) (OSAlarm* alarm, OSContext* context);

struct OSAlarm
{
    OSAlarmHandler handler; ///< 0x00
    u32            tag;     ///< 0x04
    OSTime         fire;    ///< 0x08
    OSAlarm*       prev;    ///< 0x10
    OSAlarm*       next;    ///< 0x14

    OSTime period;          ///< 0x1C
    OSTime start;           ///< 0x24
};

void OSInitAlarm (void);
void OSSetAlarm (OSAlarm* alarm, OSTime tick, OSAlarmHandler handler);
void OSSetAbsAlarm (OSAlarm* alarm, OSTime time, OSAlarmHandler handler);
void OSSetPeriodicAlarm (OSAlarm* alarm, OSTime start, OSTime period, OSAlarmHandler handler);
void OSCreateAlarm (OSAlarm* alarm);
void OSCancelAlarm (OSAlarm* alarm);

BOOL OSCheckAlarmQueue (void);

#endif                      // _DOLPHIN_OSALARM_H_
