

# File msgbuf.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**Portable**](dir_ce9d0fbd51586ee7cfe465fa88acc648.md) **>** [**msgbuf.h**](msgbuf_8h.md)

[Go to the source code of this file](msgbuf_8h_source.md)



* `#include "trk.h"`
* `#include "stddef.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKAppendBuffer**](#function-trkappendbuffer) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* msg, const void \* data, [**size\_t**](size__t_8h.md#typedef-size_t) length) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKAppendBuffer1\_ui16**](#function-trkappendbuffer1_ui16) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, const u16 data) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKAppendBuffer1\_ui32**](#function-trkappendbuffer1_ui32) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, const u32 data) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKAppendBuffer1\_ui64**](#function-trkappendbuffer1_ui64) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, const u64 data) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKAppendBuffer1\_ui8**](#function-trkappendbuffer1_ui8) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, const u8 data) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKAppendBuffer\_ui32**](#function-trkappendbuffer_ui32) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, const u32 \* data, int count) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKAppendBuffer\_ui8**](#function-trkappendbuffer_ui8) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, const u8 \* data, int count) <br> |
|  void \* | [**TRKGetBuffer**](#function-trkgetbuffer) (int idx) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKGetFreeBuffer**](#function-trkgetfreebuffer) (int \* msgID, [**TRKBuffer**](struct_t_r_k_buffer.md) \*\* outMsg) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKInitializeMessageBuffers**](#function-trkinitializemessagebuffers) (void) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKReadBuffer**](#function-trkreadbuffer) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* msg, void \* data, [**size\_t**](size__t_8h.md#typedef-size_t) length) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKReadBuffer1\_ui16**](#function-trkreadbuffer1_ui16) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, u16 \* data) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKReadBuffer1\_ui32**](#function-trkreadbuffer1_ui32) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, u32 \* data) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKReadBuffer1\_ui64**](#function-trkreadbuffer1_ui64) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, u64 \* data) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKReadBuffer1\_ui8**](#function-trkreadbuffer1_ui8) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, u8 \* data) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKReadBuffer\_ui32**](#function-trkreadbuffer_ui32) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, u32 \* data, int count) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKReadBuffer\_ui8**](#function-trkreadbuffer_ui8) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, u8 \* data, int count) <br> |
|  void | [**TRKReleaseBuffer**](#function-trkreleasebuffer) (int idx) <br> |
|  void | [**TRKResetBuffer**](#function-trkresetbuffer) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* msg, BOOL keepData) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKSetBufferPosition**](#function-trksetbufferposition) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* msg, u32 pos) <br> |




























## Public Functions Documentation




### function TRKAppendBuffer 

```C++
DSError TRKAppendBuffer (
    TRKBuffer * msg,
    const void * data,
    size_t length
) 
```




<hr>



### function TRKAppendBuffer1\_ui16 

```C++
DSError TRKAppendBuffer1_ui16 (
    TRKBuffer * buffer,
    const u16 data
) 
```




<hr>



### function TRKAppendBuffer1\_ui32 

```C++
DSError TRKAppendBuffer1_ui32 (
    TRKBuffer * buffer,
    const u32 data
) 
```




<hr>



### function TRKAppendBuffer1\_ui64 

```C++
DSError TRKAppendBuffer1_ui64 (
    TRKBuffer * buffer,
    const u64 data
) 
```




<hr>



### function TRKAppendBuffer1\_ui8 

```C++
inline DSError TRKAppendBuffer1_ui8 (
    TRKBuffer * buffer,
    const u8 data
) 
```




<hr>



### function TRKAppendBuffer\_ui32 

```C++
DSError TRKAppendBuffer_ui32 (
    TRKBuffer * buffer,
    const u32 * data,
    int count
) 
```




<hr>



### function TRKAppendBuffer\_ui8 

```C++
DSError TRKAppendBuffer_ui8 (
    TRKBuffer * buffer,
    const u8 * data,
    int count
) 
```




<hr>



### function TRKGetBuffer 

```C++
void * TRKGetBuffer (
    int idx
) 
```




<hr>



### function TRKGetFreeBuffer 

```C++
DSError TRKGetFreeBuffer (
    int * msgID,
    TRKBuffer ** outMsg
) 
```




<hr>



### function TRKInitializeMessageBuffers 

```C++
DSError TRKInitializeMessageBuffers (
    void
) 
```




<hr>



### function TRKReadBuffer 

```C++
DSError TRKReadBuffer (
    TRKBuffer * msg,
    void * data,
    size_t length
) 
```




<hr>



### function TRKReadBuffer1\_ui16 

```C++
DSError TRKReadBuffer1_ui16 (
    TRKBuffer * buffer,
    u16 * data
) 
```




<hr>



### function TRKReadBuffer1\_ui32 

```C++
DSError TRKReadBuffer1_ui32 (
    TRKBuffer * buffer,
    u32 * data
) 
```




<hr>



### function TRKReadBuffer1\_ui64 

```C++
DSError TRKReadBuffer1_ui64 (
    TRKBuffer * buffer,
    u64 * data
) 
```




<hr>



### function TRKReadBuffer1\_ui8 

```C++
DSError TRKReadBuffer1_ui8 (
    TRKBuffer * buffer,
    u8 * data
) 
```




<hr>



### function TRKReadBuffer\_ui32 

```C++
DSError TRKReadBuffer_ui32 (
    TRKBuffer * buffer,
    u32 * data,
    int count
) 
```




<hr>



### function TRKReadBuffer\_ui8 

```C++
DSError TRKReadBuffer_ui8 (
    TRKBuffer * buffer,
    u8 * data,
    int count
) 
```




<hr>



### function TRKReleaseBuffer 

```C++
void TRKReleaseBuffer (
    int idx
) 
```




<hr>



### function TRKResetBuffer 

```C++
void TRKResetBuffer (
    TRKBuffer * msg,
    BOOL keepData
) 
```




<hr>



### function TRKSetBufferPosition 

```C++
DSError TRKSetBufferPosition (
    TRKBuffer * msg,
    u32 pos
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Priv/Portable/msgbuf.h`

