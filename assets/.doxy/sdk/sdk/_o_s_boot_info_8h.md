

# File OSBootInfo.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSBootInfo.h**](_o_s_boot_info_8h.md)

[Go to the source code of this file](_o_s_boot_info_8h_source.md)



* `#include <types.h>`
* `#include <dolphin/dvd.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**BI2Debug**](struct_b_i2_debug.md) <br> |
| struct | [**OSBootInfo\_s**](struct_o_s_boot_info__s.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BI2Debug**](struct_b_i2_debug.md) | [**BI2Debug**](#typedef-bi2debug)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSBootInfo\_s**](struct_o_s_boot_info__s.md) | [**OSBootInfo**](#typedef-osbootinfo)  <br> |















































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**OS\_BOOTINFO\_MAGIC**](_o_s_boot_info_8h.md#define-os_bootinfo_magic)  `0x0D15EA5E`<br> |
| define  | [**OS\_BOOTINFO\_MAGIC**](_o_s_boot_info_8h.md#define-os_bootinfo_magic)  `0x0D15EA5E`<br> |
| define  | [**OS\_BOOTINFO\_MAGIC\_JTAG**](_o_s_boot_info_8h.md#define-os_bootinfo_magic_jtag)  `0xE5207C22`<br> |
| define  | [**OS\_BOOTINFO\_MAGIC\_JTAG**](_o_s_boot_info_8h.md#define-os_bootinfo_magic_jtag)  `0xE5207C22`<br> |
| define  | [**OS\_BOOTROM\_ADDR**](_o_s_boot_info_8h.md#define-os_bootrom_addr)  `0x81300000`<br> |
| define  | [**OS\_DVD\_MAGIC\_NINTENDO**](_o_s_boot_info_8h.md#define-os_dvd_magic_nintendo)  `0xC2339F3D`<br> |
| define  | [**OS\_THREAD\_STACK\_MAGIC**](_o_s_boot_info_8h.md#define-os_thread_stack_magic)  `0xDEADBABE`<br> |

## Public Types Documentation




### typedef BI2Debug 

```C++
typedef struct BI2Debug BI2Debug;
```




<hr>



### typedef OSBootInfo 

```C++
typedef struct OSBootInfo_s OSBootInfo;
```




<hr>
## Macro Definition Documentation





### define OS\_BOOTINFO\_MAGIC 

```C++
#define OS_BOOTINFO_MAGIC `0x0D15EA5E`
```




<hr>



### define OS\_BOOTINFO\_MAGIC 

```C++
#define OS_BOOTINFO_MAGIC `0x0D15EA5E`
```




<hr>



### define OS\_BOOTINFO\_MAGIC\_JTAG 

```C++
#define OS_BOOTINFO_MAGIC_JTAG `0xE5207C22`
```




<hr>



### define OS\_BOOTINFO\_MAGIC\_JTAG 

```C++
#define OS_BOOTINFO_MAGIC_JTAG `0xE5207C22`
```




<hr>



### define OS\_BOOTROM\_ADDR 

```C++
#define OS_BOOTROM_ADDR `0x81300000`
```




<hr>



### define OS\_DVD\_MAGIC\_NINTENDO 

```C++
#define OS_DVD_MAGIC_NINTENDO `0xC2339F3D`
```




<hr>



### define OS\_THREAD\_STACK\_MAGIC 

```C++
#define OS_THREAD_STACK_MAGIC `0xDEADBABE`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSBootInfo.h`

