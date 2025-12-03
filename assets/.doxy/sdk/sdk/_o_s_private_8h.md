

# File OSPrivate.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSPrivate.h**](_o_s_private_8h.md)

[Go to the source code of this file](_o_s_private_8h_source.md)



* `#include <dolphin/os.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**BOOT\_REGION\_END**](#variable-boot_region_end)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**BOOT\_REGION\_START**](#variable-boot_region_start)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSCurrHeap**](#variable-__oscurrheap)  <br> |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_OSExceptionNames**](#variable-__osexceptionnames)  <br> |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_OSInterruptNames**](#variable-__osinterruptnames)  <br> |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_OSPIErrors**](#variable-__ospierrors)  <br> |
|  [**u64**](types_8h.md#typedef-u64) | [**\_\_OSSpuriousInterrupts**](#variable-__osspuriousinterrupts)  <br> |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**\_\_OSStartTime**](#variable-__osstarttime)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**size**](#variable-size)  <br> |
|  [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**src**](#variable-src)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_ExitProcess**](#function-_exitprocess) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSCacheInit**](#function-__oscacheinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSCheckDeadLock**](#function-__oscheckdeadlock) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSCheckMutexes**](#function-__oscheckmutexes) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSCheckSram**](#function-__oschecksram) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSContextInit**](#function-__oscontextinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSDispatchInterrupt**](#function-__osdispatchinterrupt) ([**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSDoHotReset**](#function-__osdohotreset) ([**s32**](types_8h.md#typedef-s32) code) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**\_\_OSGetBootMode**](#function-__osgetbootmode) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**\_\_OSGetDIConfig**](#function-__osgetdiconfig) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_OSGetEffectivePriority**](#function-__osgeteffectivepriority) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**\_\_OSInterruptHandler**](_o_s_interrupt_8h.md#typedef-__osinterrupthandler) | [**\_\_OSGetInterruptHandler**](#function-__osgetinterrupthandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) BOOLerrupt) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSGetRTC**](#function-__osgetrtc) ([**u32**](types_8h.md#typedef-u32) \* rtc) <br> |
|  [**s64**](types_8h.md#typedef-s64) | [**\_\_OSGetSystemTime**](#function-__osgetsystemtime) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSInitAudioSystem**](#function-__osinitaudiosystem) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSInitSram**](#function-__osinitsram) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSInitSystemCall**](#function-__osinitsystemcall) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSInterruptInit**](#function-__osinterruptinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_OSIsDebuggerPresent**](#function-__osisdebuggerpresent) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**OSSram**](struct_o_s_sram.md) \* | [**\_\_OSLockSram**](#function-__oslocksram) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**OSSramEx**](struct_o_s_sram_ex.md) \* | [**\_\_OSLockSramEx**](#function-__oslocksramex) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) | [**\_\_OSMaskInterrupts**](#function-__osmaskinterrupts) ([**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) global) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSModuleInit**](#function-__osmoduleinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSPSInit**](#function-__ospsinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSPromoteThread**](#function-__ospromotethread) ([**OSThread**](struct_o_s_thread.md) \* thread, [**s32**](types_8h.md#typedef-s32) priority) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSReadROM**](#function-__osreadrom) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**s32**](types_8h.md#typedef-s32) length, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSReadROMAsync**](#function-__osreadromasync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**s32**](types_8h.md#typedef-s32) length, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)() callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSReboot**](#function-__osreboot) ([**u32**](types_8h.md#typedef-u32) resetCode, [**BOOL**](types_8h.md#typedef-bool) forceMenu) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSReschedule**](#function-__osreschedule) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSResetSWInterruptHandler**](#function-__osresetswinterrupthandler) ([**s16**](types_8h.md#typedef-s16) exception, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSSetBootMode**](#function-__ossetbootmode) ([**u16**](types_8h.md#typedef-u16) ntd) <br> |
|  [**\_\_OSInterruptHandler**](_o_s_interrupt_8h.md#typedef-__osinterrupthandler) | [**\_\_OSSetInterruptHandler**](#function-__ossetinterrupthandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) BOOLerrupt, [**\_\_OSInterruptHandler**](_o_s_interrupt_8h.md#typedef-__osinterrupthandler) handler) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSSetRTC**](#function-__ossetrtc) ([**u32**](types_8h.md#typedef-u32) rtc) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSSetTick**](#function-__ossettick) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) newTicks) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSSetTime**](#function-__ossettime) ([**s64**](types_8h.md#typedef-s64) time) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSStopAudioSystem**](#function-__osstopaudiosystem) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSSyncSram**](#function-__ossyncsram) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSSystemCallVectorEnd**](#function-__ossystemcallvectorend) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSSystemCallVectorStart**](#function-__ossystemcallvectorstart) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSThreadInit**](#function-__osthreadinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSUnhandledException**](#function-__osunhandledexception) ([**u8**](types_8h.md#typedef-u8) exception, [**OSContext**](struct_o_s_context.md) \* context, [**u32**](types_8h.md#typedef-u32) dsisr, [**u32**](types_8h.md#typedef-u32) dar) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSUnlockAllMutex**](#function-__osunlockallmutex) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSUnlockSram**](#function-__osunlocksram) ([**BOOL**](types_8h.md#typedef-bool) commit) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSUnlockSramEx**](#function-__osunlocksramex) ([**BOOL**](types_8h.md#typedef-bool) commit) <br> |
|  [**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) | [**\_\_OSUnmaskInterrupts**](#function-__osunmaskinterrupts) ([**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) global) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_RAS\_OSDisableInterrupts\_begin**](#function-__ras_osdisableinterrupts_begin) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_RAS\_OSDisableInterrupts\_end**](#function-__ras_osdisableinterrupts_end) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|   | [**\_\_declspec**](#function-__declspec) (section ".init") <br> |
|  [**s64**](types_8h.md#typedef-s64) | [**\_\_get\_clock**](#function-__get_clock) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_get\_time**](#function-__get_time) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_init\_user**](#function-__init_user) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_start**](#function-__start) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_to\_gm\_time**](#function-__to_gm_time) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_fini\_cpp**](#function-__fini_cpp) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_init\_cpp**](#function-__init_cpp) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


























## Public Attributes Documentation




### variable BOOT\_REGION\_END 

```C++
void* BOOT_REGION_END;
```




<hr>



### variable BOOT\_REGION\_START 

```C++
void* BOOT_REGION_START;
```




<hr>



### variable \_\_OSCurrHeap 

```C++
volatile BOOL __OSCurrHeap;
```




<hr>



### variable \_\_OSExceptionNames 

```C++
char* __OSExceptionNames[15];
```




<hr>



### variable \_\_OSInterruptNames 

```C++
char* __OSInterruptNames[33];
```




<hr>



### variable \_\_OSPIErrors 

```C++
char* __OSPIErrors[8];
```




<hr>



### variable \_\_OSSpuriousInterrupts 

```C++
u64 __OSSpuriousInterrupts;
```




<hr>



### variable \_\_OSStartTime 

```C++
OSTime __OSStartTime;
```




<hr>



### variable size 

```C++
u32 size;
```




<hr>



### variable src 

```C++
const void* src;
```




<hr>
## Public Functions Documentation




### function \_ExitProcess 

```C++
void _ExitProcess (
    void
) 
```




<hr>



### function \_\_OSCacheInit 

```C++
void __OSCacheInit (
    void
) 
```




<hr>



### function \_\_OSCheckDeadLock 

```C++
BOOL __OSCheckDeadLock (
    OSThread * thread
) 
```




<hr>



### function \_\_OSCheckMutexes 

```C++
BOOL __OSCheckMutexes (
    OSThread * thread
) 
```




<hr>



### function \_\_OSCheckSram 

```C++
BOOL __OSCheckSram (
    void
) 
```




<hr>



### function \_\_OSContextInit 

```C++
void __OSContextInit (
    void
) 
```




<hr>



### function \_\_OSDispatchInterrupt 

```C++
void __OSDispatchInterrupt (
    __OSException exception,
    OSContext * context
) 
```




<hr>



### function \_\_OSDoHotReset 

```C++
void __OSDoHotReset (
    s32 code
) 
```




<hr>



### function \_\_OSGetBootMode 

```C++
u16 __OSGetBootMode (
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



### function \_\_OSGetEffectivePriority 

```C++
s32 __OSGetEffectivePriority (
    OSThread * thread
) 
```




<hr>



### function \_\_OSGetInterruptHandler 

```C++
__OSInterruptHandler __OSGetInterruptHandler (
    __OSInterrupt BOOLerrupt
) 
```




<hr>



### function \_\_OSGetRTC 

```C++
BOOL __OSGetRTC (
    u32 * rtc
) 
```




<hr>



### function \_\_OSGetSystemTime 

```C++
s64 __OSGetSystemTime () 
```




<hr>



### function \_\_OSInitAudioSystem 

```C++
void __OSInitAudioSystem (
    void
) 
```




<hr>



### function \_\_OSInitSram 

```C++
void __OSInitSram () 
```




<hr>



### function \_\_OSInitSystemCall 

```C++
void __OSInitSystemCall (
    void
) 
```




<hr>



### function \_\_OSInterruptInit 

```C++
void __OSInterruptInit (
    void
) 
```




<hr>



### function \_\_OSIsDebuggerPresent 

```C++
u32 __OSIsDebuggerPresent (
    void
) 
```




<hr>



### function \_\_OSLockSram 

```C++
OSSram * __OSLockSram (
    void
) 
```




<hr>



### function \_\_OSLockSramEx 

```C++
OSSramEx * __OSLockSramEx (
    void
) 
```




<hr>



### function \_\_OSMaskInterrupts 

```C++
OSInterruptMask __OSMaskInterrupts (
    OSInterruptMask global
) 
```




<hr>



### function \_\_OSModuleInit 

```C++
void __OSModuleInit (
    void
) 
```




<hr>



### function \_\_OSPSInit 

```C++
void __OSPSInit (
    void
) 
```




<hr>



### function \_\_OSPromoteThread 

```C++
void __OSPromoteThread (
    OSThread * thread,
    s32 priority
) 
```




<hr>



### function \_\_OSReadROM 

```C++
BOOL __OSReadROM (
    void * buffer,
    s32 length,
    long offset
) 
```




<hr>



### function \_\_OSReadROMAsync 

```C++
BOOL __OSReadROMAsync (
    void * buffer,
    s32 length,
    long offset,
    void (*)() callback
) 
```




<hr>



### function \_\_OSReboot 

```C++
void __OSReboot (
    u32 resetCode,
    BOOL forceMenu
) 
```




<hr>



### function \_\_OSReschedule 

```C++
void __OSReschedule (
    void
) 
```




<hr>



### function \_\_OSResetSWInterruptHandler 

```C++
void __OSResetSWInterruptHandler (
    s16 exception,
    OSContext * context
) 
```




<hr>



### function \_\_OSSetBootMode 

```C++
void __OSSetBootMode (
    u16 ntd
) 
```




<hr>



### function \_\_OSSetInterruptHandler 

```C++
__OSInterruptHandler __OSSetInterruptHandler (
    __OSInterrupt BOOLerrupt,
    __OSInterruptHandler handler
) 
```




<hr>



### function \_\_OSSetRTC 

```C++
BOOL __OSSetRTC (
    u32 rtc
) 
```




<hr>



### function \_\_OSSetTick 

```C++
void __OSSetTick (
    register  u32 newTicks
) 
```




<hr>



### function \_\_OSSetTime 

```C++
void __OSSetTime (
    s64 time
) 
```




<hr>



### function \_\_OSStopAudioSystem 

```C++
void __OSStopAudioSystem (
    void
) 
```




<hr>



### function \_\_OSSyncSram 

```C++
BOOL __OSSyncSram (
    void
) 
```




<hr>



### function \_\_OSSystemCallVectorEnd 

```C++
void __OSSystemCallVectorEnd () 
```




<hr>



### function \_\_OSSystemCallVectorStart 

```C++
void __OSSystemCallVectorStart () 
```




<hr>



### function \_\_OSThreadInit 

```C++
void __OSThreadInit (
    void
) 
```




<hr>



### function \_\_OSUnhandledException 

```C++
void __OSUnhandledException (
    u8 exception,
    OSContext * context,
    u32 dsisr,
    u32 dar
) 
```




<hr>



### function \_\_OSUnlockAllMutex 

```C++
void __OSUnlockAllMutex (
    OSThread * thread
) 
```




<hr>



### function \_\_OSUnlockSram 

```C++
BOOL __OSUnlockSram (
    BOOL commit
) 
```




<hr>



### function \_\_OSUnlockSramEx 

```C++
BOOL __OSUnlockSramEx (
    BOOL commit
) 
```




<hr>



### function \_\_OSUnmaskInterrupts 

```C++
OSInterruptMask __OSUnmaskInterrupts (
    OSInterruptMask global
) 
```




<hr>



### function \_\_RAS\_OSDisableInterrupts\_begin 

```C++
void __RAS_OSDisableInterrupts_begin (
    void
) 
```




<hr>



### function \_\_RAS\_OSDisableInterrupts\_end 

```C++
void __RAS_OSDisableInterrupts_end (
    void
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



### function \_\_get\_clock 

```C++
s64 __get_clock (
    void
) 
```




<hr>



### function \_\_get\_time 

```C++
u32 __get_time (
    void
) 
```




<hr>



### function \_\_init\_user 

```C++
void __init_user (
    void
) 
```




<hr>



### function \_\_start 

```C++
void __start (
    void
) 
```




<hr>



### function \_\_to\_gm\_time 

```C++
int __to_gm_time (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_fini\_cpp 

```C++
static void __fini_cpp (
    void
) 
```




<hr>



### function \_\_init\_cpp 

```C++
static void __init_cpp (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSPrivate.h`

