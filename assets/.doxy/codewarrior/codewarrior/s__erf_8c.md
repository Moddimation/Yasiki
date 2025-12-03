

# File s\_erf.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**s\_erf.c**](s__erf_8c.md)

[Go to the source code of this file](s__erf_8c_source.md)



* `#include "fdlibm.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  double | [**efx**](#variable-efx)   = `1.28379167095512586316e-01`<br> |
|  double | [**efx8**](#variable-efx8)   = `1.02703333676410069053e+00`<br> |
|  double | [**erx**](#variable-erx)   = `8.45062911510467529297e-01`<br> |
|  double | [**half**](#variable-half)   = `5.00000000000000000000e-01`<br> |
|  double | [**one**](#variable-one)   = `1.00000000000000000000e+00`<br> |
|  double | [**pa0**](#variable-pa0)   = `-2.36211856075265944077e-03`<br> |
|  double | [**pa1**](#variable-pa1)   = `4.14856118683748331666e-01`<br> |
|  double | [**pa2**](#variable-pa2)   = `-3.72207876035701323847e-01`<br> |
|  double | [**pa3**](#variable-pa3)   = `3.18346619901161753674e-01`<br> |
|  double | [**pa4**](#variable-pa4)   = `-1.10894694282396677476e-01`<br> |
|  double | [**pa5**](#variable-pa5)   = `3.54783043256182359371e-02`<br> |
|  double | [**pa6**](#variable-pa6)   = `-2.16637559486879084300e-03`<br> |
|  double | [**pp0**](#variable-pp0)   = `1.28379167095512558561e-01`<br> |
|  double | [**pp1**](#variable-pp1)   = `-3.25042107247001499370e-01`<br> |
|  double | [**pp2**](#variable-pp2)   = `-2.84817495755985104766e-02`<br> |
|  double | [**pp3**](#variable-pp3)   = `-5.77027029648944159157e-03`<br> |
|  double | [**pp4**](#variable-pp4)   = `-2.37630166566501626084e-05`<br> |
|  double | [**qa1**](#variable-qa1)   = `1.06420880400844228286e-01`<br> |
|  double | [**qa2**](#variable-qa2)   = `5.40397917702171048937e-01`<br> |
|  double | [**qa3**](#variable-qa3)   = `7.18286544141962662868e-02`<br> |
|  double | [**qa4**](#variable-qa4)   = `1.26171219808761642112e-01`<br> |
|  double | [**qa5**](#variable-qa5)   = `1.36370839120290507362e-02`<br> |
|  double | [**qa6**](#variable-qa6)   = `1.19844998467991074170e-02`<br> |
|  double | [**qq1**](#variable-qq1)   = `3.97917223959155352819e-01`<br> |
|  double | [**qq2**](#variable-qq2)   = `6.50222499887672944485e-02`<br> |
|  double | [**qq3**](#variable-qq3)   = `5.08130628187576562776e-03`<br> |
|  double | [**qq4**](#variable-qq4)   = `1.32494738004321644526e-04`<br> |
|  double | [**qq5**](#variable-qq5)   = `-3.96022827877536812320e-06`<br> |
|  double | [**ra0**](#variable-ra0)   = `-9.86494403484714822705e-03`<br> |
|  double | [**ra1**](#variable-ra1)   = `-6.93858572707181764372e-01`<br> |
|  double | [**ra2**](#variable-ra2)   = `-1.05586262253232909814e+01`<br> |
|  double | [**ra3**](#variable-ra3)   = `-6.23753324503260060396e+01`<br> |
|  double | [**ra4**](#variable-ra4)   = `-1.62396669462573470355e+02`<br> |
|  double | [**ra5**](#variable-ra5)   = `-1.84605092906711035994e+02`<br> |
|  double | [**ra6**](#variable-ra6)   = `-8.12874355063065934246e+01`<br> |
|  double | [**ra7**](#variable-ra7)   = `-9.81432934416914548592e+00`<br> |
|  double | [**rb0**](#variable-rb0)   = `-9.86494292470009928597e-03`<br> |
|  double | [**rb1**](#variable-rb1)   = `-7.99283237680523006574e-01`<br> |
|  double | [**rb2**](#variable-rb2)   = `-1.77579549177547519889e+01`<br> |
|  double | [**rb3**](#variable-rb3)   = `-1.60636384855821916062e+02`<br> |
|  double | [**rb4**](#variable-rb4)   = `-6.37566443368389627722e+02`<br> |
|  double | [**rb5**](#variable-rb5)   = `-1.02509513161107724954e+03`<br> |
|  double | [**rb6**](#variable-rb6)   = `-4.83519191608651397019e+02`<br> |
|  double | [**sa1**](#variable-sa1)   = `1.96512716674392571292e+01`<br> |
|  double | [**sa2**](#variable-sa2)   = `1.37657754143519042600e+02`<br> |
|  double | [**sa3**](#variable-sa3)   = `4.34565877475229228821e+02`<br> |
|  double | [**sa4**](#variable-sa4)   = `6.45387271733267880336e+02`<br> |
|  double | [**sa5**](#variable-sa5)   = `4.29008140027567833386e+02`<br> |
|  double | [**sa6**](#variable-sa6)   = `1.08635005541779435134e+02`<br> |
|  double | [**sa7**](#variable-sa7)   = `6.57024977031928170135e+00`<br> |
|  double | [**sa8**](#variable-sa8)   = `-6.04244152148580987438e-02`<br> |
|  double | [**sb1**](#variable-sb1)   = `3.03380607434824582924e+01`<br> |
|  double | [**sb2**](#variable-sb2)   = `3.25792512996573918826e+02`<br> |
|  double | [**sb3**](#variable-sb3)   = `1.53672958608443695994e+03`<br> |
|  double | [**sb4**](#variable-sb4)   = `3.19985821950859553908e+03`<br> |
|  double | [**sb5**](#variable-sb5)   = `2.55305040643316442583e+03`<br> |
|  double | [**sb6**](#variable-sb6)   = `4.74528541206955367215e+02`<br> |
|  double | [**sb7**](#variable-sb7)   = `-2.24409524465858183362e+01`<br> |
|  double | [**tiny**](#variable-tiny)   = `1e-300`<br> |
|  double | [**two**](#variable-two)   = `2.00000000000000000000e+00`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  double | [**erf**](#function-erf) (double x) <br> |
|  double | [**erfc**](#function-erfc) (double x) <br> |




























## Public Static Attributes Documentation




### variable efx 

```C++
double efx;
```




<hr>



### variable efx8 

```C++
double efx8;
```




<hr>



### variable erx 

```C++
double erx;
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



### variable pa0 

```C++
double pa0;
```




<hr>



### variable pa1 

```C++
double pa1;
```




<hr>



### variable pa2 

```C++
double pa2;
```




<hr>



### variable pa3 

```C++
double pa3;
```




<hr>



### variable pa4 

```C++
double pa4;
```




<hr>



### variable pa5 

```C++
double pa5;
```




<hr>



### variable pa6 

```C++
double pa6;
```




<hr>



### variable pp0 

```C++
double pp0;
```




<hr>



### variable pp1 

```C++
double pp1;
```




<hr>



### variable pp2 

```C++
double pp2;
```




<hr>



### variable pp3 

```C++
double pp3;
```




<hr>



### variable pp4 

```C++
double pp4;
```




<hr>



### variable qa1 

```C++
double qa1;
```




<hr>



### variable qa2 

```C++
double qa2;
```




<hr>



### variable qa3 

```C++
double qa3;
```




<hr>



### variable qa4 

```C++
double qa4;
```




<hr>



### variable qa5 

```C++
double qa5;
```




<hr>



### variable qa6 

```C++
double qa6;
```




<hr>



### variable qq1 

```C++
double qq1;
```




<hr>



### variable qq2 

```C++
double qq2;
```




<hr>



### variable qq3 

```C++
double qq3;
```




<hr>



### variable qq4 

```C++
double qq4;
```




<hr>



### variable qq5 

```C++
double qq5;
```




<hr>



### variable ra0 

```C++
double ra0;
```




<hr>



### variable ra1 

```C++
double ra1;
```




<hr>



### variable ra2 

```C++
double ra2;
```




<hr>



### variable ra3 

```C++
double ra3;
```




<hr>



### variable ra4 

```C++
double ra4;
```




<hr>



### variable ra5 

```C++
double ra5;
```




<hr>



### variable ra6 

```C++
double ra6;
```




<hr>



### variable ra7 

```C++
double ra7;
```




<hr>



### variable rb0 

```C++
double rb0;
```




<hr>



### variable rb1 

```C++
double rb1;
```




<hr>



### variable rb2 

```C++
double rb2;
```




<hr>



### variable rb3 

```C++
double rb3;
```




<hr>



### variable rb4 

```C++
double rb4;
```




<hr>



### variable rb5 

```C++
double rb5;
```




<hr>



### variable rb6 

```C++
double rb6;
```




<hr>



### variable sa1 

```C++
double sa1;
```




<hr>



### variable sa2 

```C++
double sa2;
```




<hr>



### variable sa3 

```C++
double sa3;
```




<hr>



### variable sa4 

```C++
double sa4;
```




<hr>



### variable sa5 

```C++
double sa5;
```




<hr>



### variable sa6 

```C++
double sa6;
```




<hr>



### variable sa7 

```C++
double sa7;
```




<hr>



### variable sa8 

```C++
double sa8;
```




<hr>



### variable sb1 

```C++
double sb1;
```




<hr>



### variable sb2 

```C++
double sb2;
```




<hr>



### variable sb3 

```C++
double sb3;
```




<hr>



### variable sb4 

```C++
double sb4;
```




<hr>



### variable sb5 

```C++
double sb5;
```




<hr>



### variable sb6 

```C++
double sb6;
```




<hr>



### variable sb7 

```C++
double sb7;
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
## Public Functions Documentation




### function erf 

```C++
double erf (
    double x
) 
```




<hr>



### function erfc 

```C++
double erfc (
    double x
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_erf.c`

