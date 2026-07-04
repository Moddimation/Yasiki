

# Struct DTKTrack



[**ClassList**](annotated.md) **>** [**DTKTrack**](struct_d_t_k_track.md)





* `#include <dtk.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**DTKCallback**](dtk_8h.md#typedef-dtkcallback) | [**callback**](#variable-callback)  <br>_0x10_  |
|  [**DVDFileInfo**](struct_d_v_d_file_info.md) | [**dvdFileInfo**](#variable-dvdfileinfo)  <br>_0x14_  |
|  [**u32**](types_8h.md#typedef-u32) | [**eventMask**](#variable-eventmask)  <br>_0x0C_  |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**fileName**](#variable-filename)  <br>_0x08_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DTKTrack**](struct_d_t_k_track.md) \* | [**next**](#variable-next)  <br>_0x04_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DTKTrack**](struct_d_t_k_track.md) \* | [**prev**](#variable-prev)  <br>_0x00_  |












































## Public Attributes Documentation




### variable callback 

_0x10_ 
```C++
DTKCallback DTKTrack::callback;
```




<hr>



### variable dvdFileInfo 

_0x14_ 
```C++
DVDFileInfo DTKTrack::dvdFileInfo;
```




<hr>



### variable eventMask 

_0x0C_ 
```C++
u32 DTKTrack::eventMask;
```




<hr>



### variable fileName 

_0x08_ 
```C++
char* DTKTrack::fileName;
```




<hr>



### variable next 

_0x04_ 
```C++
struct DTKTrack* DTKTrack::next;
```




<hr>



### variable prev 

_0x00_ 
```C++
struct DTKTrack* DTKTrack::prev;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/dtk.h`

