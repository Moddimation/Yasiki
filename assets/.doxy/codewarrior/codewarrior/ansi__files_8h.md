

# File ansi\_files.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**ansi\_files.h**](ansi__files_8h.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/ansi_files.h`

