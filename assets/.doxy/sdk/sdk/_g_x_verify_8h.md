

# File GXVerify.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXVerify.h**](_g_x_verify_8h.md)

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
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/gx/GXVerify.h`

