

# File G2D.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**G2D.h**](_g2_d_8h.md)

[Go to the source code of this file](_g2_d_8h_source.md)



* `#include <dolphin/gx.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**G2DGlob**](struct_g2_d_glob.md) <br> |
| struct | [**G2DLayer**](struct_g2_d_layer.md) <br> |
| struct | [**G2DMatDesc**](struct_g2_d_mat_desc.md) <br> |
| struct | [**G2DPosOri**](struct_g2_d_pos_ori.md) <br> |
| struct | [**G2DSprite**](struct_g2_d_sprite.md) <br> |
| struct | [**G2DTileDesc**](struct_g2_d_tile_desc.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**G2DGlob**](struct_g2_d_glob.md) | [**G2DGlob**](#typedef-g2dglob)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**G2DLayer**](struct_g2_d_layer.md) | [**G2DLayer**](#typedef-g2dlayer)  <br> |
| enum  | [**G2DMatCtg**](#enum-g2dmatctg)  <br> |
| typedef [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**G2DMatCtg**](_g2_d_8h.md#enum-g2dmatctg) | [**G2DMatCtg**](#typedef-g2dmatctg)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**G2DMatDesc**](struct_g2_d_mat_desc.md) | [**G2DMatDesc**](#typedef-g2dmatdesc)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**G2DPosOri**](struct_g2_d_pos_ori.md) | [**G2DPosOri**](#typedef-g2dposori)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**G2DSprite**](struct_g2_d_sprite.md) | [**G2DSprite**](#typedef-g2dsprite)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**G2DTileDesc**](struct_g2_d_tile_desc.md) | [**G2DTileDesc**](#typedef-g2dtiledesc)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**G2DDrawLayer**](#function-g2ddrawlayer) ([**G2DLayer**](struct_g2_d_layer.md) \* layer, [**s8**](types_8h.md#typedef-s8) \* aSortBuffer) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**G2DDrawSprite**](#function-g2ddrawsprite) ([**G2DSprite**](struct_g2_d_sprite.md) \* sprite, [**G2DPosOri**](struct_g2_d_pos_ori.md) \* po) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**G2DInitSprite**](#function-g2dinitsprite) ([**G2DSprite**](struct_g2_d_sprite.md) \* sprite) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**G2DInitWorld**](#function-g2dinitworld) ([**u32**](types_8h.md#typedef-u32) nWorldX, [**u32**](types_8h.md#typedef-u32) nWorldY) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**G2DSetCamera**](#function-g2dsetcamera) ([**G2DPosOri**](struct_g2_d_pos_ori.md) \* po) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**G2DSetViewport**](#function-g2dsetviewport) ([**u16**](types_8h.md#typedef-u16) nLeft, [**u16**](types_8h.md#typedef-u16) nTop, [**u16**](types_8h.md#typedef-u16) nWidth, [**u16**](types_8h.md#typedef-u16) nHeight) <br> |




























## Public Types Documentation




### typedef G2DGlob 

```C++
typedef struct G2DGlob G2DGlob;
```




<hr>



### typedef G2DLayer 

```C++
typedef struct G2DLayer G2DLayer;
```




<hr>



### enum G2DMatCtg 

```C++
enum G2DMatCtg {
    G2D_CTG_TEXTURE,
    G2D_CTG_RGB_DIRECT,
    G2D_CTG_RGBA_INDEX8,
    G2D_CTG_EMPTY
};
```




<hr>



### typedef G2DMatCtg 

```C++
typedef enum G2DMatCtg G2DMatCtg;
```




<hr>



### typedef G2DMatDesc 

```C++
typedef struct G2DMatDesc G2DMatDesc;
```




<hr>



### typedef G2DPosOri 

```C++
typedef struct G2DPosOri G2DPosOri;
```




<hr>



### typedef G2DSprite 

```C++
typedef struct G2DSprite G2DSprite;
```




<hr>



### typedef G2DTileDesc 

```C++
typedef struct G2DTileDesc G2DTileDesc;
```




<hr>
## Public Functions Documentation




### function G2DDrawLayer 

```C++
void G2DDrawLayer (
    G2DLayer * layer,
    s8 * aSortBuffer
) 
```




<hr>



### function G2DDrawSprite 

```C++
void G2DDrawSprite (
    G2DSprite * sprite,
    G2DPosOri * po
) 
```




<hr>



### function G2DInitSprite 

```C++
void G2DInitSprite (
    G2DSprite * sprite
) 
```




<hr>



### function G2DInitWorld 

```C++
void G2DInitWorld (
    u32 nWorldX,
    u32 nWorldY
) 
```




<hr>



### function G2DSetCamera 

```C++
void G2DSetCamera (
    G2DPosOri * po
) 
```




<hr>



### function G2DSetViewport 

```C++
void G2DSetViewport (
    u16 nLeft,
    u16 nTop,
    u16 nWidth,
    u16 nHeight
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/G2D.h`

