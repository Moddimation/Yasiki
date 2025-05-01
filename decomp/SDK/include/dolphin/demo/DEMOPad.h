#ifndef _DOLPHIN_DEMOPAD_H_
#define _DOLPHIN_DEMOPAD_H_

#include <dolphin/pad.h>
typedef struct
{
    struct PADStatus pst;            ///< 0x00
    u16              buttonDown;     ///< 0x0C
    u16              buttonUp;       ///< 0x0E
    u16              dirs;           ///< 0x10
    u16              dirsNew;        ///< 0x12
    u16              dirsReleased;   ///< 0x14
    s16              stickDeltaX;    ///< 0x16
    s16              stickDeltaY;    ///< 0x18
    s16              substickDeltaX; ///< 0x1A
    s16              substickDeltaY; ///< 0x1C
} DEMODMPad;
extern DEMODMPad DemoPad[4];

extern u32 DemoNumValidPads;

void DEMOPadRead();
void DEMOPadInit();

#endif                               // _DOLPHIN_DEMOPAD_H_
