

# File GXVerify.h



[**FileList**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**gx**](dir_049675cf3b51aca8087b2c87edff05c3.md) **>** [**GXVerify.h**](_g_x_verify_8h.md)

[Go to the source code of this file](_g_x_verify_8h_source.md)




















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**GXVerifyCallback**](#typedef-gxverifycallback)  <br> |
| enum  | [**GXWarningLevel**](#enum-gxwarninglevel)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**GXVerifyCallback**](_g_x_verify_8h.md#typedef-gxverifycallback) | [**GXSetVerifyCallback**](#function-gxsetverifycallback) ([**GXVerifyCallback**](_g_x_verify_8h.md#typedef-gxverifycallback) cb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetVerifyLevel**](#function-gxsetverifylevel) ([**GXWarningLevel**](_g_x_verify_8h.md#enum-gxwarninglevel) level) <br> |




























## Public Types Documentation




### typedef GXVerifyCallback 

```C++
typedef void(* GXVerifyCallback) (GXWarningLevel level, u32 id, char *msg);
```




<hr>



### enum GXWarningLevel 

```C++
enum GXWarningLevel {
    GX_WARN_NONE,
    GX_WARN_SEVERE,
    GX_WARN_MEDIUM,
    GX_WARN_ALL
};
```




<hr>
## Public Functions Documentation




### function GXSetVerifyCallback 

```C++
GXVerifyCallback GXSetVerifyCallback (
    GXVerifyCallback cb
) 
```




<hr>



### function GXSetVerifyLevel 

```C++
void GXSetVerifyLevel (
    GXWarningLevel level
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/include/dolphin/gx/GXVerify.h`

