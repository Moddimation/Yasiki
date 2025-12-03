

# File mcompile.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C++**](dir_1d8bcf55c9e1564519df8a05b1def2d1.md) **>** [**MSL\_Common**](dir_fc42de24ef3c14a5dea3aca327bd2ec9.md) **>** [**Include**](dir_f262df31fb8e04d575b9a3aa2e30ecf8.md) **>** [**mcompile.h**](mcompile_8h.md)

[Go to the source code of this file](mcompile_8h_source.md)



* `#include <mslconfig>`
































































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ALLOC\_BIND**](mcompile_8h.md#define-alloc_bind) (type) `typename Allocator::rebind&lt;type&gt;::other`<br> |
| define  | [**DEC\_MUTEX**](mcompile_8h.md#define-dec_mutex) (obj) <br> |
| define  | [**DEC\_MUTEX\_ARITH**](mcompile_8h.md#define-dec_mutex_arith) (size\_t, mutex, obj) `[**size\_t**](size__t_8h.md#typedef-size_t) obj;`<br> |
| define  | [**DEC\_OBJ\_LOCK**](mcompile_8h.md#define-dec_obj_lock) (obj) <br> |
| define  | [**DEC\_STATIC\_MUTEX\_P**](mcompile_8h.md#define-dec_static_mutex_p) (obj) <br> |
| define  | [**DEFTEMPARG**](mcompile_8h.md#define-deftemparg) (i, j) `i = j`<br> |
| define  | [**LOCK**](mcompile_8h.md#define-lock) (bl\_mut, mut) <br> |
| define  | [**LOCK\_P**](mcompile_8h.md#define-lock_p) (bl\_mut, mut) <br> |
| define  | [**MOD\_C\_INCLUDE**](mcompile_8h.md#define-mod_c_include) (str) `[**MOD\_INCLUDE**](mcompile_8h.md#define-mod_include)(c##str)`<br> |
| define  | [**MOD\_INCLUDE**](mcompile_8h.md#define-mod_include) (str) `&lt;str##.h&gt;`<br> |
| define  | [**MSIPLSTD**](mcompile_8h.md#define-msiplstd)  `::std`<br> |
| define  | [**MSIPL\_ANSI\_HEADER**](mcompile_8h.md#define-msipl_ansi_header)  <br> |
| define  | [**MSIPL\_ASSERT**](mcompile_8h.md#define-msipl_assert) (x) <br> |
| define  | [**MSIPL\_BOOL\_BUILTIN**](mcompile_8h.md#define-msipl_bool_builtin)  <br> |
| define  | [**MSIPL\_CATCH**](mcompile_8h.md#define-msipl_catch)  `catch(...)`<br> |
| define  | [**MSIPL\_CONST\_TEMPLATE\_ARG**](mcompile_8h.md#define-msipl_const_template_arg)  <br> |
| define  | [**MSIPL\_DEFAULT\_TEMPLATE\_ARG**](mcompile_8h.md#define-msipl_default_template_arg)  <br> |
| define  | [**MSIPL\_EXCEPT**](mcompile_8h.md#define-msipl_except)  <br> |
| define  | [**MSIPL\_EXPLICIT**](mcompile_8h.md#define-msipl_explicit)  <br> |
| define  | [**MSIPL\_EXPLICIT\_FUNC\_TEMPLATE\_ARG**](mcompile_8h.md#define-msipl_explicit_func_template_arg)  <br> |
| define  | [**MSIPL\_EXPLICIT\_SPL\_SPEC**](mcompile_8h.md#define-msipl_explicit_spl_spec)  <br> |
| define  | [**MSIPL\_HEADER\_EXTN\_H**](mcompile_8h.md#define-msipl_header_extn_h)  <br> |
| define  | [**MSIPL\_MEMBER\_TEMPLATE**](mcompile_8h.md#define-msipl_member_template)  <br> |
| define  | [**MSIPL\_NON\_TYPE\_TEMPARG**](mcompile_8h.md#define-msipl_non_type_temparg)  <br> |
| define  | [**MSIPL\_PARTIAL\_SPECIALIZATION**](mcompile_8h.md#define-msipl_partial_specialization)  <br> |
| define  | [**MSIPL\_STATIC\_CONST\_INIT**](mcompile_8h.md#define-msipl_static_const_init)  <br> |
| define  | [**MSIPL\_STD\_BEGIN**](mcompile_8h.md#define-msipl_std_begin)  `namespace std {`<br> |
| define  | [**MSIPL\_STD\_END**](mcompile_8h.md#define-msipl_std_end)  `}`<br> |
| define  | [**MSIPL\_THROW**](mcompile_8h.md#define-msipl_throw)  `throw()`<br> |
| define  | [**MSIPL\_THROW\_BAD\_CAST**](mcompile_8h.md#define-msipl_throw_bad_cast) (str) `throw bad\_cast();`<br> |
| define  | [**MSIPL\_THROW\_ME**](mcompile_8h.md#define-msipl_throw_me) (type, str) `throw type##(##str##);`<br> |
| define  | [**MSIPL\_THROW\_SPECS**](mcompile_8h.md#define-msipl_throw_specs)  <br> |
| define  | [**MSIPL\_TRY**](mcompile_8h.md#define-msipl_try)  `try`<br> |
| define  | [**MSIPL\_TYPENAME**](mcompile_8h.md#define-msipl_typename)  <br> |
| define  | [**MSIPL\_USE\_EXTERNAL\_MATHLIB**](mcompile_8h.md#define-msipl_use_external_mathlib)  <br> |
| define  | [**MSIPL\_USING\_NAMESPACE**](mcompile_8h.md#define-msipl_using_namespace)  <br> |
| define  | [**MSIPL\_USING\_STD**](mcompile_8h.md#define-msipl_using_std)  `using namespace std;`<br> |
| define  | [**MSIPL\_WCHART**](mcompile_8h.md#define-msipl_wchart)  <br> |
| define  | [**M\_CONST**](mcompile_8h.md#define-m_const)  `const`<br> |
| define  | [**RD\_LOCK**](mcompile_8h.md#define-rd_lock)  `1`<br>[_**mcompile.h**_](mcompile_8h.md) __ |
| define  | [**READ\_LOCK**](mcompile_8h.md#define-read_lock) (mut) <br> |
| define  | [**REMOVE**](mcompile_8h.md#define-remove) (mut) <br> |
| define  | [**REMOVE\_P**](mcompile_8h.md#define-remove_p) (mut) <br> |
| define  | [**SRD\_LOCK**](mcompile_8h.md#define-srd_lock)  `3`<br> |
| define  | [**SREAD\_LOCK**](mcompile_8h.md#define-sread_lock) (mut) <br> |
| define  | [**SWRITE\_LOCK**](mcompile_8h.md#define-swrite_lock) (mut) <br> |
| define  | [**SWR\_LOCK**](mcompile_8h.md#define-swr_lock)  `4`<br> |
| define  | [**THROW\_BAD\_ALLOC**](mcompile_8h.md#define-throw_bad_alloc)  `throw bad\_alloc ();`<br> |
| define  | [**WRITE\_LOCK**](mcompile_8h.md#define-write_lock) (mut) <br> |
| define  | [**WR\_LOCK**](mcompile_8h.md#define-wr_lock)  `2`<br> |
| define  | [**null\_template**](mcompile_8h.md#define-null_template)  `template&lt;&gt;`<br> |

## Macro Definition Documentation





### define ALLOC\_BIND 

```C++
#define ALLOC_BIND (
    type
) `typename Allocator::rebind<type>::other`
```




<hr>



### define DEC\_MUTEX 

```C++
#define DEC_MUTEX (
    obj
) 
```




<hr>



### define DEC\_MUTEX\_ARITH 

```C++
#define DEC_MUTEX_ARITH (
    size_t,
    mutex,
    obj
) `size_t obj;`
```




<hr>



### define DEC\_OBJ\_LOCK 

```C++
#define DEC_OBJ_LOCK (
    obj
) 
```




<hr>



### define DEC\_STATIC\_MUTEX\_P 

```C++
#define DEC_STATIC_MUTEX_P (
    obj
) 
```




<hr>



### define DEFTEMPARG 

```C++
#define DEFTEMPARG (
    i,
    j
) `i = j`
```




<hr>



### define LOCK 

```C++
#define LOCK (
    bl_mut,
    mut
) 
```




<hr>



### define LOCK\_P 

```C++
#define LOCK_P (
    bl_mut,
    mut
) 
```




<hr>



### define MOD\_C\_INCLUDE 

```C++
#define MOD_C_INCLUDE (
    str
) `MOD_INCLUDE (c##str)`
```




<hr>



### define MOD\_INCLUDE 

```C++
#define MOD_INCLUDE (
    str
) `<str##.h>`
```




<hr>



### define MSIPLSTD 

```C++
#define MSIPLSTD `::std`
```




<hr>



### define MSIPL\_ANSI\_HEADER 

```C++
#define MSIPL_ANSI_HEADER 
```




<hr>



### define MSIPL\_ASSERT 

```C++
#define MSIPL_ASSERT (
    x
) 
```




<hr>



### define MSIPL\_BOOL\_BUILTIN 

```C++
#define MSIPL_BOOL_BUILTIN 
```




<hr>



### define MSIPL\_CATCH 

```C++
#define MSIPL_CATCH `catch(...)`
```




<hr>



### define MSIPL\_CONST\_TEMPLATE\_ARG 

```C++
#define MSIPL_CONST_TEMPLATE_ARG 
```




<hr>



### define MSIPL\_DEFAULT\_TEMPLATE\_ARG 

```C++
#define MSIPL_DEFAULT_TEMPLATE_ARG 
```




<hr>



### define MSIPL\_EXCEPT 

```C++
#define MSIPL_EXCEPT 
```




<hr>



### define MSIPL\_EXPLICIT 

```C++
#define MSIPL_EXPLICIT 
```




<hr>



### define MSIPL\_EXPLICIT\_FUNC\_TEMPLATE\_ARG 

```C++
#define MSIPL_EXPLICIT_FUNC_TEMPLATE_ARG 
```




<hr>



### define MSIPL\_EXPLICIT\_SPL\_SPEC 

```C++
#define MSIPL_EXPLICIT_SPL_SPEC 
```




<hr>



### define MSIPL\_HEADER\_EXTN\_H 

```C++
#define MSIPL_HEADER_EXTN_H 
```




<hr>



### define MSIPL\_MEMBER\_TEMPLATE 

```C++
#define MSIPL_MEMBER_TEMPLATE 
```




<hr>



### define MSIPL\_NON\_TYPE\_TEMPARG 

```C++
#define MSIPL_NON_TYPE_TEMPARG 
```




<hr>



### define MSIPL\_PARTIAL\_SPECIALIZATION 

```C++
#define MSIPL_PARTIAL_SPECIALIZATION 
```




<hr>



### define MSIPL\_STATIC\_CONST\_INIT 

```C++
#define MSIPL_STATIC_CONST_INIT 
```




<hr>



### define MSIPL\_STD\_BEGIN 

```C++
#define MSIPL_STD_BEGIN `namespace std {`
```




<hr>



### define MSIPL\_STD\_END 

```C++
#define MSIPL_STD_END `}`
```




<hr>



### define MSIPL\_THROW 

```C++
#define MSIPL_THROW `throw()`
```




<hr>



### define MSIPL\_THROW\_BAD\_CAST 

```C++
#define MSIPL_THROW_BAD_CAST (
    str
) `throw bad_cast();`
```




<hr>



### define MSIPL\_THROW\_ME 

```C++
#define MSIPL_THROW_ME (
    type,
    str
) `throw type##(##str##);`
```




<hr>



### define MSIPL\_THROW\_SPECS 

```C++
#define MSIPL_THROW_SPECS 
```




<hr>



### define MSIPL\_TRY 

```C++
#define MSIPL_TRY `try`
```




<hr>



### define MSIPL\_TYPENAME 

```C++
#define MSIPL_TYPENAME 
```




<hr>



### define MSIPL\_USE\_EXTERNAL\_MATHLIB 

```C++
#define MSIPL_USE_EXTERNAL_MATHLIB 
```




<hr>



### define MSIPL\_USING\_NAMESPACE 

```C++
#define MSIPL_USING_NAMESPACE 
```




<hr>



### define MSIPL\_USING\_STD 

```C++
#define MSIPL_USING_STD `using namespace std;`
```




<hr>



### define MSIPL\_WCHART 

```C++
#define MSIPL_WCHART 
```




<hr>



### define M\_CONST 

```C++
#define M_CONST `const`
```




<hr>



### define RD\_LOCK 

[_**mcompile.h**_](mcompile_8h.md) __
```C++
#define RD_LOCK `1`
```



Lib++ : The Modena C++ Standard Library, Version 2.4, October 1997


Copyright (c) 1995-1997 Modena Software Inc. 


        

<hr>



### define READ\_LOCK 

```C++
#define READ_LOCK (
    mut
) 
```




<hr>



### define REMOVE 

```C++
#define REMOVE (
    mut
) 
```




<hr>



### define REMOVE\_P 

```C++
#define REMOVE_P (
    mut
) 
```




<hr>



### define SRD\_LOCK 

```C++
#define SRD_LOCK `3`
```




<hr>



### define SREAD\_LOCK 

```C++
#define SREAD_LOCK (
    mut
) 
```




<hr>



### define SWRITE\_LOCK 

```C++
#define SWRITE_LOCK (
    mut
) 
```




<hr>



### define SWR\_LOCK 

```C++
#define SWR_LOCK `4`
```




<hr>



### define THROW\_BAD\_ALLOC 

```C++
#define THROW_BAD_ALLOC `throw bad_alloc ();`
```




<hr>



### define WRITE\_LOCK 

```C++
#define WRITE_LOCK (
    mut
) 
```




<hr>



### define WR\_LOCK 

```C++
#define WR_LOCK `2`
```




<hr>



### define null\_template 

```C++
#define null_template `template<>`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/mcompile.h`

