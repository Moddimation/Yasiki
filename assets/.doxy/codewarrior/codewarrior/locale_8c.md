

# File locale.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**locale.c**](locale_8c.md)

[Go to the source code of this file](locale_8c_source.md)



* `#include <locale.h>`
* `#include <limits.h>`
* `#include <string.h>`
* `#include <stddef.h>`
* `#include "lconv.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  struct lconv | [**\_\_lconv**](#variable-__lconv)   = `/* multi line expression */`<br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  struct lconv | [**public\_lconv**](#variable-public_lconv)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  struct lconv \* | [**localeconv**](#function-localeconv) (void) <br> |
|  char \* | [**setlocale**](#function-setlocale) (int category, const char \* locale) <br> |




























## Public Attributes Documentation




### variable \_\_lconv 

```C++
struct lconv __lconv;
```




<hr>
## Public Static Attributes Documentation




### variable public\_lconv 

```C++
struct lconv public_lconv;
```




<hr>
## Public Functions Documentation




### function localeconv 

```C++
struct lconv * localeconv (
    void
) 
```




<hr>



### function setlocale 

```C++
char * setlocale (
    int category,
    const char * locale
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/locale.c`

