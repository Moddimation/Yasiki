

# File string\_io.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**string\_io.c**](string__io_8c.md)

[Go to the source code of this file](string__io_8c_source.md)



* `#include "ansi_files.h"`
* `#include "buffer_io.h"`
* `#include <limits.h>`
* `#include "string_io.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_close\_string**](#function-__close_string) (\_\_file\_handle handle) <br> |
|  int | [**\_\_open\_string\_file**](#function-__open_string_file) (FILE \* file, char \* str, [**size\_t**](size__t_8h.md#typedef-size_t) n, int io\_state) <br> |
|  int | [**\_\_read\_string**](#function-__read_string) (\_\_file\_handle handle, unsigned char \* buffer, [**size\_t**](size__t_8h.md#typedef-size_t) \* count, \_\_idle\_proc idle\_proc) <br> |
|  int | [**\_\_write\_string**](#function-__write_string) (\_\_file\_handle handle, unsigned char \* buffer, [**size\_t**](size__t_8h.md#typedef-size_t) \* count, \_\_idle\_proc idle\_proc) <br> |




























## Public Functions Documentation




### function \_\_close\_string 

```C++
int __close_string (
    __file_handle handle
) 
```




<hr>



### function \_\_open\_string\_file 

```C++
int __open_string_file (
    FILE * file,
    char * str,
    size_t n,
    int io_state
) 
```




<hr>



### function \_\_read\_string 

```C++
int __read_string (
    __file_handle handle,
    unsigned char * buffer,
    size_t * count,
    __idle_proc idle_proc
) 
```




<hr>



### function \_\_write\_string 

```C++
int __write_string (
    __file_handle handle,
    unsigned char * buffer,
    size_t * count,
    __idle_proc idle_proc
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/string_io.c`

