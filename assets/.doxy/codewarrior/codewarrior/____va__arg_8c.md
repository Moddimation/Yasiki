

# File \_\_va\_arg.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Runtime**](dir_ab14c6633277f31934f3117250613416.md) **>** [**Src**](dir_509e87e64e9810dafb4b9e7004107717.md) **>** [**\_\_va\_arg.c**](____va__arg_8c.md)

[Go to the source code of this file](____va__arg_8c_source.md)


















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**va\_list**](structva__list.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**\_va\_arg\_type**](#enum-_va_arg_type)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  void \* | [**\_\_va\_arg**](#function-__va_arg) ([**va\_list**](structva__list.md) ap, [**\_va\_arg\_type**](____va__arg_8c.md#enum-_va_arg_type) type) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ALIGN**](____va__arg_8c.md#define-align) (addr, amount) `(((unsigned int)(addr)+((amount)-1))&~((amount)-1))`<br> |
| define  | [**MAX\_SAVED\_REGS**](____va__arg_8c.md#define-max_saved_regs)  `8`<br> |
| define  | [**SIZEOF\_DWRD**](____va__arg_8c.md#define-sizeof_dwrd)  `8`<br> |
| define  | [**SIZEOF\_FPR**](____va__arg_8c.md#define-sizeof_fpr)  `8`<br> |
| define  | [**SIZEOF\_GPR**](____va__arg_8c.md#define-sizeof_gpr)  `4`<br> |
| define  | [**SIZEOF\_VECTOR**](____va__arg_8c.md#define-sizeof_vector)  `16`<br> |

## Public Types Documentation




### enum \_va\_arg\_type 

```C++
enum _va_arg_type {
    arg_ARGPOINTER,
    arg_WORD,
    arg_DOUBLEWORD,
    arg_REAL,
    arg_VECTOR
};
```




<hr>
## Public Functions Documentation




### function \_\_va\_arg 

```C++
void * __va_arg (
    va_list ap,
    _va_arg_type type
) 
```




<hr>
## Macro Definition Documentation





### define ALIGN 

```C++
#define ALIGN (
    addr,
    amount
) `(((unsigned int)(addr)+((amount)-1))&~((amount)-1))`
```




<hr>



### define MAX\_SAVED\_REGS 

```C++
#define MAX_SAVED_REGS `8`
```




<hr>



### define SIZEOF\_DWRD 

```C++
#define SIZEOF_DWRD `8`
```




<hr>



### define SIZEOF\_FPR 

```C++
#define SIZEOF_FPR `8`
```




<hr>



### define SIZEOF\_GPR 

```C++
#define SIZEOF_GPR `4`
```




<hr>



### define SIZEOF\_VECTOR 

```C++
#define SIZEOF_VECTOR `16`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Runtime/Src/__va_arg.c`

