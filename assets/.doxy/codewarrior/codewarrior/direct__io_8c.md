

# File direct\_io.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**direct\_io.c**](direct__io_8c.md)

[Go to the source code of this file](direct__io_8c_source.md)



* `#include <stdio.h>`
* `#include <string.h>`
* `#include "ansi_files.h"`
* `#include "file_io.h"`
* `#include "buffer_io.h"`
* `#include "misc_io.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**size\_t**](size__t_8h.md#typedef-size_t) | [**fread**](#function-fread) (void \* ptr, [**size\_t**](size__t_8h.md#typedef-size_t) memb\_size, [**size\_t**](size__t_8h.md#typedef-size_t) num\_memb, FILE \* file) <br> |
|  [**size\_t**](size__t_8h.md#typedef-size_t) | [**fwrite**](#function-fwrite) (const void \* ptr, [**size\_t**](size__t_8h.md#typedef-size_t) memb\_size, [**size\_t**](size__t_8h.md#typedef-size_t) num\_memb, FILE \* file) <br> |




























## Public Functions Documentation




### function fread 

```C++
size_t fread (
    void * ptr,
    size_t memb_size,
    size_t num_memb,
    FILE * file
) 
```




<hr>



### function fwrite 

```C++
size_t fwrite (
    const void * ptr,
    size_t memb_size,
    size_t num_memb,
    FILE * file
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/direct_io.c`

