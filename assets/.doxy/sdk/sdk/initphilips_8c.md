

# File initphilips.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**vi**](dir_4c4bdd086c28c27443eb7acfc670f6a8.md) **>** [**initphilips.c**](initphilips_8c.md)

[Go to the source code of this file](initphilips_8c_source.md)



* `#include <dolphin/vi.h>`
* `#include "__vi.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**ntscRange0**](#variable-ntscrange0)   = `{ 0x00, 0x00, 0x19, 0x1D }`<br> |
|  [**u8**](types_8h.md#typedef-u8) | [**ntscRange1**](#variable-ntscrange1)   = `/* multi line expression */`<br> |
|  [**u8**](types_8h.md#typedef-u8) | [**palRange0**](#variable-palrange0)   = `{ 0x00, 0x00, 0x21, 0x1D }`<br> |
|  [**u8**](types_8h.md#typedef-u8) | [**palRange1**](#variable-palrange1)   = `/* multi line expression */`<br> |
|  [**u8**](types_8h.md#typedef-u8) | [**value3a**](#variable-value3a)   = `19`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VIInitPhilips**](#function-__viinitphilips) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**send7120Data**](#function-send7120data) ([**u8**](types_8h.md#typedef-u8) \* range0, [**u8**](types_8h.md#typedef-u8) \* range1) <br> |


























## Public Static Attributes Documentation




### variable ntscRange0 

```C++
u8 ntscRange0[4];
```




<hr>



### variable ntscRange1 

```C++
u8 ntscRange1[38];
```




<hr>



### variable palRange0 

```C++
u8 palRange0[4];
```




<hr>



### variable palRange1 

```C++
u8 palRange1[38];
```




<hr>



### variable value3a 

```C++
u8 value3a;
```




<hr>
## Public Functions Documentation




### function \_\_VIInitPhilips 

```C++
void __VIInitPhilips (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function send7120Data 

```C++
static void send7120Data (
    u8 * range0,
    u8 * range1
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/vi/initphilips.c`

