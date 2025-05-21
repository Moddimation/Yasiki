

# File types.h

[**File List**](files.md) **>** [**lib**](dir_e36959481960b875b4393beac6de38d5.md) **>** [**types.h**](types_8h.md)

[Go to the documentation of this file](types_8h.md)


```C++
#ifndef _TYPES_H
#define _TYPES_H

#include <dolphin/types.h>
#include <macros.h>

typedef u32 unk;
typedef u8  unk8;
typedef u16 unk16;
typedef u32 unk32;
typedef u64 unk64;

#define DEFINE_ENUM_TYPE(name, ...)                                                            \
    struct name                                                                                \
    {                                                                                          \
        enum Values                                                                            \
        {                                                                                      \
            __VA_ARGS__                                                                        \
        };                                                                                     \
        typedef Values Type;                                                                   \
    }

#endif // _TYPES_H
```


