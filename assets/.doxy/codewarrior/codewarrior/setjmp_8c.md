

# File setjmp.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Runtime**](dir_ab14c6633277f31934f3117250613416.md) **>** [**Src**](dir_509e87e64e9810dafb4b9e7004107717.md) **>** [**setjmp.c**](setjmp_8c.md)

[Go to the source code of this file](setjmp_8c_source.md)



* `#include <ansi_parms.h>`
* `#include "__jmp_buf.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_setjmp**](#function-__setjmp) ([**\_\_jmp\_buf**](struct____jmp__buf.md) \* env) <br> |
|  asm int | [**\_\_setjmp**](#function-__setjmp) (register [**\_\_jmp\_buf**](struct____jmp__buf.md) \* env) <br> |
|  void | [**longjmp**](#function-longjmp) ([**\_\_jmp\_buf**](struct____jmp__buf.md) \* env, int val) <br> |
|  asm void | [**longjmp**](#function-longjmp) (register [**\_\_jmp\_buf**](struct____jmp__buf.md) \* env, register int val) <br> |




























## Public Functions Documentation




### function \_\_setjmp 

```C++
int __setjmp (
    __jmp_buf * env
) 
```




<hr>



### function \_\_setjmp 

```C++
asm int __setjmp (
    register __jmp_buf * env
) 
```




<hr>



### function longjmp 

```C++
void longjmp (
    __jmp_buf * env,
    int val
) 
```




<hr>



### function longjmp 

```C++
asm void longjmp (
    register __jmp_buf * env,
    register int val
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Runtime/Src/setjmp.c`

