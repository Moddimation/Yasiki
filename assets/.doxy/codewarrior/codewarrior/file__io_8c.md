

# File file\_io.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**file\_io.c**](file__io_8c.md)

[Go to the source code of this file](file__io_8c_source.md)



* `#include <stdio.h>`
* `#include <stdlib.h>`
* `#include "ansi_files.h"`
* `#include "buffer_io.h"`
* `#include "critical_regions.h"`
* `#include "file_io.h"`
* `#include "misc_io.h"`
* `#include <ThreadLocalData.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  \_\_file\_modes | [**\_\_temp\_file\_mode**](#variable-__temp_file_mode)   = `/* multi line expression */`<br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_get\_file\_modes**](#function-__get_file_modes) (const char \* mode, \_\_file\_modes \* modes) <br> |
|  FILE \* | [**\_\_handle\_open**](#function-__handle_open) (\_\_file\_handle handle, const char \* mode) <br> |
|  FILE \* | [**\_\_handle\_reopen**](#function-__handle_reopen) (\_\_file\_handle handle, const char \* mode, FILE \* file) <br> |
|  void | [**\_\_set\_idle\_proc**](#function-__set_idle_proc) (FILE \* file, \_\_idle\_proc idle\_proc) <br> |
|  int | [**fclose**](#function-fclose) (FILE \* file) <br> |
|  int | [**fflush**](#function-fflush) (FILE \* file) <br> |
|  FILE \* | [**fopen**](#function-fopen) (const char \* name, const char \* mode) <br> |
|  FILE \* | [**freopen**](#function-freopen) (const char \* name, const char \* mode, FILE \* file) <br> |
|  int | [**remove**](#function-remove) (const char \* name) <br> |
|  FILE \* | [**tmpfile**](#function-tmpfile) (void) <br> |
|  char \* | [**tmpnam**](#function-tmpnam) (char \* name) <br> |




























## Public Attributes Documentation




### variable \_\_temp\_file\_mode 

```C++
__file_modes __temp_file_mode;
```




<hr>
## Public Functions Documentation




### function \_\_get\_file\_modes 

```C++
int __get_file_modes (
    const char * mode,
    __file_modes * modes
) 
```




<hr>



### function \_\_handle\_open 

```C++
FILE * __handle_open (
    __file_handle handle,
    const char * mode
) 
```




<hr>



### function \_\_handle\_reopen 

```C++
FILE * __handle_reopen (
    __file_handle handle,
    const char * mode,
    FILE * file
) 
```




<hr>



### function \_\_set\_idle\_proc 

```C++
void __set_idle_proc (
    FILE * file,
    __idle_proc idle_proc
) 
```




<hr>



### function fclose 

```C++
int fclose (
    FILE * file
) 
```




<hr>



### function fflush 

```C++
int fflush (
    FILE * file
) 
```




<hr>



### function fopen 

```C++
FILE * fopen (
    const char * name,
    const char * mode
) 
```




<hr>



### function freopen 

```C++
FILE * freopen (
    const char * name,
    const char * mode,
    FILE * file
) 
```




<hr>



### function remove 

```C++
int remove (
    const char * name
) 
```




<hr>



### function tmpfile 

```C++
FILE * tmpfile (
    void
) 
```




<hr>



### function tmpnam 

```C++
char * tmpnam (
    char * name
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/file_io.c`

