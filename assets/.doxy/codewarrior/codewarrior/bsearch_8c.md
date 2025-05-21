

# File bsearch.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**bsearch.c**](bsearch_8c.md)

[Go to the source code of this file](bsearch_8c_source.md)



* `#include <stdlib.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  void \* | [**bsearch**](#function-bsearch) (const void \* key, const void \* table\_base, [**size\_t**](size__t_8h.md#typedef-size_t) num\_members, [**size\_t**](size__t_8h.md#typedef-size_t) member\_size, \_compare\_function compare\_members) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**table\_ptr**](bsearch_8c.md#define-table_ptr) (i) `(((char \*) table\_base) + (member\_size \* (i)))`<br> |

## Public Functions Documentation




### function bsearch 

```C++
void * bsearch (
    const void * key,
    const void * table_base,
    size_t num_members,
    size_t member_size,
    _compare_function compare_members
) 
```




<hr>
## Macro Definition Documentation





### define table\_ptr 

```C++
#define table_ptr (
    i
) `(((char *) table_base) + (member_size * (i)))`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/bsearch.c`

