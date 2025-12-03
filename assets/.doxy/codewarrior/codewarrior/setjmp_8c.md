

# File setjmp.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Src**](dir_1789e36d750963f536ec280b459db2bf.md) **>** [**setjmp.c**](setjmp_8c.md)

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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Runtime/Src/setjmp.c`

