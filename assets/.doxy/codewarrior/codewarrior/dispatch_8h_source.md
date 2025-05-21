

# File dispatch.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Priv**](dir_58866132d53834b5384652e07310e785.md) **>** [**Portable**](dir_209eb07e7fc57e3cf528d8690e13aba6.md) **>** [**dispatch.h**](dispatch_8h.md)

[Go to the documentation of this file](dispatch_8h.md)


```C++
#ifndef METROTRK_PORTABLE_DISPATCH_H
#define METROTRK_PORTABLE_DISPATCH_H

#include "dolphin/types.h"
#include "trk.h"

#ifdef __cplusplus
extern "C" {
#endif

#define TRK_DISPATCH_CMD_CONNECT        1  /* Connect to the console */
#define TRK_DISPATCH_CMD_DISCONNECT     2  /* Disconnect from the console */
#define TRK_DISPATCH_CMD_RESET          3  /* Reset the debugger */
#define TRK_DISPATCH_CMD_GETVERSION     4  /* Get debugger version */
#define TRK_DISPATCH_CMD_GETSUPPORTMASK 5  /* Get Support Mask */
#define TRK_DISPATCH_CMD_OVERRIDE       7  /* Override? */
#define TRK_DISPATCH_CMD_READMEM        16 /* Reading from memory */
#define TRK_DISPATCH_CMD_WRITEMEM       17 /* Writing to memory */
#define TRK_DISPATCH_CMD_READREGS       18 /* Read a register value */
#define TRK_DISPATCH_CMD_WRITEREGS      19 /* Set a register */
#define TRK_DISPATCH_CMD_SETOPTION      23 /* Set an option? */
#define TRK_DISPATCH_CMD_CONTINUE       24 /* Continue debugging */
#define TRK_DISPATCH_CMD_STEP           25 /* Step through an instruction */
#define TRK_DISPATCH_CMD_STOP           26 /* Stop the debugger */

typedef struct TRKBuffer TRKBuffer;

DSError TRKInitializeDispatcher();
BOOL TRKDispatchMessage(TRKBuffer* buffer);

#ifdef __cplusplus
}
#endif

#endif /* METROTRK_PORTABLE_DISPATCH_H */
```


