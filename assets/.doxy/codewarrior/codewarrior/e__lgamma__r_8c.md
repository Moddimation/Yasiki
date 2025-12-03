

# File e\_lgamma\_r.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**e\_lgamma\_r.c**](e__lgamma__r_8c.md)

[Go to the source code of this file](e__lgamma__r_8c_source.md)



* `#include "fdlibm.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  double | [**a0**](#variable-a0)   = `7.72156649015328655494e-02`<br> |
|  double | [**a1**](#variable-a1)   = `3.22467033424113591611e-01`<br> |
|  double | [**a10**](#variable-a10)   = `2.52144565451257326939e-05`<br> |
|  double | [**a11**](#variable-a11)   = `4.48640949618915160150e-05`<br> |
|  double | [**a2**](#variable-a2)   = `6.73523010531292681824e-02`<br> |
|  double | [**a3**](#variable-a3)   = `2.05808084325167332806e-02`<br> |
|  double | [**a4**](#variable-a4)   = `7.38555086081402883957e-03`<br> |
|  double | [**a5**](#variable-a5)   = `2.89051383673415629091e-03`<br> |
|  double | [**a6**](#variable-a6)   = `1.19270763183362067845e-03`<br> |
|  double | [**a7**](#variable-a7)   = `5.10069792153511336608e-04`<br> |
|  double | [**a8**](#variable-a8)   = `2.20862790713908385557e-04`<br> |
|  double | [**a9**](#variable-a9)   = `1.08011567247583939954e-04`<br> |
|  double | [**half**](#variable-half)   = `5.00000000000000000000e-01`<br> |
|  double | [**one**](#variable-one)   = `1.00000000000000000000e+00`<br> |
|  double | [**pi**](#variable-pi)   = `3.14159265358979311600e+00`<br> |
|  double | [**r1**](#variable-r1)   = `1.39200533467621045958e+00`<br> |
|  double | [**r2**](#variable-r2)   = `7.21935547567138069525e-01`<br> |
|  double | [**r3**](#variable-r3)   = `1.71933865632803078993e-01`<br> |
|  double | [**r4**](#variable-r4)   = `1.86459191715652901344e-02`<br> |
|  double | [**r5**](#variable-r5)   = `7.77942496381893596434e-04`<br> |
|  double | [**r6**](#variable-r6)   = `7.32668430744625636189e-06`<br> |
|  double | [**s0**](#variable-s0)   = `-7.72156649015328655494e-02`<br> |
|  double | [**s1**](#variable-s1)   = `2.14982415960608852501e-01`<br> |
|  double | [**s2**](#variable-s2)   = `3.25778796408930981787e-01`<br> |
|  double | [**s3**](#variable-s3)   = `1.46350472652464452805e-01`<br> |
|  double | [**s4**](#variable-s4)   = `2.66422703033638609560e-02`<br> |
|  double | [**s5**](#variable-s5)   = `1.84028451407337715652e-03`<br> |
|  double | [**s6**](#variable-s6)   = `3.19475326584100867617e-05`<br> |
|  double | [**t0**](#variable-t0)   = `4.83836122723810047042e-01`<br> |
|  double | [**t1**](#variable-t1)   = `-1.47587722994593911752e-01`<br> |
|  double | [**t10**](#variable-t10)   = `8.81081882437654011382e-04`<br> |
|  double | [**t11**](#variable-t11)   = `-5.38595305356740546715e-04`<br> |
|  double | [**t12**](#variable-t12)   = `3.15632070903625950361e-04`<br> |
|  double | [**t13**](#variable-t13)   = `-3.12754168375120860518e-04`<br> |
|  double | [**t14**](#variable-t14)   = `3.35529192635519073543e-04`<br> |
|  double | [**t2**](#variable-t2)   = `6.46249402391333854778e-02`<br> |
|  double | [**t3**](#variable-t3)   = `-3.27885410759859649565e-02`<br> |
|  double | [**t4**](#variable-t4)   = `1.79706750811820387126e-02`<br> |
|  double | [**t5**](#variable-t5)   = `-1.03142241298341437450e-02`<br> |
|  double | [**t6**](#variable-t6)   = `6.10053870246291332635e-03`<br> |
|  double | [**t7**](#variable-t7)   = `-3.68452016781138256760e-03`<br> |
|  double | [**t8**](#variable-t8)   = `2.25964780900612472250e-03`<br> |
|  double | [**t9**](#variable-t9)   = `-1.40346469989232843813e-03`<br> |
|  double | [**tc**](#variable-tc)   = `1.46163214496836224576e+00`<br> |
|  double | [**tf**](#variable-tf)   = `-1.21486290535849611461e-01`<br> |
|  double | [**tt**](#variable-tt)   = `-3.63867699703950536541e-18`<br> |
|  double | [**two52**](#variable-two52)   = `4.50359962737049600000e+15`<br> |
|  double | [**u0**](#variable-u0)   = `-7.72156649015328655494e-02`<br> |
|  double | [**u1**](#variable-u1)   = `6.32827064025093366517e-01`<br> |
|  double | [**u2**](#variable-u2)   = `1.45492250137234768737e+00`<br> |
|  double | [**u3**](#variable-u3)   = `9.77717527963372745603e-01`<br> |
|  double | [**u4**](#variable-u4)   = `2.28963728064692451092e-01`<br> |
|  double | [**u5**](#variable-u5)   = `1.33810918536787660377e-02`<br> |
|  double | [**v1**](#variable-v1)   = `2.45597793713041134822e+00`<br> |
|  double | [**v2**](#variable-v2)   = `2.12848976379893395361e+00`<br> |
|  double | [**v3**](#variable-v3)   = `7.69285150456672783825e-01`<br> |
|  double | [**v4**](#variable-v4)   = `1.04222645593369134254e-01`<br> |
|  double | [**v5**](#variable-v5)   = `3.21709242282423911810e-03`<br> |
|  double | [**w0**](#variable-w0)   = `4.18938533204672725052e-01`<br> |
|  double | [**w1**](#variable-w1)   = `8.33333333333329678849e-02`<br> |
|  double | [**w2**](#variable-w2)   = `-2.77777777728775536470e-03`<br> |
|  double | [**w3**](#variable-w3)   = `7.93650558643019558500e-04`<br> |
|  double | [**w4**](#variable-w4)   = `-5.95187557450339963135e-04`<br> |
|  double | [**w5**](#variable-w5)   = `8.36339918996282139126e-04`<br> |
|  double | [**w6**](#variable-w6)   = `-1.63092934096575273989e-03`<br> |
|  double | [**zero**](#variable-zero)   = `0.00000000000000000000e+00`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  double | [**\_\_ieee754\_lgamma\_r**](#function-__ieee754_lgamma_r) (double x, int \* signgamp) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  double | [**sin\_pi**](#function-sin_pi) (double x) <br> |


























## Public Static Attributes Documentation




### variable a0 

```C++
double a0;
```




<hr>



### variable a1 

```C++
double a1;
```




<hr>



### variable a10 

```C++
double a10;
```




<hr>



### variable a11 

```C++
double a11;
```




<hr>



### variable a2 

```C++
double a2;
```




<hr>



### variable a3 

```C++
double a3;
```




<hr>



### variable a4 

```C++
double a4;
```




<hr>



### variable a5 

```C++
double a5;
```




<hr>



### variable a6 

```C++
double a6;
```




<hr>



### variable a7 

```C++
double a7;
```




<hr>



### variable a8 

```C++
double a8;
```




<hr>



### variable a9 

```C++
double a9;
```




<hr>



### variable half 

```C++
double half;
```




<hr>



### variable one 

```C++
double one;
```




<hr>



### variable pi 

```C++
double pi;
```




<hr>



### variable r1 

```C++
double r1;
```




<hr>



### variable r2 

```C++
double r2;
```




<hr>



### variable r3 

```C++
double r3;
```




<hr>



### variable r4 

```C++
double r4;
```




<hr>



### variable r5 

```C++
double r5;
```




<hr>



### variable r6 

```C++
double r6;
```




<hr>



### variable s0 

```C++
double s0;
```




<hr>



### variable s1 

```C++
double s1;
```




<hr>



### variable s2 

```C++
double s2;
```




<hr>



### variable s3 

```C++
double s3;
```




<hr>



### variable s4 

```C++
double s4;
```




<hr>



### variable s5 

```C++
double s5;
```




<hr>



### variable s6 

```C++
double s6;
```




<hr>



### variable t0 

```C++
double t0;
```




<hr>



### variable t1 

```C++
double t1;
```




<hr>



### variable t10 

```C++
double t10;
```




<hr>



### variable t11 

```C++
double t11;
```




<hr>



### variable t12 

```C++
double t12;
```




<hr>



### variable t13 

```C++
double t13;
```




<hr>



### variable t14 

```C++
double t14;
```




<hr>



### variable t2 

```C++
double t2;
```




<hr>



### variable t3 

```C++
double t3;
```




<hr>



### variable t4 

```C++
double t4;
```




<hr>



### variable t5 

```C++
double t5;
```




<hr>



### variable t6 

```C++
double t6;
```




<hr>



### variable t7 

```C++
double t7;
```




<hr>



### variable t8 

```C++
double t8;
```




<hr>



### variable t9 

```C++
double t9;
```




<hr>



### variable tc 

```C++
double tc;
```




<hr>



### variable tf 

```C++
double tf;
```




<hr>



### variable tt 

```C++
double tt;
```




<hr>



### variable two52 

```C++
double two52;
```




<hr>



### variable u0 

```C++
double u0;
```




<hr>



### variable u1 

```C++
double u1;
```




<hr>



### variable u2 

```C++
double u2;
```




<hr>



### variable u3 

```C++
double u3;
```




<hr>



### variable u4 

```C++
double u4;
```




<hr>



### variable u5 

```C++
double u5;
```




<hr>



### variable v1 

```C++
double v1;
```




<hr>



### variable v2 

```C++
double v2;
```




<hr>



### variable v3 

```C++
double v3;
```




<hr>



### variable v4 

```C++
double v4;
```




<hr>



### variable v5 

```C++
double v5;
```




<hr>



### variable w0 

```C++
double w0;
```




<hr>



### variable w1 

```C++
double w1;
```




<hr>



### variable w2 

```C++
double w2;
```




<hr>



### variable w3 

```C++
double w3;
```




<hr>



### variable w4 

```C++
double w4;
```




<hr>



### variable w5 

```C++
double w5;
```




<hr>



### variable w6 

```C++
double w6;
```




<hr>



### variable zero 

```C++
double zero;
```




<hr>
## Public Functions Documentation




### function \_\_ieee754\_lgamma\_r 

```C++
double __ieee754_lgamma_r (
    double x,
    int * signgamp
) 
```




<hr>
## Public Static Functions Documentation




### function sin\_pi 

```C++
static double sin_pi (
    double x
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_lgamma_r.c`

