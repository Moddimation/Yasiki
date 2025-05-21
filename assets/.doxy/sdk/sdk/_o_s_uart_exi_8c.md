

# File OSUartExi.c



[**FileList**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**os**](dir_2110adc24753dd29d2ec0361943e7a71.md) **>** [**OSUartExi.c**](_o_s_uart_exi_8c.md)

[Go to the source code of this file](_o_s_uart_exi_8c_source.md)



* `#include <dolphin/exi.h>`
* `#include <dolphin/os.h>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**serEnabled**](#variable-serenabled)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**InitializeUART**](#function-initializeuart) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ReadUARTN**](#function-readuartn) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**WriteUARTN**](#function-writeuartn) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buf, [**u32**](types_8h.md#typedef-u32) len) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**QueueLength**](#function-queuelength) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


























## Public Static Attributes Documentation




### variable serEnabled 

```C++
u32 serEnabled;
```




<hr>
## Public Functions Documentation




### function InitializeUART 

```C++
int InitializeUART () 
```




<hr>



### function ReadUARTN 

```C++
int ReadUARTN () 
```




<hr>



### function WriteUARTN 

```C++
int WriteUARTN (
    void * buf,
    u32 len
) 
```




<hr>
## Public Static Functions Documentation




### function QueueLength 

```C++
static int QueueLength (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `DolphinSDK/src/dolphin/os/OSUartExi.c`

