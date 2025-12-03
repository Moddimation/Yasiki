

# File Padclamp.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**pad**](dir_2fb02ac7a51913d2d577d38d3f4d3e89.md) **>** [**Padclamp.c**](_padclamp_8c.md)

[Go to the source code of this file](_padclamp_8c_source.md)



* `#include <dolphin/pad.h>`
* `#include <types.h>`
* `#include <math.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**PADClampRegion**](struct_p_a_d_clamp_region.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**PADClampRegion**](struct_p_a_d_clamp_region.md) | [**PADClampRegion**](#typedef-padclampregion)  <br> |






## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**PADClampRegion**](struct_p_a_d_clamp_region.md) | [**ClampRegion**](#variable-clampregion)   = `{ 30, 180, 15, 72, 40, 15, 59, 31 }`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PADClamp**](#function-padclamp) ([**PADStatus**](struct_p_a_d_status.md) \* status) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ClampStick**](#function-clampstick) ([**s8**](types_8h.md#typedef-s8) \* px, [**s8**](types_8h.md#typedef-s8) \* py, [**s8**](types_8h.md#typedef-s8) max, [**s8**](types_8h.md#typedef-s8) xy, [**s8**](types_8h.md#typedef-s8) min) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ClampTrigger**](#function-clamptrigger) ([**u8**](types_8h.md#typedef-u8) \* trigger) <br> |


























## Public Types Documentation




### typedef PADClampRegion 

```C++
typedef struct PADClampRegion PADClampRegion;
```




<hr>
## Public Static Attributes Documentation




### variable ClampRegion 

```C++
PADClampRegion ClampRegion;
```




<hr>
## Public Functions Documentation




### function PADClamp 

```C++
void PADClamp (
    PADStatus * status
) 
```




<hr>
## Public Static Functions Documentation




### function ClampStick 

```C++
static void ClampStick (
    s8 * px,
    s8 * py,
    s8 max,
    s8 xy,
    s8 min
) 
```




<hr>



### function ClampTrigger 

```C++
static inline void ClampTrigger (
    u8 * trigger
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/pad/Padclamp.c`

