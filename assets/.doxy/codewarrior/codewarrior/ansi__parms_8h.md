

# File ansi\_parms.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**ansi\_parms.h**](ansi__parms_8h.md)

[Go to the source code of this file](ansi__parms_8h_source.md)



* `#include <mslGlobals.h>`
































































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**\_MSL\_DLLDATA**](ansi__parms_8h.md#define-_msl_dlldata)  <br> |
| define  | [**\_\_MODENALIB\_\_**](ansi__parms_8h.md#define-__modenalib__)  `/\*soon to be obsolete...\*/`<br> |
| define  | [**\_\_MSL\_\_**](ansi__parms_8h.md#define-__msl__)  `0x5100`<br> |
| define  | [**\_\_end\_extern\_c**](ansi__parms_8h.md#define-__end_extern_c)  `/\*		}\*/`<br> |
| define  | [**\_\_end\_namespace**](ansi__parms_8h.md#define-__end_namespace) (space) `/\*}\*/`<br> |
| define  | [**\_\_extern\_c**](ansi__parms_8h.md#define-__extern_c)  `/\*hh 971206	war on macros		extern "C" {\*/`<br> |
| define  | [**\_\_global**](ansi__parms_8h.md#define-__global) () <br> |
| define  | [**\_\_import\_stdc\_into\_std\_space**](ansi__parms_8h.md#define-__import_stdc_into_std_space) (space) `/* multi line expression */`<br> |
| define  | [**\_\_namespace**](ansi__parms_8h.md#define-__namespace) (space) `/\*namespace space {\*/`<br> |
| define  | [**\_\_std**](ansi__parms_8h.md#define-__std) (ref) `ref`<br> |
| define  | [**\_\_stdc\_space**](ansi__parms_8h.md#define-__stdc_space) (space) `/\*\_\_c ## space ## \_space\*/`<br> |
| define  | [**\_\_tls**](ansi__parms_8h.md#define-__tls)  `[**\_\_declspec**](dolphin__trk_8c.md#function-__declspec) (thread)`<br> |
| define  | [**\_\_using\_namespace**](ansi__parms_8h.md#define-__using_namespace) (space) `/\*using namespace space;\*/`<br> |

## Macro Definition Documentation





### define \_MSL\_DLLDATA 

```C++
#define _MSL_DLLDATA 
```




<hr>



### define \_\_MODENALIB\_\_ 

```C++
#define __MODENALIB__ `/*soon to be obsolete...*/`
```




<hr>



### define \_\_MSL\_\_ 

```C++
#define __MSL__ `0x5100`
```




<hr>



### define \_\_end\_extern\_c 

```C++
#define __end_extern_c `/*		}*/`
```




<hr>



### define \_\_end\_namespace 

```C++
#define __end_namespace (
    space
) `/*}*/`
```




<hr>



### define \_\_extern\_c 

```C++
#define __extern_c `/*hh 971206	war on macros		extern "C" {*/`
```




<hr>



### define \_\_global 

```C++
#define __global (
    
) 
```




<hr>



### define \_\_import\_stdc\_into\_std\_space 

```C++
#define __import_stdc_into_std_space (
    space
) `/*                                                 \ __namespace (std)                                   \ __using_namespace ( __stdc_space (space))             \ __end_namespace (std)					*/`
```




<hr>



### define \_\_namespace 

```C++
#define __namespace (
    space
) `/*namespace space {*/`
```




<hr>



### define \_\_std 

```C++
#define __std (
    ref
) `ref`
```




<hr>



### define \_\_stdc\_space 

```C++
#define __stdc_space (
    space
) `/*__c ## space ## _space*/`
```




<hr>



### define \_\_tls 

```C++
#define __tls `__declspec (thread)`
```




<hr>



### define \_\_using\_namespace 

```C++
#define __using_namespace (
    space
) `/*using namespace space;*/`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/ansi_parms.h`

