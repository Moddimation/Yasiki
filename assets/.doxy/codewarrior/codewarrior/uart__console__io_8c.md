

# File uart\_console\_io.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Src**](dir_1e8f7e80780abef8fc1b2377af773d8e.md) **>** [**uart\_console\_io.c**](uart__console__io_8c.md)

[Go to the source code of this file](uart__console__io_8c_source.md)



* `#include "UART.h"`
* `#include "console_io.h"`
* `#include "uart_console_config.h"`
* `#include "stdio.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_close\_console**](#function-__close_console) (\_\_file\_handle handle) <br> |
|  int | [**\_\_read\_console**](#function-__read_console) (\_\_file\_handle handle, unsigned char \* buffer, [**size\_t**](size__t_8h.md#typedef-size_t) \* count, \_\_idle\_proc idle\_proc) <br> |
|  int | [**\_\_write\_console**](#function-__write_console) (\_\_file\_handle handle, unsigned char \* buffer, [**size\_t**](size__t_8h.md#typedef-size_t) \* count, \_\_idle\_proc idle\_proc) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**UARTError**](trk_8h.md#typedef-uarterror) | [**\_\_init\_uart\_console**](#function-__init_uart_console) (void) <br> |


























## Public Functions Documentation




### function \_\_close\_console 

```C++
int __close_console (
    __file_handle handle
) 
```




<hr>



### function \_\_read\_console 

```C++
int __read_console (
    __file_handle handle,
    unsigned char * buffer,
    size_t * count,
    __idle_proc idle_proc
) 
```




<hr>



### function \_\_write\_console 

```C++
int __write_console (
    __file_handle handle,
    unsigned char * buffer,
    size_t * count,
    __idle_proc idle_proc
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_init\_uart\_console 

```C++
static UARTError __init_uart_console (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common_Embedded/Src/uart_console_io.c`

