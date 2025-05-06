

# File macros.h



[**FileList**](files.md) **>** [**lib**](dir_e36959481960b875b4393beac6de38d5.md) **>** [**macros.h**](macros_8h.md)

[Go to the source code of this file](macros_8h_source.md)



































































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ALIGN\_NEXT**](macros_8h.md#define-align_next) (u, align) `((u + (align - 1)) & (~(align - 1)))`<br> |
| define  | [**ALIGN\_PREV**](macros_8h.md#define-align_prev) (u, align) `(u & (~(align - 1)))`<br> |
| define  | [**ARRAY\_COUNT**](macros_8h.md#define-array_count) (arr) `(int)(sizeof (arr) / sizeof (arr[0]))`<br> |
| define  | [**ARRAY\_SIZE**](macros_8h.md#define-array_size) (o) `(sizeof ((o)) / sizeof (\*(o)))`<br> |
| define  | [**ASM**](macros_8h.md#define-asm)  `asm`<br> |
| define  | [**ASSERTLINE**](macros_8h.md#define-assertline) (line, cond) `(void)0`<br> |
| define  | [**ASSERTMSG1LINE**](macros_8h.md#define-assertmsg1line) (line, cond, msg, arg1) `(void)0`<br> |
| define  | [**ASSERTMSG2LINE**](macros_8h.md#define-assertmsg2line) (line, cond, msg, arg1, arg2) `(void)0`<br> |
| define  | [**ASSERTMSGLINE**](macros_8h.md#define-assertmsgline) (line, cond, msg) `(void)0`<br> |
| define  | [**ASSERTMSGLINEV**](macros_8h.md#define-assertmsglinev) (line, cond, ...) `(void)0`<br> |
| define  | [**ASSERT\_HANG**](macros_8h.md#define-assert_hang) (cond) `/* multi line expression */`<br> |
| define  | [**ATTRIBUTE\_ALIGN**](macros_8h.md#define-attribute_align) (num) `\_\_attribute\_\_ ((aligned (num)))`<br> |
| define  | [**BUMP\_REGISTER**](macros_8h.md#define-bump_register) (reg) `/* multi line expression */`<br> |
| define  | [**DECL\_SECT**](macros_8h.md#define-decl_sect) (name) `\_\_declspec (section name)`<br> |
| define  | [**FLAG\_OFF**](macros_8h.md#define-flag_off) (V, F) `(((V) & (F)) != 0)`<br> |
| define  | [**FLAG\_ON**](macros_8h.md#define-flag_on) (V, F) `(((V) & (F)) == 0)`<br> |
| define  | [**FORCE\_DONT\_INLINE**](macros_8h.md#define-force_dont_inline)  `/* multi line expression */`<br> |
| define  | [**IGNORE\_ALL**](macros_8h.md#define-ignore_all)  `inline`<br> |
| define  | [**IGNORE\_GLME01**](macros_8h.md#define-ignore_glme01)  <br> |
| define  | [**IGNORE\_GLME01\_1**](macros_8h.md#define-ignore_glme01_1)  <br> |
| define  | [**IGNORE\_GLMJ01**](macros_8h.md#define-ignore_glmj01)  <br> |
| define  | [**IGNORE\_GLMJ01**](macros_8h.md#define-ignore_glmj01)  <br> |
| define  | [**IGNORE\_GLMP01**](macros_8h.md#define-ignore_glmp01)  <br> |
| define  | [**IGNORE\_GLMP01\_1**](macros_8h.md#define-ignore_glmp01_1)  <br> |
| define  | [**IGNORE\_GLMP01\_2**](macros_8h.md#define-ignore_glmp01_2)  <br> |
| define  | [**IS\_ALIGNED**](macros_8h.md#define-is_aligned) (X, N) `(((X) & ((N) - 1)) == 0)`<br> |
| define  | [**IS\_FLAG**](macros_8h.md#define-is_flag) (x, val) `(x & val)`<br> |
| define  | [**IS\_FLAG\_SET**](macros_8h.md#define-is_flag_set) (flags, bitsFromLSB) `(((flags) &gt;&gt; (bitsFromLSB) & 1))`<br> |
| define  | [**IS\_NOT\_ALIGNED**](macros_8h.md#define-is_not_aligned) (X, N) `(((X) & ((N) - 1)) != 0)`<br> |
| define  | [**KILOBYTE\_BYTECOUNT**](macros_8h.md#define-kilobyte_bytecount)  `1024`<br> |
| define  | [**MAX**](macros_8h.md#define-max) (a, b) `(((a) &gt; (b)) ? (a) : (b))`<br> |
| define  | [**MIN**](macros_8h.md#define-min) (a, b) `(((a) &lt; (b)) ? (a) : (b))`<br> |
| define  | [**MSTRING**](macros_8h.md#define-mstring) (x) `[**\_\_MSTRING**](macros_8h.md#define-__mstring) (x)`<br> |
| define  | [**MSTRING\_CONCAT**](macros_8h.md#define-mstring_concat) (a, b) `[**\_\_MSTRING\_CONCAT**](macros_8h.md#define-__mstring_concat) (a, b)`<br> |
| define  | [**ONLY\_GLME01**](macros_8h.md#define-only_glme01)  `inline`<br> |
| define  | [**ONLY\_GLMJ01**](macros_8h.md#define-only_glmj01)  `inline`<br> |
| define  | [**ONLY\_GLMJ01**](macros_8h.md#define-only_glmj01)  `inline`<br> |
| define  | [**PATH\_MAX**](macros_8h.md#define-path_max)  `(256)`<br> |
| define  | [**READU32\_BE**](macros_8h.md#define-readu32_be) (ptr, offset) `/* multi line expression */`<br> |
| define  | [**RESET\_FLAG**](macros_8h.md#define-reset_flag) (x, val) `(x &= ~(val))`<br> |
| define  | [**ROUND\_F32\_TO\_U8**](macros_8h.md#define-round_f32_to_u8) (a) `a &gt;= 0.0f ? a + 0.5f : a - 0.5f`<br> |
| define  | [**SET\_FLAG**](macros_8h.md#define-set_flag) (x, val) `(x \|= (val))`<br> |
| define  | [**WEAKFUNC**](macros_8h.md#define-weakfunc)  `\_\_declspec (weak)`<br> |
| define  | [**\_\_MSTRING**](macros_8h.md#define-__mstring) (x) `#x`<br> |
| define  | [**\_\_MSTRING\_CONCAT**](macros_8h.md#define-__mstring_concat) (a, b) `a##b`<br> |
| define  | [**\_\_PPCGEKKO\_\_**](macros_8h.md#define-__ppcgekko__)  <br> |

## Macro Definition Documentation





### define ALIGN\_NEXT 

```C++
#define ALIGN_NEXT (
    u,
    align
) `((u + (align - 1)) & (~(align - 1)))`
```




<hr>



### define ALIGN\_PREV 

```C++
#define ALIGN_PREV (
    u,
    align
) `(u & (~(align - 1)))`
```




<hr>



### define ARRAY\_COUNT 

```C++
#define ARRAY_COUNT (
    arr
) `(int)(sizeof (arr) / sizeof (arr[0]))`
```




<hr>



### define ARRAY\_SIZE 

```C++
#define ARRAY_SIZE (
    o
) `(sizeof ((o)) / sizeof (*(o)))`
```




<hr>



### define ASM 

```C++
#define ASM `asm`
```




<hr>



### define ASSERTLINE 

```C++
#define ASSERTLINE (
    line,
    cond
) `(void)0`
```




<hr>



### define ASSERTMSG1LINE 

```C++
#define ASSERTMSG1LINE (
    line,
    cond,
    msg,
    arg1
) `(void)0`
```




<hr>



### define ASSERTMSG2LINE 

```C++
#define ASSERTMSG2LINE (
    line,
    cond,
    msg,
    arg1,
    arg2
) `(void)0`
```




<hr>



### define ASSERTMSGLINE 

```C++
#define ASSERTMSGLINE (
    line,
    cond,
    msg
) `(void)0`
```




<hr>



### define ASSERTMSGLINEV 

```C++
#define ASSERTMSGLINEV (
    line,
    cond,
    ...
) `(void)0`
```




<hr>



### define ASSERT\_HANG 

```C++
#define ASSERT_HANG (
    cond
) `/* multi line expression */`
```




<hr>



### define ATTRIBUTE\_ALIGN 

```C++
#define ATTRIBUTE_ALIGN (
    num
) `__attribute__ ((aligned (num)))`
```




<hr>



### define BUMP\_REGISTER 

```C++
#define BUMP_REGISTER (
    reg
) `/* multi line expression */`
```




<hr>



### define DECL\_SECT 

```C++
#define DECL_SECT (
    name
) `__declspec (section name)`
```




<hr>



### define FLAG\_OFF 

```C++
#define FLAG_OFF (
    V,
    F
) `(((V) & (F)) != 0)`
```




<hr>



### define FLAG\_ON 

```C++
#define FLAG_ON (
    V,
    F
) `(((V) & (F)) == 0)`
```




<hr>



### define FORCE\_DONT\_INLINE 

```C++
#define FORCE_DONT_INLINE `/* multi line expression */`
```




<hr>



### define IGNORE\_ALL 

```C++
#define IGNORE_ALL `inline`
```




<hr>



### define IGNORE\_GLME01 

```C++
#define IGNORE_GLME01 
```




<hr>



### define IGNORE\_GLME01\_1 

```C++
#define IGNORE_GLME01_1 
```




<hr>



### define IGNORE\_GLMJ01 

```C++
#define IGNORE_GLMJ01 
```




<hr>



### define IGNORE\_GLMJ01 

```C++
#define IGNORE_GLMJ01 
```




<hr>



### define IGNORE\_GLMP01 

```C++
#define IGNORE_GLMP01 
```




<hr>



### define IGNORE\_GLMP01\_1 

```C++
#define IGNORE_GLMP01_1 
```




<hr>



### define IGNORE\_GLMP01\_2 

```C++
#define IGNORE_GLMP01_2 
```




<hr>



### define IS\_ALIGNED 

```C++
#define IS_ALIGNED (
    X,
    N
) `(((X) & ((N) - 1)) == 0)`
```




<hr>



### define IS\_FLAG 

```C++
#define IS_FLAG (
    x,
    val
) `(x & val)`
```




<hr>



### define IS\_FLAG\_SET 

```C++
#define IS_FLAG_SET (
    flags,
    bitsFromLSB
) `(((flags) >> (bitsFromLSB) & 1))`
```




<hr>



### define IS\_NOT\_ALIGNED 

```C++
#define IS_NOT_ALIGNED (
    X,
    N
) `(((X) & ((N) - 1)) != 0)`
```




<hr>



### define KILOBYTE\_BYTECOUNT 

```C++
#define KILOBYTE_BYTECOUNT `1024`
```




<hr>



### define MAX 

```C++
#define MAX (
    a,
    b
) `(((a) > (b)) ? (a) : (b))`
```




<hr>



### define MIN 

```C++
#define MIN (
    a,
    b
) `(((a) < (b)) ? (a) : (b))`
```




<hr>



### define MSTRING 

```C++
#define MSTRING (
    x
) `__MSTRING (x)`
```




<hr>



### define MSTRING\_CONCAT 

```C++
#define MSTRING_CONCAT (
    a,
    b
) `__MSTRING_CONCAT (a, b)`
```




<hr>



### define ONLY\_GLME01 

```C++
#define ONLY_GLME01 `inline`
```




<hr>



### define ONLY\_GLMJ01 

```C++
#define ONLY_GLMJ01 `inline`
```




<hr>



### define ONLY\_GLMJ01 

```C++
#define ONLY_GLMJ01 `inline`
```




<hr>



### define PATH\_MAX 

```C++
#define PATH_MAX `(256)`
```




<hr>



### define READU32\_BE 

```C++
#define READU32_BE (
    ptr,
    offset
) `/* multi line expression */`
```




<hr>



### define RESET\_FLAG 

```C++
#define RESET_FLAG (
    x,
    val
) `(x &= ~(val))`
```




<hr>



### define ROUND\_F32\_TO\_U8 

```C++
#define ROUND_F32_TO_U8 (
    a
) `a >= 0.0f ? a + 0.5f : a - 0.5f`
```




<hr>



### define SET\_FLAG 

```C++
#define SET_FLAG (
    x,
    val
) `(x |= (val))`
```




<hr>



### define WEAKFUNC 

```C++
#define WEAKFUNC `__declspec (weak)`
```




<hr>



### define \_\_MSTRING 

```C++
#define __MSTRING (
    x
) `#x`
```




<hr>



### define \_\_MSTRING\_CONCAT 

```C++
#define __MSTRING_CONCAT (
    a,
    b
) `a##b`
```




<hr>



### define \_\_PPCGEKKO\_\_ 

```C++
#define __PPCGEKKO__ 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `Project/lib/macros.h`

