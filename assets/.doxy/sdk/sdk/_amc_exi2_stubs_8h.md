

# File AmcExi2Stubs.h



[**FileList**](files.md) **>** [**amcstubs**](dir_3e8747dfc4814381c14d284d7946f3b7.md) **>** [**AmcExi2Stubs.h**](_amc_exi2_stubs_8h.md)

[Go to the source code of this file](_amc_exi2_stubs_8h_source.md)



* `#include "dolphin/os.h"`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**\_\_OSInterruptHandler**](_o_s_interrupt_8h.md#typedef-__osinterrupthandler) | [**AmcEXICallback**](#typedef-amcexicallback)  <br> |
| enum  | [**AmcExiError**](#enum-amcexierror)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**AMC\_IsStub**](#function-amc_isstub) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_EnableInterrupts**](#function-exi2_enableinterrupts) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_Init**](#function-exi2_init) ([**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u8**](types_8h.md#typedef-u8) \*\*, [**AmcEXICallback**](_amc_exi2_stubs_8h.md#typedef-amcexicallback)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**EXI2\_Poll**](#function-exi2_poll) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_ReadN**](#function-exi2_readn) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*, [**u32**](types_8h.md#typedef-u32)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_Reserve**](#function-exi2_reserve) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_Unreserve**](#function-exi2_unreserve) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_WriteN**](#function-exi2_writen) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*, [**u32**](types_8h.md#typedef-u32)) <br> |




























## Public Types Documentation




### typedef AmcEXICallback 

```C++
typedef __OSInterruptHandler AmcEXICallback;
```




<hr>



### enum AmcExiError 

```C++
enum AmcExiError {
    AMC_EXI_NO_ERROR = 0,
    AMC_EXI_UNSELECTED
};
```




<hr>
## Public Functions Documentation




### function AMC\_IsStub 

```C++
BOOL AMC_IsStub (
    void
) 
```




<hr>



### function EXI2\_EnableInterrupts 

```C++
void EXI2_EnableInterrupts (
    void
) 
```




<hr>



### function EXI2\_Init 

```C++
void EXI2_Init (
    volatile  u8 **,
    AmcEXICallback
) 
```




<hr>



### function EXI2\_Poll 

```C++
u32 EXI2_Poll (
    void
) 
```




<hr>



### function EXI2\_ReadN 

```C++
int EXI2_ReadN (
    void *,
    u32
) 
```




<hr>



### function EXI2\_Reserve 

```C++
void EXI2_Reserve (
    void
) 
```




<hr>



### function EXI2\_Unreserve 

```C++
void EXI2_Unreserve (
    void
) 
```




<hr>



### function EXI2\_WriteN 

```C++
int EXI2_WriteN (
    const  void *,
    u32
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/amcstubs/AmcExi2Stubs.h`

