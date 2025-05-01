#ifndef _DOLPHIN_OSMUTEX_H_
#define _DOLPHIN_OSMUTEX_H_

#include <dolphin/os/OSThread.h>

#ifdef __cplusplus
extern "C"
{
#endif
typedef struct OSMutex
{
    OSThreadQueue queue;  ///< 0x00
    OSThread*     thread; ///< 0x08
    s32           count;  ///< 0x0C
    OSMutexLink   link;   ///< 0x10
} OSMutex;
struct OSCond
{
    OSThreadQueue queue;
};
void OSInitMutex(struct OSMutex* mutex);
void OSLockMutex(struct OSMutex* mutex);
void OSUnlockMutex(struct OSMutex* mutex);
BOOL OSTryLockMutex(struct OSMutex* mutex);
void OSInitCond(struct OSCond* cond);
void OSWaitCond(struct OSCond* cond, struct OSMutex* mutex);
void OSSignalCond(struct OSCond* cond);

#ifdef __cplusplus
}
#endif

#endif
