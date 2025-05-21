

# File support.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Priv**](dir_58866132d53834b5384652e07310e785.md) **>** [**Portable**](dir_209eb07e7fc57e3cf528d8690e13aba6.md) **>** [**support.h**](support_8h.md)

[Go to the documentation of this file](support_8h.md)


```C++
#ifndef METROTRK_PORTABLE_SUPPORT_H
#define METROTRK_PORTABLE_SUPPORT_H

#include "trk.h"
#include "stddef.h"

#ifdef __cplusplus
extern "C" {
#endif

DSError TRKSuppAccessFile(u32 file_handle, u8* data, size_t* count,
                          DSIOResult* io_result, BOOL need_reply, BOOL read);

DSError TRKRequestSend(TRKBuffer* msgBuf, int* bufferId, u32 p1, u32 p2,
                       int p3);

DSError HandleOpenFileSupportRequest(const char* path, u8 replyError,
                                     u32* param_3, DSIOResult* ioResult);

DSError HandleCloseFileSupportRequest(int replyError, DSIOResult* ioResult);

DSError HandlePositionFileSupportRequest(DSReplyError replyErr, u32* param_2,
                                         u8 param_3, DSIOResult* ioResult);

#ifdef __cplusplus
}
#endif

#endif /* METROTRK_PORTABLE_SUPPORT_H */
```


