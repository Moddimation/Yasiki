

# File dvderror.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**dvd**](dir_89a52050841a8ad6d679d86dc07787eb.md) **>** [**dvderror.c**](dvderror_8c.md)

[Go to the source code of this file](dvderror_8c_source.md)



* `#include <dolphin/dvd.h>`
* `#include <dolphin/os.h>`
* `#include "../os/OSPrivate.h"`























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
The documentation for this class was generated from the following file `SDK/src/dolphin/dvd/dvderror.c`

