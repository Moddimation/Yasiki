

# File macros.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**lib**](dir_3b305cf5e36a513e0ca27de630bae6c6.md) **>** [**macros.h**](macros_8h.md)

[Go to the source code of this file](macros_8h_source.md)



































































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ALIGN**](macros_8h.md#define-align) (num) `\_\_attribute\_\_ ((aligned (num)))`<br> |
| define  | [**ALIGN\_NEXT**](macros_8h.md#define-align_next) (u, align) `((u + (align - 1)) & (~(align - 1)))`<br> |
| define  | [**ALIGN\_PREV**](macros_8h.md#define-align_prev) (u, align) `(u & (~(align - 1)))`<br> |
| define  | [**ASSERTLINE**](macros_8h.md#define-assertline) (cond, line) `(void)0`<br> |
| define  | [**ASSERTMSG1LINE**](macros_8h.md#define-assertmsg1line) (cond, msg, arg1, line) `(void)0`<br> |
| define  | [**ASSERTMSG2LINE**](macros_8h.md#define-assertmsg2line) (cond, msg, arg1, arg2, line) `(void)0`<br> |
| define  | [**ASSERTMSGLINE**](macros_8h.md#define-assertmsgline) (cond, msg, line) `(void)0`<br> |
| define  | [**ASSERTMSGLINEV**](macros_8h.md#define-assertmsglinev) (cond, line, ...) `(void)0`<br> |
| define  | [**FORCE\_DONT\_INLINE**](macros_8h.md#define-force_dont_inline)  `/* multi line expression */`<br> |
| define  | [**IS\_ALIGNED**](macros_8h.md#define-is_aligned) (X, N) `(((X) & ((N) - 1)) == 0)`<br> |
| define  | [**IS\_NOT\_ALIGNED**](macros_8h.md#define-is_not_aligned) (X, N) `(((X) & ((N) - 1)) != 0)`<br> |
| define  | [**MSTRING**](macros_8h.md#define-mstring) (x) `[**\_\_MSTRING**](macros_8h.md#define-__mstring) (x)`<br> |
| define  | [**MSTRING\_CONCAT**](macros_8h.md#define-mstring_concat) (a, b) `[**\_\_MSTRING\_CONCAT**](macros_8h.md#define-__mstring_concat) (a, b)`<br> |
| define  | [**OFFSET**](macros_8h.md#define-offset) (addr, align) `(((u32)(addr) & ((align) - 1)))`<br> |
| define  | [**READU32\_BE**](macros_8h.md#define-readu32_be) (ptr, offset) `/* multi line expression */`<br> |
| define  | [**\_\_MSTRING**](macros_8h.md#define-__mstring) (x) `#x`<br> |
| define  | [**\_\_MSTRING\_CONCAT**](macros_8h.md#define-__mstring_concat) (a, b) `a##b`<br> |

## Macro Definition Documentation





### define ALIGN 

```C++
#define ALIGN (
    num
) `__attribute__ ((aligned (num)))`
```




<hr>



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



### define ASSERTLINE 

```C++
#define ASSERTLINE (
    cond,
    line
) `(void)0`
```




<hr>



### define ASSERTMSG1LINE 

```C++
#define ASSERTMSG1LINE (
    cond,
    msg,
    arg1,
    line
) `(void)0`
```




<hr>



### define ASSERTMSG2LINE 

```C++
#define ASSERTMSG2LINE (
    cond,
    msg,
    arg1,
    arg2,
    line
) `(void)0`
```




<hr>



### define ASSERTMSGLINE 

```C++
#define ASSERTMSGLINE (
    cond,
    msg,
    line
) `(void)0`
```




<hr>



### define ASSERTMSGLINEV 

```C++
#define ASSERTMSGLINEV (
    cond,
    line,
    ...
) `(void)0`
```




<hr>



### define FORCE\_DONT\_INLINE 

```C++
#define FORCE_DONT_INLINE `/* multi line expression */`
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



### define IS\_NOT\_ALIGNED 

```C++
#define IS_NOT_ALIGNED (
    X,
    N
) `(((X) & ((N) - 1)) != 0)`
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



### define OFFSET 

```C++
#define OFFSET (
    addr,
    align
) `(((u32)(addr) & ((align) - 1)))`
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

------------------------------
The documentation for this class was generated from the following file `decomp/Project/lib/macros.h`

