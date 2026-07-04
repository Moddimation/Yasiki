

# File GXVerify.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXVerify.h**](_g_x_verify_8h.md)

[Go to the documentation of this file](_g_x_verify_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXVERIFY_H_
#define _DOLPHIN_GX_GXVERIFY_H_

typedef enum
{
    GX_WARN_NONE,
    GX_WARN_SEVERE,
    GX_WARN_MEDIUM,
    GX_WARN_ALL
} GXWarningLevel;

typedef void (*GXVerifyCallback) (GXWarningLevel level, u32 id, char* msg);

void             GXSetVerifyLevel (GXWarningLevel level);
GXVerifyCallback GXSetVerifyCallback (GXVerifyCallback cb);

#endif
```


