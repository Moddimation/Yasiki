

# File buffer\_io.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**buffer\_io.c**](buffer__io_8c.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/buffer_io.c`

