

# File nubinit.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Portable**](dir_f12ab36a6648fac4ab89605ba9aeecf6.md) **>** [**nubinit.c**](nubinit_8c.md)

[Go to the documentation of this file](nubinit_8c.md)


```C++
#include "Portable/nubinit.h"
#include "Portable/nubevent.h"
#include "Portable/msgbuf.h"
#include "Portable/serpoll.h"
#include "Portable/dispatch.h"
#include "Portable/serpoll.h"
#include "Os/dolphin/dolphin_trk.h"
#include "Os/dolphin/dolphin_trk_glue.h"
#include "Os/dolphin/usr_put.h"
#include "Processor/ppc/Generic/targimpl.h"

BOOL gTRKBigEndian;

BOOL TRKInitializeEndian(void);

DSError TRKInitializeNub(void)
{
    DSError ret;
    DSError uartErr;

    ret = TRKInitializeEndian();

    if (ret == DS_NoError)
        usr_put_initialize();
    if (ret == DS_NoError)
        ret = TRKInitializeEventQueue();
    if (ret == DS_NoError)
        ret = TRKInitializeMessageBuffers();
    if (ret == DS_NoError)
        ret = TRKInitializeDispatcher();

    if (ret == DS_NoError) {
        uartErr = TRKInitializeIntDrivenUART(0x0000e100, 1, 0,
                                             &gTRKInputPendingPtr);
        TRKTargetSetInputPendingPtr(gTRKInputPendingPtr);
        if (uartErr != DS_NoError) {
            ret = uartErr;
        }
    }

    if (ret == DS_NoError)
        ret = TRKInitializeSerialHandler();
    if (ret == DS_NoError)
        ret = TRKInitializeTarget();

    return ret;
}

DSError TRKTerminateNub(void)
{
    TRKTerminateSerialHandler();
    return DS_NoError;
}

void TRKNubWelcome(void)
{
    TRK_board_display("MetroTRK for GAMECUBE v2.6");
    return;
}

BOOL TRKInitializeEndian(void)
{
    u8 bendian[4];
    BOOL result   = FALSE;
    gTRKBigEndian = TRUE;

    bendian[0] = 0x12;
    bendian[1] = 0x34;
    bendian[2] = 0x56;
    bendian[3] = 0x78;

    if (*(u32*)bendian == 0x12345678) {
        gTRKBigEndian = TRUE;
    } else if (*(u32*)bendian == 0x78563412) {
        gTRKBigEndian = FALSE;
    } else {
        result = TRUE;
    }
    return result;
}
```


