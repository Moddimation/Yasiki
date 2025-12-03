

# File ansi\_files.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**ansi\_files.h**](ansi__files_8h.md)

[Go to the source code of this file](ansi__files_8h_source.md)



* `#include <ansi_parms.h>`
* `#include <cstdio>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_close\_all**](#function-__close_all) (void) <br> |
|  int | [**\_\_flush\_all**](#function-__flush_all) (void) <br> |
|  int | [**\_\_flush\_line\_buffered\_output\_files**](#function-__flush_line_buffered_output_files) (void) <br> |
|  void | [**\_\_init\_file**](#function-__init_file) ([**\_\_std**](ansi__parms_8h.md#define-__std)(FILE) \* file, [**\_\_std**](ansi__parms_8h.md#define-__std)(\_\_file\_modes) mode, char \* buff, [**\_\_std**](ansi__parms_8h.md#define-__std)([**size\_t**](size__t_8h.md#typedef-size_t)) size) <br> |
|   | [**\_\_std**](#function-__std) (FILE) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**set\_eof**](ansi__files_8h.md#define-set_eof) (file) `/* multi line expression */`<br> |
| define  | [**set\_error**](ansi__files_8h.md#define-set_error) (file) `/* multi line expression */`<br> |

## Public Functions Documentation




### function \_\_close\_all 

```C++
void __close_all (
    void
) 
```




<hr>



### function \_\_flush\_all 

```C++
int __flush_all (
    void
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



### function \_\_init\_file 

```C++
void __init_file (
    __std (FILE) * file,
    __std (__file_modes) mode,
    char * buff,
    __std ( size_t ) size
) 
```




<hr>



### function \_\_std 

```C++
__std (
    FILE
) 
```




<hr>
## Macro Definition Documentation





### define set\_eof 

```C++
#define set_eof (
    file
) `/* multi line expression */`
```




<hr>



### define set\_error 

```C++
#define set_error (
    file
) `/* multi line expression */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/ansi_files.h`

