

# File buffer\_io.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**buffer\_io.h**](buffer__io_8h.md)

[Go to the source code of this file](buffer__io_8h_source.md)



* `#include <ansi_parms.h>`
* `#include <cstdio>`

















## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**buffer\_\_io\_8h\_1a61dadd085c1777f559549e05962b2c9e**](#enum-buffer__io_8h_1a61dadd085c1777f559549e05962b2c9e)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_convert\_from\_newlines**](#function-__convert_from_newlines) (unsigned char \* p, [**\_\_std**](ansi__parms_8h.md#define-__std)([**size\_t**](size__t_8h.md#typedef-size_t)) \* n) <br> |
|  void | [**\_\_convert\_to\_newlines**](#function-__convert_to_newlines) (unsigned char \* p, [**\_\_std**](ansi__parms_8h.md#define-__std)([**size\_t**](size__t_8h.md#typedef-size_t)) \* n) <br> |
|  int | [**\_\_flush\_buffer**](#function-__flush_buffer) ([**\_\_std**](ansi__parms_8h.md#define-__std)(FILE) \* file, [**\_\_std**](ansi__parms_8h.md#define-__std)([**size\_t**](size__t_8h.md#typedef-size_t)) \* bytes\_flushed) <br> |
|  int | [**\_\_load\_buffer**](#function-__load_buffer) ([**\_\_std**](ansi__parms_8h.md#define-__std)(FILE) \* file, [**\_\_std**](ansi__parms_8h.md#define-__std)([**size\_t**](size__t_8h.md#typedef-size_t)) \* bytes\_loaded, int alignment) <br> |
|  void | [**\_\_prep\_buffer**](#function-__prep_buffer) ([**\_\_std**](ansi__parms_8h.md#define-__std)(FILE) \* file) <br> |




























## Public Types Documentation




### enum buffer\_\_io\_8h\_1a61dadd085c1777f559549e05962b2c9e 

```C++
enum buffer__io_8h_1a61dadd085c1777f559549e05962b2c9e {
    __align_buffer,
    __dont_align_buffer
};
```




<hr>
## Public Functions Documentation




### function \_\_convert\_from\_newlines 

```C++
void __convert_from_newlines (
    unsigned char * p,
    __std ( size_t ) * n
) 
```




<hr>



### function \_\_convert\_to\_newlines 

```C++
void __convert_to_newlines (
    unsigned char * p,
    __std ( size_t ) * n
) 
```




<hr>



### function \_\_flush\_buffer 

```C++
int __flush_buffer (
    __std (FILE) * file,
    __std ( size_t ) * bytes_flushed
) 
```




<hr>



### function \_\_load\_buffer 

```C++
int __load_buffer (
    __std (FILE) * file,
    __std ( size_t ) * bytes_loaded,
    int alignment
) 
```




<hr>



### function \_\_prep\_buffer 

```C++
void __prep_buffer (
    __std (FILE) * file
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/buffer_io.h`

