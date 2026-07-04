

# File types.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**lib**](dir_3b305cf5e36a513e0ca27de630bae6c6.md) **>** [**types.h**](types_8h.md)

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


