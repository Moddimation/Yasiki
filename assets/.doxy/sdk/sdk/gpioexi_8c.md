

# File gpioexi.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**vi**](dir_6e608df437d91df3e0aaf7178791d22d.md) **>** [**gpioexi.c**](gpioexi_8c.md)

[Go to the source code of this file](gpioexi_8c_source.md)



* `#include <dolphin/exi.h>`
* `#include <dolphin/os.h>`
* `#include <dolphin/vi.h>`
* `#include "__vi.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**shadowGPIOData**](#variable-shadowgpiodata)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**shadowGPIOOE**](#variable-shadowgpiooe)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VIGetSCL**](#function-__vigetscl) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VIGetSDA**](#function-__vigetsda) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VIInitI2C**](#function-__viiniti2c) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VISetSCL**](#function-__visetscl) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) value) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VISetSDA**](#function-__visetsda) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) value) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**gpioInput**](#function-gpioinput) ([**u8**](types_8h.md#typedef-u8) \* p) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**gpioOE**](#function-gpiooe) ([**u8**](types_8h.md#typedef-u8) value) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**gpioOut**](#function-gpioout) ([**u32**](types_8h.md#typedef-u32) addr, [**u8**](types_8h.md#typedef-u8) value) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**gpioOutput**](#function-gpiooutput) ([**u8**](types_8h.md#typedef-u8) value) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**initGpioExi**](#function-initgpioexi) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**setI2CEnable**](#function-seti2cenable) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) value) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**setVideoReset**](#function-setvideoreset) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) value) <br> |


























## Public Static Attributes Documentation




### variable shadowGPIOData 

```C++
u8 shadowGPIOData;
```




<hr>



### variable shadowGPIOOE 

```C++
u8 shadowGPIOOE;
```




<hr>
## Public Functions Documentation




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



### function \_\_VIInitI2C 

```C++
void __VIInitI2C (
    void
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




### function gpioInput 

```C++
static int gpioInput (
    u8 * p
) 
```




<hr>



### function gpioOE 

```C++
static int gpioOE (
    u8 value
) 
```




<hr>



### function gpioOut 

```C++
static int gpioOut (
    u32 addr,
    u8 value
) 
```




<hr>



### function gpioOutput 

```C++
static int gpioOutput (
    u8 value
) 
```




<hr>



### function initGpioExi 

```C++
static void initGpioExi (
    void
) 
```




<hr>



### function setI2CEnable 

```C++
static void setI2CEnable (
    int value
) 
```




<hr>



### function setVideoReset 

```C++
static void setVideoReset (
    int value
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/vi/gpioexi.c`

