

# File OSError.h



[**FileList**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSError.h**](_o_s_error_8h.md)

[Go to the source code of this file](_o_s_error_8h_source.md)



* `#include <dolphin/os/OSContext.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**u16**](types_8h.md#typedef-u16) | [**OSError**](#typedef-oserror)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**OSErrorHandler**](#typedef-oserrorhandler)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**OSErrorHandler**](_o_s_error_8h.md#typedef-oserrorhandler) | [**OSSetErrorHandler**](#function-osseterrorhandler) ([**OSError**](_o_s_error_8h.md#typedef-oserror) error, [**OSErrorHandler**](_o_s_error_8h.md#typedef-oserrorhandler) handler) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**OS\_ERROR\_ALIGNMENT**](_o_s_error_8h.md#define-os_error_alignment)  `5`<br> |
| define  | [**OS\_ERROR\_BREAKPOINT**](_o_s_error_8h.md#define-os_error_breakpoint)  `12`<br> |
| define  | [**OS\_ERROR\_DECREMENTER**](_o_s_error_8h.md#define-os_error_decrementer)  `8`<br> |
| define  | [**OS\_ERROR\_DSI**](_o_s_error_8h.md#define-os_error_dsi)  `2`<br> |
| define  | [**OS\_ERROR\_EXTERNAL\_INTERRUPT**](_o_s_error_8h.md#define-os_error_external_interrupt)  `4`<br> |
| define  | [**OS\_ERROR\_FLOATING\_POINT**](_o_s_error_8h.md#define-os_error_floating_point)  `7`<br> |
| define  | [**OS\_ERROR\_ISI**](_o_s_error_8h.md#define-os_error_isi)  `3`<br> |
| define  | [**OS\_ERROR\_MACHINE\_CHECK**](_o_s_error_8h.md#define-os_error_machine_check)  `1`<br> |
| define  | [**OS\_ERROR\_MAX**](_o_s_error_8h.md#define-os_error_max)  `([**OS\_ERROR\_THERMAL\_INTERRUPT**](_o_s_error_8h.md#define-os_error_thermal_interrupt) + 1)`<br> |
| define  | [**OS\_ERROR\_PERFORMACE\_MONITOR**](_o_s_error_8h.md#define-os_error_performace_monitor)  `11`<br> |
| define  | [**OS\_ERROR\_PROGRAM**](_o_s_error_8h.md#define-os_error_program)  `6`<br> |
| define  | [**OS\_ERROR\_SYSTEM\_CALL**](_o_s_error_8h.md#define-os_error_system_call)  `9`<br> |
| define  | [**OS\_ERROR\_SYSTEM\_INTERRUPT**](_o_s_error_8h.md#define-os_error_system_interrupt)  `13`<br> |
| define  | [**OS\_ERROR\_SYSTEM\_RESET**](_o_s_error_8h.md#define-os_error_system_reset)  `0`<br> |
| define  | [**OS\_ERROR\_THERMAL\_INTERRUPT**](_o_s_error_8h.md#define-os_error_thermal_interrupt)  `14`<br> |
| define  | [**OS\_ERROR\_TRACE**](_o_s_error_8h.md#define-os_error_trace)  `10`<br> |

## Public Types Documentation




### typedef OSError 

```C++
typedef u16 OSError;
```




<hr>



### typedef OSErrorHandler 

```C++
typedef void(* OSErrorHandler) (OSError error, OSContext *context,...);
```




<hr>
## Public Functions Documentation




### function OSSetErrorHandler 

```C++
OSErrorHandler OSSetErrorHandler (
    OSError error,
    OSErrorHandler handler
) 
```




<hr>
## Macro Definition Documentation





### define OS\_ERROR\_ALIGNMENT 

```C++
#define OS_ERROR_ALIGNMENT `5`
```




<hr>



### define OS\_ERROR\_BREAKPOINT 

```C++
#define OS_ERROR_BREAKPOINT `12`
```




<hr>



### define OS\_ERROR\_DECREMENTER 

```C++
#define OS_ERROR_DECREMENTER `8`
```




<hr>



### define OS\_ERROR\_DSI 

```C++
#define OS_ERROR_DSI `2`
```




<hr>



### define OS\_ERROR\_EXTERNAL\_INTERRUPT 

```C++
#define OS_ERROR_EXTERNAL_INTERRUPT `4`
```




<hr>



### define OS\_ERROR\_FLOATING\_POINT 

```C++
#define OS_ERROR_FLOATING_POINT `7`
```




<hr>



### define OS\_ERROR\_ISI 

```C++
#define OS_ERROR_ISI `3`
```




<hr>



### define OS\_ERROR\_MACHINE\_CHECK 

```C++
#define OS_ERROR_MACHINE_CHECK `1`
```




<hr>



### define OS\_ERROR\_MAX 

```C++
#define OS_ERROR_MAX `( OS_ERROR_THERMAL_INTERRUPT + 1)`
```




<hr>



### define OS\_ERROR\_PERFORMACE\_MONITOR 

```C++
#define OS_ERROR_PERFORMACE_MONITOR `11`
```




<hr>



### define OS\_ERROR\_PROGRAM 

```C++
#define OS_ERROR_PROGRAM `6`
```




<hr>



### define OS\_ERROR\_SYSTEM\_CALL 

```C++
#define OS_ERROR_SYSTEM_CALL `9`
```




<hr>



### define OS\_ERROR\_SYSTEM\_INTERRUPT 

```C++
#define OS_ERROR_SYSTEM_INTERRUPT `13`
```




<hr>



### define OS\_ERROR\_SYSTEM\_RESET 

```C++
#define OS_ERROR_SYSTEM_RESET `0`
```




<hr>



### define OS\_ERROR\_THERMAL\_INTERRUPT 

```C++
#define OS_ERROR_THERMAL_INTERRUPT `14`
```




<hr>



### define OS\_ERROR\_TRACE 

```C++
#define OS_ERROR_TRACE `10`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/include/dolphin/os/OSError.h`

