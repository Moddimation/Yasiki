

# File CARDUnlock.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDUnlock.c**](_c_a_r_d_unlock_8c.md)

[Go to the source code of this file](_c_a_r_d_unlock_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <dolphin.h>`
* `#include <stdlib.h>`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDUnlock**](#function-__cardunlock) ([**s32**](types_8h.md#typedef-s32) chan, [**u8**](types_8h.md#typedef-u8) flashID) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) [**CardData**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[352] | [**ALIGN**](#function-align) (32) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DoneCallback**](#function-donecallback) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* \_task) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DummyLen**](#function-dummylen) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GetInitVal**](#function-getinitval) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**InitCallback**](#function-initcallback) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* \_task) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**ReadArrayUnlock**](#function-readarrayunlock) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) data, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* rbuf, [**s32**](types_8h.md#typedef-s32) rlen, [**s32**](types_8h.md#typedef-s32) mode) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**bitrev**](#function-bitrev) ([**u32**](types_8h.md#typedef-u32) data) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**exnor**](#function-exnor) ([**u32**](types_8h.md#typedef-u32) data, [**u32**](types_8h.md#typedef-u32) lshift) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**exnor\_1st**](#function-exnor_1st) ([**u32**](types_8h.md#typedef-u32) data, [**u32**](types_8h.md#typedef-u32) rshift) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**SEC\_AD1**](_c_a_r_d_unlock_8c.md#define-sec_ad1) (x) `(([**u8**](types_8h.md#typedef-u8))(((x) &gt;&gt; 29) & 0x03))`<br> |
| define  | [**SEC\_AD2**](_c_a_r_d_unlock_8c.md#define-sec_ad2) (x) `(([**u8**](types_8h.md#typedef-u8))(((x) &gt;&gt; 21) & 0xff))`<br> |
| define  | [**SEC\_AD3**](_c_a_r_d_unlock_8c.md#define-sec_ad3) (x) `(([**u8**](types_8h.md#typedef-u8))(((x) &gt;&gt; 19) & 0x03))`<br> |
| define  | [**SEC\_BA**](_c_a_r_d_unlock_8c.md#define-sec_ba) (x) `(([**u8**](types_8h.md#typedef-u8))(((x) &gt;&gt; 12) & 0x7f))`<br> |

## Public Functions Documentation




### function \_\_CARDUnlock 

```C++
s32 __CARDUnlock (
    s32 chan,
    u8 flashID
) 
```




<hr>
## Public Static Functions Documentation




### function ALIGN 

```C++
static u8  CardData [352] ALIGN (
    32
) 
```




<hr>



### function DoneCallback 

```C++
static void DoneCallback (
    void * _task
) 
```




<hr>



### function DummyLen 

```C++
static s32 DummyLen (
    void
) 
```




<hr>



### function GetInitVal 

```C++
static u32 GetInitVal (
    void
) 
```




<hr>



### function InitCallback 

```C++
static void InitCallback (
    void * _task
) 
```




<hr>



### function ReadArrayUnlock 

```C++
static s32 ReadArrayUnlock (
    s32 chan,
    u32 data,
    void * rbuf,
    s32 rlen,
    s32 mode
) 
```




<hr>



### function bitrev 

```C++
static u32 bitrev (
    u32 data
) 
```




<hr>



### function exnor 

```C++
static u32 exnor (
    u32 data,
    u32 lshift
) 
```




<hr>



### function exnor\_1st 

```C++
static u32 exnor_1st (
    u32 data,
    u32 rshift
) 
```




<hr>
## Macro Definition Documentation





### define SEC\_AD1 

```C++
#define SEC_AD1 (
    x
) `(( u8 )(((x) >> 29) & 0x03))`
```




<hr>



### define SEC\_AD2 

```C++
#define SEC_AD2 (
    x
) `(( u8 )(((x) >> 21) & 0xff))`
```




<hr>



### define SEC\_AD3 

```C++
#define SEC_AD3 (
    x
) `(( u8 )(((x) >> 19) & 0x03))`
```




<hr>



### define SEC\_BA 

```C++
#define SEC_BA (
    x
) `(( u8 )(((x) >> 12) & 0x7f))`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDUnlock.c`

