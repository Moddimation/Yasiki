

# File DebuggerDriver.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**OdemuExi2**](dir_a6845862282e3a780646b391adbdaf4e.md) **>** [**DebuggerDriver.h**](_debugger_driver_8h.md)

[Go to the source code of this file](_debugger_driver_8h_source.md)



* `#include <dolphin/os.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBClose**](#function-dbclose) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBInitComm**](#function-dbinitcomm) ([**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u8**](types_8h.md#typedef-u8) \*\* param\_1, [**\_\_OSInterruptHandler**](_o_s_interrupt_8h.md#typedef-__osinterrupthandler) param\_2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBInitInterrupts**](#function-dbinitinterrupts) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBOpen**](#function-dbopen) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DBQueryData**](#function-dbquerydata) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBRead**](#function-dbread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBWrite**](#function-dbwrite) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**Hu\_IsStub**](#function-hu_isstub) () <br> |




























## Public Functions Documentation




### function DBClose 

```C++
void DBClose (
    void
) 
```




<hr>



### function DBInitComm 

```C++
void DBInitComm (
    volatile  u8 ** param_1,
    __OSInterruptHandler param_2
) 
```




<hr>



### function DBInitInterrupts 

```C++
void DBInitInterrupts (
    void
) 
```




<hr>



### function DBOpen 

```C++
void DBOpen (
    void
) 
```




<hr>



### function DBQueryData 

```C++
u32 DBQueryData (
    void
) 
```




<hr>



### function DBRead 

```C++
int DBRead (
    void * data,
    u32 size
) 
```




<hr>



### function DBWrite 

```C++
int DBWrite (
    const  void * data,
    u32 size
) 
```




<hr>



### function Hu\_IsStub 

```C++
int Hu_IsStub () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/OdemuExi2/DebuggerDriver.h`

