

# File os.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os.h**](os_8h.md)

[Go to the source code of this file](os_8h_source.md)



* `#include <types.h>`
* `#include <dolphin/base/PPCArch.h>`
* `#include <dolphin/os/OSAlarm.h>`
* `#include <dolphin/os/OSAlloc.h>`
* `#include <dolphin/os/OSCache.h>`
* `#include <dolphin/os/OSContext.h>`
* `#include <dolphin/os/OSDC.h>`
* `#include <dolphin/os/OSError.h>`
* `#include <dolphin/os/OSException.h>`
* `#include <dolphin/os/OSFont.h>`
* `#include <dolphin/os/OSIC.h>`
* `#include <dolphin/os/OSInterrupt.h>`
* `#include <dolphin/os/OSL2.h>`
* `#include <dolphin/os/OSLC.h>`
* `#include <dolphin/os/OSMessage.h>`
* `#include <dolphin/os/OSModule.h>`
* `#include <dolphin/os/OSMutex.h>`
* `#include <dolphin/os/OSReset.h>`
* `#include <dolphin/os/OSResetSW.h>`
* `#include <dolphin/os/OSRtc.h>`
* `#include <dolphin/os/OSSerial.h>`
* `#include <dolphin/os/OSStopwatch.h>`
* `#include <dolphin/os/OSThread.h>`
* `#include <dolphin/os/OSTime.h>`
* `#include <dolphin/os/OSBootInfo.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**OSCalendarTime**](struct_o_s_calendar_time.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSCalendarTime**](struct_o_s_calendar_time.md) | [**OSCalendarTime**](#typedef-oscalendartime)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_OSBusClock**](#variable-__osbusclock)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_OSCoreClock**](#variable-__oscoreclock)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSAllocFromArenaHi**](#function-osallocfromarenahi) ([**u32**](types_8h.md#typedef-u32) size, [**u32**](types_8h.md#typedef-u32) align) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSAllocFromArenaLo**](#function-osallocfromarenalo) ([**u32**](types_8h.md#typedef-u32) size, [**u32**](types_8h.md#typedef-u32) align) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSCachedToPhysical**](#function-oscachedtophysical) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* caddr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSCachedToUncached**](#function-oscachedtouncached) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* caddr) <br> |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**OSCalendarTimeToTicks**](#function-oscalendartimetoticks) ([**OSCalendarTime**](struct_o_s_calendar_time.md) \* td) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSDisableInterrupts**](#function-osdisableinterrupts) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSEnableInterrupts**](#function-osenableinterrupts) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSGetArenaHi**](#function-osgetarenahi) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSGetArenaLo**](#function-osgetarenalo) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetConsoleSimulatedMemSize**](#function-osgetconsolesimulatedmemsize) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetConsoleType**](#function-osgetconsoletype) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetPhysicalMemSize**](#function-osgetphysicalmemsize) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetSoundMode**](#function-osgetsoundmode) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**OSTick**](_o_s_time_8h.md#typedef-ostick) | [**OSGetTick**](#function-osgettick) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**OSGetTime**](#function-osgettime) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInit**](#function-osinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSPanic**](#function-ospanic) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* file, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) line, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msg, ...) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSPhysicalToCached**](#function-osphysicaltocached) ([**u32**](types_8h.md#typedef-u32) paddr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSPhysicalToUncached**](#function-osphysicaltouncached) ([**u32**](types_8h.md#typedef-u32) paddr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSReport**](#function-osreport) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msg, ...) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSRestoreInterrupts**](#function-osrestoreinterrupts) ([**BOOL**](types_8h.md#typedef-bool) level) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetArenaHi**](#function-ossetarenahi) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* newHi) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetArenaLo**](#function-ossetarenalo) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* newLo) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetSoundMode**](#function-ossetsoundmode) ([**u32**](types_8h.md#typedef-u32) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSTicksToCalendarTime**](#function-ostickstocalendartime) ([**OSTime**](_o_s_time_8h.md#typedef-ostime) ticks, [**OSCalendarTime**](struct_o_s_calendar_time.md) \* td) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSUncachedToCached**](#function-osuncachedtocached) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* ucaddr) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSUncachedToPhysical**](#function-osuncachedtophysical) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* ucaddr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSPSInit**](#function-__ospsinit) () <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**OSCachedToPhysical**](os_8h.md#define-oscachedtophysical) (caddr) `(([**u32**](types_8h.md#typedef-u32))(([**u32**](types_8h.md#typedef-u32))([**caddr**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) - [**OS\_BASE\_CACHED**](os_8h.md#define-os_base_cached)))`<br> |
| define  | [**OSCachedToUncached**](os_8h.md#define-oscachedtouncached) (caddr) `(([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)\*)(([**u8**](types_8h.md#typedef-u8)\*)([**caddr**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) + ([**OS\_BASE\_UNCACHED**](os_8h.md#define-os_base_uncached) - [**OS\_BASE\_CACHED**](os_8h.md#define-os_base_cached))))`<br> |
| define  | [**OSMicrosecondsToTicks**](os_8h.md#define-osmicrosecondstoticks) (usec) `(((usec) \* ([**OS\_TIMER\_CLOCK**](os_8h.md#define-os_timer_clock) / 125000)) / 8)`<br> |
| define  | [**OSMillisecondsToTicks**](os_8h.md#define-osmillisecondstoticks) (msec) `((msec) \* ([**OS\_TIMER\_CLOCK**](os_8h.md#define-os_timer_clock) / 1000))`<br> |
| define  | [**OSNanosecondsToTicks**](os_8h.md#define-osnanosecondstoticks) (nsec) `((([**nsec**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) \* ([**OS\_TIMER\_CLOCK**](os_8h.md#define-os_timer_clock) / 125000)) / 8000)`<br> |
| define  | [**OSPhysicalToCached**](os_8h.md#define-osphysicaltocached) (paddr) `(([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)\*)(([**u32**](types_8h.md#typedef-u32))([**OS\_BASE\_CACHED**](os_8h.md#define-os_base_cached) + ([**u32**](types_8h.md#typedef-u32))([**paddr**](_c_a_r_d_private_8h.md#define-card_max_mount_step)))))`<br> |
| define  | [**OSPhysicalToUncached**](os_8h.md#define-osphysicaltouncached) (paddr) `(([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)\*)(([**u32**](types_8h.md#typedef-u32))([**OS\_BASE\_UNCACHED**](os_8h.md#define-os_base_uncached) + ([**u32**](types_8h.md#typedef-u32))([**paddr**](_c_a_r_d_private_8h.md#define-card_max_mount_step)))))`<br> |
| define  | [**OSRoundDown32B**](os_8h.md#define-osrounddown32b) (x) `((([**u32**](types_8h.md#typedef-u32))(x)) & ~(32 - 1))`<br> |
| define  | [**OSRoundUp32B**](os_8h.md#define-osroundup32b) (x) `((([**u32**](types_8h.md#typedef-u32))(x) + 32 - 1) & ~(32 - 1))`<br> |
| define  | [**OSSecondsToTicks**](os_8h.md#define-ossecondstoticks) (sec) `((sec) \* ([**OS\_TIMER\_CLOCK**](os_8h.md#define-os_timer_clock)))`<br> |
| define  | [**OSTicksToMicroseconds**](os_8h.md#define-ostickstomicroseconds) (ticks) `(([**ticks**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) \* 8 / ([**OS\_TIMER\_CLOCK**](os_8h.md#define-os_timer_clock) / 125000))`<br> |
| define  | [**OSTicksToMilliseconds**](os_8h.md#define-ostickstomilliseconds) (ticks) `(([**ticks**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) / ([**OS\_TIMER\_CLOCK**](os_8h.md#define-os_timer_clock) / 1000))`<br> |
| define  | [**OSTicksToSeconds**](os_8h.md#define-ostickstoseconds) (ticks) `(([**ticks**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) / ([**OS\_TIMER\_CLOCK**](os_8h.md#define-os_timer_clock)))`<br> |
| define  | [**OSUncachedToCached**](os_8h.md#define-osuncachedtocached) (ucaddr) `(([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)\*)(([**u8**](types_8h.md#typedef-u8)\*)([**ucaddr**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) - ([**OS\_BASE\_UNCACHED**](os_8h.md#define-os_base_uncached) - [**OS\_BASE\_CACHED**](os_8h.md#define-os_base_cached))))`<br> |
| define  | [**OSUncachedToPhysical**](os_8h.md#define-osuncachedtophysical) (ucaddr) `(([**u32**](types_8h.md#typedef-u32))(([**u32**](types_8h.md#typedef-u32))([**ucaddr**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) - [**OS\_BASE\_UNCACHED**](os_8h.md#define-os_base_uncached)))`<br> |
| define  | [**OS\_BASE\_CACHED**](os_8h.md#define-os_base_cached)  `([**OS\_CACHED\_REGION\_PREFIX**](os_8h.md#define-os_cached_region_prefix) &lt;&lt; 16)`<br> |
| define  | [**OS\_BASE\_UNCACHED**](os_8h.md#define-os_base_uncached)  `([**OS\_UNCACHED\_REGION\_PREFIX**](os_8h.md#define-os_uncached_region_prefix) &lt;&lt; 16)`<br> |
| define  | [**OS\_BUS\_CLOCK**](os_8h.md#define-os_bus_clock)  `[**\_\_OSBusClock**](os_8h.md#variable-__osbusclock)`<br> |
| define  | [**OS\_CACHED\_REGION\_PREFIX**](os_8h.md#define-os_cached_region_prefix)  `0x8000`<br> |
| define  | [**OS\_CONSOLE\_ARTHUR**](os_8h.md#define-os_console_arthur)  `0x10000002`<br> |
| define  | [**OS\_CONSOLE\_DEVELOPMENT**](os_8h.md#define-os_console_development)  `0x10000000`<br> |
| define  | [**OS\_CONSOLE\_DEVHW1**](os_8h.md#define-os_console_devhw1)  `0x10000004`<br> |
| define  | [**OS\_CONSOLE\_DEVHW2**](os_8h.md#define-os_console_devhw2)  `0x10000005`<br> |
| define  | [**OS\_CONSOLE\_EMULATOR**](os_8h.md#define-os_console_emulator)  `0x10000000`<br> |
| define  | [**OS\_CONSOLE\_MINNOW**](os_8h.md#define-os_console_minnow)  `0x10000003`<br> |
| define  | [**OS\_CONSOLE\_PC\_EMULATOR**](os_8h.md#define-os_console_pc_emulator)  `0x10000001`<br> |
| define  | [**OS\_CONSOLE\_RETAIL**](os_8h.md#define-os_console_retail)  `0x00000000`<br> |
| define  | [**OS\_CONSOLE\_RETAIL1**](os_8h.md#define-os_console_retail1)  `0x00000001`<br> |
| define  | [**OS\_CONSOLE\_RETAIL2**](os_8h.md#define-os_console_retail2)  `0x00000002`<br> |
| define  | [**OS\_CORE\_CLOCK**](os_8h.md#define-os_core_clock)  `[**\_\_OSCoreClock**](os_8h.md#variable-__oscoreclock)`<br> |
| define  | [**OS\_PHYSICAL\_MASK**](os_8h.md#define-os_physical_mask)  `0x3FFF`<br> |
| define  | [**OS\_SOUND\_MODE\_MONO**](os_8h.md#define-os_sound_mode_mono)  `0`<br> |
| define  | [**OS\_SOUND\_MODE\_STEREO**](os_8h.md#define-os_sound_mode_stereo)  `1`<br> |
| define  | [**OS\_TIMER\_CLOCK**](os_8h.md#define-os_timer_clock)  `([**OS\_BUS\_CLOCK**](os_8h.md#define-os_bus_clock) / 4)`<br> |
| define  | [**OS\_UNCACHED\_REGION\_PREFIX**](os_8h.md#define-os_uncached_region_prefix)  `0xC000`<br> |

## Public Types Documentation




### typedef OSCalendarTime 

```C++
typedef struct OSCalendarTime OSCalendarTime;
```




<hr>
## Public Attributes Documentation




### variable \_\_OSBusClock 

```C++
u32 __OSBusClock;
```




<hr>



### variable \_\_OSCoreClock 

```C++
u32 __OSCoreClock;
```




<hr>
## Public Functions Documentation




### function OSAllocFromArenaHi 

```C++
void * OSAllocFromArenaHi (
    u32 size,
    u32 align
) 
```




<hr>



### function OSAllocFromArenaLo 

```C++
void * OSAllocFromArenaLo (
    u32 size,
    u32 align
) 
```




<hr>



### function OSCachedToPhysical 

```C++
u32 OSCachedToPhysical (
    void * caddr
) 
```




<hr>



### function OSCachedToUncached 

```C++
void * OSCachedToUncached (
    void * caddr
) 
```




<hr>



### function OSCalendarTimeToTicks 

```C++
OSTime OSCalendarTimeToTicks (
    OSCalendarTime * td
) 
```




<hr>



### function OSDisableInterrupts 

```C++
BOOL OSDisableInterrupts (
    void
) 
```




<hr>



### function OSEnableInterrupts 

```C++
BOOL OSEnableInterrupts (
    void
) 
```




<hr>



### function OSGetArenaHi 

```C++
void * OSGetArenaHi (
    void
) 
```




<hr>



### function OSGetArenaLo 

```C++
void * OSGetArenaLo (
    void
) 
```




<hr>



### function OSGetConsoleSimulatedMemSize 

```C++
u32 OSGetConsoleSimulatedMemSize (
    void
) 
```




<hr>



### function OSGetConsoleType 

```C++
u32 OSGetConsoleType (
    void
) 
```




<hr>



### function OSGetPhysicalMemSize 

```C++
u32 OSGetPhysicalMemSize (
    void
) 
```




<hr>



### function OSGetSoundMode 

```C++
u32 OSGetSoundMode (
    void
) 
```




<hr>



### function OSGetTick 

```C++
OSTick OSGetTick (
    void
) 
```




<hr>



### function OSGetTime 

```C++
OSTime OSGetTime (
    void
) 
```




<hr>



### function OSInit 

```C++
void OSInit (
    void
) 
```




<hr>



### function OSPanic 

```C++
void OSPanic (
    char * file,
    int line,
    char * msg,
    ...
) 
```




<hr>



### function OSPhysicalToCached 

```C++
void * OSPhysicalToCached (
    u32 paddr
) 
```




<hr>



### function OSPhysicalToUncached 

```C++
void * OSPhysicalToUncached (
    u32 paddr
) 
```




<hr>



### function OSReport 

```C++
void OSReport (
    char * msg,
    ...
) 
```




<hr>



### function OSRestoreInterrupts 

```C++
BOOL OSRestoreInterrupts (
    BOOL level
) 
```




<hr>



### function OSSetArenaHi 

```C++
void OSSetArenaHi (
    void * newHi
) 
```




<hr>



### function OSSetArenaLo 

```C++
void OSSetArenaLo (
    void * newLo
) 
```




<hr>



### function OSSetSoundMode 

```C++
void OSSetSoundMode (
    u32 mode
) 
```




<hr>



### function OSTicksToCalendarTime 

```C++
void OSTicksToCalendarTime (
    OSTime ticks,
    OSCalendarTime * td
) 
```




<hr>



### function OSUncachedToCached 

```C++
void * OSUncachedToCached (
    void * ucaddr
) 
```




<hr>



### function OSUncachedToPhysical 

```C++
u32 OSUncachedToPhysical (
    void * ucaddr
) 
```




<hr>



### function \_\_OSPSInit 

```C++
void __OSPSInit () 
```




<hr>
## Macro Definition Documentation





### define OSCachedToPhysical 

```C++
#define OSCachedToPhysical (
    caddr
) `(( u32 )(( u32 )( caddr ) - OS_BASE_CACHED ))`
```




<hr>



### define OSCachedToUncached 

```C++
#define OSCachedToUncached (
    caddr
) `(( void *)(( u8 *)( caddr ) + ( OS_BASE_UNCACHED - OS_BASE_CACHED )))`
```




<hr>



### define OSMicrosecondsToTicks 

```C++
#define OSMicrosecondsToTicks (
    usec
) `(((usec) * ( OS_TIMER_CLOCK / 125000)) / 8)`
```




<hr>



### define OSMillisecondsToTicks 

```C++
#define OSMillisecondsToTicks (
    msec
) `((msec) * ( OS_TIMER_CLOCK / 1000))`
```




<hr>



### define OSNanosecondsToTicks 

```C++
#define OSNanosecondsToTicks (
    nsec
) `((( nsec ) * ( OS_TIMER_CLOCK / 125000)) / 8000)`
```




<hr>



### define OSPhysicalToCached 

```C++
#define OSPhysicalToCached (
    paddr
) `(( void *)(( u32 )( OS_BASE_CACHED + ( u32 )( paddr ))))`
```




<hr>



### define OSPhysicalToUncached 

```C++
#define OSPhysicalToUncached (
    paddr
) `(( void *)(( u32 )( OS_BASE_UNCACHED + ( u32 )( paddr ))))`
```




<hr>



### define OSRoundDown32B 

```C++
#define OSRoundDown32B (
    x
) `((( u32 )(x)) & ~(32 - 1))`
```




<hr>



### define OSRoundUp32B 

```C++
#define OSRoundUp32B (
    x
) `((( u32 )(x) + 32 - 1) & ~(32 - 1))`
```




<hr>



### define OSSecondsToTicks 

```C++
#define OSSecondsToTicks (
    sec
) `((sec) * ( OS_TIMER_CLOCK ))`
```




<hr>



### define OSTicksToMicroseconds 

```C++
#define OSTicksToMicroseconds (
    ticks
) `(( ticks ) * 8 / ( OS_TIMER_CLOCK / 125000))`
```




<hr>



### define OSTicksToMilliseconds 

```C++
#define OSTicksToMilliseconds (
    ticks
) `(( ticks ) / ( OS_TIMER_CLOCK / 1000))`
```




<hr>



### define OSTicksToSeconds 

```C++
#define OSTicksToSeconds (
    ticks
) `(( ticks ) / ( OS_TIMER_CLOCK ))`
```




<hr>



### define OSUncachedToCached 

```C++
#define OSUncachedToCached (
    ucaddr
) `(( void *)(( u8 *)( ucaddr ) - ( OS_BASE_UNCACHED - OS_BASE_CACHED )))`
```




<hr>



### define OSUncachedToPhysical 

```C++
#define OSUncachedToPhysical (
    ucaddr
) `(( u32 )(( u32 )( ucaddr ) - OS_BASE_UNCACHED ))`
```




<hr>



### define OS\_BASE\_CACHED 

```C++
#define OS_BASE_CACHED `( OS_CACHED_REGION_PREFIX << 16)`
```




<hr>



### define OS\_BASE\_UNCACHED 

```C++
#define OS_BASE_UNCACHED `( OS_UNCACHED_REGION_PREFIX << 16)`
```




<hr>



### define OS\_BUS\_CLOCK 

```C++
#define OS_BUS_CLOCK `__OSBusClock`
```




<hr>



### define OS\_CACHED\_REGION\_PREFIX 

```C++
#define OS_CACHED_REGION_PREFIX `0x8000`
```




<hr>



### define OS\_CONSOLE\_ARTHUR 

```C++
#define OS_CONSOLE_ARTHUR `0x10000002`
```




<hr>



### define OS\_CONSOLE\_DEVELOPMENT 

```C++
#define OS_CONSOLE_DEVELOPMENT `0x10000000`
```




<hr>



### define OS\_CONSOLE\_DEVHW1 

```C++
#define OS_CONSOLE_DEVHW1 `0x10000004`
```




<hr>



### define OS\_CONSOLE\_DEVHW2 

```C++
#define OS_CONSOLE_DEVHW2 `0x10000005`
```




<hr>



### define OS\_CONSOLE\_EMULATOR 

```C++
#define OS_CONSOLE_EMULATOR `0x10000000`
```




<hr>



### define OS\_CONSOLE\_MINNOW 

```C++
#define OS_CONSOLE_MINNOW `0x10000003`
```




<hr>



### define OS\_CONSOLE\_PC\_EMULATOR 

```C++
#define OS_CONSOLE_PC_EMULATOR `0x10000001`
```




<hr>



### define OS\_CONSOLE\_RETAIL 

```C++
#define OS_CONSOLE_RETAIL `0x00000000`
```




<hr>



### define OS\_CONSOLE\_RETAIL1 

```C++
#define OS_CONSOLE_RETAIL1 `0x00000001`
```




<hr>



### define OS\_CONSOLE\_RETAIL2 

```C++
#define OS_CONSOLE_RETAIL2 `0x00000002`
```




<hr>



### define OS\_CORE\_CLOCK 

```C++
#define OS_CORE_CLOCK `__OSCoreClock`
```




<hr>



### define OS\_PHYSICAL\_MASK 

```C++
#define OS_PHYSICAL_MASK `0x3FFF`
```




<hr>



### define OS\_SOUND\_MODE\_MONO 

```C++
#define OS_SOUND_MODE_MONO `0`
```




<hr>



### define OS\_SOUND\_MODE\_STEREO 

```C++
#define OS_SOUND_MODE_STEREO `1`
```




<hr>



### define OS\_TIMER\_CLOCK 

```C++
#define OS_TIMER_CLOCK `( OS_BUS_CLOCK / 4)`
```




<hr>



### define OS\_UNCACHED\_REGION\_PREFIX 

```C++
#define OS_UNCACHED_REGION_PREFIX `0xC000`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os.h`

