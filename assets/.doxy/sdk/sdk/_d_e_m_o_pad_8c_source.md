

# File DEMOPad.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**demo**](dir_12b9b9f3614a19f67fa121459aa56b48.md) **>** [**DEMOPad.c**](_d_e_m_o_pad_8c.md)

[Go to the documentation of this file](_d_e_m_o_pad_8c.md)


```C++
#include <dolphin/demo.h>
#include <dolphin/pad.h>

#include <dolphin.h>

#include "DEMOPrivate.h"

// .data
static u32 PadChanMask[4] = {
    0x80000000,
    0x40000000,
    0x20000000,
    0x10000000,
};

// .bss
static PADStatus Pad[4];
DEMODMPad        DemoPad[4];

// .sbss
u32 DemoNumValidPads;

// functions
static void DEMOPadCopy (PADStatus* pad, DEMODMPad* dmpad);
void        DEMOPadRead ();
void        DEMOPadInit ();

static void
DEMOPadCopy (PADStatus* pad, DEMODMPad* dmpad)
{
    u16 dirs;

    dirs = 0;
    if (pad->stickX < -0x30)
    {
        dirs |= 0x4000;
    }
    if (pad->stickX > 0x30)
    {
        dirs |= 0x8000;
    }
    if (pad->stickY < -0x30)
    {
        dirs |= 0x2000;
    }
    if (pad->stickY > 0x30)
    {
        dirs |= 0x1000;
    }
    if (pad->substickX < -0x30)
    {
        dirs |= 0x400;
    }
    if (pad->substickX > 0x30)
    {
        dirs |= 0x800;
    }
    if (pad->substickY < -0x30)
    {
        dirs |= 0x200;
    }
    if (pad->substickY > 0x30)
    {
        dirs |= 0x100;
    }
    dmpad->dirsNew = (dirs & (dmpad->dirs ^ dirs));
    dmpad->dirsReleased = (dmpad->dirs & (dmpad->dirs ^ dirs));
    dmpad->dirs = dirs;
    dmpad->buttonDown = (pad->button & (dmpad->pst.button ^ pad->button));
    dmpad->buttonUp = (dmpad->pst.button & (dmpad->pst.button ^ pad->button));
    dmpad->stickDeltaX = (pad->stickX - dmpad->pst.stickX);
    dmpad->stickDeltaY = (pad->stickY - dmpad->pst.stickY);
    dmpad->substickDeltaX = (pad->substickX - dmpad->pst.substickX);
    dmpad->substickDeltaY = (pad->substickY - dmpad->pst.substickY);
    dmpad->pst = *pad;
}

void
DEMOPadRead ()
{
    s32 i;
    u32 ResetReq;

    ResetReq = 0;
    PADRead (&Pad[0]);
    PADClamp (&Pad[0]);
    DemoNumValidPads = 0;
    for (i = 0; i < 4; i++)
    {
        if (Pad[i].err == 0 || Pad[i].err == -3)
        {
            DemoNumValidPads += 1;
        }
        else if (Pad[i].err == -1)
        {
            ResetReq |= PadChanMask[i];
        }
        if (Pad[i].err != -3)
        {
            DEMOPadCopy (&Pad[i], &DemoPad[i]);
        }
    }
    if (ResetReq != 0)
    {
        PADReset (ResetReq);
    }
}

void
DEMOPadInit ()
{
    s32 i;

    PADInit();
    for (i = 0; i < 4; i++)
    {
        DemoPad[i].pst.button = 0;
        DemoPad[i].pst.stickX = 0;
        DemoPad[i].pst.stickY = 0;
        DemoPad[i].pst.substickX = 0;
        DemoPad[i].pst.substickY = 0;
        DemoPad[i].pst.triggerLeft = 0;
        DemoPad[i].pst.triggerRight = 0;
        DemoPad[i].pst.analogA = 0;
        DemoPad[i].pst.analogB = 0;
        DemoPad[i].pst.err = 0;
        DemoPad[i].buttonDown = 0;
        DemoPad[i].buttonUp = 0;
        DemoPad[i].dirs = 0;
        DemoPad[i].dirsNew = 0;
        DemoPad[i].dirsReleased = 0;
        DemoPad[i].stickDeltaX = 0;
        DemoPad[i].stickDeltaY = 0;
        DemoPad[i].substickDeltaX = 0;
        DemoPad[i].substickDeltaY = 0;
    }
}
```


