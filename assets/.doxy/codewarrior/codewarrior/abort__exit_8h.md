

# File abort\_exit.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**abort\_exit.h**](abort__exit_8h.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/abort_exit.h`

