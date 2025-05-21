

# File support.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Portable**](dir_f12ab36a6648fac4ab89605ba9aeecf6.md) **>** [**support.c**](support_8c.md)

[Go to the source code of this file](support_8c_source.md)



* `#include "Portable/support.h"`
* `#include "Portable/msgbuf.h"`
* `#include "Portable/msg.h"`
* `#include "Portable/serpoll.h"`
* `#include "Portable/msghndlr.h"`
* `#include "stddef.h"`
* `#include "string.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKRequestSend**](#function-trkrequestsend) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* msgBuf, int \* bufferId, u32 p1, u32 p2, int p3) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKSuppAccessFile**](#function-trksuppaccessfile) (u32 file\_handle, u8 \* data, [**size\_t**](size__t_8h.md#typedef-size_t) \* count, [**DSIOResult**](trk_8h.md#enum-dsioresult) \* io\_result, BOOL need\_reply, BOOL read) <br> |




























## Public Functions Documentation




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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/MetroTRK/Src/Portable/support.c`

