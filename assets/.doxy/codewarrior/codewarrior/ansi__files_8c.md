

# File ansi\_files.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**ansi\_files.c**](ansi__files_8c.md)

[Go to the source code of this file](ansi__files_8c_source.md)



* `#include <stdio.h>`
* `#include "ansi_files.h"`
* `#include "console_io.h"`
* `#include "critical_regions.h"`
* `#include "file_io.h"`
* `#include "string_io.h"`
* `#include <stdlib.h>`
* `#include <string.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef unsigned char | [**console\_buff**](#typedef-console_buff)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  FILE | [**\_\_files**](#variable-__files)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**console\_buff**](ansi__files_8c.md#typedef-console_buff) | [**stderr\_buff**](#variable-stderr_buff)  <br> |
|  [**console\_buff**](ansi__files_8c.md#typedef-console_buff) | [**stdin\_buff**](#variable-stdin_buff)  <br> |
|  [**console\_buff**](ansi__files_8c.md#typedef-console_buff) | [**stdout\_buff**](#variable-stdout_buff)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_close\_all**](#function-__close_all) (void) <br> |
|  FILE \* | [**\_\_find\_unopened\_file**](#function-__find_unopened_file) (void) <br> |
|  int | [**\_\_flush\_all**](#function-__flush_all) (void) <br> |
|  int | [**\_\_flush\_line\_buffered\_output\_files**](#function-__flush_line_buffered_output_files) (void) <br> |
|  void | [**\_\_init\_file**](#function-__init_file) (FILE \* file, \_\_file\_modes mode, char \* buff, [**size\_t**](size__t_8h.md#typedef-size_t) size) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**console\_buff\_mode**](ansi__files_8c.md#define-console_buff_mode)  `\_IOLBF`<br> |
| define  | [**console\_buff\_size**](ansi__files_8c.md#define-console_buff_size)  `256`<br> |

## Public Types Documentation




### typedef console\_buff 

```C++
typedef unsigned char console_buff[console_buff_size];
```




<hr>
## Public Attributes Documentation




### variable \_\_files 

```C++
FILE __files[_STATIC_FILES];
```




<hr>
## Public Static Attributes Documentation




### variable stderr\_buff 

```C++
console_buff stderr_buff;
```




<hr>



### variable stdin\_buff 

```C++
console_buff stdin_buff;
```




<hr>



### variable stdout\_buff 

```C++
console_buff stdout_buff;
```




<hr>
## Public Functions Documentation




### function \_\_close\_all 

```C++
void __close_all (
    void
) 
```




<hr>



### function \_\_find\_unopened\_file 

```C++
FILE * __find_unopened_file (
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
    FILE * file,
    __file_modes mode,
    char * buff,
    size_t size
) 
```




<hr>
## Macro Definition Documentation





### define console\_buff\_mode 

```C++
#define console_buff_mode `_IOLBF`
```




<hr>



### define console\_buff\_size 

```C++
#define console_buff_size `256`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/ansi_files.c`

