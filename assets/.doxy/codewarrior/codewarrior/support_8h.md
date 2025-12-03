

# File support.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**Portable**](dir_ce9d0fbd51586ee7cfe465fa88acc648.md) **>** [**support.h**](support_8h.md)

[Go to the source code of this file](support_8h_source.md)



* `#include "trk.h"`
* `#include "stddef.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**HandleCloseFileSupportRequest**](#function-handleclosefilesupportrequest) (int replyError, [**DSIOResult**](trk_8h.md#enum-dsioresult) \* ioResult) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**HandleOpenFileSupportRequest**](#function-handleopenfilesupportrequest) (const char \* path, u8 replyError, u32 \* param\_3, [**DSIOResult**](trk_8h.md#enum-dsioresult) \* ioResult) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**HandlePositionFileSupportRequest**](#function-handlepositionfilesupportrequest) ([**DSReplyError**](trk_8h.md#enum-dsreplyerror) replyErr, u32 \* param\_2, u8 param\_3, [**DSIOResult**](trk_8h.md#enum-dsioresult) \* ioResult) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKRequestSend**](#function-trkrequestsend) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* msgBuf, int \* bufferId, u32 p1, u32 p2, int p3) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKSuppAccessFile**](#function-trksuppaccessfile) (u32 file\_handle, u8 \* data, [**size\_t**](size__t_8h.md#typedef-size_t) \* count, [**DSIOResult**](trk_8h.md#enum-dsioresult) \* io\_result, BOOL need\_reply, BOOL read) <br> |




























## Public Functions Documentation




### function HandleCloseFileSupportRequest 

```C++
DSError HandleCloseFileSupportRequest (
    int replyError,
    DSIOResult * ioResult
) 
```




<hr>



### function HandleOpenFileSupportRequest 

```C++
DSError HandleOpenFileSupportRequest (
    const char * path,
    u8 replyError,
    u32 * param_3,
    DSIOResult * ioResult
) 
```




<hr>



### function HandlePositionFileSupportRequest 

```C++
DSError HandlePositionFileSupportRequest (
    DSReplyError replyErr,
    u32 * param_2,
    u8 param_3,
    DSIOResult * ioResult
) 
```




<hr>



### function TRKRequestSend 

```C++
DSError TRKRequestSend (
    TRKBuffer * msgBuf,
    int * bufferId,
    u32 p1,
    u32 p2,
    int p3
) 
```




<hr>



### function TRKSuppAccessFile 

```C++
DSError TRKSuppAccessFile (
    u32 file_handle,
    u8 * data,
    size_t * count,
    DSIOResult * io_result,
    BOOL need_reply,
    BOOL read
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Priv/Portable/support.h`

