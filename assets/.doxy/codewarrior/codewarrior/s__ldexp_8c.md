

# File s\_ldexp.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**s\_ldexp.c**](s__ldexp_8c.md)

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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ldexp.c`

