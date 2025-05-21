

# File GXVerify.h



[**FileList**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**gx**](dir_9c5d6c2893da168c7817d80a53db0c8c.md) **>** [**GXVerify.h**](_g_x_verify_8h.md)

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
The documentation for this class was generated from the following file `DolphinSDK/include/dolphin/gx/GXVerify.h`

