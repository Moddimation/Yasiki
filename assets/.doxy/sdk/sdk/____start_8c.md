

# File \_\_start.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**init**](dir_2a4304f6eb90ba2fa36075e24b786609.md) **>** [**\_\_start.c**](____start_8c.md)

[Go to the source code of this file](____start_8c_source.md)



* `#include <dolphin/db.h>`
* `#include <dolphin/os.h>`
* `#include <DolphinTrkInit.h>`
* `#include <string.h>`
* `#include "OSPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|   | [**\_\_bss\_init\_info**](#variable-__bss_init_info)  <br> |
|   | [**\_\_rom\_copy\_info**](#variable-__rom_copy_info)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_copy\_rom\_section**](#function-__copy_rom_section) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* dst, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* src, [**u32**](types_8h.md#typedef-u32) size) <br> |
|   | [**\_\_declspec**](#function-__declspec) (section ".init") <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_init\_bss\_section**](#function-__init_bss_section) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* dst, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_init\_data**](#function-__init_data) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_init\_registers**](#function-__init_registers) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ARENAHI\_ADDR**](____start_8c.md#define-arenahi_addr)  `0x80000034`<br> |
| define  | [**BOOTINFO2\_ADDR**](____start_8c.md#define-bootinfo2_addr)  `0x800000F4`<br> |
| define  | [**DEBUGFLAG\_ADDR**](____start_8c.md#define-debugflag_addr)  `0x800030E8`<br> |
| define  | [**DVD\_DEVICECODE\_ADDR**](____start_8c.md#define-dvd_devicecode_addr)  `0x800030E6`<br> |
| define  | [**EXCEPTIONMASK\_ADDR**](____start_8c.md#define-exceptionmask_addr)  `0x80000044`<br> |
| define  | [**OS\_BI2\_DEBUGFLAG\_OFFSET**](____start_8c.md#define-os_bi2_debugflag_offset)  `0xC`<br> |

## Public Attributes Documentation




### variable \_\_bss\_init\_info 

```C++
__bss_init_info;
```




<hr>



### variable \_\_rom\_copy\_info 

```C++
__rom_copy_info;
```




<hr>
## Public Functions Documentation




### function \_\_copy\_rom\_section 

```C++
void __copy_rom_section (
    void * dst,
    const  void * src,
    u32 size
) 
```




<hr>



### function \_\_declspec 

```C++
__declspec (
    section ".init"
) 
```




<hr>



### function \_\_init\_bss\_section 

```C++
void __init_bss_section (
    void * dst,
    u32 size
) 
```




<hr>



### function \_\_init\_data 

```C++
void __init_data (
    void
) 
```




<hr>



### function \_\_init\_registers 

```C++
asm  void __init_registers (
    void
) 
```




<hr>
## Macro Definition Documentation





### define ARENAHI\_ADDR 

```C++
#define ARENAHI_ADDR `0x80000034`
```




<hr>



### define BOOTINFO2\_ADDR 

```C++
#define BOOTINFO2_ADDR `0x800000F4`
```




<hr>



### define DEBUGFLAG\_ADDR 

```C++
#define DEBUGFLAG_ADDR `0x800030E8`
```




<hr>



### define DVD\_DEVICECODE\_ADDR 

```C++
#define DVD_DEVICECODE_ADDR `0x800030E6`
```




<hr>



### define EXCEPTIONMASK\_ADDR 

```C++
#define EXCEPTIONMASK_ADDR `0x80000044`
```




<hr>



### define OS\_BI2\_DEBUGFLAG\_OFFSET 

```C++
#define OS_BI2_DEBUGFLAG_OFFSET `0xC`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/init/__start.c`

