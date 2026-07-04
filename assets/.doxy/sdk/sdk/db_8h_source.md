

# File db.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**db.h**](db_8h.md)

[Go to the documentation of this file](db_8h.md)


```C++
#ifndef _DOLPHIN_DB_H_
#define _DOLPHIN_DB_H_

#include <types.h>

#include <dolphin/db/DBInterface.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define OS_DBINTERFACE_ADDR 0x00000040

BOOL DBIsDebuggerPresent (void);
void DBPrintf (char* str, ...);

#ifdef __cplusplus
}
#endif

#endif // _DOLPHIN_DB_H_
```


