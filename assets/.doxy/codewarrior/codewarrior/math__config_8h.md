

# File math\_config.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**math\_config.h**](math__config_8h.md)

[Go to the source code of this file](math__config_8h_source.md)



* `#include <msl_t.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  float | [**\_inv\_sqrtf**](#function-_inv_sqrtf) (float x) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**\_\_HI**](math__config_8h.md#define-__hi) (x) `(\*([**\_INT32**](msl__t_8h.md#typedef-_int32)\*)&x)`<br> |
| define  | [**\_\_LO**](math__config_8h.md#define-__lo) (x) `( sizeof(x)==8 ? \*(1+([**\_INT32**](msl__t_8h.md#typedef-_int32)\*)&x) : (\*([**\_INT32**](msl__t_8h.md#typedef-_int32)\*)&x))`<br> |
| define  | [**\_\_UHI**](math__config_8h.md#define-__uhi) (x) `(\*([**\_UINT32**](msl__t_8h.md#typedef-_uint32)\*)&x)`<br> |
| define  | [**\_\_ULO**](math__config_8h.md#define-__ulo) (x) `( sizeof(x)==8 ? \*(1+([**\_UINT32**](msl__t_8h.md#typedef-_uint32)\*)&x) : (\*([**\_UINT32**](msl__t_8h.md#typedef-_uint32)\*)&x))`<br> |
| define  | [**\_\_float2int\_\_**](math__config_8h.md#define-__float2int__) (x) `(\*([**\_INT32**](msl__t_8h.md#typedef-_int32)\*)&x)`<br> |
| define  | [**\_\_int2float\_\_**](math__config_8h.md#define-__int2float__) (x) `(\*(float\*)&x)`<br> |

## Public Functions Documentation




### function \_inv\_sqrtf 

```C++
inline float _inv_sqrtf (
    float x
) 
```




<hr>
## Macro Definition Documentation





### define \_\_HI 

```C++
#define __HI (
    x
) `(*( _INT32 *)&x)`
```




<hr>



### define \_\_LO 

```C++
#define __LO (
    x
) `( sizeof(x)==8 ? *(1+( _INT32 *)&x) : (*( _INT32 *)&x))`
```




<hr>



### define \_\_UHI 

```C++
#define __UHI (
    x
) `(*( _UINT32 *)&x)`
```




<hr>



### define \_\_ULO 

```C++
#define __ULO (
    x
) `( sizeof(x)==8 ? *(1+( _UINT32 *)&x) : (*( _UINT32 *)&x))`
```




<hr>



### define \_\_float2int\_\_ 

```C++
#define __float2int__ (
    x
) `(*( _INT32 *)&x)`
```




<hr>



### define \_\_int2float\_\_ 

```C++
#define __int2float__ (
    x
) `(*(float*)&x)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/math_config.h`

