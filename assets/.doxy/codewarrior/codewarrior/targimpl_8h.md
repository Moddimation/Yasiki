

# File targimpl.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**Processor**](dir_6d9f10413440ce0b85b7b0c8e171c114.md) **>** [**ppc**](dir_7626a71f4911851dc213096b35efc22e.md) **>** [**Generic**](dir_c6829fdd7f72e92129fadccb7f202b81.md) **>** [**targimpl.h**](targimpl_8h.md)

[Go to the source code of this file](targimpl_8h_source.md)



* `#include "Portable/nubevent.h"`
* `#include "stddef.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**DSCPUType**](struct_d_s_c_p_u_type.md) <br> |
| struct | [**DSVersions**](struct_d_s_versions.md) <br> |
| struct | [**Default\_PPC**](struct_default___p_p_c.md) <br> |
| struct | [**Extended1\_PPC\_6xx\_7xx**](struct_extended1___p_p_c__6xx__7xx.md) <br> |
| struct | [**Extended2\_PPC\_6xx\_7xx**](struct_extended2___p_p_c__6xx__7xx.md) <br> |
| struct | [**Float\_PPC**](struct_float___p_p_c.md) <br> |
| struct | [**ProcessorState\_PPC\_6xx\_7xx**](struct_processor_state___p_p_c__6xx__7xx.md) <br> |
| struct | [**TRKState**](struct_t_r_k_state.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef struct [**DSCPUType**](struct_d_s_c_p_u_type.md) | [**DSCPUType**](#typedef-dscputype)  <br> |
| typedef struct [**DSVersions**](struct_d_s_versions.md) | [**DSVersions**](#typedef-dsversions)  <br> |
| typedef struct [**Default\_PPC**](struct_default___p_p_c.md) | [**Default\_PPC**](#typedef-default_ppc)  <br> |
| typedef struct [**Extended1\_PPC\_6xx\_7xx**](struct_extended1___p_p_c__6xx__7xx.md) | [**Extended1\_PPC\_6xx\_7xx**](#typedef-extended1_ppc_6xx_7xx)  <br> |
| typedef struct [**Extended2\_PPC\_6xx\_7xx**](struct_extended2___p_p_c__6xx__7xx.md) | [**Extended2\_PPC\_6xx\_7xx**](#typedef-extended2_ppc_6xx_7xx)  <br> |
| typedef struct [**Float\_PPC**](struct_float___p_p_c.md) | [**Float\_PPC**](#typedef-float_ppc)  <br> |
| typedef [**ProcessorState\_PPC\_6xx\_7xx**](struct_processor_state___p_p_c__6xx__7xx.md) | [**ProcessorState\_PPC**](#typedef-processorstate_ppc)  <br> |
| typedef struct [**ProcessorState\_PPC\_6xx\_7xx**](struct_processor_state___p_p_c__6xx__7xx.md) | [**ProcessorState\_PPC\_6xx\_7xx**](#typedef-processorstate_ppc_6xx_7xx)  <br> |
| typedef struct [**TRKState**](struct_t_r_k_state.md) | [**TRKState**](#typedef-trkstate)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**ProcessorState\_PPC**](targimpl_8h.md#typedef-processorstate_ppc) | [**gTRKCPUState**](#variable-gtrkcpustate)  <br> |
|  [**TRKState**](struct_t_r_k_state.md) | [**gTRKState**](#variable-gtrkstate)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**TRKDestructEvent**](#function-trkdestructevent) ([**TRKEvent**](struct_t_r_k_event.md) \* event) <br> |
|  void | [**TRKInterruptHandler**](#function-trkinterrupthandler) () <br> |
|  void | [**TRKPostInterruptEvent**](#function-trkpostinterruptevent) (void) <br> |
|  void | [**TRKSwapAndGo**](#function-trkswapandgo) () <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetAccessARAM**](#function-trktargetaccessaram) (u32 p1, u32 p2, u32 \* p3, BOOL read) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetAccessDefault**](#function-trktargetaccessdefault) (u32 firstRegister, u32 lastRegister, [**TRKBuffer**](struct_t_r_k_buffer.md) \* b, [**size\_t**](size__t_8h.md#typedef-size_t) \* registersLengthPtr, BOOL read) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetAccessExtended1**](#function-trktargetaccessextended1) (u32 firstRegister, u32 lastRegister, [**TRKBuffer**](struct_t_r_k_buffer.md) \* b, [**size\_t**](size__t_8h.md#typedef-size_t) \* registersLengthPtr, BOOL read) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetAccessExtended2**](#function-trktargetaccessextended2) (u32 firstRegister, u32 lastRegister, [**TRKBuffer**](struct_t_r_k_buffer.md) \* b, [**size\_t**](size__t_8h.md#typedef-size_t) \* registerStorageSize, BOOL read) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetAccessFP**](#function-trktargetaccessfp) (u32 firstRegister, u32 lastRegister, [**TRKBuffer**](struct_t_r_k_buffer.md) \* b, [**size\_t**](size__t_8h.md#typedef-size_t) \* registersLengthPtr, BOOL read) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetAccessMemory**](#function-trktargetaccessmemory) (void \* data, u32 start, [**size\_t**](size__t_8h.md#typedef-size_t) \* length, [**MemoryAccessOptions**](trk_8h.md#enum-memoryaccessoptions) accessOptions, BOOL read) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetAddExceptionInfo**](#function-trktargetaddexceptioninfo) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* b) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetAddStopInfo**](#function-trktargetaddstopinfo) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* b) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetCPUType**](#function-trktargetcputype) ([**DSCPUType**](struct_d_s_c_p_u_type.md) \* cpuType) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetFlushCache**](#function-trktargetflushcache) (u8, void \* start, void \* end) <br> |
|  u32 | [**TRKTargetGetPC**](#function-trktargetgetpc) () <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetInterrupt**](#function-trktargetinterrupt) ([**TRKEvent**](struct_t_r_k_event.md) \* event) <br> |
|  void | [**TRKTargetSetInputPendingPtr**](#function-trktargetsetinputpendingptr) (void \* ptr) <br> |
|  void | [**TRKTargetSetStopped**](#function-trktargetsetstopped) (unsigned int stopped) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetSingleStep**](#function-trktargetsinglestep) (u32 count, BOOL stepOver) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetStepOutOfRange**](#function-trktargetstepoutofrange) (u32 rangeStart, u32 rangeEnd, BOOL stepOver) <br> |
|  u32 | [**TRKTargetStop**](#function-trktargetstop) () <br> |
|  BOOL | [**TRKTargetStopped**](#function-trktargetstopped) (void) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetSupportMask**](#function-trktargetsupportmask) (u8 mask) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetSupportRequest**](#function-trktargetsupportrequest) () <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTargetVersions**](#function-trktargetversions) ([**DSVersions**](struct_d_s_versions.md) \* versions) <br> |




























## Public Types Documentation




### typedef DSCPUType 

```C++
typedef struct DSCPUType DSCPUType;
```




<hr>



### typedef DSVersions 

```C++
typedef struct DSVersions DSVersions;
```




<hr>



### typedef Default\_PPC 

```C++
typedef struct Default_PPC Default_PPC;
```




<hr>



### typedef Extended1\_PPC\_6xx\_7xx 

```C++
typedef struct Extended1_PPC_6xx_7xx Extended1_PPC_6xx_7xx;
```




<hr>



### typedef Extended2\_PPC\_6xx\_7xx 

```C++
typedef struct Extended2_PPC_6xx_7xx Extended2_PPC_6xx_7xx;
```




<hr>



### typedef Float\_PPC 

```C++
typedef struct Float_PPC Float_PPC;
```




<hr>



### typedef ProcessorState\_PPC 

```C++
typedef ProcessorState_PPC_6xx_7xx ProcessorState_PPC;
```




<hr>



### typedef ProcessorState\_PPC\_6xx\_7xx 

```C++
typedef struct ProcessorState_PPC_6xx_7xx ProcessorState_PPC_6xx_7xx;
```




<hr>



### typedef TRKState 

```C++
typedef struct TRKState TRKState;
```




<hr>
## Public Attributes Documentation




### variable gTRKCPUState 

```C++
ProcessorState_PPC gTRKCPUState;
```




<hr>



### variable gTRKState 

```C++
TRKState gTRKState;
```




<hr>
## Public Functions Documentation




### function TRKDestructEvent 

```C++
void TRKDestructEvent (
    TRKEvent * event
) 
```




<hr>



### function TRKInterruptHandler 

```C++
void TRKInterruptHandler () 
```




<hr>



### function TRKPostInterruptEvent 

```C++
void TRKPostInterruptEvent (
    void
) 
```




<hr>



### function TRKSwapAndGo 

```C++
void TRKSwapAndGo () 
```




<hr>



### function TRKTargetAccessARAM 

```C++
DSError TRKTargetAccessARAM (
    u32 p1,
    u32 p2,
    u32 * p3,
    BOOL read
) 
```




<hr>



### function TRKTargetAccessDefault 

```C++
DSError TRKTargetAccessDefault (
    u32 firstRegister,
    u32 lastRegister,
    TRKBuffer * b,
    size_t * registersLengthPtr,
    BOOL read
) 
```




<hr>



### function TRKTargetAccessExtended1 

```C++
DSError TRKTargetAccessExtended1 (
    u32 firstRegister,
    u32 lastRegister,
    TRKBuffer * b,
    size_t * registersLengthPtr,
    BOOL read
) 
```




<hr>



### function TRKTargetAccessExtended2 

```C++
DSError TRKTargetAccessExtended2 (
    u32 firstRegister,
    u32 lastRegister,
    TRKBuffer * b,
    size_t * registerStorageSize,
    BOOL read
) 
```




<hr>



### function TRKTargetAccessFP 

```C++
DSError TRKTargetAccessFP (
    u32 firstRegister,
    u32 lastRegister,
    TRKBuffer * b,
    size_t * registersLengthPtr,
    BOOL read
) 
```




<hr>



### function TRKTargetAccessMemory 

```C++
DSError TRKTargetAccessMemory (
    void * data,
    u32 start,
    size_t * length,
    MemoryAccessOptions accessOptions,
    BOOL read
) 
```




<hr>



### function TRKTargetAddExceptionInfo 

```C++
DSError TRKTargetAddExceptionInfo (
    TRKBuffer * b
) 
```




<hr>



### function TRKTargetAddStopInfo 

```C++
DSError TRKTargetAddStopInfo (
    TRKBuffer * b
) 
```




<hr>



### function TRKTargetCPUType 

```C++
DSError TRKTargetCPUType (
    DSCPUType * cpuType
) 
```




<hr>



### function TRKTargetFlushCache 

```C++
DSError TRKTargetFlushCache (
    u8,
    void * start,
    void * end
) 
```




<hr>



### function TRKTargetGetPC 

```C++
u32 TRKTargetGetPC () 
```




<hr>



### function TRKTargetInterrupt 

```C++
DSError TRKTargetInterrupt (
    TRKEvent * event
) 
```




<hr>



### function TRKTargetSetInputPendingPtr 

```C++
void TRKTargetSetInputPendingPtr (
    void * ptr
) 
```




<hr>



### function TRKTargetSetStopped 

```C++
void TRKTargetSetStopped (
    unsigned int stopped
) 
```




<hr>



### function TRKTargetSingleStep 

```C++
DSError TRKTargetSingleStep (
    u32 count,
    BOOL stepOver
) 
```




<hr>



### function TRKTargetStepOutOfRange 

```C++
DSError TRKTargetStepOutOfRange (
    u32 rangeStart,
    u32 rangeEnd,
    BOOL stepOver
) 
```




<hr>



### function TRKTargetStop 

```C++
u32 TRKTargetStop () 
```




<hr>



### function TRKTargetStopped 

```C++
BOOL TRKTargetStopped (
    void
) 
```




<hr>



### function TRKTargetSupportMask 

```C++
DSError TRKTargetSupportMask (
    u8 mask
) 
```




<hr>



### function TRKTargetSupportRequest 

```C++
DSError TRKTargetSupportRequest () 
```




<hr>



### function TRKTargetVersions 

```C++
DSError TRKTargetVersions (
    DSVersions * versions
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Priv/Processor/ppc/Generic/targimpl.h`

