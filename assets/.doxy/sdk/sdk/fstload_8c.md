

# File fstload.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**dvd**](dir_89a52050841a8ad6d679d86dc07787eb.md) **>** [**emu\_level2**](dir_0bb0ebebd3ebc30f28891149642c782c.md) **>** [**fstload.c**](fstload_8c.md)

[Go to the source code of this file](fstload_8c_source.md)



* `#include <dolphin.h>`
* `#include "dvd_private.h"`

















## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**fstload\_8c\_1adf764cbdea00d65edcd07bb9953ad2b7**](#enum-fstload_8c_1adf764cbdea00d65edcd07bb9953ad2b7)  <br> |






## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**DVDBB2**](struct_d_v_d_b_b2.md) \* | [**bb2**](#variable-bb2)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**bb2Buf**](#variable-bb2buf)  <br> |
|  [**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* | [**idTmp**](#variable-idtmp)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**status**](#variable-status)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_fstLoad**](#function-__fstload) () <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cb**](#function-cb) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |


























## Public Types Documentation




### enum fstload\_8c\_1adf764cbdea00d65edcd07bb9953ad2b7 

```C++
enum fstload_8c_1adf764cbdea00d65edcd07bb9953ad2b7 {
    STATUS_READING_ID,
    STATUS_READING_BB2,
    STATUS_READING_FST
};
```




<hr>
## Public Static Attributes Documentation




### variable bb2 

```C++
DVDBB2* bb2;
```




<hr>



### variable bb2Buf 

```C++
u8 bb2Buf[63];
```




<hr>



### variable idTmp 

```C++
DVDDiskID* idTmp;
```




<hr>



### variable status 

```C++
u32 status;
```




<hr>
## Public Functions Documentation




### function \_\_fstLoad 

```C++
void __fstLoad () 
```




<hr>
## Public Static Functions Documentation




### function cb 

```C++
static void cb (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/dvd/emu_level2/fstload.c`

