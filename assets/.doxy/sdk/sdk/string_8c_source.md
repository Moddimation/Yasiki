

# File string.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**support**](dir_7636aa5346774086801f2528daa452d7.md) **>** [**string.c**](string_8c.md)

[Go to the documentation of this file](string_8c.md)


```C++
#include <charPipeline/structures/dolphinString.h>

u8
Strcat (char* str1, char* str2, char* dst)
{
    char* srcCursor = str1;
    char* dstCursor = dst;
    ;

    if (!dst)
    {
        return 0;
    }
    if (!str1)
    {
        return 0;
    }
    if (!str2)
    {
        return 0;
    }
    while ((s8)*srcCursor != 0)
    {
        *dstCursor = *srcCursor;
        dstCursor++;
        srcCursor++;
    }
    srcCursor = str2;
    while ((s8)*srcCursor != 0)
    {
        *dstCursor = *srcCursor;
        dstCursor++;
        srcCursor++;
    }
    *dstCursor = 0;
    return 1;
}

void
Strcpy (char* dst, char* src)
{
    do {
        *dst = *src;
        dst++;
        src++;
    }
    while ((s8)*src != 0);
}

s8
Strcmp (char* str1, char* str2)
{
    char* cursor1 = str1;
    char* cursor2 = str2;
    while (1)
    {
        if ((s8)*cursor1 < (s8)*cursor2)
        {
            return 1;
        }
        if ((s8)*cursor1 > (s8)*cursor2)
        {
            return -1;
        }
        cursor1++;
        cursor2++;
        if ((s8)*cursor1 == 0 || (s8)*cursor2 == 0)
        {
            return 0;
        }
    }
}

u32
Strlen (char* str)
{
    char* cursor = str;
    u32   counter = 0;

    if (!str)
    {
        return 0;
    }
    while ((s8)*cursor != 0)
    {
        cursor++;
        counter++;
    }
    return counter;
}
```


