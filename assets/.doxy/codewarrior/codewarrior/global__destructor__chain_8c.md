

# File global\_destructor\_chain.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Src**](dir_1789e36d750963f536ec280b459db2bf.md) **>** [**global\_destructor\_chain.c**](global__destructor__chain_8c.md)

[Go to the source code of this file](global__destructor__chain_8c_source.md)



* `#include <MWCPlusLib.h>`
* `#include <NMWException.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**DestructorChain**](struct_destructor_chain.md) \* | [**\_\_global\_destructor\_chain**](#variable-__global_destructor_chain)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_destroy\_global\_chain**](#function-__destroy_global_chain) (void) <br> |
|  void \* | [**\_\_register\_global\_object**](#function-__register_global_object) (void \* object, void \* destructor, void \* regmem) <br> |




























## Public Attributes Documentation




### variable \_\_global\_destructor\_chain 

```C++
DestructorChain* __global_destructor_chain;
```




<hr>
## Public Functions Documentation




### function \_\_destroy\_global\_chain 

```C++
void __destroy_global_chain (
    void
) 
```




<hr>



### function \_\_register\_global\_object 

```C++
void * __register_global_object (
    void * object,
    void * destructor,
    void * regmem
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Runtime/Src/global_destructor_chain.c`

