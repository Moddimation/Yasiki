

# File wcstold.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**wcstold.h**](wcstold_8h.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/wcstold.h`

