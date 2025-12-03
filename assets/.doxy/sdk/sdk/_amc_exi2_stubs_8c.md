

# File AmcExi2Stubs.c



[**FileList**](files.md) **>** [**amcstubs**](dir_f37da6a0710392f699d471893b025ef5.md) **>** [**AmcExi2Stubs.c**](_amc_exi2_stubs_8c.md)

[Go to the source code of this file](_amc_exi2_stubs_8c_source.md)



* `#include <dolphin/os.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**AmcExiError**](#enum-amcexierror)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AMC\_IsStub**](#function-amc_isstub) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_EnableInterrupts**](#function-exi2_enableinterrupts) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_Init**](#function-exi2_init) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_Poll**](#function-exi2_poll) () <br> |
|  [**AmcExiError**](_amc_exi2_comm_8h.md#enum-amcexierror) | [**EXI2\_ReadN**](#function-exi2_readn) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_Reserve**](#function-exi2_reserve) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXI2\_Unreserve**](#function-exi2_unreserve) () <br> |
|  [**AmcExiError**](_amc_exi2_comm_8h.md#enum-amcexierror) | [**EXI2\_WriteN**](#function-exi2_writen) () <br> |




























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




### function AMC\_IsStub 

```C++
int AMC_IsStub () 
```




<hr>



### function EXI2\_EnableInterrupts 

```C++
void EXI2_EnableInterrupts () 
```




<hr>



### function EXI2\_Init 

```C++
void EXI2_Init () 
```




<hr>



### function EXI2\_Poll 

```C++
int EXI2_Poll () 
```




<hr>



### function EXI2\_ReadN 

```C++
AmcExiError EXI2_ReadN () 
```




<hr>



### function EXI2\_Reserve 

```C++
void EXI2_Reserve () 
```




<hr>



### function EXI2\_Unreserve 

```C++
void EXI2_Unreserve () 
```




<hr>



### function EXI2\_WriteN 

```C++
AmcExiError EXI2_WriteN () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/amcstubs/AmcExi2Stubs.c`

