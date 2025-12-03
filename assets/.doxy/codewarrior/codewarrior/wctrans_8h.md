

# File wctrans.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**wctrans.h**](wctrans_8h.md)

[Go to the source code of this file](wctrans_8h_source.md)



* `#include <ansi_parms.h>`
* `#include <cstring>`
* `#include <cwchar>`
* `#include <cwctype>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) | [**wctrans\_t**](#typedef-wctrans_t)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  wint\_t | [**towctrans**](#function-towctrans) (wint\_t c, [**wctrans\_t**](wctrans_8h.md#typedef-wctrans_t) value) <br> |
|  [**wctrans\_t**](wctrans_8h.md#typedef-wctrans_t) | [**wctrans**](#function-wctrans) (const char \* name) <br> |




























## Public Types Documentation




### typedef wctrans\_t 

```C++
typedef wchar_t wctrans_t;
```




<hr>
## Public Functions Documentation




### function towctrans 

```C++
wint_t towctrans (
    wint_t c,
    wctrans_t value
) 
```




<hr>



### function wctrans 

```C++
wctrans_t wctrans (
    const char * name
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/wctrans.h`

