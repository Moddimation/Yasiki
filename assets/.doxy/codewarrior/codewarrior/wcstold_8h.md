

# File wcstold.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**wcstold.h**](wcstold_8h.md)

[Go to the source code of this file](wcstold_8h_source.md)



* `#include <ansi_parms.h>`
* `#include <cstdio>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  long double | [**\_\_wcstold**](#function-__wcstold) (int max\_width, [**\_\_std**](ansi__parms_8h.md#define-__std)(wint\_t)(\*)(void \*, [**\_\_std**](ansi__parms_8h.md#define-__std)(wint\_t), int) ReadProc, void \* ReadProcArg, int \* chars\_scanned, int \* overflow) <br> |
|  double | [**watof**](#function-watof) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str) <br> |
|  double | [**wcstod**](#function-wcstod) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str, [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \*\* end) <br> |




























## Public Functions Documentation




### function \_\_wcstold 

```C++
long double __wcstold (
    int max_width,
    __std (wint_t)(*)(void *, __std (wint_t), int) ReadProc,
    void * ReadProcArg,
    int * chars_scanned,
    int * overflow
) 
```




<hr>



### function watof 

```C++
double watof (
    const wchar_t * str
) 
```




<hr>



### function wcstod 

```C++
double wcstod (
    const wchar_t * str,
    wchar_t ** end
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/wcstold.h`

