

# File mem.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**mem.c**](mem_8c.md)

[Go to the source code of this file](mem_8c_source.md)



* `#include <string.h>`
* `#include "mem_funcs.h"`
* `#include <MacMemory.h>`
* `#include <mem.be.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  void \* | [**\_\_memrchr**](#function-__memrchr) (const void \* src, int val, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  void \* | [**memchr**](#function-memchr) (const void \* src, int val, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  int | [**memcmp**](#function-memcmp) (const void \* src1, const void \* src2, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  void \*() | [**memmove**](#function-memmove) (void \* dst, const void \* src, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  void \* | [**memset**](#function-memset) (void \* dst, int val, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |




























## Public Functions Documentation




### function \_\_memrchr 

```C++
void * __memrchr (
    const void * src,
    int val,
    size_t n
) 
```




<hr>



### function memchr 

```C++
void * memchr (
    const void * src,
    int val,
    size_t n
) 
```




<hr>



### function memcmp 

```C++
int memcmp (
    const void * src1,
    const void * src2,
    size_t n
) 
```




<hr>



### function memmove 

```C++
void *() memmove (
    void * dst,
    const void * src,
    size_t n
) 
```




<hr>



### function memset 

```C++
void * memset (
    void * dst,
    int val,
    size_t n
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/mem.c`

