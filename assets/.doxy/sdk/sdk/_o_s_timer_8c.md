

# File OSTimer.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**os**](dir_8207759a5d5564400a58f6bb524771f0.md) **>** [**OSTimer.c**](_o_s_timer_8c.md)

[Go to the source code of this file](_o_s_timer_8c_source.md)



* `#include <dolphin/os.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**Timer**](struct_timer.md) <br> |






## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)() | [**OSSetTimerCallback**](#variable-ossettimercallback)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Timer**](struct_timer.md) | [**Timer**](#variable-timer)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitTimer**](#function-osinittimer) ([**u32**](types_8h.md#typedef-u32) time, [**u16**](types_8h.md#typedef-u16) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSStartTimer**](#function-osstarttimer) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSStopTimer**](#function-osstoptimer) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DecrementerExceptionCallback**](#function-decrementerexceptioncallback) ([**u8**](types_8h.md#typedef-u8) exception, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DecrementerExceptionHandler**](#function-decrementerexceptionhandler) ([**u8**](types_8h.md#typedef-u8) exception, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**ASM**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DecrementerExceptionHandler**](#function-decrementerexceptionhandler) ([**u8**](types_8h.md#typedef-u8) exception, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* context) <br> |


























## Public Attributes Documentation




### variable OSSetTimerCallback 

```C++
void(*)() OSSetTimerCallback(void(*callback)());
```




<hr>
## Public Static Attributes Documentation




### variable Timer 

```C++
struct Timer Timer;
```




<hr>
## Public Functions Documentation




### function OSInitTimer 

```C++
void OSInitTimer (
    u32 time,
    u16 mode
) 
```




<hr>



### function OSStartTimer 

```C++
void OSStartTimer (
    void
) 
```




<hr>



### function OSStopTimer 

```C++
void OSStopTimer (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function DecrementerExceptionCallback 

```C++
static void DecrementerExceptionCallback (
    u8 exception,
    OSContext * context
) 
```




<hr>



### function DecrementerExceptionHandler 

```C++
static void DecrementerExceptionHandler (
    u8 exception,
    OSContext * context
) 
```




<hr>



### function DecrementerExceptionHandler 

```C++
static ASM  void DecrementerExceptionHandler (
    u8 exception,
    register  OSContext * context
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/os/OSTimer.c`

