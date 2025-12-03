

# File AmcExi2Comm.h



[**FileList**](files.md) **>** [**amc**](dir_8a5ef61d2a1cd31d2734e76a8046ca80.md) **>** [**AmcExi2Comm.h**](_amc_exi2_comm_8h.md)

[Go to the source code of this file](_amc_exi2_comm_8h_source.md)



* `#include <dolphin/amc/AmcTypes.h>`
* `#include <dolphin/os.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**AmcExiError**](#enum-amcexierror)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_EnableInterrupts**](#function-exi2_enableinterrupts) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**AmcExiError**](_amc_exi2_comm_8h.md#enum-amcexierror) | [**EXI2\_GetStatusReg**](#function-exi2_getstatusreg) ([**u16**](types_8h.md#typedef-u16) \* pu16StatusReg) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_Init**](#function-exi2_init) ([**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u16**](types_8h.md#typedef-u16) \*\* inputPendingPtrRef, [**EXICallback**](_amc_types_8h.md#typedef-exicallback) monitorCallback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_Poll**](#function-exi2_poll) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**AmcExiError**](_amc_exi2_comm_8h.md#enum-amcexierror) | [**EXI2\_ReadN**](#function-exi2_readn) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* bytes, [**u32**](types_8h.md#typedef-u32) length) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_Reserve**](#function-exi2_reserve) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_Unreserve**](#function-exi2_unreserve) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**AmcExiError**](_amc_exi2_comm_8h.md#enum-amcexierror) | [**EXI2\_WriteN**](#function-exi2_writen) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* bytes, [**u32**](types_8h.md#typedef-u32) length) <br> |




























## Public Types Documentation




### enum AmcExiError 

```C++
enum AmcExiError {
    AMC_EXI_NO_ERROR = 0,
    AMC_EXI_UNSELECTED
};
```




<hr>
## Public Functions Documentation




### function EXI2\_EnableInterrupts 

```C++
void EXI2_EnableInterrupts (
    void
) 
```




<hr>



### function EXI2\_GetStatusReg 

```C++
AmcExiError EXI2_GetStatusReg (
    u16 * pu16StatusReg
) 
```




<hr>



### function EXI2\_Init 

```C++
void EXI2_Init (
    volatile  u16 ** inputPendingPtrRef,
    EXICallback monitorCallback
) 
```




<hr>



### function EXI2\_Poll 

```C++
int EXI2_Poll (
    void
) 
```




<hr>



### function EXI2\_ReadN 

```C++
AmcExiError EXI2_ReadN (
    void * bytes,
    u32 length
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
AmcExiError EXI2_WriteN (
    const  void * bytes,
    u32 length
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/amc/AmcExi2Comm.h`

