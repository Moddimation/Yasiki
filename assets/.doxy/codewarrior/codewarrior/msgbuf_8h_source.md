

# File msgbuf.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**Portable**](dir_ce9d0fbd51586ee7cfe465fa88acc648.md) **>** [**msgbuf.h**](msgbuf_8h.md)

[Go to the documentation of this file](msgbuf_8h.md)


```C++
#ifndef METROTRK_PORTABLE_MSGBUF_H
#define METROTRK_PORTABLE_MSGBUF_H

#include "trk.h"
#include "stddef.h"

#ifdef __cplusplus
extern "C" {
#endif

DSError TRKInitializeMessageBuffers(void);

DSError TRKSetBufferPosition(TRKBuffer* msg, u32 pos);
void* TRKGetBuffer(int);
void TRKResetBuffer(TRKBuffer* msg, BOOL keepData);
void* TRKGetBuffer(int idx);
void TRKReleaseBuffer(int idx);
DSError TRKGetFreeBuffer(int* msgID, TRKBuffer** outMsg);

DSError TRKAppendBuffer(TRKBuffer* msg, const void* data, size_t length);
DSError TRKAppendBuffer1_ui8(TRKBuffer* buffer, const u8 data);
inline DSError TRKAppendBuffer1_ui8(TRKBuffer* buffer, const u8 data)
{
    if (buffer->position >= TRKMSGBUF_SIZE) {
        return DS_MessageBufferOverflow;
    }

    buffer->data[buffer->position++] = data;
    buffer->length++;
    return DS_NoError;
}
DSError TRKAppendBuffer1_ui16(TRKBuffer* buffer, const u16 data);
DSError TRKAppendBuffer1_ui32(TRKBuffer* buffer, const u32 data);
DSError TRKAppendBuffer1_ui64(TRKBuffer* buffer, const u64 data);
DSError TRKAppendBuffer_ui8(TRKBuffer* buffer, const u8* data, int count);
DSError TRKAppendBuffer_ui32(TRKBuffer* buffer, const u32* data, int count);

DSError TRKReadBuffer1_ui8(TRKBuffer* buffer, u8* data);
DSError TRKReadBuffer1_ui16(TRKBuffer* buffer, u16* data);
DSError TRKReadBuffer1_ui32(TRKBuffer* buffer, u32* data);
DSError TRKReadBuffer1_ui64(TRKBuffer* buffer, u64* data);
DSError TRKReadBuffer_ui8(TRKBuffer* buffer, u8* data, int count);
DSError TRKReadBuffer_ui32(TRKBuffer* buffer, u32* data, int count);
DSError TRKReadBuffer(TRKBuffer* msg, void* data, size_t length);

#ifdef __cplusplus
}
#endif

#endif /* METROTRK_PORTABLE_MSGBUF_H */
```


