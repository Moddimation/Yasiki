

# File G2D.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**G2D**](dir_3ded385f2f52d830bf47f6ba87534aff.md) **>** [**G2D.c**](_g2_d_8c.md)

[Go to the source code of this file](_g2_d_8c_source.md)



* `#include <dolphin/G2D.h>`
* `#include <dolphin/gx.h>`
* `#include <dolphin.h>`
* `#include "fake_tgmath.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**G2DGlob**](struct_g2_d_glob.md) | [**glob**](#variable-glob)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**G2DDrawLayer**](#function-g2ddrawlayer) ([**G2DLayer**](struct_g2_d_layer.md) \* layer, [**s8**](types_8h.md#typedef-s8) \* aSortBuffer) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**G2DDrawSprite**](#function-g2ddrawsprite) ([**G2DSprite**](struct_g2_d_sprite.md) \* sprite, [**G2DPosOri**](struct_g2_d_pos_ori.md) \* po) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**G2DInitSprite**](#function-g2dinitsprite) ([**G2DSprite**](struct_g2_d_sprite.md) \* sprite) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**G2DInitWorld**](#function-g2dinitworld) ([**u32**](types_8h.md#typedef-u32) nWorldX, [**u32**](types_8h.md#typedef-u32) nWorldY) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**G2DSetCamera**](#function-g2dsetcamera) ([**G2DPosOri**](struct_g2_d_pos_ori.md) \* po) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**G2DSetViewport**](#function-g2dsetviewport) ([**u16**](types_8h.md#typedef-u16) nLeft, [**u16**](types_8h.md#typedef-u16) nTop, [**u16**](types_8h.md#typedef-u16) nWidth, [**u16**](types_8h.md#typedef-u16) nHeight) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FillSection**](#function-fillsection) ([**G2DLayer**](struct_g2_d_layer.md) \* layer, [**s8**](types_8h.md#typedef-s8) \* aSortBuffer, [**s32**](types_8h.md#typedef-s32) \* nScanLine, [**s32**](types_8h.md#typedef-s32) nEvent, [**s16**](types_8h.md#typedef-s16) \* nIdx, [**s32**](types_8h.md#typedef-s32) \* nL, [**s32**](types_8h.md#typedef-s32) \* nR, [**f32**](types_8h.md#typedef-f32) \* rLeft, [**f32**](types_8h.md#typedef-f32) \* rRight, [**f32**](types_8h.md#typedef-f32) rStep0, [**f32**](types_8h.md#typedef-f32) rStep1, [**s32**](types_8h.md#typedef-s32) nMapX, [**s32**](types_8h.md#typedef-s32) nMapY) <br> |


























## Public Static Attributes Documentation




### variable glob 

```C++
G2DGlob glob;
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
## Public Static Functions Documentation




### function FillSection 

```C++
static inline void FillSection (
    G2DLayer * layer,
    s8 * aSortBuffer,
    s32 * nScanLine,
    s32 nEvent,
    s16 * nIdx,
    s32 * nL,
    s32 * nR,
    f32 * rLeft,
    f32 * rRight,
    f32 rStep0,
    f32 rStep1,
    s32 nMapX,
    s32 nMapY
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/G2D/G2D.c`

