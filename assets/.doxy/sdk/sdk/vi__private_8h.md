

# File vi\_private.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**vi**](dir_6e608df437d91df3e0aaf7178791d22d.md) **>** [**vi\_private.h**](vi__private_8h.md)

[Go to the source code of this file](vi__private_8h_source.md)



* `#include <types.h>`
* `#include <dolphin/os.h>`
* `#include <dolphin/vi.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**SomeVIStruct**](struct_some_v_i_struct.md) <br> |
| struct | [**VITiming**](struct_v_i_timing.md) <br> |








## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**FBSet**](#variable-fbset)  <br> |
|  [**SomeVIStruct**](struct_some_v_i_struct.md) | [**HorVer**](#variable-horver)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**PostCB**](#variable-postcb)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**PreCB**](#variable-precb)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**changeMode**](#variable-changemode)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u64**](types_8h.md#typedef-u64) | [**changed**](#variable-changed)  <br> |
|  [**s16**](types_8h.md#typedef-s16) | [**displayOffsetH**](#variable-displayoffseth)  <br> |
|  [**s16**](types_8h.md#typedef-s16) | [**displayOffsetV**](#variable-displayoffsetv)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**encoderType**](#variable-encodertype)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**flushFlag**](#variable-flushflag)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**regs**](#variable-regs)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**retraceCount**](#variable-retracecount)  <br> |
|  [**OSThreadQueue**](struct_o_s_thread_queue.md) | [**retraceQueue**](#variable-retracequeue)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u64**](types_8h.md#typedef-u64) | [**shdwChanged**](#variable-shdwchanged)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**shdwRegs**](#variable-shdwregs)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**taps**](#variable-taps)   = `/* multi line expression */`<br> |
|  [**VITiming**](struct_v_i_timing.md) | [**timing**](#variable-timing)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VIGetAdjustingValues**](#function-__vigetadjustingvalues) ([**s16**](types_8h.md#typedef-s16) \* x, [**s16**](types_8h.md#typedef-s16) \* y) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VIGetSCL**](#function-__vigetscl) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VIGetSDA**](#function-__vigetsda) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VIInit**](#function-__viinit) ([**VITVMode**](vitypes_8h.md#enum-vitvmode) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VIInitI2C**](#function-__viiniti2c) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VIInitPhilips**](#function-__viinitphilips) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VISendI2CData**](#function-__visendi2cdata) ([**u8**](types_8h.md#typedef-u8) slaveAddr, [**u8**](types_8h.md#typedef-u8) \* pData, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VISetAdjustingValues**](#function-__visetadjustingvalues) ([**s16**](types_8h.md#typedef-s16) x, [**s16**](types_8h.md#typedef-s16) y) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VISetSCL**](#function-__visetscl) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) value) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VISetSDA**](#function-__visetsda) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) value) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**getCurrentFieldEvenOdd**](#function-getcurrentfieldevenodd) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**MARK\_CHANGED**](vi__private_8h.md#define-mark_changed) (index) `([**changed**](vi__private_8h.md#variable-changed) \|= 1[**LL**](_c_a_r_d_private_8h.md#define-card_max_mount_step) &lt;&lt; (63 - ([**index**](_g_x_draw_8c.md#variable-index))))`<br> |
| define  | [**VI\_BITMASK**](vi__private_8h.md#define-vi_bitmask) (index) `(1[**ull**](_c_a_r_d_private_8h.md#define-card_max_mount_step) &lt;&lt; (63 - ([**index**](_g_x_draw_8c.md#variable-index))))`<br> |

## Public Static Attributes Documentation




### variable FBSet 

```C++
u32 FBSet;
```




<hr>



### variable HorVer 

```C++
SomeVIStruct HorVer;
```




<hr>



### variable PostCB 

```C++
void(* PostCB) (u32);
```




<hr>



### variable PreCB 

```C++
void(* PreCB) (u32);
```




<hr>



### variable changeMode 

```C++
u32 changeMode;
```




<hr>



### variable changed 

```C++
volatile u64 changed;
```




<hr>



### variable displayOffsetH 

```C++
s16 displayOffsetH;
```




<hr>



### variable displayOffsetV 

```C++
s16 displayOffsetV;
```




<hr>



### variable encoderType 

```C++
u32 encoderType;
```




<hr>



### variable flushFlag 

```C++
volatile u32 flushFlag;
```




<hr>



### variable regs 

```C++
u16 regs[59];
```




<hr>



### variable retraceCount 

```C++
volatile u32 retraceCount;
```




<hr>



### variable retraceQueue 

```C++
OSThreadQueue retraceQueue;
```




<hr>



### variable shdwChanged 

```C++
volatile u64 shdwChanged;
```




<hr>



### variable shdwRegs 

```C++
u16 shdwRegs[59];
```




<hr>



### variable taps 

```C++
u16 taps[25];
```




<hr>



### variable timing 

```C++
VITiming timing[7];
```




<hr>
## Public Functions Documentation




### function \_\_VIGetAdjustingValues 

```C++
void __VIGetAdjustingValues (
    s16 * x,
    s16 * y
) 
```




<hr>



### function \_\_VIGetSCL 

```C++
int __VIGetSCL (
    void
) 
```




<hr>



### function \_\_VIGetSDA 

```C++
int __VIGetSDA (
    void
) 
```




<hr>



### function \_\_VIInit 

```C++
void __VIInit (
    VITVMode mode
) 
```




<hr>



### function \_\_VIInitI2C 

```C++
void __VIInitI2C (
    void
) 
```




<hr>



### function \_\_VIInitPhilips 

```C++
void __VIInitPhilips (
    void
) 
```




<hr>



### function \_\_VISendI2CData 

```C++
int __VISendI2CData (
    u8 slaveAddr,
    u8 * pData,
    int nBytes
) 
```




<hr>



### function \_\_VISetAdjustingValues 

```C++
void __VISetAdjustingValues (
    s16 x,
    s16 y
) 
```




<hr>



### function \_\_VISetSCL 

```C++
void __VISetSCL (
    int value
) 
```




<hr>



### function \_\_VISetSDA 

```C++
void __VISetSDA (
    int value
) 
```




<hr>
## Public Static Functions Documentation




### function getCurrentFieldEvenOdd 

```C++
static u32 getCurrentFieldEvenOdd (
    void
) 
```




<hr>
## Macro Definition Documentation





### define MARK\_CHANGED 

```C++
#define MARK_CHANGED (
    index
) `( changed |= 1 LL << (63 - ( index )))`
```




<hr>



### define VI\_BITMASK 

```C++
#define VI_BITMASK (
    index
) `(1 ull << (63 - ( index )))`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/vi/vi_private.h`

