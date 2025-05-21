

# File dvderror.c



[**FileList**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**dvd**](dir_0c168d7c2747f15d21b906572f3c04c4.md) **>** [**dvderror.c**](dvderror_8c.md)

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
The documentation for this class was generated from the following file `DolphinSDK/src/dolphin/dvd/dvderror.c`

