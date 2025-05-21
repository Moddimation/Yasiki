

# File file\_io.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**file\_io.c**](file__io_8c.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/file_io.c`

