

# File OS.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OS.c**](_o_s_8c.md)

[Go to the source code of this file](_o_s_8c_source.md)



* `#include <dolphin/db.h>`
* `#include <dolphin/exi.h>`
* `#include <dolphin/os.h>`
* `#include <DolphinTrkInit.h>`
* `#include <string.h>`
* `#include "OSPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u16**](types_8h.md#typedef-u16) | [**\_\_ArenaHi**](#variable-__arenahi)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**\_\_ArenaLo**](#variable-__arenalo)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_DVDLongFileNameFlag**](#variable-__dvdlongfilenameflag)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_PADSpec**](#variable-__padspec)  <br> |
|  [**s8**](types_8h.md#typedef-s8) | [**\_stack\_addr**](#variable-_stack_addr)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AreWeInitialized**](#variable-areweinitialized)  <br> |
|  [**u32**](types_8h.md#typedef-u32) \* | [**BI2DebugFlag**](#variable-bi2debugflag)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSBootInfo\_s**](struct_o_s_boot_info__s.md) \* | [**BootInfo**](#variable-bootinfo)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*\* | [**OSExceptionTable**](#variable-osexceptiontable)  <br> |
|  [**double**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ZeroF**](#variable-zerof)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_OSExceptionLocations**](#variable-__osexceptionlocations)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSDefaultExceptionHandler**](#function-osdefaultexceptionhandler) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetConsoleType**](#function-osgetconsoletype) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInit**](#function-osinit) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DBVECTOR**](#function-__dbvector) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSDBINTEND**](#function-__osdbintend) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSDBINTSTART**](#function-__osdbintstart) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSDBJUMPEND**](#function-__osdbjumpend) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSDBJUMPSTART**](#function-__osdbjumpstart) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSEVEnd**](#function-__osevend) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSEVSetNumber**](#function-__osevsetnumber) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSEVStart**](#function-__osevstart) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSExceptionVector**](#function-__osexceptionvector) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**\_\_OSGetDIConfig**](#function-__osgetdiconfig) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**\_\_OSExceptionHandler**](_o_s_exception_8h.md#typedef-__osexceptionhandler) | [**\_\_OSGetExceptionHandler**](#function-__osgetexceptionhandler) ([**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_OSIsDebuggerPresent**](#function-__osisdebuggerpresent) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSPSInit**](#function-__ospsinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**\_\_OSExceptionHandler**](_o_s_exception_8h.md#typedef-__osexceptionhandler) | [**\_\_OSSetExceptionHandler**](#function-__ossetexceptionhandler) ([**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception, [**\_\_OSExceptionHandler**](_o_s_exception_8h.md#typedef-__osexceptionhandler) handler) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSUnhandledException**](#function-__osunhandledexception) ([**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception, [**OSContext**](struct_o_s_context.md) \* context, [**u32**](types_8h.md#typedef-u32) dsisr, [**u32**](types_8h.md#typedef-u32) dar) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSDefaultExceptionHandler**](#function-osdefaultexceptionhandler) ([**u8**](types_8h.md#typedef-u8) exception, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSExceptionInit**](#function-osexceptioninit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSExceptionVector**](#function-osexceptionvector) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSDBIntegrator**](#function-__osdbintegrator) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSDBJump**](#function-__osdbjump) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSInitFPRs**](#function-__osinitfprs) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**DB\_EXCEPTIONDEST\_OFFSET**](_o_s_8c.md#define-db_exceptiondest_offset)  `0x8`<br> |
| define  | [**DB\_EXCEPTIONRET\_OFFSET**](_o_s_8c.md#define-db_exceptionret_offset)  `0xC`<br> |
| define  | [**DEBUGFLAG\_ADDR**](_o_s_8c.md#define-debugflag_addr)  `0x800030E8`<br> |
| define  | [**DEBUGFLAG\_ADDR**](_o_s_8c.md#define-debugflag_addr)  `0x800030E8`<br> |
| define  | [**NOP**](_o_s_8c.md#define-nop)  `0x60000000`<br> |
| define  | [**OS\_BI2\_DEBUGFLAG\_OFFSET**](_o_s_8c.md#define-os_bi2_debugflag_offset)  `0xC`<br> |
| define  | [**OS\_BI2\_DEBUG\_ADDRESS**](_o_s_8c.md#define-os_bi2_debug_address)  `0x800000F4`<br> |
| define  | [**OS\_BI2\_DEBUG\_ADDRESS**](_o_s_8c.md#define-os_bi2_debug_address)  `0x800000F4`<br> |
| define  | [**OS\_CACHED\_REGION\_PREFIX**](_o_s_8c.md#define-os_cached_region_prefix)  `0x8000`<br> |
| define  | [**OS\_CURRENTCONTEXT\_PADDR**](_o_s_8c.md#define-os_currentcontext_paddr)  `0x00C0`<br> |
| define  | [**OS\_DBJUMPPOINT\_ADDR**](_o_s_8c.md#define-os_dbjumppoint_addr)  `0x60`<br> |
| define  | [**OS\_DEBUG\_ADDRESS\_2**](_o_s_8c.md#define-os_debug_address_2)  `0x800030E9`<br> |
| define  | [**OS\_DEBUG\_ADDRESS\_2**](_o_s_8c.md#define-os_debug_address_2)  `0x800030E9`<br> |
| define  | [**OS\_DVD\_DEVICECODE**](_o_s_8c.md#define-os_dvd_devicecode)  `0x800030E6`<br> |
| define  | [**OS\_EXCEPTIONTABLE\_ADDR**](_o_s_8c.md#define-os_exceptiontable_addr)  `0x3000`<br> |
| define  | [**PAD3\_BUTTON\_ADDR**](_o_s_8c.md#define-pad3_button_addr)  `0x800030E4`<br> |

## Public Attributes Documentation




### variable \_\_ArenaHi 

```C++
u16 __ArenaHi[];
```




<hr>



### variable \_\_ArenaLo 

```C++
u16 __ArenaLo[];
```




<hr>



### variable \_\_DVDLongFileNameFlag 

```C++
u32 __DVDLongFileNameFlag;
```




<hr>



### variable \_\_PADSpec 

```C++
u32 __PADSpec;
```




<hr>



### variable \_stack\_addr 

```C++
s8 _stack_addr[];
```




<hr>
## Public Static Attributes Documentation




### variable AreWeInitialized 

```C++
int AreWeInitialized;
```




<hr>



### variable BI2DebugFlag 

```C++
u32* BI2DebugFlag;
```




<hr>



### variable BootInfo 

```C++
struct OSBootInfo_s* BootInfo;
```




<hr>



### variable OSExceptionTable 

```C++
void(** OSExceptionTable) (u8, OSContext *);
```




<hr>



### variable ZeroF 

```C++
double ZeroF;
```




<hr>



### variable \_\_OSExceptionLocations 

```C++
u32 __OSExceptionLocations[];
```




<hr>
## Public Functions Documentation




### function OSDefaultExceptionHandler 

```C++
asm  void OSDefaultExceptionHandler (
    register  __OSException exception,
    register  OSContext * context
) 
```




<hr>



### function OSGetConsoleType 

```C++
u32 OSGetConsoleType () 
```




<hr>



### function OSInit 

```C++
void OSInit () 
```




<hr>



### function \_\_DBVECTOR 

```C++
void __DBVECTOR (
    void
) 
```




<hr>



### function \_\_OSDBINTEND 

```C++
void __OSDBINTEND (
    void
) 
```




<hr>



### function \_\_OSDBINTSTART 

```C++
void __OSDBINTSTART (
    void
) 
```




<hr>



### function \_\_OSDBJUMPEND 

```C++
void __OSDBJUMPEND (
    void
) 
```




<hr>



### function \_\_OSDBJUMPSTART 

```C++
void __OSDBJUMPSTART (
    void
) 
```




<hr>



### function \_\_OSEVEnd 

```C++
void __OSEVEnd (
    void
) 
```




<hr>



### function \_\_OSEVSetNumber 

```C++
void __OSEVSetNumber (
    void
) 
```




<hr>



### function \_\_OSEVStart 

```C++
void __OSEVStart (
    void
) 
```




<hr>



### function \_\_OSExceptionVector 

```C++
void __OSExceptionVector (
    void
) 
```




<hr>



### function \_\_OSGetDIConfig 

```C++
u8 __OSGetDIConfig (
    void
) 
```




<hr>



### function \_\_OSGetExceptionHandler 

```C++
__OSExceptionHandler __OSGetExceptionHandler (
    __OSException exception
) 
```




<hr>



### function \_\_OSIsDebuggerPresent 

```C++
u32 __OSIsDebuggerPresent () 
```




<hr>



### function \_\_OSPSInit 

```C++
void __OSPSInit (
    void
) 
```




<hr>



### function \_\_OSSetExceptionHandler 

```C++
__OSExceptionHandler __OSSetExceptionHandler (
    __OSException exception,
    __OSExceptionHandler handler
) 
```




<hr>



### function \_\_OSUnhandledException 

```C++
void __OSUnhandledException (
    __OSException exception,
    OSContext * context,
    u32 dsisr,
    u32 dar
) 
```




<hr>
## Public Static Functions Documentation




### function OSDefaultExceptionHandler 

```C++
static void OSDefaultExceptionHandler (
    u8 exception,
    OSContext * context
) 
```




<hr>



### function OSExceptionInit 

```C++
static void OSExceptionInit (
    void
) 
```




<hr>



### function OSExceptionVector 

```C++
static asm  void OSExceptionVector (
    void
) 
```




<hr>



### function \_\_OSDBIntegrator 

```C++
static asm  void __OSDBIntegrator (
    void
) 
```




<hr>



### function \_\_OSDBJump 

```C++
static asm  void __OSDBJump (
    void
) 
```




<hr>



### function \_\_OSInitFPRs 

```C++
static asm  void __OSInitFPRs (
    void
) 
```




<hr>
## Macro Definition Documentation





### define DB\_EXCEPTIONDEST\_OFFSET 

```C++
#define DB_EXCEPTIONDEST_OFFSET `0x8`
```




<hr>



### define DB\_EXCEPTIONRET\_OFFSET 

```C++
#define DB_EXCEPTIONRET_OFFSET `0xC`
```




<hr>



### define DEBUGFLAG\_ADDR 

```C++
#define DEBUGFLAG_ADDR `0x800030E8`
```




<hr>



### define DEBUGFLAG\_ADDR 

```C++
#define DEBUGFLAG_ADDR `0x800030E8`
```




<hr>



### define NOP 

```C++
#define NOP `0x60000000`
```




<hr>



### define OS\_BI2\_DEBUGFLAG\_OFFSET 

```C++
#define OS_BI2_DEBUGFLAG_OFFSET `0xC`
```




<hr>



### define OS\_BI2\_DEBUG\_ADDRESS 

```C++
#define OS_BI2_DEBUG_ADDRESS `0x800000F4`
```




<hr>



### define OS\_BI2\_DEBUG\_ADDRESS 

```C++
#define OS_BI2_DEBUG_ADDRESS `0x800000F4`
```




<hr>



### define OS\_CACHED\_REGION\_PREFIX 

```C++
#define OS_CACHED_REGION_PREFIX `0x8000`
```




<hr>



### define OS\_CURRENTCONTEXT\_PADDR 

```C++
#define OS_CURRENTCONTEXT_PADDR `0x00C0`
```




<hr>



### define OS\_DBJUMPPOINT\_ADDR 

```C++
#define OS_DBJUMPPOINT_ADDR `0x60`
```




<hr>



### define OS\_DEBUG\_ADDRESS\_2 

```C++
#define OS_DEBUG_ADDRESS_2 `0x800030E9`
```




<hr>



### define OS\_DEBUG\_ADDRESS\_2 

```C++
#define OS_DEBUG_ADDRESS_2 `0x800030E9`
```




<hr>



### define OS\_DVD\_DEVICECODE 

```C++
#define OS_DVD_DEVICECODE `0x800030E6`
```




<hr>



### define OS\_EXCEPTIONTABLE\_ADDR 

```C++
#define OS_EXCEPTIONTABLE_ADDR `0x3000`
```




<hr>



### define PAD3\_BUTTON\_ADDR 

```C++
#define PAD3_BUTTON_ADDR `0x800030E4`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OS.c`

