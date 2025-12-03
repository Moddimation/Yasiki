

# File OSError.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSError.c**](_o_s_error_8c.md)

[Go to the source code of this file](_o_s_error_8c_source.md)



* `#include <dolphin/os.h>`
* `#include <stdarg.h>`
* `#include <stdio.h>`
* `#include "OSPrivate.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**OSErrorHandler**](_o_s_error_8h.md#typedef-oserrorhandler) | [**OSErrorTable**](#variable-oserrortable)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSPanic**](#function-ospanic) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* file, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) line, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msg, ...) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSReport**](#function-osreport) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msg, ...) <br> |
|  [**OSErrorHandler**](_o_s_error_8h.md#typedef-oserrorhandler) | [**OSSetErrorHandler**](#function-osseterrorhandler) ([**OSError**](_o_s_error_8h.md#typedef-oserror) error, [**OSErrorHandler**](_o_s_error_8h.md#typedef-oserrorhandler) handler) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSUnhandledException**](#function-__osunhandledexception) ([**u8**](types_8h.md#typedef-u8) exception, [**OSContext**](struct_o_s_context.md) \* context, [**u32**](types_8h.md#typedef-u32) dsisr, [**u32**](types_8h.md#typedef-u32) dar) <br> |




























## Public Static Attributes Documentation




### variable OSErrorTable 

```C++
OSErrorHandler OSErrorTable[15];
```




<hr>
## Public Functions Documentation




### function OSPanic 

```C++
void OSPanic (
    char * file,
    int line,
    char * msg,
    ...
) 
```




<hr>



### function OSReport 

```C++
void OSReport (
    char * msg,
    ...
) 
```




<hr>



### function OSSetErrorHandler 

```C++
OSErrorHandler OSSetErrorHandler (
    OSError error,
    OSErrorHandler handler
) 
```




<hr>



### function \_\_OSUnhandledException 

```C++
void __OSUnhandledException (
    u8 exception,
    OSContext * context,
    u32 dsisr,
    u32 dar
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSError.c`

