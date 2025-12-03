

# File file\_pos.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**file\_pos.c**](file__pos_8c.md)

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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/file_pos.c`

