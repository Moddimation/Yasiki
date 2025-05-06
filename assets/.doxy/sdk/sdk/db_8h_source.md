

# File db.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**db.h**](db_8h.md)

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


