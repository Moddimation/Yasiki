

# File GXVerify.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**gx**](dir_049675cf3b51aca8087b2c87edff05c3.md) **>** [**GXVerify.h**](_g_x_verify_8h.md)

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


