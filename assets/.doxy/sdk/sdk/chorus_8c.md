

# File chorus.c



[**FileList**](files.md) **>** [**axfx**](dir_2bd0f0afbf5da90c596578eb9887bbaf.md) **>** [**chorus.c**](chorus_8c.md)

[Go to the source code of this file](chorus_8c_source.md)



* `#include <dolphin/ax.h>`
* `#include <dolphin/axfx.h>`
* `#include <dolphin.h>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**double**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**i2fMagic**](#variable-i2fmagic)   = `4503601774854144.0`<br> |
|  [**f32**](types_8h.md#typedef-f32) | [**rsmpTab12khz**](#variable-rsmptab12khz)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXChorusCallback**](#function-axfxchoruscallback) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_BUFFERUPDATE**](struct_a_x_f_x___b_u_f_f_e_r_u_p_d_a_t_e.md) \* bufferUpdate, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_CHORUS**](struct_a_x_f_x___c_h_o_r_u_s.md) \* chorus) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXChorusInit**](#function-axfxchorusinit) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_CHORUS**](struct_a_x_f_x___c_h_o_r_u_s.md) \* c) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXChorusSettings**](#function-axfxchorussettings) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_CHORUS**](struct_a_x_f_x___c_h_o_r_u_s.md) \* c) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXChorusShutdown**](#function-axfxchorusshutdown) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_CHORUS**](struct_a_x_f_x___c_h_o_r_u_s.md) \* c) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**do\_src1**](#function-do_src1) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_CHORUS\_SRCINFO**](struct_a_x_f_x___c_h_o_r_u_s___s_r_c_i_n_f_o.md) \* src) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**do\_src1**](#function-do_src1) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_CHORUS\_SRCINFO**](struct_a_x_f_x___c_h_o_r_u_s___s_r_c_i_n_f_o.md) \* src) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**do\_src2**](#function-do_src2) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_CHORUS\_SRCINFO**](struct_a_x_f_x___c_h_o_r_u_s___s_r_c_i_n_f_o.md) \* src) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**do\_src2**](#function-do_src2) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_CHORUS\_SRCINFO**](struct_a_x_f_x___c_h_o_r_u_s___s_r_c_i_n_f_o.md) \* src) <br> |


























## Public Static Attributes Documentation




### variable i2fMagic 

```C++
const double i2fMagic;
```




<hr>



### variable rsmpTab12khz 

```C++
f32 rsmpTab12khz[512];
```




<hr>
## Public Functions Documentation




### function AXFXChorusCallback 

```C++
void AXFXChorusCallback (
    struct  AXFX_BUFFERUPDATE * bufferUpdate,
    struct  AXFX_CHORUS * chorus
) 
```




<hr>



### function AXFXChorusInit 

```C++
int AXFXChorusInit (
    struct  AXFX_CHORUS * c
) 
```




<hr>



### function AXFXChorusSettings 

```C++
int AXFXChorusSettings (
    struct  AXFX_CHORUS * c
) 
```




<hr>



### function AXFXChorusShutdown 

```C++
int AXFXChorusShutdown (
    struct  AXFX_CHORUS * c
) 
```




<hr>
## Public Static Functions Documentation




### function do\_src1 

```C++
static void do_src1 (
    struct  AXFX_CHORUS_SRCINFO * src
) 
```




<hr>



### function do\_src1 

```C++
static asm  void do_src1 (
    register  struct  AXFX_CHORUS_SRCINFO * src
) 
```




<hr>



### function do\_src2 

```C++
static void do_src2 (
    struct  AXFX_CHORUS_SRCINFO * src
) 
```




<hr>



### function do\_src2 

```C++
static asm  void do_src2 (
    register  struct  AXFX_CHORUS_SRCINFO * src
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/axfx/chorus.c`

