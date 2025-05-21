

# File Padclamp.c



[**FileList**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**pad**](dir_ef7f8b3a238b43f1f07089f08241e6fb.md) **>** [**Padclamp.c**](_padclamp_8c.md)

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
The documentation for this class was generated from the following file `DolphinSDK/src/dolphin/pad/Padclamp.c`

