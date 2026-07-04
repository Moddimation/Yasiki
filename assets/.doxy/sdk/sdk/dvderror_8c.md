

# File dvderror.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**dvd**](dir_6809de60dbef2d995cf7d874d1fa5b65.md) **>** [**dvderror.c**](dvderror_8c.md)

[Go to the source code of this file](dvderror_8c_source.md)



* `#include <dolphin/dvd.h>`
* `#include <dolphin/os.h>`
* `#include "../os/OSPrivate.h"`
* `#include "dvd_private.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**ErrorTable**](#variable-errortable)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**Convert**](#function-convert) ([**u32**](types_8h.md#typedef-u32) error) <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**ErrorCode2Num**](#function-errorcode2num) ([**u32**](types_8h.md#typedef-u32) errorCode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDStoreErrorCode**](#function-__dvdstoreerrorcode) ([**u32**](types_8h.md#typedef-u32) error) <br> |




























## Public Static Attributes Documentation




### variable ErrorTable 

```C++
u32 ErrorTable[];
```




<hr>
## Public Functions Documentation




### function Convert 

```C++
inline u8 Convert (
    u32 error
) 
```




<hr>



### function ErrorCode2Num 

```C++
inline u8 ErrorCode2Num (
    u32 errorCode
) 
```




<hr>



### function \_\_DVDStoreErrorCode 

```C++
void __DVDStoreErrorCode (
    u32 error
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/dvd/dvderror.c`

