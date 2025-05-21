

# File wctrans.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**wctrans.c**](wctrans_8c.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/wctrans.c`

