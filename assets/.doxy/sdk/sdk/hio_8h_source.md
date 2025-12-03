

# File hio.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**hio.h**](hio_8h.md)

[Go to the documentation of this file](hio_8h.md)


```C++
#ifndef _DOLPHIN_HIO_H_

#include <types.h>

typedef void (*HIOCallback) (void);
typedef BOOL (*HIOEnumCallback) (s32 chan);

BOOL HIOEnumDevices (HIOEnumCallback callback);
BOOL HIOInit (s32 chan, HIOCallback callback);
BOOL HIOReadMailbox (u32* word);
BOOL HIOWriteMailbox (u32 word);
BOOL HIORead (u32 addr, void* buffer, s32 size);
BOOL HIOWrite (u32 addr, void* buffer, s32 size);
BOOL HIOReadAsync (u32 addr, void* buffer, s32 size, HIOCallback callback);
BOOL HIOWriteAsync (u32 addr, void* buffer, s32 size, HIOCallback callback);
BOOL HIOReadStatus (u32* status);

#endif
```


