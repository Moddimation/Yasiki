

# File dolformat.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**dolformat.h**](dolformat_8h.md)

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
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/dolformat.h`

