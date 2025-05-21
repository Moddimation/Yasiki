

# File direct\_io.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**direct\_io.c**](direct__io_8c.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/direct_io.c`

