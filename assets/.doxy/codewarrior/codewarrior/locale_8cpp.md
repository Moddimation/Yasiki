

# File locale.cpp



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C++**](dir_bbcc9336d50f30308554b0fe78acfee6.md) **>** [**MSL\_Common**](dir_0c0c2b83f86d5caed54e8218e0fa784d.md) **>** [**Src**](dir_bf8df28de45fc09137eab9119627a3a4.md) **>** [**locale.cpp**](locale_8cpp.md)

[Go to the source code of this file](locale_8cpp_source.md)



* `#include <locale>`
* `#include <ios>`
* `#include <streambuf>`
* `#include <stdexcept>`
* `#include <typeinfo>`













## Namespaces

| Type | Name |
| ---: | :--- |
| namespace | [**std**](namespacestd.md) <br>[_**mutex.h**_](mutex_8h.md) __ |



















































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**\_\_ct**](locale_8cpp.md#define-__ct)  `ctype\_base::mask(0x01)`<br> |
| define  | [**\_\_hd**](locale_8cpp.md#define-__hd)  `ctype\_base::mask(0x30)`<br> |
| define  | [**\_\_hl**](locale_8cpp.md#define-__hl)  `ctype\_base::mask(0x60)`<br> |
| define  | [**\_\_hu**](locale_8cpp.md#define-__hu)  `ctype\_base::mask(0xA0)`<br> |
| define  | [**\_\_lw**](locale_8cpp.md#define-__lw)  `ctype\_base::mask(0x40)`<br> |
| define  | [**\_\_mt**](locale_8cpp.md#define-__mt)  `ctype\_base::mask(0x02)`<br> |
| define  | [**\_\_pt**](locale_8cpp.md#define-__pt)  `ctype\_base::mask(0x08)`<br> |
| define  | [**\_\_sp**](locale_8cpp.md#define-__sp)  `ctype\_base::mask(0x04)`<br> |
| define  | [**\_\_up**](locale_8cpp.md#define-__up)  `ctype\_base::mask(0x80)`<br> |

## Macro Definition Documentation





### define \_\_ct 

```C++
#define __ct `ctype_base::mask(0x01)`
```




<hr>



### define \_\_hd 

```C++
#define __hd `ctype_base::mask(0x30)`
```




<hr>



### define \_\_hl 

```C++
#define __hl `ctype_base::mask(0x60)`
```




<hr>



### define \_\_hu 

```C++
#define __hu `ctype_base::mask(0xA0)`
```




<hr>



### define \_\_lw 

```C++
#define __lw `ctype_base::mask(0x40)`
```




<hr>



### define \_\_mt 

```C++
#define __mt `ctype_base::mask(0x02)`
```




<hr>



### define \_\_pt 

```C++
#define __pt `ctype_base::mask(0x08)`
```




<hr>



### define \_\_sp 

```C++
#define __sp `ctype_base::mask(0x04)`
```




<hr>



### define \_\_up 

```C++
#define __up `ctype_base::mask(0x80)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Src/locale.cpp`

