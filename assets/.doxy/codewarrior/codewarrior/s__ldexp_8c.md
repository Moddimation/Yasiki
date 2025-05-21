

# File s\_ldexp.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**s\_ldexp.c**](s__ldexp_8c.md)

[Go to the source code of this file](s__ldexp_8c_source.md)



* `#include "fdlibm.h"`
* `#include <errno.h>`
* `#include <math.h>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const double | [**big**](#variable-big)   = `1.0e+300`<br> |
|  const double | [**tiny**](#variable-tiny)   = `1.0e-300`<br> |
|  const double | [**two54**](#variable-two54)   = `1.80143985094819840000e+16`<br> |
|  const double | [**twom54**](#variable-twom54)   = `5.55111512312578270212e-17`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  double | [**ldexp**](#function-ldexp) (double x, int n) <br> |




























## Public Static Attributes Documentation




### variable big 

```C++
const double big;
```




<hr>



### variable tiny 

```C++
const double tiny;
```




<hr>



### variable two54 

```C++
const double two54;
```




<hr>



### variable twom54 

```C++
const double twom54;
```




<hr>
## Public Functions Documentation




### function ldexp 

```C++
double ldexp (
    double x,
    int n
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ldexp.c`

