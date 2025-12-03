

# File runtime.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Src**](dir_1789e36d750963f536ec280b459db2bf.md) **>** [**runtime.c**](runtime_8c.md)

[Go to the source code of this file](runtime_8c_source.md)








































## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**SAVE\_FPR**](#function-save_fpr) (14) <br> |
|  asm void | [**\_\_cvt\_dbl\_usll**](#function-__cvt_dbl_usll) (void) <br> |
|  unsigned long | [**\_\_cvt\_fp2unsigned**](#function-__cvt_fp2unsigned) (double d) <br> |
|  asm unsigned long | [**\_\_cvt\_fp2unsigned**](#function-__cvt_fp2unsigned) (register double d) <br> |
|  asm void | [**\_\_cvt\_sll\_dbl**](#function-__cvt_sll_dbl) (void) <br> |
|  asm void | [**\_\_cvt\_sll\_flt**](#function-__cvt_sll_flt) (void) <br> |
|  asm void | [**\_\_cvt\_ull\_dbl**](#function-__cvt_ull_dbl) (void) <br> |
|  asm void | [**\_\_cvt\_ull\_flt**](#function-__cvt_ull_flt) (void) <br> |
|  asm void | [**\_\_div2i**](#function-__div2i) (void) <br> |
|  asm void | [**\_\_div2u**](#function-__div2u) (void) <br> |
|  asm void | [**\_\_mod2i**](#function-__mod2i) (void) <br> |
|  asm void | [**\_\_mod2u**](#function-__mod2u) (void) <br> |
|  void | [**\_\_ptr\_glue**](#function-__ptr_glue) (void) <br> |
|  asm void | [**\_\_shl2i**](#function-__shl2i) (void) <br> |
|  asm void | [**\_\_shr2i**](#function-__shr2i) (void) <br> |
|  asm void | [**\_\_shr2u**](#function-__shr2u) (void) <br> |
|  unsigned long | [**\_\_uitrunc**](#function-__uitrunc) (double d) <br> |
|  void | [**\_ptrgl**](#function-_ptrgl) (void) <br> |
|  void | [**\_ptrgl12**](#function-_ptrgl12) (void) <br> |
|  asm void | [**\_ptrglpas**](#function-_ptrglpas) (void) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  asm void | [**\_\_restore\_fpr**](#function-__restore_fpr) (void) <br> |
|  asm void | [**\_\_save\_fpr**](#function-__save_fpr) (void) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ENTRY\_RESTORE\_FPR**](runtime_8c.md#define-entry_restore_fpr) (reg) `entry [**RESTORE\_FPR**](runtime_8c.md#define-restore_fpr)(reg)`<br> |
| define  | [**ENTRY\_RESTORE\_FPR2**](runtime_8c.md#define-entry_restore_fpr2) (reg) `entry [**RESTORE\_FPR2**](runtime_8c.md#define-restore_fpr2)(reg)`<br> |
| define  | [**ENTRY\_SAVE\_FPR**](runtime_8c.md#define-entry_save_fpr) (reg) `entry [**SAVE\_FPR**](runtime_8c.md#define-save_fpr)(reg)`<br> |
| define  | [**ENTRY\_SAVE\_FPR2**](runtime_8c.md#define-entry_save_fpr2) (reg) `entry [**SAVE\_FPR2**](runtime_8c.md#define-save_fpr2)(reg)`<br> |
| define  | [**PPC\_RT\_ROUND\_NEAREST**](runtime_8c.md#define-ppc_rt_round_nearest)  `1`<br> |
| define  | [**RESTORE\_FPR**](runtime_8c.md#define-restore_fpr) (reg) `\_\_restore\_fpr\_ ## reg`<br> |
| define  | [**RESTORE\_FPR2**](runtime_8c.md#define-restore_fpr2) (reg) `\_restf ## reg`<br> |
| define  | [**SAVE\_FPR**](runtime_8c.md#define-save_fpr) (reg) `\_\_save\_fpr\_ ## reg`<br> |
| define  | [**SAVE\_FPR2**](runtime_8c.md#define-save_fpr2) (reg) `\_savef ## reg`<br> |
| define  | [**getloword**](runtime_8c.md#define-getloword)  `-4`<br> |
| define  | [**hilong**](runtime_8c.md#define-hilong)  `24`<br> |
| define  | [**lolong**](runtime_8c.md#define-lolong)  `28`<br> |
| define  | [**save\_restore\_reg**](runtime_8c.md#define-save_restore_reg)  `SP`<br> |
| define  | [**storedouble**](runtime_8c.md#define-storedouble)  `-8`<br> |

## Public Functions Documentation




### function SAVE\_FPR 

```C++
void SAVE_FPR (
    14
) 
```




<hr>



### function \_\_cvt\_dbl\_usll 

```C++
asm void __cvt_dbl_usll (
    void
) 
```




<hr>



### function \_\_cvt\_fp2unsigned 

```C++
unsigned long __cvt_fp2unsigned (
    double d
) 
```




<hr>



### function \_\_cvt\_fp2unsigned 

```C++
asm unsigned long __cvt_fp2unsigned (
    register double d
) 
```




<hr>



### function \_\_cvt\_sll\_dbl 

```C++
asm void __cvt_sll_dbl (
    void
) 
```




<hr>



### function \_\_cvt\_sll\_flt 

```C++
asm void __cvt_sll_flt (
    void
) 
```




<hr>



### function \_\_cvt\_ull\_dbl 

```C++
asm void __cvt_ull_dbl (
    void
) 
```




<hr>



### function \_\_cvt\_ull\_flt 

```C++
asm void __cvt_ull_flt (
    void
) 
```




<hr>



### function \_\_div2i 

```C++
asm void __div2i (
    void
) 
```




<hr>



### function \_\_div2u 

```C++
asm void __div2u (
    void
) 
```




<hr>



### function \_\_mod2i 

```C++
asm void __mod2i (
    void
) 
```




<hr>



### function \_\_mod2u 

```C++
asm void __mod2u (
    void
) 
```




<hr>



### function \_\_ptr\_glue 

```C++
void __ptr_glue (
    void
) 
```




<hr>



### function \_\_shl2i 

```C++
asm void __shl2i (
    void
) 
```




<hr>



### function \_\_shr2i 

```C++
asm void __shr2i (
    void
) 
```




<hr>



### function \_\_shr2u 

```C++
asm void __shr2u (
    void
) 
```




<hr>



### function \_\_uitrunc 

```C++
unsigned long __uitrunc (
    double d
) 
```




<hr>



### function \_ptrgl 

```C++
void _ptrgl (
    void
) 
```




<hr>



### function \_ptrgl12 

```C++
void _ptrgl12 (
    void
) 
```




<hr>



### function \_ptrglpas 

```C++
asm void _ptrglpas (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_restore\_fpr 

```C++
static asm void __restore_fpr (
    void
) 
```




<hr>



### function \_\_save\_fpr 

```C++
static asm void __save_fpr (
    void
) 
```




<hr>
## Macro Definition Documentation





### define ENTRY\_RESTORE\_FPR 

```C++
#define ENTRY_RESTORE_FPR (
    reg
) `entry RESTORE_FPR (reg)`
```




<hr>



### define ENTRY\_RESTORE\_FPR2 

```C++
#define ENTRY_RESTORE_FPR2 (
    reg
) `entry RESTORE_FPR2 (reg)`
```




<hr>



### define ENTRY\_SAVE\_FPR 

```C++
#define ENTRY_SAVE_FPR (
    reg
) `entry SAVE_FPR (reg)`
```




<hr>



### define ENTRY\_SAVE\_FPR2 

```C++
#define ENTRY_SAVE_FPR2 (
    reg
) `entry SAVE_FPR2 (reg)`
```




<hr>



### define PPC\_RT\_ROUND\_NEAREST 

```C++
#define PPC_RT_ROUND_NEAREST `1`
```




<hr>



### define RESTORE\_FPR 

```C++
#define RESTORE_FPR (
    reg
) `__restore_fpr_ ## reg`
```




<hr>



### define RESTORE\_FPR2 

```C++
#define RESTORE_FPR2 (
    reg
) `_restf ## reg`
```




<hr>



### define SAVE\_FPR 

```C++
#define SAVE_FPR (
    reg
) `__save_fpr_ ## reg`
```




<hr>



### define SAVE\_FPR2 

```C++
#define SAVE_FPR2 (
    reg
) `_savef ## reg`
```




<hr>



### define getloword 

```C++
#define getloword `-4`
```




<hr>



### define hilong 

```C++
#define hilong `24`
```




<hr>



### define lolong 

```C++
#define lolong `28`
```




<hr>



### define save\_restore\_reg 

```C++
#define save_restore_reg `SP`
```




<hr>



### define storedouble 

```C++
#define storedouble `-8`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Runtime/Src/runtime.c`

