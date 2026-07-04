

# File db.c



[**FileList**](files.md) **>** [**db**](dir_699905d28529e72970a2b0a28c858e7f.md) **>** [**db.c**](db_8c.md)

[Go to the source code of this file](db_8c_source.md)



* `#include <dolphin/base/PPCArch.h>`
* `#include <dolphin/db.h>`
* `#include <dolphin/os.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**DBStack**](#variable-dbstack)  <br> |
|  [**u8**](types_8h.md#typedef-u8) \* | [**DBStackEnd**](#variable-dbstackend)   = `[**DBStack**](db_8c.md#variable-dbstack) + 4088`<br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DBVerbose**](#variable-dbverbose)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DBInterface**](struct_d_b_interface.md) \* | [**\_\_DBInterface**](#variable-__dbinterface)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBInit**](#function-dbinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DBIsDebuggerPresent**](#function-dbisdebuggerpresent) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBPrintf**](#function-dbprintf) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* str, ...) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DBExceptionDestination**](#function-__dbexceptiondestination) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DBExceptionDestinationAux**](#function-__dbexceptiondestinationaux) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_DBIsExceptionMarked**](#function-__dbisexceptionmarked) ([**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DBMarkException**](#function-__dbmarkexception) ([**u8**](types_8h.md#typedef-u8) exception, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) value) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DBSetPresent**](#function-__dbsetpresent) ([**u32**](types_8h.md#typedef-u32) value) <br> |




























## Public Attributes Documentation




### variable DBStack 

```C++
u8 DBStack[4096];
```




<hr>



### variable DBStackEnd 

```C++
u8* DBStackEnd;
```




<hr>



### variable DBVerbose 

```C++
BOOL DBVerbose;
```




<hr>



### variable \_\_DBInterface 

```C++
struct DBInterface* __DBInterface;
```




<hr>
## Public Functions Documentation




### function DBInit 

```C++
void DBInit (
    void
) 
```




<hr>



### function DBIsDebuggerPresent 

```C++
BOOL DBIsDebuggerPresent (
    void
) 
```




<hr>



### function DBPrintf 

```C++
void DBPrintf (
    char * str,
    ...
) 
```




<hr>



### function \_\_DBExceptionDestination 

```C++
asm  void __DBExceptionDestination (
    void
) 
```




<hr>



### function \_\_DBExceptionDestinationAux 

```C++
void __DBExceptionDestinationAux (
    void
) 
```




<hr>



### function \_\_DBIsExceptionMarked 

```C++
BOOL __DBIsExceptionMarked (
    __OSException exception
) 
```




<hr>



### function \_\_DBMarkException 

```C++
void __DBMarkException (
    u8 exception,
    int value
) 
```




<hr>



### function \_\_DBSetPresent 

```C++
void __DBSetPresent (
    u32 value
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/db/db.c`

