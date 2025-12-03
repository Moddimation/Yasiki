

# File OSModule.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSModule.h**](_o_s_module_8h.md)

[Go to the source code of this file](_o_s_module_8h_source.md)



* `#include <types.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**OSImportInfo**](struct_o_s_import_info.md) <br> |
| struct | [**OSModuleHeader**](struct_o_s_module_header.md) <br> |
| struct | [**OSModuleInfo**](struct_o_s_module_info.md) <br> |
| struct | [**OSModuleLink**](struct_o_s_module_link.md) <br> |
| struct | [**OSModuleQueue**](struct_o_s_module_queue.md) <br> |
| struct | [**OSRel**](struct_o_s_rel.md) <br> |
| struct | [**OSSectionInfo**](struct_o_s_section_info.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSImportInfo**](struct_o_s_import_info.md) | [**OSImportInfo**](#typedef-osimportinfo)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSModuleHeader**](struct_o_s_module_header.md) | [**OSModuleHeader**](#typedef-osmoduleheader)  <br> |
| typedef [**u32**](types_8h.md#typedef-u32) | [**OSModuleID**](#typedef-osmoduleid)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSModuleInfo**](struct_o_s_module_info.md) | [**OSModuleInfo**](#typedef-osmoduleinfo)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSModuleLink**](struct_o_s_module_link.md) | [**OSModuleLink**](#typedef-osmodulelink)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSModuleQueue**](struct_o_s_module_queue.md) | [**OSModuleQueue**](#typedef-osmodulequeue)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSRel**](struct_o_s_rel.md) | [**OSRel**](#typedef-osrel)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSSectionInfo**](struct_o_s_section_info.md) | [**OSSectionInfo**](#typedef-ossectioninfo)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSLink**](#function-oslink) ([**OSModuleInfo**](struct_o_s_module_info.md) \* newModule, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* bss) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSNotifyLink**](#function-osnotifylink) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSNotifyUnlink**](#function-osnotifyunlink) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**OSModuleInfo**](struct_o_s_module_info.md) \* | [**OSSearchModule**](#function-ossearchmodule) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* ptr, [**u32**](types_8h.md#typedef-u32) \* section, [**u32**](types_8h.md#typedef-u32) \* offset) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetStringTable**](#function-ossetstringtable) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* stringTable) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSUnlink**](#function-osunlink) ([**OSModuleInfo**](struct_o_s_module_info.md) \* oldModule) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**OSGetSectionInfo**](_o_s_module_8h.md#define-osgetsectioninfo) (module) `(([**OSSectionInfo**](struct_o_s_section_info.md)\*)((([**OSModuleInfo**](struct_o_s_module_info.md)\*)([**module**](_c_a_r_d_private_8h.md#define-card_max_mount_step)))-&gt;sectionInfoOffset))`<br> |
| define  | [**OS\_MODULE\_VERSION**](_o_s_module_8h.md#define-os_module_version)  `1`<br> |
| define  | [**OS\_SECTIONINFO\_EXEC**](_o_s_module_8h.md#define-os_sectioninfo_exec)  `0x1`<br> |
| define  | [**OS\_SECTIONINFO\_OFFSET**](_o_s_module_8h.md#define-os_sectioninfo_offset) (offset) `((offset) & ~0x1)`<br> |
| define  | [**R\_DOLPHIN\_END**](_o_s_module_8h.md#define-r_dolphin_end)  `203`<br> |
| define  | [**R\_DOLPHIN\_MRKREF**](_o_s_module_8h.md#define-r_dolphin_mrkref)  `204`<br> |
| define  | [**R\_DOLPHIN\_NOP**](_o_s_module_8h.md#define-r_dolphin_nop)  `201`<br> |
| define  | [**R\_DOLPHIN\_SECTION**](_o_s_module_8h.md#define-r_dolphin_section)  `202`<br> |

## Public Types Documentation




### typedef OSImportInfo 

```C++
typedef struct OSImportInfo OSImportInfo;
```




<hr>



### typedef OSModuleHeader 

```C++
typedef struct OSModuleHeader OSModuleHeader;
```




<hr>



### typedef OSModuleID 

```C++
typedef u32 OSModuleID;
```




<hr>



### typedef OSModuleInfo 

```C++
typedef struct OSModuleInfo OSModuleInfo;
```




<hr>



### typedef OSModuleLink 

```C++
typedef struct OSModuleLink OSModuleLink;
```




<hr>



### typedef OSModuleQueue 

```C++
typedef struct OSModuleQueue OSModuleQueue;
```




<hr>



### typedef OSRel 

```C++
typedef struct OSRel OSRel;
```




<hr>



### typedef OSSectionInfo 

```C++
typedef struct OSSectionInfo OSSectionInfo;
```




<hr>
## Public Functions Documentation




### function OSLink 

```C++
BOOL OSLink (
    OSModuleInfo * newModule,
    void * bss
) 
```




<hr>



### function OSNotifyLink 

```C++
void OSNotifyLink (
    void
) 
```




<hr>



### function OSNotifyUnlink 

```C++
void OSNotifyUnlink (
    void
) 
```




<hr>



### function OSSearchModule 

```C++
OSModuleInfo * OSSearchModule (
    void * ptr,
    u32 * section,
    u32 * offset
) 
```




<hr>



### function OSSetStringTable 

```C++
void OSSetStringTable (
    const  void * stringTable
) 
```




<hr>



### function OSUnlink 

```C++
BOOL OSUnlink (
    OSModuleInfo * oldModule
) 
```




<hr>
## Macro Definition Documentation





### define OSGetSectionInfo 

```C++
#define OSGetSectionInfo (
    module
) `(( OSSectionInfo *)((( OSModuleInfo *)( module ))->sectionInfoOffset))`
```




<hr>



### define OS\_MODULE\_VERSION 

```C++
#define OS_MODULE_VERSION `1`
```




<hr>



### define OS\_SECTIONINFO\_EXEC 

```C++
#define OS_SECTIONINFO_EXEC `0x1`
```




<hr>



### define OS\_SECTIONINFO\_OFFSET 

```C++
#define OS_SECTIONINFO_OFFSET (
    offset
) `((offset) & ~0x1)`
```




<hr>



### define R\_DOLPHIN\_END 

```C++
#define R_DOLPHIN_END `203`
```




<hr>



### define R\_DOLPHIN\_MRKREF 

```C++
#define R_DOLPHIN_MRKREF `204`
```




<hr>



### define R\_DOLPHIN\_NOP 

```C++
#define R_DOLPHIN_NOP `201`
```




<hr>



### define R\_DOLPHIN\_SECTION 

```C++
#define R_DOLPHIN_SECTION `202`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSModule.h`

