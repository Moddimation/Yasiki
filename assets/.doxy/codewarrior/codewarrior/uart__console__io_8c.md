

# File uart\_console\_io.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Src**](dir_fb71fded672b541f8f0e87a8352217f5.md) **>** [**uart\_console\_io.c**](uart__console__io_8c.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common_Embedded/Src/uart_console_io.c`

