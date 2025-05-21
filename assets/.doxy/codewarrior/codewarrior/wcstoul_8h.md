

# File wcstoul.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**wcstoul.h**](wcstoul_8h.md)

[Go to the source code of this file](wcstoul_8h_source.md)



* `#include <ansi_parms.h>`
* `#include <cstdio>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  unsigned long | [**\_\_wcstoul**](#function-__wcstoul) (int base, int max\_width, [**\_\_std**](ansi__parms_8h.md#define-__std)(wint\_t)(\*)(void \*, [**\_\_std**](ansi__parms_8h.md#define-__std)(wint\_t), int) ReadProc, void \* ReadProcArg, int \* chars\_scanned, int \* negative, int \* overflow) <br> |
|  int | [**watoi**](#function-watoi) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str) <br> |
|  long | [**watol**](#function-watol) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str) <br> |
|  long | [**wcstol**](#function-wcstol) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str, [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \*\* end, int base) <br> |
|  unsigned long | [**wcstoul**](#function-wcstoul) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str, [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \*\* end, int base) <br> |




























## Public Functions Documentation




### function \_\_wcstoul 

```C++
unsigned long __wcstoul (
    int base,
    int max_width,
    __std (wint_t)(*)(void *, __std (wint_t), int) ReadProc,
    void * ReadProcArg,
    int * chars_scanned,
    int * negative,
    int * overflow
) 
```




<hr>



### function watoi 

```C++
int watoi (
    const wchar_t * str
) 
```




<hr>



### function watol 

```C++
long watol (
    const wchar_t * str
) 
```




<hr>



### function wcstol 

```C++
long wcstol (
    const wchar_t * str,
    wchar_t ** end,
    int base
) 
```




<hr>



### function wcstoul 

```C++
unsigned long wcstoul (
    const wchar_t * str,
    wchar_t ** end,
    int base
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/wcstoul.h`

