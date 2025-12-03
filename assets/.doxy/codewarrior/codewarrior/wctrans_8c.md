

# File wctrans.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**wctrans.c**](wctrans_8c.md)

[Go to the source code of this file](wctrans_8c_source.md)



* `#include <wctrans.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**wctable**](structwctable.md) <br> |








## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const struct [**wctable**](structwctable.md) | [**wtable**](#variable-wtable)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  wint\_t | [**towctrans**](#function-towctrans) (wint\_t c, [**wctrans\_t**](wctrans_8h.md#typedef-wctrans_t) value) <br> |
|  [**wctrans\_t**](wctrans_8h.md#typedef-wctrans_t) | [**wctrans**](#function-wctrans) (const char \* name) <br> |




























## Public Static Attributes Documentation




### variable wtable 

```C++
const struct wctable wtable[];
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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/wctrans.c`

