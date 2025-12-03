

# File MWCPlusLib.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Inc**](dir_192ee455ef94b5a11e62d491224058e4.md) **>** [**MWCPlusLib.h**](_m_w_c_plus_lib_8h.md)

[Go to the source code of this file](_m_w_c_plus_lib_8h_source.md)



* `#include <stddef.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**PTMF**](struct_p_t_m_f.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef void \* | [**ConstructorDestructor**](#typedef-constructordestructor)  <br> |
| typedef struct [**PTMF**](struct_p_t_m_f.md) | [**PTMF**](#typedef-ptmf)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_construct\_array**](#function-__construct_array) (void \* block, [**ConstructorDestructor**](_m_w_c_plus_lib_8h.md#typedef-constructordestructor) ctor, [**ConstructorDestructor**](_m_w_c_plus_lib_8h.md#typedef-constructordestructor) dtor, [**size\_t**](size__t_8h.md#typedef-size_t) size, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  void \* | [**\_\_construct\_new\_array**](#function-__construct_new_array) (void \* block, [**ConstructorDestructor**](_m_w_c_plus_lib_8h.md#typedef-constructordestructor) ctor, [**ConstructorDestructor**](_m_w_c_plus_lib_8h.md#typedef-constructordestructor) dtor, [**size\_t**](size__t_8h.md#typedef-size_t) size, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  void \* | [**\_\_copy**](#function-__copy) (char \* to, char \* from, [**size\_t**](size__t_8h.md#typedef-size_t) size) <br> |
|  void | [**\_\_dc\_arr**](#function-__dc_arr) (void \* mem, [**ConstructorDestructor**](_m_w_c_plus_lib_8h.md#typedef-constructordestructor) con\_des, short object\_size, short objects) <br> |
|  void | [**\_\_del\_arr**](#function-__del_arr) (void \* memptr, [**ConstructorDestructor**](_m_w_c_plus_lib_8h.md#typedef-constructordestructor) destructor) <br> |
|  void | [**\_\_del\_hdl**](#function-__del_hdl) (void \* hdl) <br> |
|  void | [**\_\_destroy\_arr**](#function-__destroy_arr) (void \* block, [**ConstructorDestructor**](_m_w_c_plus_lib_8h.md#typedef-constructordestructor) dtor, [**size\_t**](size__t_8h.md#typedef-size_t) size, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  void | [**\_\_destroy\_new\_array**](#function-__destroy_new_array) (void \* block, [**ConstructorDestructor**](_m_w_c_plus_lib_8h.md#typedef-constructordestructor) dtor) <br> |
|  void \* | [**\_\_destroy\_new\_array2**](#function-__destroy_new_array2) (void \* block, [**ConstructorDestructor**](_m_w_c_plus_lib_8h.md#typedef-constructordestructor) dtor) <br> |
|  void \* | [**\_\_init\_arr**](#function-__init_arr) (void \* memptr, [**ConstructorDestructor**](_m_w_c_plus_lib_8h.md#typedef-constructordestructor) constructor, [**size\_t**](size__t_8h.md#typedef-size_t) object\_size, [**size\_t**](size__t_8h.md#typedef-size_t) nobjects) <br> |
|  void \* | [**\_\_new\_arr**](#function-__new_arr) ([**ConstructorDestructor**](_m_w_c_plus_lib_8h.md#typedef-constructordestructor) constructor, [**size\_t**](size__t_8h.md#typedef-size_t) object\_size, [**size\_t**](size__t_8h.md#typedef-size_t) objects) <br> |
|  void \* | [**\_\_new\_hdl**](#function-__new_hdl) ([**size\_t**](size__t_8h.md#typedef-size_t) size) <br> |
|  [**PTMF**](struct_p_t_m_f.md) \* | [**\_\_ptmf\_cast**](#function-__ptmf_cast) (long offset, const [**PTMF**](struct_p_t_m_f.md) \* ptmfrom, [**PTMF**](struct_p_t_m_f.md) \* ptmto) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**CABI\_ZEROOFFSETVTABLE**](_m_w_c_plus_lib_8h.md#define-cabi_zerooffsetvtable)  `0`<br> |
| define  | [**CTORARG\_COMPLETE**](_m_w_c_plus_lib_8h.md#define-ctorarg_complete)  `(1)				/\*	construct all bases			\*/`<br> |
| define  | [**CTORARG\_PARTIAL**](_m_w_c_plus_lib_8h.md#define-ctorarg_partial)  `(0)				/\*	construct non-virtual bases	\*/`<br> |
| define  | [**CTORARG\_TYPE**](_m_w_c_plus_lib_8h.md#define-ctorarg_type)  `short`<br> |
| define  | [**CTORCALL\_COMPLETE**](_m_w_c_plus_lib_8h.md#define-ctorcall_complete) (ctor, objptr) `	(((void (\*)(void \*,[**CTORARG\_TYPE**](_m_w_c_plus_lib_8h.md#define-ctorarg_type)))ctor)(objptr,[**CTORARG\_COMPLETE**](_m_w_c_plus_lib_8h.md#define-ctorarg_complete)))`<br> |
| define  | [**DTORARG\_COMPLETE**](_m_w_c_plus_lib_8h.md#define-dtorarg_complete)  `(-1)			/\*	destroy all bases					\*/`<br> |
| define  | [**DTORARG\_DELETE**](_m_w_c_plus_lib_8h.md#define-dtorarg_delete)  `(1)				/\*	destroy all bases and delete object	\*/`<br> |
| define  | [**DTORARG\_PARTIAL**](_m_w_c_plus_lib_8h.md#define-dtorarg_partial)  `(0)				/\*	destroy non-virtual bases			\*/`<br> |
| define  | [**DTORARG\_TYPE**](_m_w_c_plus_lib_8h.md#define-dtorarg_type)  `short`<br> |
| define  | [**DTORCALL\_COMPLETE**](_m_w_c_plus_lib_8h.md#define-dtorcall_complete) (dtor, objptr) `	(((void (\*)(void \*,[**DTORARG\_TYPE**](_m_w_c_plus_lib_8h.md#define-dtorarg_type)))dtor)(objptr,[**DTORARG\_COMPLETE**](_m_w_c_plus_lib_8h.md#define-dtorarg_complete)))`<br> |
| define  | [**DTORCALL\_PARTIAL**](_m_w_c_plus_lib_8h.md#define-dtorcall_partial) (dtor, objptr) `	(((void (\*)(void \*,[**DTORARG\_TYPE**](_m_w_c_plus_lib_8h.md#define-dtorarg_type)))dtor)(objptr,[**DTORARG\_PARTIAL**](_m_w_c_plus_lib_8h.md#define-dtorarg_partial)))`<br> |

## Public Types Documentation




### typedef ConstructorDestructor 

```C++
typedef void* ConstructorDestructor;
```




<hr>



### typedef PTMF 

```C++
typedef struct PTMF PTMF;
```




<hr>
## Public Functions Documentation




### function \_\_construct\_array 

```C++
void __construct_array (
    void * block,
    ConstructorDestructor ctor,
    ConstructorDestructor dtor,
    size_t size,
    size_t n
) 
```




<hr>



### function \_\_construct\_new\_array 

```C++
void * __construct_new_array (
    void * block,
    ConstructorDestructor ctor,
    ConstructorDestructor dtor,
    size_t size,
    size_t n
) 
```




<hr>



### function \_\_copy 

```C++
void * __copy (
    char * to,
    char * from,
    size_t size
) 
```




<hr>



### function \_\_dc\_arr 

```C++
void __dc_arr (
    void * mem,
    ConstructorDestructor con_des,
    short object_size,
    short objects
) 
```




<hr>



### function \_\_del\_arr 

```C++
void __del_arr (
    void * memptr,
    ConstructorDestructor destructor
) 
```




<hr>



### function \_\_del\_hdl 

```C++
void __del_hdl (
    void * hdl
) 
```




<hr>



### function \_\_destroy\_arr 

```C++
void __destroy_arr (
    void * block,
    ConstructorDestructor dtor,
    size_t size,
    size_t n
) 
```




<hr>



### function \_\_destroy\_new\_array 

```C++
void __destroy_new_array (
    void * block,
    ConstructorDestructor dtor
) 
```




<hr>



### function \_\_destroy\_new\_array2 

```C++
void * __destroy_new_array2 (
    void * block,
    ConstructorDestructor dtor
) 
```




<hr>



### function \_\_init\_arr 

```C++
void * __init_arr (
    void * memptr,
    ConstructorDestructor constructor,
    size_t object_size,
    size_t nobjects
) 
```




<hr>



### function \_\_new\_arr 

```C++
void * __new_arr (
    ConstructorDestructor constructor,
    size_t object_size,
    size_t objects
) 
```




<hr>



### function \_\_new\_hdl 

```C++
void * __new_hdl (
    size_t size
) 
```




<hr>



### function \_\_ptmf\_cast 

```C++
PTMF * __ptmf_cast (
    long offset,
    const PTMF * ptmfrom,
    PTMF * ptmto
) 
```




<hr>
## Macro Definition Documentation





### define CABI\_ZEROOFFSETVTABLE 

```C++
#define CABI_ZEROOFFSETVTABLE `0`
```




<hr>



### define CTORARG\_COMPLETE 

```C++
#define CTORARG_COMPLETE `(1)				/*	construct all bases			*/`
```




<hr>



### define CTORARG\_PARTIAL 

```C++
#define CTORARG_PARTIAL `(0)				/*	construct non-virtual bases	*/`
```




<hr>



### define CTORARG\_TYPE 

```C++
#define CTORARG_TYPE `short`
```




<hr>



### define CTORCALL\_COMPLETE 

```C++
#define CTORCALL_COMPLETE (
    ctor,
    objptr
) `(((void (*)(void *, CTORARG_TYPE ))ctor)(objptr, CTORARG_COMPLETE ))`
```




<hr>



### define DTORARG\_COMPLETE 

```C++
#define DTORARG_COMPLETE `(-1)			/*	destroy all bases					*/`
```




<hr>



### define DTORARG\_DELETE 

```C++
#define DTORARG_DELETE `(1)				/*	destroy all bases and delete object	*/`
```




<hr>



### define DTORARG\_PARTIAL 

```C++
#define DTORARG_PARTIAL `(0)				/*	destroy non-virtual bases			*/`
```




<hr>



### define DTORARG\_TYPE 

```C++
#define DTORARG_TYPE `short`
```




<hr>



### define DTORCALL\_COMPLETE 

```C++
#define DTORCALL_COMPLETE (
    dtor,
    objptr
) `(((void (*)(void *, DTORARG_TYPE ))dtor)(objptr, DTORARG_COMPLETE ))`
```




<hr>



### define DTORCALL\_PARTIAL 

```C++
#define DTORCALL_PARTIAL (
    dtor,
    objptr
) `(((void (*)(void *, DTORARG_TYPE ))dtor)(objptr, DTORARG_PARTIAL ))`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Runtime/Inc/MWCPlusLib.h`

