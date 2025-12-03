

# File support.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**Portable**](dir_ce9d0fbd51586ee7cfe465fa88acc648.md) **>** [**support.h**](support_8h.md)

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


