

# File file\_io.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**file\_io.h**](file__io_8h.md)

[Go to the source code of this file](file__io_8h_source.md)



* `#include <ansi_parms.h>`
* `#include <cstdio>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_close\_file**](#function-__close_file) ([**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_file\_handle) handle) <br> |
|  int | [**\_\_delete\_file**](#function-__delete_file) (const char \* name) <br> |
|  int | [**\_\_flush\_line\_buffered\_output\_files**](#function-__flush_line_buffered_output_files) (void) <br> |
|  int | [**\_\_get\_file\_modes**](#function-__get_file_modes) (const char \* mode, [**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_file\_modes) \* modes) <br> |
|  int | [**\_\_open\_file**](#function-__open_file) (const char \* name, [**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_file\_modes) mode, [**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_file\_handle) \* handle) <br> |
|  int | [**\_\_open\_temp\_file**](#function-__open_temp_file) ([**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_file\_handle) \* handle) <br> |
|  int | [**\_\_position\_file**](#function-__position_file) ([**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_file\_handle) handle, [**\_\_std**](ansi__parms_8h.md#define-__std)(fpos\_t) \* position, int mode, [**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_idle\_proc) idle\_proc) <br> |
|  int | [**\_\_read\_file**](#function-__read_file) ([**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_file\_handle) handle, unsigned char \* buffer, [**\_\_std**](ansi__parms_8h.md#define-__std)([**size\_t**](size__t_8h.md#typedef-size_t)) \* count, [**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_idle\_proc) idle\_proc) <br> |
|  int | [**\_\_rename\_file**](#function-__rename_file) (const char \* old\_name, const char \* new\_name) <br> |
|  [**\_MSL\_DLLDATA**](ansi__parms_8h.md#define-_msl_dlldata) | [**\_\_std**](#function-__std) (\_\_file\_modes) <br> |
|  void | [**\_\_temp\_file\_name**](#function-__temp_file_name) (char \* name\_str, void \* filespec) <br> |
|  int | [**\_\_write\_file**](#function-__write_file) ([**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_file\_handle) handle, unsigned char \* buffer, [**\_\_std**](ansi__parms_8h.md#define-__std)([**size\_t**](size__t_8h.md#typedef-size_t)) \* count, [**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_idle\_proc) idle\_proc) <br> |




























## Public Functions Documentation




### function \_\_close\_file 

```C++
int __close_file (
    __std (__file_handle) handle
) 
```




<hr>



### function \_\_delete\_file 

```C++
int __delete_file (
    const char * name
) 
```




<hr>



### function \_\_flush\_line\_buffered\_output\_files 

```C++
int __flush_line_buffered_output_files (
    void
) 
```




<hr>



### function \_\_get\_file\_modes 

```C++
int __get_file_modes (
    const char * mode,
    __std (__file_modes) * modes
) 
```




<hr>



### function \_\_open\_file 

```C++
int __open_file (
    const char * name,
    __std (__file_modes) mode,
    __std (__file_handle) * handle
) 
```




<hr>



### function \_\_open\_temp\_file 

```C++
int __open_temp_file (
    __std (__file_handle) * handle
) 
```




<hr>



### function \_\_position\_file 

```C++
int __position_file (
    __std (__file_handle) handle,
    __std (fpos_t) * position,
    int mode,
    __std (__idle_proc) idle_proc
) 
```




<hr>



### function \_\_read\_file 

```C++
int __read_file (
    __std (__file_handle) handle,
    unsigned char * buffer,
    __std ( size_t ) * count,
    __std (__idle_proc) idle_proc
) 
```




<hr>



### function \_\_rename\_file 

```C++
int __rename_file (
    const char * old_name,
    const char * new_name
) 
```




<hr>



### function \_\_std 

```C++
_MSL_DLLDATA __std (
    __file_modes
) 
```




<hr>



### function \_\_temp\_file\_name 

```C++
void __temp_file_name (
    char * name_str,
    void * filespec
) 
```




<hr>



### function \_\_write\_file 

```C++
int __write_file (
    __std (__file_handle) handle,
    unsigned char * buffer,
    __std ( size_t ) * count,
    __std (__idle_proc) idle_proc
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/file_io.h`

