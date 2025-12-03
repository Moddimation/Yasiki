

# File abort\_exit.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**abort\_exit.h**](abort__exit_8h.md)

[Go to the source code of this file](abort__exit_8h_source.md)



* `#include <ansi_parms.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  int | [**\_\_aborting**](#variable-__aborting)  <br> |
|  void(\* | [**\_\_console\_exit**](#variable-__console_exit)  <br> |
|  void(\* | [**\_\_stdio\_exit**](#variable-__stdio_exit)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_CleanUpMSL**](#function-_cleanupmsl) () <br> |
|  void | [**\_ExitProcess**](#function-_exitprocess) (void) <br> |
|  int | [**\_\_atexit**](#function-__atexit) (void(\*)(void) func) <br> |
|  void | [**\_\_exit**](#function-__exit) (int status) <br> |
|  void | [**\_\_setup\_exit**](#function-__setup_exit) (void) <br> |




























## Public Attributes Documentation




### variable \_\_aborting 

```C++
int __aborting;
```




<hr>



### variable \_\_console\_exit 

```C++
void(* __console_exit) (void);
```




<hr>



### variable \_\_stdio\_exit 

```C++
void(* __stdio_exit) (void);
```




<hr>
## Public Functions Documentation




### function \_CleanUpMSL 

```C++
void _CleanUpMSL () 
```




<hr>



### function \_ExitProcess 

```C++
void _ExitProcess (
    void
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

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/abort_exit.h`

