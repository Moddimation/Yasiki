

# File support.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Portable**](dir_5cbf840bf773d4847fc83ef20b01209e.md) **>** [**support.c**](support_8c.md)

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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Src/Portable/support.c`

