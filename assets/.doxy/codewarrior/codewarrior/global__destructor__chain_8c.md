

# File global\_destructor\_chain.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Runtime**](dir_ab14c6633277f31934f3117250613416.md) **>** [**Src**](dir_509e87e64e9810dafb4b9e7004107717.md) **>** [**global\_destructor\_chain.c**](global__destructor__chain_8c.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Runtime/Src/global_destructor_chain.c`

