

# File NMWException.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Inc**](dir_192ee455ef94b5a11e62d491224058e4.md) **>** [**NMWException.h**](_n_m_w_exception_8h.md)

[Go to the source code of this file](_n_m_w_exception_8h_source.md)


















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**CatchInfo**](struct_catch_info.md) <br> |
| struct | [**DestructorChain**](struct_destructor_chain.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef struct [**CatchInfo**](struct_catch_info.md) | [**CatchInfo**](#typedef-catchinfo)  <br> |
| typedef struct [**DestructorChain**](struct_destructor_chain.md) | [**DestructorChain**](#typedef-destructorchain)  <br> |
| typedef char | [**local\_cond\_type**](#typedef-local_cond_type)  <br> |
| typedef short | [**vbase\_ctor\_arg\_type**](#typedef-vbase_ctor_arg_type)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**DestructorChain**](struct_destructor_chain.md) \* | [**\_\_global\_destructor\_chain**](#variable-__global_destructor_chain)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_call\_static\_initializers**](#function-__call_static_initializers) (void) <br> |
|  void | [**\_\_destroy\_global\_chain**](#function-__destroy_global_chain) (void) <br> |
|  void | [**\_\_end\_\_catch**](#function-__end__catch) ([**CatchInfo**](struct_catch_info.md) \* catchinfo) <br> |
|  void | [**\_\_init\_\_catch**](#function-__init__catch) ([**CatchInfo**](struct_catch_info.md) \* catchinfo) <br> |
|  void \* | [**\_\_register\_global\_object**](#function-__register_global_object) (void \* object, void \* destructor, void \* regmem) <br> |
|  void | [**\_\_throw**](#function-__throw) (char \* throwtype, void \* location, void \* dtor) <br> |
|  char | [**\_\_throw\_catch\_compare**](#function-__throw_catch_compare) (const char \* throwtype, const char \* catchtype, long \* offset\_result) <br> |
|  void | [**\_\_unexpected**](#function-__unexpected) ([**CatchInfo**](struct_catch_info.md) \* catchinfo) <br> |




























## Public Types Documentation




### typedef CatchInfo 

```C++
typedef struct CatchInfo CatchInfo;
```




<hr>



### typedef DestructorChain 

```C++
typedef struct DestructorChain DestructorChain;
```




<hr>



### typedef local\_cond\_type 

```C++
typedef char local_cond_type;
```




<hr>



### typedef vbase\_ctor\_arg\_type 

```C++
typedef short vbase_ctor_arg_type;
```




<hr>
## Public Attributes Documentation




### variable \_\_global\_destructor\_chain 

```C++
DestructorChain* __global_destructor_chain;
```




<hr>
## Public Functions Documentation




### function \_\_call\_static\_initializers 

```C++
void __call_static_initializers (
    void
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



### function \_\_end\_\_catch 

```C++
void __end__catch (
    CatchInfo * catchinfo
) 
```




<hr>



### function \_\_init\_\_catch 

```C++
void __init__catch (
    CatchInfo * catchinfo
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



### function \_\_throw 

```C++
void __throw (
    char * throwtype,
    void * location,
    void * dtor
) 
```




<hr>



### function \_\_throw\_catch\_compare 

```C++
char __throw_catch_compare (
    const char * throwtype,
    const char * catchtype,
    long * offset_result
) 
```




<hr>



### function \_\_unexpected 

```C++
void __unexpected (
    CatchInfo * catchinfo
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Runtime/Inc/NMWException.h`

