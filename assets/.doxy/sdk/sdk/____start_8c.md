

# File \_\_start.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**os**](dir_8207759a5d5564400a58f6bb524771f0.md) **>** [**init**](dir_be5dd60ccbb00e452f5d06bcd029e1bc.md) **>** [**\_\_start.c**](____start_8c.md)

[Go to the source code of this file](____start_8c_source.md)



* `#include <dolphin/db.h>`
* `#include <dolphin/os.h>`
* `#include "OSPrivate.h"`
* `#include "DolphinTrkInit.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**\_\_bss\_init\_info**](struct____bss__init__info.md) <br> |
| struct | [**\_\_rom\_copy\_info**](struct____rom__copy__info.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_bss\_init\_info**](struct____bss__init__info.md) | [**\_\_bss\_init\_info**](#typedef-__bss_init_info)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_rom\_copy\_info**](struct____rom__copy__info.md) | [**\_\_rom\_copy\_info**](#typedef-__rom_copy_info)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**SEC\_INIT**](_o_s_private_8h.md#define-sec_init) [**s8**](types_8h.md#typedef-s8) | [**\_SDA2\_BASE\_**](#variable-_sda2_base_)  <br> |
|  [**SEC\_INIT**](_o_s_private_8h.md#define-sec_init) [**s8**](types_8h.md#typedef-s8) | [**\_SDA\_BASE\_**](#variable-_sda_base_)  <br> |
|  [**SEC\_INIT**](_o_s_private_8h.md#define-sec_init) [**\_\_bss\_init\_info**](struct____bss__init__info.md) | [**\_bss\_init\_info**](#variable-_bss_init_info)  <br> |
|  [**SEC\_INIT**](_o_s_private_8h.md#define-sec_init) [**\_\_rom\_copy\_info**](struct____rom__copy__info.md) | [**\_rom\_copy\_info**](#variable-_rom_copy_info)  <br> |
|  [**SEC\_INIT**](_o_s_private_8h.md#define-sec_init) [**s8**](types_8h.md#typedef-s8) | [**\_stack\_addr**](#variable-_stack_addr)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_copy\_rom\_section**](#function-__copy_rom_section) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* dst, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* src, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**SEC\_INIT**](_o_s_private_8h.md#define-sec_init) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_flush\_cache**](#function-__flush_cache) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* address, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_init\_bss\_section**](#function-__init_bss_section) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* dst, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_init\_data**](#function-__init_data) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**SEC\_INIT**](_o_s_private_8h.md#define-sec_init) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_init\_hardware**](#function-__init_hardware) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_init\_registers**](#function-__init_registers) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**SEC\_INIT**](_o_s_private_8h.md#define-sec_init) [**WEAKFUNC**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_start**](#function-__start) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**exit**](#function-exit) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) status) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**main**](#function-main) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) argc, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* argv) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ARENAHI\_ADDR**](____start_8c.md#define-arenahi_addr)  `0x80000034`<br> |
| define  | [**BOOTINFO2\_ADDR**](____start_8c.md#define-bootinfo2_addr)  `0x800000F4`<br> |
| define  | [**DEBUGFLAG\_ADDR**](____start_8c.md#define-debugflag_addr)  `0x800030E8`<br> |
| define  | [**DVD\_DEVICECODE\_ADDR**](____start_8c.md#define-dvd_devicecode_addr)  `0x800030E6`<br> |
| define  | [**EXCEPTIONMASK\_ADDR**](____start_8c.md#define-exceptionmask_addr)  `0x80000044`<br> |
| define  | [**OS\_BI2\_DEBUGFLAG\_OFFSET**](____start_8c.md#define-os_bi2_debugflag_offset)  `0xC`<br> |

## Public Types Documentation




### typedef \_\_bss\_init\_info 

```C++
typedef struct __bss_init_info __bss_init_info;
```




<hr>



### typedef \_\_rom\_copy\_info 

```C++
typedef struct __rom_copy_info __rom_copy_info;
```




<hr>
## Public Attributes Documentation




### variable \_SDA2\_BASE\_ 

```C++
SEC_INIT s8 _SDA2_BASE_[];
```




<hr>



### variable \_SDA\_BASE\_ 

```C++
SEC_INIT s8 _SDA_BASE_[];
```




<hr>



### variable \_bss\_init\_info 

```C++
SEC_INIT __bss_init_info _bss_init_info[];
```




<hr>



### variable \_rom\_copy\_info 

```C++
SEC_INIT __rom_copy_info _rom_copy_info[];
```




<hr>



### variable \_stack\_addr 

```C++
SEC_INIT s8 _stack_addr[];
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



### function \_\_flush\_cache 

```C++
SEC_INIT  void __flush_cache (
    void * address,
    u32 size
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



### function \_\_init\_hardware 

```C++
SEC_INIT  void __init_hardware (
    void
) 
```




<hr>



### function \_\_init\_registers 

```C++
void __init_registers (
    void
) 
```




<hr>



### function \_\_start 

```C++
SEC_INIT  WEAKFUNC  asm  void __start (
    void
) 
```




<hr>



### function exit 

```C++
void exit (
    int status
) 
```




<hr>



### function main 

```C++
int main (
    int argc,
    char * argv
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
The documentation for this class was generated from the following file `SDK/src/dolphin/os/init/__start.c`

