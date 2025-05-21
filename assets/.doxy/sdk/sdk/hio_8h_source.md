

# File hio.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**hio.h**](hio_8h.md)

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


