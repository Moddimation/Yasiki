

# File console\_io.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**console\_io.h**](console__io_8h.md)

[Go to the source code of this file](console__io_8h_source.md)



* `#include <ansi_parms.h>`
* `#include <cstdio>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_close\_console**](#function-__close_console) ([**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_file\_handle) handle) <br> |
|  int | [**\_\_read\_console**](#function-__read_console) ([**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_file\_handle) handle, unsigned char \* buffer, [**\_\_std**](ansi__parms_8h.md#define-__std)([**size\_t**](size__t_8h.md#typedef-size_t)) \* count, [**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_idle\_proc) idle\_proc) <br> |
|  int | [**\_\_write\_console**](#function-__write_console) ([**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_file\_handle) handle, unsigned char \* buffer, [**\_\_std**](ansi__parms_8h.md#define-__std)([**size\_t**](size__t_8h.md#typedef-size_t)) \* count, [**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_idle\_proc) idle\_proc) <br> |




























## Public Functions Documentation




### function \_\_close\_console 

```C++
int __close_console (
    __std (__file_handle) handle
) 
```




<hr>



### function \_\_read\_console 

```C++
int __read_console (
    __std (__file_handle) handle,
    unsigned char * buffer,
    __std ( size_t ) * count,
    __std (__idle_proc) idle_proc
) 
```




<hr>



### function \_\_write\_console 

```C++
int __write_console (
    __std (__file_handle) handle,
    unsigned char * buffer,
    __std ( size_t ) * count,
    __std (__idle_proc) idle_proc
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/console_io.h`

