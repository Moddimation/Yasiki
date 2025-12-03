

# File AXProf.c



[**FileList**](files.md) **>** [**ax**](dir_284807f63fc993a939ff676a07eb86c2.md) **>** [**AXProf.c**](_a_x_prof_8c.md)

[Go to the source code of this file](_a_x_prof_8c_source.md)



* `#include <dolphin/ax.h>`
* `#include <dolphin.h>`
* `#include "AXPrivate.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXCurrentProfile**](#variable-__axcurrentprofile)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXMaxProfiles**](#variable-__axmaxprofiles)  <br> |
|  [**AXPROFILE**](ax_8h.md#typedef-axprofile) \* | [**\_\_AXProfile**](#variable-__axprofile)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXProfileInitialized**](#variable-__axprofileinitialized)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**AXGetProfile**](#function-axgetprofile) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXInitProfile**](#function-axinitprofile) ([**AXPROFILE**](ax_8h.md#typedef-axprofile) \* profile, [**u32**](types_8h.md#typedef-u32) maxProfiles) <br> |
|  [**AXPROFILE**](ax_8h.md#typedef-axprofile) \* | [**\_\_AXGetCurrentProfile**](#function-__axgetcurrentprofile) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |




























## Public Static Attributes Documentation




### variable \_\_AXCurrentProfile 

```C++
u32 __AXCurrentProfile;
```




<hr>



### variable \_\_AXMaxProfiles 

```C++
u32 __AXMaxProfiles;
```




<hr>



### variable \_\_AXProfile 

```C++
AXPROFILE* __AXProfile;
```




<hr>



### variable \_\_AXProfileInitialized 

```C++
u32 __AXProfileInitialized;
```




<hr>
## Public Functions Documentation




### function AXGetProfile 

```C++
u32 AXGetProfile (
    void
) 
```




<hr>



### function AXInitProfile 

```C++
void AXInitProfile (
    AXPROFILE * profile,
    u32 maxProfiles
) 
```




<hr>



### function \_\_AXGetCurrentProfile 

```C++
AXPROFILE * __AXGetCurrentProfile (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/ax/AXProf.c`

