

# File fstload.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**dvd**](dir_6809de60dbef2d995cf7d874d1fa5b65.md) **>** [**emu\_level2**](dir_6de6c456a2e1a85511e548fcb278d527.md) **>** [**fstload.c**](fstload_8c.md)

[Go to the source code of this file](fstload_8c_source.md)



* `#include <dolphin/os.h>`
* `#include <string.h>`
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
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/dvd/emu_level2/fstload.c`

