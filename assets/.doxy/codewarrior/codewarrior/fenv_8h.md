

# File fenv.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**fenv.h**](fenv_8h.md)

[Go to the source code of this file](fenv_8h_source.md)



* `#include <ConditionalMacros.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  fenv\_t | [**\_FE\_DFL\_ENV**](#variable-_fe_dfl_env)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**feclearexcept**](#function-feclearexcept) (int excepts) <br> |
|  void | [**fegetenv**](#function-fegetenv) (fenv\_t \* envp) <br> |
|  void | [**fegetexcept**](#function-fegetexcept) (fexcept\_t \* flagp, int excepts) <br> |
|  int | [**fegetround**](#function-fegetround) (void) <br> |
|  int | [**feholdexcept**](#function-feholdexcept) (fenv\_t \* envp) <br> |
|  void | [**feraiseexcept**](#function-feraiseexcept) (int excepts) <br> |
|  void | [**fesetenv**](#function-fesetenv) (const fenv\_t \* envp) <br> |
|  void | [**fesetexcept**](#function-fesetexcept) (const fexcept\_t \* flagp, int excepts) <br> |
|  int | [**fesetround**](#function-fesetround) (int round) <br> |
|  int | [**fetestexcept**](#function-fetestexcept) (int excepts) <br> |
|  void | [**feupdateenv**](#function-feupdateenv) (const fenv\_t \* envp) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**FE\_ALL\_EXCEPT**](fenv_8h.md#define-fe_all_except)  `( FE\_INEXACT \| FE\_DIVBYZERO \| FE\_UNDERFLOW \| FE\_OVERFLOW \| FE\_INVALID )`<br> |
| define  | [**FE\_DFL\_ENV**](fenv_8h.md#define-fe_dfl_env)  `&[**\_FE\_DFL\_ENV**](fenv_8h.md#variable-_fe_dfl_env)          /\* pointer to default environment    \*/`<br> |

## Public Attributes Documentation




### variable \_FE\_DFL\_ENV 

```C++
fenv_t _FE_DFL_ENV;
```




<hr>
## Public Functions Documentation




### function feclearexcept 

```C++
void feclearexcept (
    int excepts
) 
```




<hr>



### function fegetenv 

```C++
void fegetenv (
    fenv_t * envp
) 
```




<hr>



### function fegetexcept 

```C++
void fegetexcept (
    fexcept_t * flagp,
    int excepts
) 
```




<hr>



### function fegetround 

```C++
int fegetround (
    void
) 
```




<hr>



### function feholdexcept 

```C++
int feholdexcept (
    fenv_t * envp
) 
```




<hr>



### function feraiseexcept 

```C++
void feraiseexcept (
    int excepts
) 
```




<hr>



### function fesetenv 

```C++
void fesetenv (
    const fenv_t * envp
) 
```




<hr>



### function fesetexcept 

```C++
void fesetexcept (
    const fexcept_t * flagp,
    int excepts
) 
```




<hr>



### function fesetround 

```C++
int fesetround (
    int round
) 
```




<hr>



### function fetestexcept 

```C++
int fetestexcept (
    int excepts
) 
```




<hr>



### function feupdateenv 

```C++
void feupdateenv (
    const fenv_t * envp
) 
```




<hr>
## Macro Definition Documentation





### define FE\_ALL\_EXCEPT 

```C++
#define FE_ALL_EXCEPT `( FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID )`
```




<hr>



### define FE\_DFL\_ENV 

```C++
#define FE_DFL_ENV `& _FE_DFL_ENV /* pointer to default environment    */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/fenv.h`

