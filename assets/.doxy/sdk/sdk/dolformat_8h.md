

# File dolformat.h



[**FileList**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**dolformat.h**](dolformat_8h.md)

[Go to the source code of this file](dolformat_8h_source.md)



* `#include <types.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**DolImage**](struct_dol_image.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DolImage**](struct_dol_image.md) | [**DolImage**](#typedef-dolimage)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DOLLoadImage**](#function-dolloadimage) ([**u8**](types_8h.md#typedef-u8) \* buffer, [**BOOL**](types_8h.md#typedef-bool) verbose) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DOLRunApp**](#function-dolrunapp) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* entryPoint) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**DOL\_MAX\_DATA**](dolformat_8h.md#define-dol_max_data)  `11`<br> |
| define  | [**DOL\_MAX\_TEXT**](dolformat_8h.md#define-dol_max_text)  `7`<br> |

## Public Types Documentation




### typedef DolImage 

```C++
typedef struct DolImage DolImage;
```




<hr>
## Public Functions Documentation




### function DOLLoadImage 

```C++
void * DOLLoadImage (
    u8 * buffer,
    BOOL verbose
) 
```




<hr>



### function DOLRunApp 

```C++
void DOLRunApp (
    void * entryPoint
) 
```




<hr>
## Macro Definition Documentation





### define DOL\_MAX\_DATA 

```C++
#define DOL_MAX_DATA `11`
```




<hr>



### define DOL\_MAX\_TEXT 

```C++
#define DOL_MAX_TEXT `7`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/include/dolphin/dolformat.h`

