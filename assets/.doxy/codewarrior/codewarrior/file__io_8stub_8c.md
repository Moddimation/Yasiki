

# File file\_io.stub.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**PPC\_EABI**](dir_f6c4adf010e56356cc06c08ce198f64b.md) **>** [**SRC**](dir_394c6f6a5dc298f674b59e6fead1e53a.md) **>** [**file\_io.stub.c**](file__io_8stub_8c.md)

[Go to the source code of this file](file__io_8stub_8c_source.md)



* `#include "file_io.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**temp\_file\_info**](structtemp__file__info.md) <br> |








## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**temp\_file\_info**](structtemp__file__info.md) | [**temp\_info**](#variable-temp_info)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_close\_file**](#function-__close_file) (\_\_file\_handle handle) <br> |
|  int | [**\_\_delete\_file**](#function-__delete_file) (const char \* name) <br> |
|  int | [**\_\_open\_file**](#function-__open_file) (const char \* name, \_\_file\_modes mode, \_\_file\_handle \* handle) <br> |
|  int | [**\_\_open\_temp\_file**](#function-__open_temp_file) (\_\_file\_handle \* handle) <br> |
|  int | [**\_\_position\_file**](#function-__position_file) (\_\_file\_handle handle, fpos\_t \* position, int mode, \_\_idle\_proc idle\_proc) <br> |
|  int | [**\_\_read\_file**](#function-__read_file) (\_\_file\_handle handle, unsigned char \* buffer, [**size\_t**](size__t_8h.md#typedef-size_t) \* count, \_\_idle\_proc idle\_proc) <br> |
|  int | [**\_\_rename\_file**](#function-__rename_file) (const char \* old\_name, const char \* new\_name) <br> |
|  void | [**\_\_temp\_file\_name**](#function-__temp_file_name) (char \* name\_str, void \* filespec) <br> |
|  int | [**\_\_write\_file**](#function-__write_file) (\_\_file\_handle handle, unsigned char \* buffer, [**size\_t**](size__t_8h.md#typedef-size_t) \* count, \_\_idle\_proc idle\_proc) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**temp\_file\_info**](structtemp__file__info.md) \* | [**find\_temp\_info**](#function-find_temp_info) (short refnum) <br> |


























## Public Static Attributes Documentation




### variable temp\_info 

```C++
temp_file_info temp_info[FOPEN_MAX];
```




<hr>
## Public Functions Documentation




### function \_\_close\_file 

```C++
int __close_file (
    __file_handle handle
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



### function \_\_open\_file 

```C++
int __open_file (
    const char * name,
    __file_modes mode,
    __file_handle * handle
) 
```




<hr>



### function \_\_open\_temp\_file 

```C++
int __open_temp_file (
    __file_handle * handle
) 
```




<hr>



### function \_\_position\_file 

```C++
int __position_file (
    __file_handle handle,
    fpos_t * position,
    int mode,
    __idle_proc idle_proc
) 
```




<hr>



### function \_\_read\_file 

```C++
int __read_file (
    __file_handle handle,
    unsigned char * buffer,
    size_t * count,
    __idle_proc idle_proc
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
    __file_handle handle,
    unsigned char * buffer,
    size_t * count,
    __idle_proc idle_proc
) 
```




<hr>
## Public Static Functions Documentation




### function find\_temp\_info 

```C++
static temp_file_info * find_temp_info (
    short refnum
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/PPC_EABI/SRC/file_io.stub.c`

