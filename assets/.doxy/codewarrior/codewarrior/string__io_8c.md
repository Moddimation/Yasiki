

# File string\_io.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**string\_io.c**](string__io_8c.md)

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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/string_io.c`

