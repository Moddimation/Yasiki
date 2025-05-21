

# File support.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Priv**](dir_58866132d53834b5384652e07310e785.md) **>** [**Portable**](dir_209eb07e7fc57e3cf528d8690e13aba6.md) **>** [**support.h**](support_8h.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/MetroTRK/Priv/Portable/support.h`

