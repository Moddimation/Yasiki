

# File math\_config.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**math\_config.h**](math__config_8h.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/math_config.h`

