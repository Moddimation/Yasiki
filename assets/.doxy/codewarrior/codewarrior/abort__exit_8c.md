

# File abort\_exit.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**abort\_exit.c**](abort__exit_8c.md)

[Go to the source code of this file](abort__exit_8c_source.md)



* `#include "abort_exit.h"`
* `#include "critical_regions.h"`
* `#include "misc_io.h"`
* `#include <signal.h>`
* `#include <setjmp.h>`
* `#include <cstdlib>`
* `#include <stdio.h>`
* `#include <pool_alloc.h>`
* `#include <console.h>`
* `#include <SegLoad.h>`
* `#include <Processes.h>`
* `#include <WINDEF.H>`
* `#include <WINBASE.H>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  void(\* | [**\_\_\_atexit\_hook**](#variable-___atexit_hook)  <br> |
|  int | [**\_\_aborting**](#variable-__aborting)   = `0`<br> |
|  void(\* | [**\_\_atexit\_hook**](#variable-__atexit_hook)  <br> |
|  void(\* | [**\_\_console\_exit**](#variable-__console_exit)  <br> |
|  void(\* | [**\_\_stdio\_exit**](#variable-__stdio_exit)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  long | [**\_\_atexit\_curr\_func**](#variable-__atexit_curr_func)   = `0`<br> |
|  void(\* | [**\_\_atexit\_funcs**](#variable-__atexit_funcs)  <br> |
|  long | [**atexit\_curr\_func**](#variable-atexit_curr_func)   = `0`<br> |
|  void(\* | [**atexit\_funcs**](#variable-atexit_funcs)  <br> |
|  short | [**exitSetup**](#variable-exitsetup)   = `0`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_CleanUpMSL**](#function-_cleanupmsl) () <br> |
|  void | [**\_\_\_teardown\_be**](#function-___teardown_be) (int) <br> |
|  int | [**\_\_atexit**](#function-__atexit) (void(\*)(void) func) <br> |
|  void | [**\_\_destroy\_global\_chain**](#function-__destroy_global_chain) (void) <br> |
|  void | [**\_\_exit**](#function-__exit) (int status) <br> |
|  void | [**\_\_setup\_exit**](#function-__setup_exit) (void) <br> |
|  void | [**\_libc\_exit\_**](#function-_libc_exit_) (int status) <br> |
|  void | [**abort**](#function-abort) (void) <br> |
|  int | [**atexit**](#function-atexit) (void(\*)(void) func) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**ANSI\_Exit**](#function-ansi_exit) (void) <br> |
|  void | [**ANSI\_\_Exit**](#function-ansi__exit) (void) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**max\_funcs**](abort__exit_8c.md#define-max_funcs)  `64`<br> |

## Public Attributes Documentation




### variable \_\_\_atexit\_hook 

```C++
void(* ___atexit_hook) (void);
```




<hr>



### variable \_\_aborting 

```C++
int __aborting;
```




<hr>



### variable \_\_atexit\_hook 

```C++
void(* __atexit_hook) (void);
```




<hr>



### variable \_\_console\_exit 

```C++
void(* __console_exit) (void)=0;
```




<hr>



### variable \_\_stdio\_exit 

```C++
void(* __stdio_exit) (void)=0;
```




<hr>
## Public Static Attributes Documentation




### variable \_\_atexit\_curr\_func 

```C++
long __atexit_curr_func;
```




<hr>



### variable \_\_atexit\_funcs 

```C++
void(* __atexit_funcs[max_funcs])(void);
```




<hr>



### variable atexit\_curr\_func 

```C++
long atexit_curr_func;
```




<hr>



### variable atexit\_funcs 

```C++
void(* atexit_funcs[max_funcs])(void);
```




<hr>



### variable exitSetup 

```C++
short exitSetup;
```




<hr>
## Public Functions Documentation




### function \_CleanUpMSL 

```C++
void _CleanUpMSL () 
```




<hr>



### function \_\_\_teardown\_be 

```C++
void ___teardown_be (
    int
) 
```




<hr>



### function \_\_atexit 

```C++
int __atexit (
    void(*)(void) func
) 
```




<hr>



### function \_\_destroy\_global\_chain 

```C++
void __destroy_global_chain (
    void
) 
```




<hr>



### function \_\_exit 

```C++
void __exit (
    int status
) 
```




<hr>



### function \_\_setup\_exit 

```C++
void __setup_exit (
    void
) 
```




<hr>



### function \_libc\_exit\_ 

```C++
void _libc_exit_ (
    int status
) 
```




<hr>



### function abort 

```C++
void abort (
    void
) 
```




<hr>



### function atexit 

```C++
int atexit (
    void(*)(void) func
) 
```




<hr>
## Public Static Functions Documentation




### function ANSI\_Exit 

```C++
static void ANSI_Exit (
    void
) 
```




<hr>



### function ANSI\_\_Exit 

```C++
static void ANSI__Exit (
    void
) 
```




<hr>
## Macro Definition Documentation





### define max\_funcs 

```C++
#define max_funcs `64`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/abort_exit.c`

