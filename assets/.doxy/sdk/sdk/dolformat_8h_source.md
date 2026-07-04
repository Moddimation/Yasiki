

# File dolformat.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**dolformat.h**](dolformat_8h.md)

[Go to the documentation of this file](dolformat_8h.md)


```C++
#ifndef _DOLPHIN_DOLFORMAT_H_
#define _DOLPHIN_DOLFORMAT_H_

#include <types.h>

#ifdef __cplusplus
extern "C"
{
#endif

// Maximum number of segments allowed
#define DOL_MAX_TEXT 7
#define DOL_MAX_DATA 11

typedef struct DolImage
{
    u8* textData[DOL_MAX_TEXT];
    u8* dataData[DOL_MAX_DATA];
    u32 text[DOL_MAX_TEXT];
    u32 data[DOL_MAX_DATA];
    u32 textLen[DOL_MAX_TEXT];
    u32 dataLen[DOL_MAX_DATA];
    u32 bss;
    u32 bssLen;
    u32 entry;
    u8  padding[28];
} DolImage;

void* DOLLoadImage (u8* buffer, BOOL verbose);
void  DOLRunApp (void* entryPoint);

#ifdef __cplusplus
}
#endif

#endif
```


