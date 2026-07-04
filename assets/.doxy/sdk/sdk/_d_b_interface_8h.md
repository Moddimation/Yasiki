

# File DBInterface.h



[**FileList**](files.md) **>** [**db**](dir_180e0f6e1b6d5ce3a8c5e37cc60593dd.md) **>** [**DBInterface.h**](_d_b_interface_8h.md)

[Go to the source code of this file](_d_b_interface_8h_source.md)



* `#include <dolphin/os.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**DBInterface**](struct_d_b_interface.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DBInterface**](struct_d_b_interface.md) | [**DBInterface**](#typedef-dbinterface)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**MTRCallbackType**](#typedef-mtrcallbacktype)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**DBInterface**](struct_d_b_interface.md) \* | [**\_\_DBInterface**](#variable-__dbinterface)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBInit**](#function-dbinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBInitComm**](#function-dbinitcomm) ([**u8**](types_8h.md#typedef-u8) \*\* inputFlagPtr, [**MTRCallbackType**](_d_b_interface_8h.md#typedef-mtrcallbacktype) mtrCallback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DBExceptionDestination**](#function-__dbexceptiondestination) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DBExceptionDestinationAux**](#function-__dbexceptiondestinationaux) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_DBIsExceptionMarked**](#function-__dbisexceptionmarked) ([**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DBMarkException**](#function-__dbmarkexception) ([**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception, [**BOOL**](types_8h.md#typedef-bool) value) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DBSetPresent**](#function-__dbsetpresent) ([**u32**](types_8h.md#typedef-u32) value) <br> |




























## Public Types Documentation




### typedef DBInterface 

```C++
typedef struct DBInterface DBInterface;
```




<hr>



### typedef MTRCallbackType 

```C++
typedef void(* MTRCallbackType) (s32);
```




<hr>
## Public Attributes Documentation




### variable \_\_DBInterface 

```C++
DBInterface* __DBInterface;
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



### function DBInitComm 

```C++
void DBInitComm (
    u8 ** inputFlagPtr,
    MTRCallbackType mtrCallback
) 
```




<hr>



### function \_\_DBExceptionDestination 

```C++
void __DBExceptionDestination (
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
    __OSException exception,
    BOOL value
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
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/db/DBInterface.h`

