

# File e\_pow.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**e\_pow.c**](e__pow_8c.md)

[Go to the source code of this file](e__pow_8c_source.md)



* `#include <math.h>`
* `#include "fdlibm.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  double | [**L1**](#variable-l1)   = `5.99999999999994648725e-01`<br> |
|  double | [**L2**](#variable-l2)   = `4.28571428578550184252e-01`<br> |
|  double | [**L3**](#variable-l3)   = `3.33333329818377432918e-01`<br> |
|  double | [**L4**](#variable-l4)   = `2.72728123808534006489e-01`<br> |
|  double | [**L5**](#variable-l5)   = `2.30660745775561754067e-01`<br> |
|  double | [**L6**](#variable-l6)   = `2.06975017800338417784e-01`<br> |
|  double | [**P1**](#variable-p1)   = `1.66666666666666019037e-01`<br> |
|  double | [**P2**](#variable-p2)   = `-2.77777777770155933842e-03`<br> |
|  double | [**P3**](#variable-p3)   = `6.61375632143793436117e-05`<br> |
|  double | [**P4**](#variable-p4)   = `-1.65339022054652515390e-06`<br> |
|  double | [**P5**](#variable-p5)   = `4.13813679705723846039e-08`<br> |
|  double | [**big**](#variable-big)   = `1.0e300`<br> |
|  double | [**bp**](#variable-bp)   = `{1.0, 1.5,}`<br> |
|  double | [**cp**](#variable-cp)   = `9.61796693925975554329e-01`<br> |
|  double | [**cp\_h**](#variable-cp_h)   = `9.61796700954437255859e-01`<br> |
|  double | [**cp\_l**](#variable-cp_l)   = `-7.02846165095275826516e-09`<br> |
|  double | [**dp\_h**](#variable-dp_h)   = `{ 0.0, 5.84962487220764160156e-01,}`<br> |
|  double | [**dp\_l**](#variable-dp_l)   = `{ 0.0, 1.35003920212974897128e-08,}`<br> |
|  double | [**ivln2**](#variable-ivln2)   = `1.44269504088896338700e+00`<br> |
|  double | [**ivln2\_h**](#variable-ivln2_h)   = `1.44269502162933349609e+00`<br> |
|  double | [**ivln2\_l**](#variable-ivln2_l)   = `1.92596299112661746887e-08`<br> |
|  double | [**lg2**](#variable-lg2)   = `6.93147180559945286227e-01`<br> |
|  double | [**lg2\_h**](#variable-lg2_h)   = `6.93147182464599609375e-01`<br> |
|  double | [**lg2\_l**](#variable-lg2_l)   = `-1.90465429995776804525e-09`<br> |
|  double | [**one**](#variable-one)   = `1.0`<br> |
|  double | [**ovt**](#variable-ovt)   = `8.0085662595372944372e-0017`<br> |
|  double | [**tiny**](#variable-tiny)   = `1.0e-300`<br> |
|  double | [**two**](#variable-two)   = `2.0`<br> |
|  double | [**two53**](#variable-two53)   = `9007199254740992.0`<br> |
|  double | [**zero**](#variable-zero)   = `0.0`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  double | [**\_\_ieee754\_pow**](#function-__ieee754_pow) (double x, double y) <br> |




























## Public Static Attributes Documentation




### variable L1 

```C++
double L1;
```




<hr>



### variable L2 

```C++
double L2;
```




<hr>



### variable L3 

```C++
double L3;
```




<hr>



### variable L4 

```C++
double L4;
```




<hr>



### variable L5 

```C++
double L5;
```




<hr>



### variable L6 

```C++
double L6;
```




<hr>



### variable P1 

```C++
double P1;
```




<hr>



### variable P2 

```C++
double P2;
```




<hr>



### variable P3 

```C++
double P3;
```




<hr>



### variable P4 

```C++
double P4;
```




<hr>



### variable P5 

```C++
double P5;
```




<hr>



### variable big 

```C++
double big;
```




<hr>



### variable bp 

```C++
double bp[];
```




<hr>



### variable cp 

```C++
double cp;
```




<hr>



### variable cp\_h 

```C++
double cp_h;
```




<hr>



### variable cp\_l 

```C++
double cp_l;
```




<hr>



### variable dp\_h 

```C++
double dp_h[];
```




<hr>



### variable dp\_l 

```C++
double dp_l[];
```




<hr>



### variable ivln2 

```C++
double ivln2;
```




<hr>



### variable ivln2\_h 

```C++
double ivln2_h;
```




<hr>



### variable ivln2\_l 

```C++
double ivln2_l;
```




<hr>



### variable lg2 

```C++
double lg2;
```




<hr>



### variable lg2\_h 

```C++
double lg2_h;
```




<hr>



### variable lg2\_l 

```C++
double lg2_l;
```




<hr>



### variable one 

```C++
double one;
```




<hr>



### variable ovt 

```C++
double ovt;
```




<hr>



### variable tiny 

```C++
double tiny;
```




<hr>



### variable two 

```C++
double two;
```




<hr>



### variable two53 

```C++
double two53;
```




<hr>



### variable zero 

```C++
double zero;
```




<hr>
## Public Functions Documentation




### function \_\_ieee754\_pow 

```C++
double __ieee754_pow (
    double x,
    double y
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_pow.c`

