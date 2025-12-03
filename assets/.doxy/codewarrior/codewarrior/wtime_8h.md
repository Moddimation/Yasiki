

# File wtime.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**wtime.h**](wtime_8h.md)

[Go to the source code of this file](wtime_8h_source.md)



* `#include <ansi_parms.h>`
* `#include <cstdio>`
* `#include <ctime>`
* `#include <cwchar>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**format\_str**](#variable-format_str)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**\_\_std**](#function-__std) ([**size\_t**](size__t_8h.md#typedef-size_t)) <br> |
|  const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) const struct | [**\_\_std**](#function-__std) (tm) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**wasctime**](#function-wasctime) (const struct [**\_\_std**](ansi__parms_8h.md#define-__std)(tm) \* tm) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**wctime**](#function-wctime) (const [**\_\_std**](ansi__parms_8h.md#define-__std)(time\_t) \* timer) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  int | [**wemit**](#function-wemit) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str, [**\_\_std**](ansi__parms_8h.md#define-__std)([**size\_t**](size__t_8h.md#typedef-size_t)) size, [**\_\_std**](ansi__parms_8h.md#define-__std)([**size\_t**](size__t_8h.md#typedef-size_t)) \* max\_size, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format\_str, ...) <br> |


























## Public Attributes Documentation




### variable format\_str 

```C++
const wchar_t* format_str;
```




<hr>
## Public Functions Documentation




### function \_\_std 

```C++
__std (
    size_t
) 
```




<hr>



### function \_\_std 

```C++
const wchar_t const struct __std (
    tm
) 
```




<hr>



### function wasctime 

```C++
wchar_t * wasctime (
    const struct __std (tm) * tm
) 
```




<hr>



### function wctime 

```C++
wchar_t * wctime (
    const __std (time_t) * timer
) 
```




<hr>
## Public Static Functions Documentation




### function wemit 

```C++
static int wemit (
    wchar_t * str,
    __std ( size_t ) size,
    __std ( size_t ) * max_size,
    const wchar_t * format_str,
    ...
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/wtime.h`

