

# File file\_pos.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**file\_pos.c**](file__pos_8c.md)

[Go to the source code of this file](file__pos_8c_source.md)



* `#include <errno.h>`
* `#include <stddef.h>`
* `#include <stdio.h>`
* `#include "ansi_files.h"`
* `#include "buffer_io.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_fseek**](#function-_fseek) (FILE \* file, fpos\_t offset, int mode) <br> |
|  fpos\_t | [**\_ftell**](#function-_ftell) (FILE \* file) <br> |
|  int | [**fgetpos**](#function-fgetpos) (FILE \* file, fpos\_t \* pos) <br> |
|  int | [**fseek**](#function-fseek) (FILE \* file, long offset, int mode) <br> |
|  int | [**fsetpos**](#function-fsetpos) (FILE \* file, const fpos\_t \* pos) <br> |
|  long | [**ftell**](#function-ftell) (FILE \* file) <br> |
|  void | [**rewind**](#function-rewind) (FILE \* file) <br> |




























## Public Functions Documentation




### function \_fseek 

```C++
int _fseek (
    FILE * file,
    fpos_t offset,
    int mode
) 
```




<hr>



### function \_ftell 

```C++
fpos_t _ftell (
    FILE * file
) 
```




<hr>



### function fgetpos 

```C++
int fgetpos (
    FILE * file,
    fpos_t * pos
) 
```




<hr>



### function fseek 

```C++
int fseek (
    FILE * file,
    long offset,
    int mode
) 
```




<hr>



### function fsetpos 

```C++
int fsetpos (
    FILE * file,
    const fpos_t * pos
) 
```




<hr>



### function ftell 

```C++
long ftell (
    FILE * file
) 
```




<hr>



### function rewind 

```C++
void rewind (
    FILE * file
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/file_pos.c`

