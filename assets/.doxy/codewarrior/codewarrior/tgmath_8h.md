

# File tgmath.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**tgmath.h**](tgmath_8h.md)

[Go to the source code of this file](tgmath_8h_source.md)



* `#include <cmath>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  float | [**acos**](#function-acos) (float x) <br> |
|  long double | [**acos**](#function-acos) (long double x) <br> |
|  double | [**acos**](#function-acos) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**asin**](#function-asin) (float x) <br> |
|  long double | [**asin**](#function-asin) (long double x) <br> |
|  double | [**asin**](#function-asin) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**atan**](#function-atan) (float x) <br> |
|  long double | [**atan**](#function-atan) (long double x) <br> |
|  double | [**atan**](#function-atan) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**atan2**](#function-atan2) (float x, float y) <br> |
|  long double | [**atan2**](#function-atan2) (long double y, long double x) <br> |
|  double | [**atan2**](#function-atan2) (const [**T**](k__tan_8c.md#variable-t) & y, const U & x) <br> |
|  float | [**ceil**](#function-ceil) (float x) <br> |
|  long double | [**ceil**](#function-ceil) (long double x) <br> |
|  double | [**ceil**](#function-ceil) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**cos**](#function-cos) (float x) <br> |
|  long double | [**cos**](#function-cos) (long double x) <br> |
|  double | [**cos**](#function-cos) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**cosh**](#function-cosh) (float x) <br> |
|  long double | [**cosh**](#function-cosh) (long double x) <br> |
|  double | [**cosh**](#function-cosh) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**exp**](#function-exp) (float x) <br> |
|  long double | [**exp**](#function-exp) (long double x) <br> |
|  double | [**exp**](#function-exp) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**fabs**](#function-fabs) (float x) <br> |
|  long double | [**fabs**](#function-fabs) (long double x) <br> |
|  double | [**fabs**](#function-fabs) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**floor**](#function-floor) (float x) <br> |
|  long double | [**floor**](#function-floor) (long double x) <br> |
|  double | [**floor**](#function-floor) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**fmod**](#function-fmod) (float x, float y) <br> |
|  long double | [**fmod**](#function-fmod) (long double x, long double y) <br> |
|  double | [**fmod**](#function-fmod) (const [**T**](k__tan_8c.md#variable-t) & x, const U & y) <br> |
|  float | [**frexp**](#function-frexp) (float x, int \* exp) <br> |
|  long double | [**frexp**](#function-frexp) (long double x, int \* exp) <br> |
|  double | [**frexp**](#function-frexp) (const [**T**](k__tan_8c.md#variable-t) & x, int \* exp) <br> |
|  float | [**ldexp**](#function-ldexp) (float x, [**\_INT32**](msl__t_8h.md#typedef-_int32) n) <br> |
|  long double | [**ldexp**](#function-ldexp) (long double x, int exp) <br> |
|  double | [**ldexp**](#function-ldexp) (const [**T**](k__tan_8c.md#variable-t) & x, int exp) <br> |
|  float | [**log**](#function-log) (float x) <br> |
|  long double | [**log**](#function-log) (long double x) <br> |
|  double | [**log**](#function-log) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**log10**](#function-log10) (float x) <br> |
|  long double | [**log10**](#function-log10) (long double x) <br> |
|  double | [**log10**](#function-log10) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**pow**](#function-pow) (float x, float y) <br> |
|  long double | [**pow**](#function-pow) (long double x, long double y) <br> |
|  double | [**pow**](#function-pow) (const [**T**](k__tan_8c.md#variable-t) & x, const U & y) <br> |
|  float | [**sin**](#function-sin) (float x) <br> |
|  long double | [**sin**](#function-sin) (long double x) <br> |
|  double | [**sin**](#function-sin) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**sinh**](#function-sinh) (float x) <br> |
|  long double | [**sinh**](#function-sinh) (long double x) <br> |
|  double | [**sinh**](#function-sinh) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**sqrt**](#function-sqrt) (float x) <br> |
|  long double | [**sqrt**](#function-sqrt) (long double x) <br> |
|  double | [**sqrt**](#function-sqrt) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**tan**](#function-tan) (float x) <br> |
|  long double | [**tan**](#function-tan) (long double x) <br> |
|  double | [**tan**](#function-tan) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |
|  float | [**tanh**](#function-tanh) (float x) <br> |
|  long double | [**tanh**](#function-tanh) (long double x) <br> |
|  double | [**tanh**](#function-tanh) (const [**T**](k__tan_8c.md#variable-t) & x) <br> |




























## Public Functions Documentation




### function acos 

```C++
inline float acos (
    float x
) 
```




<hr>



### function acos 

```C++
inline long double acos (
    long double x
) 
```




<hr>



### function acos 

```C++
template<class T>
inline double acos (
    const T & x
) 
```




<hr>



### function asin 

```C++
inline float asin (
    float x
) 
```




<hr>



### function asin 

```C++
inline long double asin (
    long double x
) 
```




<hr>



### function asin 

```C++
template<class T>
inline double asin (
    const T & x
) 
```




<hr>



### function atan 

```C++
inline float atan (
    float x
) 
```




<hr>



### function atan 

```C++
inline long double atan (
    long double x
) 
```




<hr>



### function atan 

```C++
template<class T>
inline double atan (
    const T & x
) 
```




<hr>



### function atan2 

```C++
inline float atan2 (
    float x,
    float y
) 
```




<hr>



### function atan2 

```C++
inline long double atan2 (
    long double y,
    long double x
) 
```




<hr>



### function atan2 

```C++
template<class T, class U>
inline double atan2 (
    const T & y,
    const U & x
) 
```




<hr>



### function ceil 

```C++
inline float ceil (
    float x
) 
```




<hr>



### function ceil 

```C++
inline long double ceil (
    long double x
) 
```




<hr>



### function ceil 

```C++
template<class T>
inline double ceil (
    const T & x
) 
```




<hr>



### function cos 

```C++
inline float cos (
    float x
) 
```




<hr>



### function cos 

```C++
inline long double cos (
    long double x
) 
```




<hr>



### function cos 

```C++
template<class T>
inline double cos (
    const T & x
) 
```




<hr>



### function cosh 

```C++
inline float cosh (
    float x
) 
```




<hr>



### function cosh 

```C++
inline long double cosh (
    long double x
) 
```




<hr>



### function cosh 

```C++
template<class T>
inline double cosh (
    const T & x
) 
```




<hr>



### function exp 

```C++
inline float exp (
    float x
) 
```




<hr>



### function exp 

```C++
inline long double exp (
    long double x
) 
```




<hr>



### function exp 

```C++
template<class T>
inline double exp (
    const T & x
) 
```




<hr>



### function fabs 

```C++
inline float fabs (
    float x
) 
```




<hr>



### function fabs 

```C++
inline long double fabs (
    long double x
) 
```




<hr>



### function fabs 

```C++
template<class T>
inline double fabs (
    const T & x
) 
```




<hr>



### function floor 

```C++
inline float floor (
    float x
) 
```




<hr>



### function floor 

```C++
inline long double floor (
    long double x
) 
```




<hr>



### function floor 

```C++
template<class T>
inline double floor (
    const T & x
) 
```




<hr>



### function fmod 

```C++
inline float fmod (
    float x,
    float y
) 
```




<hr>



### function fmod 

```C++
inline long double fmod (
    long double x,
    long double y
) 
```




<hr>



### function fmod 

```C++
template<class T, class U>
inline double fmod (
    const T & x,
    const U & y
) 
```




<hr>



### function frexp 

```C++
inline float frexp (
    float x,
    int * exp
) 
```




<hr>



### function frexp 

```C++
inline long double frexp (
    long double x,
    int * exp
) 
```




<hr>



### function frexp 

```C++
template<class T>
inline double frexp (
    const T & x,
    int * exp
) 
```




<hr>



### function ldexp 

```C++
inline float ldexp (
    float x,
    _INT32 n
) 
```




<hr>



### function ldexp 

```C++
inline long double ldexp (
    long double x,
    int exp
) 
```




<hr>



### function ldexp 

```C++
template<class T>
inline double ldexp (
    const T & x,
    int exp
) 
```




<hr>



### function log 

```C++
inline float log (
    float x
) 
```




<hr>



### function log 

```C++
inline long double log (
    long double x
) 
```




<hr>



### function log 

```C++
template<class T>
inline double log (
    const T & x
) 
```




<hr>



### function log10 

```C++
inline float log10 (
    float x
) 
```




<hr>



### function log10 

```C++
inline long double log10 (
    long double x
) 
```




<hr>



### function log10 

```C++
template<class T>
inline double log10 (
    const T & x
) 
```




<hr>



### function pow 

```C++
inline float pow (
    float x,
    float y
) 
```




<hr>



### function pow 

```C++
inline long double pow (
    long double x,
    long double y
) 
```




<hr>



### function pow 

```C++
template<class T, class U>
inline double pow (
    const T & x,
    const U & y
) 
```




<hr>



### function sin 

```C++
inline float sin (
    float x
) 
```




<hr>



### function sin 

```C++
inline long double sin (
    long double x
) 
```




<hr>



### function sin 

```C++
template<class T>
inline double sin (
    const T & x
) 
```




<hr>



### function sinh 

```C++
inline float sinh (
    float x
) 
```




<hr>



### function sinh 

```C++
inline long double sinh (
    long double x
) 
```




<hr>



### function sinh 

```C++
template<class T>
inline double sinh (
    const T & x
) 
```




<hr>



### function sqrt 

```C++
inline float sqrt (
    float x
) 
```




<hr>



### function sqrt 

```C++
inline long double sqrt (
    long double x
) 
```




<hr>



### function sqrt 

```C++
template<class T>
inline double sqrt (
    const T & x
) 
```




<hr>



### function tan 

```C++
inline float tan (
    float x
) 
```




<hr>



### function tan 

```C++
inline long double tan (
    long double x
) 
```




<hr>



### function tan 

```C++
template<class T>
inline double tan (
    const T & x
) 
```




<hr>



### function tanh 

```C++
inline float tanh (
    float x
) 
```




<hr>



### function tanh 

```C++
inline long double tanh (
    long double x
) 
```




<hr>



### function tanh 

```C++
template<class T>
inline double tanh (
    const T & x
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/tgmath.h`

