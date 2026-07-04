

# File GXCommandList.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXCommandList.h**](_g_x_command_list_8h.md)

[Go to the source code of this file](_g_x_command_list_8h_source.md)



* `#include <types.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**GXTexImage0Ids**](#variable-gxteximage0ids)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**GXTexImage1Ids**](#variable-gxteximage1ids)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**GXTexImage2Ids**](#variable-gxteximage2ids)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**GXTexImage3Ids**](#variable-gxteximage3ids)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**GXTexMode0Ids**](#variable-gxtexmode0ids)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**GXTexMode1Ids**](#variable-gxtexmode1ids)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**GXTexTlutIds**](#variable-gxtextlutids)  <br> |











































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**GX\_CMD\_CALL\_DL**](_g_x_command_list_8h.md#define-gx_cmd_call_dl)  `0x40`<br> |
| define  | [**GX\_CMD\_INVAL\_VTX**](_g_x_command_list_8h.md#define-gx_cmd_inval_vtx)  `0x48`<br> |
| define  | [**GX\_DRAW\_LINES**](_g_x_command_list_8h.md#define-gx_draw_lines)  `0xA8`<br> |
| define  | [**GX\_DRAW\_LINE\_STRIP**](_g_x_command_list_8h.md#define-gx_draw_line_strip)  `0xB0`<br> |
| define  | [**GX\_DRAW\_POINTS**](_g_x_command_list_8h.md#define-gx_draw_points)  `0xB8`<br> |
| define  | [**GX\_DRAW\_QUADS**](_g_x_command_list_8h.md#define-gx_draw_quads)  `0x80`<br> |
| define  | [**GX\_DRAW\_TRIANGLES**](_g_x_command_list_8h.md#define-gx_draw_triangles)  `0x90`<br> |
| define  | [**GX\_DRAW\_TRIANGLE\_FAN**](_g_x_command_list_8h.md#define-gx_draw_triangle_fan)  `0xA0`<br> |
| define  | [**GX\_DRAW\_TRIANGLE\_STRIP**](_g_x_command_list_8h.md#define-gx_draw_triangle_strip)  `0x98`<br> |
| define  | [**GX\_LOAD\_BP\_REG**](_g_x_command_list_8h.md#define-gx_load_bp_reg)  `0x61`<br> |
| define  | [**GX\_LOAD\_CP\_REG**](_g_x_command_list_8h.md#define-gx_load_cp_reg)  `0x08`<br> |
| define  | [**GX\_LOAD\_INDX\_A**](_g_x_command_list_8h.md#define-gx_load_indx_a)  `0x20`<br> |
| define  | [**GX\_LOAD\_INDX\_B**](_g_x_command_list_8h.md#define-gx_load_indx_b)  `0x28`<br> |
| define  | [**GX\_LOAD\_INDX\_C**](_g_x_command_list_8h.md#define-gx_load_indx_c)  `0x30`<br> |
| define  | [**GX\_LOAD\_INDX\_D**](_g_x_command_list_8h.md#define-gx_load_indx_d)  `0x38`<br> |
| define  | [**GX\_LOAD\_XF\_REG**](_g_x_command_list_8h.md#define-gx_load_xf_reg)  `0x10`<br> |
| define  | [**GX\_NOP**](_g_x_command_list_8h.md#define-gx_nop)  `0x00`<br> |
| define  | [**GX\_OPCODE\_MASK**](_g_x_command_list_8h.md#define-gx_opcode_mask)  `0xF8`<br> |
| define  | [**GX\_VAT\_MASK**](_g_x_command_list_8h.md#define-gx_vat_mask)  `0x07`<br> |

## Public Attributes Documentation




### variable GXTexImage0Ids 

```C++
u8 GXTexImage0Ids[8];
```




<hr>



### variable GXTexImage1Ids 

```C++
u8 GXTexImage1Ids[8];
```




<hr>



### variable GXTexImage2Ids 

```C++
u8 GXTexImage2Ids[8];
```




<hr>



### variable GXTexImage3Ids 

```C++
u8 GXTexImage3Ids[8];
```




<hr>



### variable GXTexMode0Ids 

```C++
u8 GXTexMode0Ids[8];
```




<hr>



### variable GXTexMode1Ids 

```C++
u8 GXTexMode1Ids[8];
```




<hr>



### variable GXTexTlutIds 

```C++
u8 GXTexTlutIds[8];
```




<hr>
## Macro Definition Documentation





### define GX\_CMD\_CALL\_DL 

```C++
#define GX_CMD_CALL_DL `0x40`
```




<hr>



### define GX\_CMD\_INVAL\_VTX 

```C++
#define GX_CMD_INVAL_VTX `0x48`
```




<hr>



### define GX\_DRAW\_LINES 

```C++
#define GX_DRAW_LINES `0xA8`
```




<hr>



### define GX\_DRAW\_LINE\_STRIP 

```C++
#define GX_DRAW_LINE_STRIP `0xB0`
```




<hr>



### define GX\_DRAW\_POINTS 

```C++
#define GX_DRAW_POINTS `0xB8`
```




<hr>



### define GX\_DRAW\_QUADS 

```C++
#define GX_DRAW_QUADS `0x80`
```




<hr>



### define GX\_DRAW\_TRIANGLES 

```C++
#define GX_DRAW_TRIANGLES `0x90`
```




<hr>



### define GX\_DRAW\_TRIANGLE\_FAN 

```C++
#define GX_DRAW_TRIANGLE_FAN `0xA0`
```




<hr>



### define GX\_DRAW\_TRIANGLE\_STRIP 

```C++
#define GX_DRAW_TRIANGLE_STRIP `0x98`
```




<hr>



### define GX\_LOAD\_BP\_REG 

```C++
#define GX_LOAD_BP_REG `0x61`
```




<hr>



### define GX\_LOAD\_CP\_REG 

```C++
#define GX_LOAD_CP_REG `0x08`
```




<hr>



### define GX\_LOAD\_INDX\_A 

```C++
#define GX_LOAD_INDX_A `0x20`
```




<hr>



### define GX\_LOAD\_INDX\_B 

```C++
#define GX_LOAD_INDX_B `0x28`
```




<hr>



### define GX\_LOAD\_INDX\_C 

```C++
#define GX_LOAD_INDX_C `0x30`
```




<hr>



### define GX\_LOAD\_INDX\_D 

```C++
#define GX_LOAD_INDX_D `0x38`
```




<hr>



### define GX\_LOAD\_XF\_REG 

```C++
#define GX_LOAD_XF_REG `0x10`
```




<hr>



### define GX\_NOP 

```C++
#define GX_NOP `0x00`
```




<hr>



### define GX\_OPCODE\_MASK 

```C++
#define GX_OPCODE_MASK `0xF8`
```




<hr>



### define GX\_VAT\_MASK 

```C++
#define GX_VAT_MASK `0x07`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/gx/GXCommandList.h`

