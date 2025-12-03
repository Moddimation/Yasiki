

# File mem.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**mem.c**](mem_8c.md)

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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/mem.c`

