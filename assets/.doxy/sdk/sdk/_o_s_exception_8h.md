

# File OSException.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSException.h**](_o_s_exception_8h.md)

[Go to the source code of this file](_o_s_exception_8h_source.md)



* `#include <dolphin/os/OSContext.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**u8**](types_8h.md#typedef-u8) | [**\_\_OSException**](#typedef-__osexception)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**\_\_OSExceptionHandler**](#typedef-__osexceptionhandler)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**\_\_OSExceptionHandler**](_o_s_exception_8h.md#typedef-__osexceptionhandler) | [**\_\_OSGetExceptionHandler**](#function-__osgetexceptionhandler) ([**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception) <br> |
|  [**\_\_OSExceptionHandler**](_o_s_exception_8h.md#typedef-__osexceptionhandler) | [**\_\_OSSetExceptionHandler**](#function-__ossetexceptionhandler) ([**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception, [**\_\_OSExceptionHandler**](_o_s_exception_8h.md#typedef-__osexceptionhandler) handler) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**OS\_EXCEPTION\_SAVE\_GPRS**](_o_s_exception_8h.md#define-os_exception_save_gprs) (context) `/* multi line expression */`<br> |
| define  | [**\_\_OS\_EXCEPTION\_ALIGNMENT**](_o_s_exception_8h.md#define-__os_exception_alignment)  `5`<br> |
| define  | [**\_\_OS\_EXCEPTION\_BREAKPOINT**](_o_s_exception_8h.md#define-__os_exception_breakpoint)  `12`<br> |
| define  | [**\_\_OS\_EXCEPTION\_DECREMENTER**](_o_s_exception_8h.md#define-__os_exception_decrementer)  `8`<br> |
| define  | [**\_\_OS\_EXCEPTION\_DSI**](_o_s_exception_8h.md#define-__os_exception_dsi)  `2`<br> |
| define  | [**\_\_OS\_EXCEPTION\_EXTERNAL\_INTERRUPT**](_o_s_exception_8h.md#define-__os_exception_external_interrupt)  `4`<br> |
| define  | [**\_\_OS\_EXCEPTION\_FLOATING\_POINT**](_o_s_exception_8h.md#define-__os_exception_floating_point)  `7`<br> |
| define  | [**\_\_OS\_EXCEPTION\_ISI**](_o_s_exception_8h.md#define-__os_exception_isi)  `3`<br> |
| define  | [**\_\_OS\_EXCEPTION\_MACHINE\_CHECK**](_o_s_exception_8h.md#define-__os_exception_machine_check)  `1`<br> |
| define  | [**\_\_OS\_EXCEPTION\_MAX**](_o_s_exception_8h.md#define-__os_exception_max)  `([**\_\_OS\_EXCEPTION\_THERMAL\_INTERRUPT**](_o_s_exception_8h.md#define-__os_exception_thermal_interrupt) + 1)`<br> |
| define  | [**\_\_OS\_EXCEPTION\_PERFORMACE\_MONITOR**](_o_s_exception_8h.md#define-__os_exception_performace_monitor)  `11`<br> |
| define  | [**\_\_OS\_EXCEPTION\_PROGRAM**](_o_s_exception_8h.md#define-__os_exception_program)  `6`<br> |
| define  | [**\_\_OS\_EXCEPTION\_SYSTEM\_CALL**](_o_s_exception_8h.md#define-__os_exception_system_call)  `9`<br> |
| define  | [**\_\_OS\_EXCEPTION\_SYSTEM\_INTERRUPT**](_o_s_exception_8h.md#define-__os_exception_system_interrupt)  `13`<br> |
| define  | [**\_\_OS\_EXCEPTION\_SYSTEM\_RESET**](_o_s_exception_8h.md#define-__os_exception_system_reset)  `0`<br> |
| define  | [**\_\_OS\_EXCEPTION\_THERMAL\_INTERRUPT**](_o_s_exception_8h.md#define-__os_exception_thermal_interrupt)  `14`<br> |
| define  | [**\_\_OS\_EXCEPTION\_TRACE**](_o_s_exception_8h.md#define-__os_exception_trace)  `10`<br> |

## Public Types Documentation




### typedef \_\_OSException 

```C++
typedef u8 __OSException;
```




<hr>



### typedef \_\_OSExceptionHandler 

```C++
typedef void(* __OSExceptionHandler) (__OSException exception, OSContext *context);
```




<hr>
## Public Functions Documentation




### function \_\_OSGetExceptionHandler 

```C++
__OSExceptionHandler __OSGetExceptionHandler (
    __OSException exception
) 
```




<hr>



### function \_\_OSSetExceptionHandler 

```C++
__OSExceptionHandler __OSSetExceptionHandler (
    __OSException exception,
    __OSExceptionHandler handler
) 
```




<hr>
## Macro Definition Documentation





### define OS\_EXCEPTION\_SAVE\_GPRS 

```C++
#define OS_EXCEPTION_SAVE_GPRS (
    context
) `stw  r0 , OS_CONTEXT_R0 (context);                                                             \ stw  r1 , OS_CONTEXT_R1 (context);                                                             \ stw  r2 , OS_CONTEXT_R2 (context);                                                             \ stmw  r6 , OS_CONTEXT_R6 (context);                                                             \ mfspr  r0 , GQR1 ;                                                                                \ stw  r0 , OS_CONTEXT_GQR1 (context);                                                           \ mfspr  r0 , GQR2 ;                                                                                \ stw  r0 , OS_CONTEXT_GQR2 (context);                                                           \ mfspr  r0 , GQR3 ;                                                                                \ stw  r0 , OS_CONTEXT_GQR3 (context);                                                           \ mfspr  r0 , GQR4 ;                                                                                \ stw  r0 , OS_CONTEXT_GQR4 (context);                                                           \ mfspr  r0 , GQR5 ;                                                                                \ stw  r0 , OS_CONTEXT_GQR5 (context);                                                           \ mfspr  r0 , GQR6 ;                                                                                \ stw  r0 , OS_CONTEXT_GQR6 (context);                                                           \ mfspr  r0 , GQR7 ;                                                                                \ stw  r0 , OS_CONTEXT_GQR7 (context);`
```




<hr>



### define \_\_OS\_EXCEPTION\_ALIGNMENT 

```C++
#define __OS_EXCEPTION_ALIGNMENT `5`
```




<hr>



### define \_\_OS\_EXCEPTION\_BREAKPOINT 

```C++
#define __OS_EXCEPTION_BREAKPOINT `12`
```




<hr>



### define \_\_OS\_EXCEPTION\_DECREMENTER 

```C++
#define __OS_EXCEPTION_DECREMENTER `8`
```




<hr>



### define \_\_OS\_EXCEPTION\_DSI 

```C++
#define __OS_EXCEPTION_DSI `2`
```




<hr>



### define \_\_OS\_EXCEPTION\_EXTERNAL\_INTERRUPT 

```C++
#define __OS_EXCEPTION_EXTERNAL_INTERRUPT `4`
```




<hr>



### define \_\_OS\_EXCEPTION\_FLOATING\_POINT 

```C++
#define __OS_EXCEPTION_FLOATING_POINT `7`
```




<hr>



### define \_\_OS\_EXCEPTION\_ISI 

```C++
#define __OS_EXCEPTION_ISI `3`
```




<hr>



### define \_\_OS\_EXCEPTION\_MACHINE\_CHECK 

```C++
#define __OS_EXCEPTION_MACHINE_CHECK `1`
```




<hr>



### define \_\_OS\_EXCEPTION\_MAX 

```C++
#define __OS_EXCEPTION_MAX `( __OS_EXCEPTION_THERMAL_INTERRUPT + 1)`
```




<hr>



### define \_\_OS\_EXCEPTION\_PERFORMACE\_MONITOR 

```C++
#define __OS_EXCEPTION_PERFORMACE_MONITOR `11`
```




<hr>



### define \_\_OS\_EXCEPTION\_PROGRAM 

```C++
#define __OS_EXCEPTION_PROGRAM `6`
```




<hr>



### define \_\_OS\_EXCEPTION\_SYSTEM\_CALL 

```C++
#define __OS_EXCEPTION_SYSTEM_CALL `9`
```




<hr>



### define \_\_OS\_EXCEPTION\_SYSTEM\_INTERRUPT 

```C++
#define __OS_EXCEPTION_SYSTEM_INTERRUPT `13`
```




<hr>



### define \_\_OS\_EXCEPTION\_SYSTEM\_RESET 

```C++
#define __OS_EXCEPTION_SYSTEM_RESET `0`
```




<hr>



### define \_\_OS\_EXCEPTION\_THERMAL\_INTERRUPT 

```C++
#define __OS_EXCEPTION_THERMAL_INTERRUPT `14`
```




<hr>



### define \_\_OS\_EXCEPTION\_TRACE 

```C++
#define __OS_EXCEPTION_TRACE `10`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSException.h`

