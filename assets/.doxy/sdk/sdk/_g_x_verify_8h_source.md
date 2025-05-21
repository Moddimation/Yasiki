

# File GXVerify.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**gx**](dir_9c5d6c2893da168c7817d80a53db0c8c.md) **>** [**GXVerify.h**](_g_x_verify_8h.md)

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


