

# File ptmf.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Runtime**](dir_ab14c6633277f31934f3117250613416.md) **>** [**Src**](dir_509e87e64e9810dafb4b9e7004107717.md) **>** [**ptmf.c**](ptmf_8c.md)

[Go to the source code of this file](ptmf_8c_source.md)


















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**PTMF**](struct_p_t_m_f.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef struct [**PTMF**](struct_p_t_m_f.md) | [**PTMF**](#typedef-ptmf)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  const [**PTMF**](struct_p_t_m_f.md) | [**\_\_ptmf\_null**](#variable-__ptmf_null)   = `{ 0, 0, 0 }`<br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_ptmf\_call**](#function-__ptmf_call) (...) <br> |
|  void | [**\_\_ptmf\_call4**](#function-__ptmf_call4) (...) <br> |
|  [**PTMF**](struct_p_t_m_f.md) \* | [**\_\_ptmf\_cast**](#function-__ptmf_cast) (long offset, const [**PTMF**](struct_p_t_m_f.md) \* ptmfrom, [**PTMF**](struct_p_t_m_f.md) \* ptmto) <br> |
|  long | [**\_\_ptmf\_cmpr**](#function-__ptmf_cmpr) ([**PTMF**](struct_p_t_m_f.md) \* ptmf1, [**PTMF**](struct_p_t_m_f.md) \* ptmf2) <br> |
|  asm long | [**\_\_ptmf\_cmpr**](#function-__ptmf_cmpr) (register [**PTMF**](struct_p_t_m_f.md) \* ptmf1, register [**PTMF**](struct_p_t_m_f.md) \* ptmf2) <br> |
|  void | [**\_\_ptmf\_scall**](#function-__ptmf_scall) (...) <br> |
|  void | [**\_\_ptmf\_scall4**](#function-__ptmf_scall4) (...) <br> |
|  long | [**\_\_ptmf\_test**](#function-__ptmf_test) ([**PTMF**](struct_p_t_m_f.md) \* ptmf) <br> |
|  asm long | [**\_\_ptmf\_test**](#function-__ptmf_test) (register [**PTMF**](struct_p_t_m_f.md) \* ptmf) <br> |




























## Public Types Documentation




### typedef PTMF 

```C++
typedef struct PTMF PTMF;
```




<hr>
## Public Attributes Documentation




### variable \_\_ptmf\_null 

```C++
const PTMF __ptmf_null;
```




<hr>
## Public Functions Documentation




### function \_\_ptmf\_call 

```C++
void __ptmf_call (
    ...
) 
```




<hr>



### function \_\_ptmf\_call4 

```C++
void __ptmf_call4 (
    ...
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



### function \_\_ptmf\_cmpr 

```C++
long __ptmf_cmpr (
    PTMF * ptmf1,
    PTMF * ptmf2
) 
```




<hr>



### function \_\_ptmf\_cmpr 

```C++
asm long __ptmf_cmpr (
    register PTMF * ptmf1,
    register PTMF * ptmf2
) 
```




<hr>



### function \_\_ptmf\_scall 

```C++
void __ptmf_scall (
    ...
) 
```




<hr>



### function \_\_ptmf\_scall4 

```C++
void __ptmf_scall4 (
    ...
) 
```




<hr>



### function \_\_ptmf\_test 

```C++
long __ptmf_test (
    PTMF * ptmf
) 
```




<hr>



### function \_\_ptmf\_test 

```C++
asm long __ptmf_test (
    register PTMF * ptmf
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Runtime/Src/ptmf.c`

