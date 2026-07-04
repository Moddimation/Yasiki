

# File OSTimer.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSTimer.c**](_o_s_timer_8c.md)

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
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DecrementerExceptionHandler**](#function-decrementerexceptionhandler) ([**u8**](types_8h.md#typedef-u8) exception, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* context) <br> |


























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
static asm  void DecrementerExceptionHandler (
    u8 exception,
    register  OSContext * context
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSTimer.c`

