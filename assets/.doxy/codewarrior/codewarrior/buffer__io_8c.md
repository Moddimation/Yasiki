

# File buffer\_io.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**buffer\_io.c**](buffer__io_8c.md)

[Go to the source code of this file](buffer__io_8c_source.md)



* `#include <stdlib.h>`
* `#include <string.h>`
* `#include <stddef.h>`
* `#include "buffer_io.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_convert\_from\_newlines**](#function-__convert_from_newlines) (unsigned char \* buf, [**size\_t**](size__t_8h.md#typedef-size_t) \* n) <br> |
|  void | [**\_\_convert\_to\_newlines**](#function-__convert_to_newlines) (unsigned char \* buf, [**size\_t**](size__t_8h.md#typedef-size_t) \* n) <br> |
|  int | [**\_\_flush\_buffer**](#function-__flush_buffer) (FILE \* file, [**size\_t**](size__t_8h.md#typedef-size_t) \* bytes\_flushed) <br> |
|  int | [**\_\_load\_buffer**](#function-__load_buffer) (FILE \* file, [**size\_t**](size__t_8h.md#typedef-size_t) \* bytes\_loaded, int alignment) <br> |
|  void | [**\_\_prep\_buffer**](#function-__prep_buffer) (FILE \* file) <br> |
|  void | [**setbuf**](#function-setbuf) (FILE \* file, char \* buff) <br> |
|  int | [**setvbuf**](#function-setvbuf) (FILE \* file, char \* buff, int mode, [**size\_t**](size__t_8h.md#typedef-size_t) size) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**alignment\_mask**](buffer__io_8c.md#define-alignment_mask)  `(512L - 1L)`<br> |

## Public Functions Documentation




### function \_\_convert\_from\_newlines 

```C++
void __convert_from_newlines (
    unsigned char * buf,
    size_t * n
) 
```




<hr>



### function \_\_convert\_to\_newlines 

```C++
void __convert_to_newlines (
    unsigned char * buf,
    size_t * n
) 
```




<hr>



### function \_\_flush\_buffer 

```C++
int __flush_buffer (
    FILE * file,
    size_t * bytes_flushed
) 
```




<hr>



### function \_\_load\_buffer 

```C++
int __load_buffer (
    FILE * file,
    size_t * bytes_loaded,
    int alignment
) 
```




<hr>



### function \_\_prep\_buffer 

```C++
void __prep_buffer (
    FILE * file
) 
```




<hr>



### function setbuf 

```C++
void setbuf (
    FILE * file,
    char * buff
) 
```




<hr>



### function setvbuf 

```C++
int setvbuf (
    FILE * file,
    char * buff,
    int mode,
    size_t size
) 
```




<hr>
## Macro Definition Documentation





### define alignment\_mask 

```C++
#define alignment_mask `(512L - 1L)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/buffer_io.c`

