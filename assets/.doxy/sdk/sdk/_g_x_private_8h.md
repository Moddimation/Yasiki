

# File GXPrivate.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**gx**](dir_b80c028b3e970eff7f2a07684ffcf104.md) **>** [**GXPrivate.h**](_g_x_private_8h.md)

[Go to the source code of this file](_g_x_private_8h_source.md)



* `#include <dolphin/gx.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**\_\_GXData\_struct**](struct_____g_x_data__struct.md) <br> |
| struct | [**\_\_GXFifoObj**](struct_____g_x_fifo_obj.md) <br> |
| struct | [**\_\_GXVerifyData**](struct_____g_x_verify_data.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_GXData\_struct**](struct_____g_x_data__struct.md) | [**GXData**](#typedef-gxdata)  <br> |
| enum  | [**GXWarnID**](#enum-gxwarnid)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_GXFifoObj**](struct_____g_x_fifo_obj.md) | [**\_\_GXFifoObj**](#typedef-__gxfifoobj)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_GXVerifyData**](struct_____g_x_verify_data.md) | [**\_\_GXVerifyData**](#typedef-__gxverifydata)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**GXData**](_g_x_private_8h.md#typedef-gxdata) \* | [**\_\_GXData**](#variable-__gxdata)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_cpReg**](#variable-__cpreg)  <br> |
|  [**\_\_GXVerifyData**](struct_____g_x_verify_data.md) \* | [**\_\_gxVerif**](#variable-__gxverif)  <br> |
|  [**s8**](types_8h.md#typedef-s8) | [**\_\_gxvDummyStr**](#variable-__gxvdummystr)  <br> |
|  [**GXWarningLevel**](_g_x_verify_8h.md#enum-gxwarninglevel) | [**\_\_gxvWarnLev**](#variable-__gxvwarnlev)  <br> |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_gxvWarnings**](#variable-__gxvwarnings)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_memReg**](#variable-__memreg)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_peReg**](#variable-__pereg)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_piReg**](#variable-__pireg)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXAbort**](#function-__gxabort) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXBypass**](#function-__gxbypass) ([**u32**](types_8h.md#typedef-u32) reg) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXCleanGPFifo**](#function-__gxcleangpfifo) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXFifoInit**](#function-__gxfifoinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXFlushTextureState**](#function-__gxflushtexturestate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXGetSUTexSize**](#function-__gxgetsutexsize) ([**GXTexCoordID**](_g_x_enum_8h.md#typedef-gxtexcoordid) coord, [**u16**](types_8h.md#typedef-u16) \* width, [**u16**](types_8h.md#typedef-u16) \* height) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXInsaneWatermark**](#function-__gxinsanewatermark) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXPEInit**](#function-__gxpeinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXPrintShadowState**](#function-__gxprintshadowstate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**\_\_GXReadPEReg**](#function-__gxreadpereg) ([**u32**](types_8h.md#typedef-u32) reg) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSaveCPUFifoAux**](#function-__gxsavecpufifoaux) ([**\_\_GXFifoObj**](struct_____g_x_fifo_obj.md) \* realFifo) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSendFlushPrim**](#function-__gxsendflushprim) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetBWDials**](#function-__gxsetbwdials) ([**u16**](types_8h.md#typedef-u16) cpDial, [**u16**](types_8h.md#typedef-u16) tcDial, [**u16**](types_8h.md#typedef-u16) peDial, [**u16**](types_8h.md#typedef-u16) cpuRdDial, [**u16**](types_8h.md#typedef-u16) cpuWrDial) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetDirtyState**](#function-__gxsetdirtystate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetGenMode**](#function-__gxsetgenmode) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetMatrixIndex**](#function-__gxsetmatrixindex) ([**GXAttr**](_g_x_enum_8h.md#typedef-gxattr) matIdxAttr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetProjection**](#function-__gxsetprojection) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetRange**](#function-__gxsetrange) ([**f32**](types_8h.md#typedef-f32) nearz, [**f32**](types_8h.md#typedef-f32) fgSideX) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetSUTexRegs**](#function-__gxsetsutexregs) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetTmemConfig**](#function-__gxsettmemconfig) ([**u32**](types_8h.md#typedef-u32) config) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetVAT**](#function-__gxsetvat) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetVCD**](#function-__gxsetvcd) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetViewport**](#function-__gxsetviewport) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXShadowDispList**](#function-__gxshadowdisplist) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* list, [**u32**](types_8h.md#typedef-u32) nbytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXShadowIndexState**](#function-__gxshadowindexstate) ([**u32**](types_8h.md#typedef-u32) idx\_reg, [**u32**](types_8h.md#typedef-u32) reg\_data) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXUpdateBPMask**](#function-__gxupdatebpmask) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXVerifyBUMP**](#function-__gxverifybump) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXVerifyCP**](#function-__gxverifycp) ([**GXVtxFmt**](_g_x_enum_8h.md#typedef-gxvtxfmt) fmt) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXVerifyGlobal**](#function-__gxverifyglobal) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXVerifyPE**](#function-__gxverifype) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXVerifySU**](#function-__gxverifysu) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXVerifyState**](#function-__gxverifystate) ([**GXVtxFmt**](_g_x_enum_8h.md#typedef-gxvtxfmt) vtxfmt) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXVerifyTEV**](#function-__gxverifytev) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXVerifyTEX**](#function-__gxverifytex) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXVerifyXF**](#function-__gxverifyxf) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GetImageTileCount**](#function-__getimagetilecount) ([**GXTexFmt**](_g_x_enum_8h.md#typedef-gxtexfmt) fmt, [**u16**](types_8h.md#typedef-u16) wd, [**u16**](types_8h.md#typedef-u16) ht, [**u32**](types_8h.md#typedef-u32) \* rowTiles, [**u32**](types_8h.md#typedef-u32) \* colTiles, [**u32**](types_8h.md#typedef-u32) \* cmpTiles) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_GXReadCPCounterU32**](#function-__gxreadcpcounteru32) ([**u32**](types_8h.md#typedef-u32) regAddrL, [**u32**](types_8h.md#typedef-u32) regAddrH) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_GXReadMEMCounterU32**](#function-__gxreadmemcounteru32) ([**u32**](types_8h.md#typedef-u32) regAddrL, [**u32**](types_8h.md#typedef-u32) regAddrH) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_GXReadPECounterU32**](#function-__gxreadpecounteru32) ([**u32**](types_8h.md#typedef-u32) regAddrL, [**u32**](types_8h.md#typedef-u32) regAddrH) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**CHECK\_GXBEGIN**](_g_x_private_8h.md#define-check_gxbegin) (line, name) `[**ASSERTMSGLINE**](_c_a_r_d_private_8h.md#define-card_max_mount_step) (line, ![**\_\_GXinBegin**](_c_a_r_d_private_8h.md#define-card_max_mount_step), "'" name "' is [**not**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**allowed**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**between**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXBegin**](_g_x_geometry_8h.md#function-gxbegin)/[**GXEnd"**](_c_a_r_d_private_8h.md#define-card_max_mount_step))`<br> |
| define  | [**CHECK\_IN\_BEGIN**](_g_x_private_8h.md#define-check_in_begin) (line, f) `[**ASSERTMSGLINE**](_c_a_r_d_private_8h.md#define-card_max_mount_step) (line, ![**\_\_GXinBegin**](_c_a_r_d_private_8h.md#define-card_max_mount_step), "'" #f "' is [**not**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**allowed**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**between**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXBegin**](_g_x_geometry_8h.md#function-gxbegin)/[**GXEnd"**](_c_a_r_d_private_8h.md#define-card_max_mount_step))`<br> |
| define  | [**GET\_REG\_FIELD**](_g_x_private_8h.md#define-get_reg_field) (reg, size, shift) `(([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step))(([**reg**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) &gt;&gt; ([**shift**](_c_a_r_d_private_8h.md#define-card_max_mount_step))) & ((1 &lt;&lt; ([**size**](____ppc__eabi__init_8cpp.md#variable-size))) - 1))`<br> |
| define  | [**GX\_GET\_CP\_REG**](_g_x_private_8h.md#define-gx_get_cp_reg) (offset) `([**u16**](types_8h.md#typedef-u16)) (\*([**vu16**](types_8h.md#typedef-vu16)\*)(([**vu16**](types_8h.md#typedef-vu16)\*)([**\_\_cpReg**](_g_x_init_8c.md#variable-__cpreg)) + (offset)))`<br> |
| define  | [**GX\_GET\_MEM\_REG**](_g_x_private_8h.md#define-gx_get_mem_reg) (offset) `([**u16**](types_8h.md#typedef-u16)) (\*([**vu16**](types_8h.md#typedef-vu16)\*)(([**vu16**](types_8h.md#typedef-vu16)\*)([**\_\_memReg**](_g_x_init_8c.md#variable-__memreg)) + (offset)))`<br> |
| define  | [**GX\_GET\_PE\_REG**](_g_x_private_8h.md#define-gx_get_pe_reg) (offset) `([**u16**](types_8h.md#typedef-u16)) (\*([**vu16**](types_8h.md#typedef-vu16)\*)(([**vu16**](types_8h.md#typedef-vu16)\*)([**\_\_peReg**](_g_x_init_8c.md#variable-__pereg)) + (offset)))`<br> |
| define  | [**GX\_GET\_PI\_REG**](_g_x_private_8h.md#define-gx_get_pi_reg) (offset) `([**u32**](types_8h.md#typedef-u32)) (\*([**vu32**](types_8h.md#typedef-vu32)\*)(([**vu32**](types_8h.md#typedef-vu32)\*)([**\_\_piReg**](_g_x_init_8c.md#variable-__pireg)) + (offset)))`<br> |
| define  | [**GX\_SET\_CP\_REG**](_g_x_private_8h.md#define-gx_set_cp_reg) (offset, val) `(\*([**vu16**](types_8h.md#typedef-vu16)\*)(([**vu16**](types_8h.md#typedef-vu16)\*)([**\_\_cpReg**](_g_x_init_8c.md#variable-__cpreg)) + (offset)) = ([**u16**](types_8h.md#typedef-u16))(val))`<br> |
| define  | [**GX\_SET\_MEM\_REG**](_g_x_private_8h.md#define-gx_set_mem_reg) (offset, val) `(\*([**vu16**](types_8h.md#typedef-vu16)\*)(([**vu16**](types_8h.md#typedef-vu16)\*)([**\_\_memReg**](_g_x_init_8c.md#variable-__memreg)) + (offset)) = ([**u16**](types_8h.md#typedef-u16))(val)`<br> |
| define  | [**GX\_SET\_PE\_REG**](_g_x_private_8h.md#define-gx_set_pe_reg) (offset, val) `(\*([**vu16**](types_8h.md#typedef-vu16)\*)(([**vu16**](types_8h.md#typedef-vu16)\*)([**\_\_peReg**](_g_x_init_8c.md#variable-__pereg)) + (offset)) = ([**u16**](types_8h.md#typedef-u16))(val))`<br> |
| define  | [**GX\_SET\_PI\_REG**](_g_x_private_8h.md#define-gx_set_pi_reg) (offset, val) `(\*([**vu32**](types_8h.md#typedef-vu32)\*)(([**vu32**](types_8h.md#typedef-vu32)\*)([**\_\_piReg**](_g_x_init_8c.md#variable-__pireg)) + (offset)) = ([**u32**](types_8h.md#typedef-u32))(val))`<br> |
| define  | [**GX\_WRITE\_RAS\_REG**](_g_x_private_8h.md#define-gx_write_ras_reg) (value) `/* multi line expression */`<br> |
| define  | [**GX\_WRITE\_SOME\_REG2**](_g_x_private_8h.md#define-gx_write_some_reg2) (a, b, c, addr) `/* multi line expression */`<br> |
| define  | [**GX\_WRITE\_SOME\_REG3**](_g_x_private_8h.md#define-gx_write_some_reg3) (a, b, c, addr) `/* multi line expression */`<br> |
| define  | [**GX\_WRITE\_SOME\_REG4**](_g_x_private_8h.md#define-gx_write_some_reg4) (a, b, c, addr) `/* multi line expression */`<br> |
| define  | [**GX\_WRITE\_XF\_REG**](_g_x_private_8h.md#define-gx_write_xf_reg) (addr, value) `/* multi line expression */`<br> |
| define  | [**GX\_WRITE\_XF\_REG\_2**](_g_x_private_8h.md#define-gx_write_xf_reg_2) (addr, value) `/* multi line expression */`<br> |
| define  | [**GX\_WRITE\_XF\_REG\_F**](_g_x_private_8h.md#define-gx_write_xf_reg_f) (addr, value) `/* multi line expression */`<br> |
| define  | [**SET\_REG\_FIELD**](_g_x_private_8h.md#define-set_reg_field) (line, reg, size, shift, val) `/* multi line expression */`<br> |
| define  | [**VERIF\_RAS\_REG**](_g_x_private_8h.md#define-verif_ras_reg) (value) `(([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step))0)`<br> |
| define  | [**VERIF\_XF\_REG**](_g_x_private_8h.md#define-verif_xf_reg) (addr, value) `(([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step))0)`<br> |
| define  | [**VERIF\_XF\_REG\_alt**](_g_x_private_8h.md#define-verif_xf_reg_alt) (addr, value) `(([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step))0)`<br> |
| define  | [**\_\_GX\_WARN**](_g_x_private_8h.md#define-__gx_warn) (id) `([**\_\_gxVerif**](_g_x_private_8h.md#variable-__gxverif)-&gt;[**cb**](fstload_8c.md#function-cb) ([**\_\_gxvWarnLev**](_g_x_private_8h.md#variable-__gxvwarnlev)[(id)], (id), [**\_\_gxvWarnings**](_g_x_private_8h.md#variable-__gxvwarnings)[(id)]))`<br> |
| define  | [**\_\_GX\_WARN2**](_g_x_private_8h.md#define-__gx_warn2) (level, id) `([**\_\_gxVerif**](_g_x_private_8h.md#variable-__gxverif)-&gt;[**cb**](fstload_8c.md#function-cb) (level, (id), [**\_\_gxvWarnings**](_g_x_private_8h.md#variable-__gxvwarnings)[(id)]))`<br> |
| define  | [**\_\_GX\_WARN2F**](_g_x_private_8h.md#define-__gx_warn2f) (level, id, ...) `/* multi line expression */`<br> |
| define  | [**\_\_GX\_WARNF**](_g_x_private_8h.md#define-__gx_warnf) (id, ...) `/* multi line expression */`<br> |

## Public Types Documentation




### typedef GXData 

```C++
typedef struct __GXData_struct GXData;
```




<hr>



### enum GXWarnID 

```C++
enum GXWarnID {
    GXWARN_INVALID_VTX_FMT = 0,
    GXWARN_TEX_SIZE_INIT = 1,
    GXWARN_SCISSOR_RECT_LEFT = 2,
    GXWARN_SCISSOR_RECT_TOP = 3,
    GXWARN_SCISSOR_RECT_RIGHT = 4,
    GXWARN_SCISSOR_RECT_BOT = 5,
    GXWARN_SAMPLE_VALUE = 6,
    GXWARN_BUMP_CMD = 7,
    GXWARN_INVALID_INDIRECT = 8,
    GXWARN_INDIRECT_MTX = 9,
    GXWARN_IND_TEX_NO_INIT = 10,
    GXWARN_IND_TEX_NO_SCALE = 11,
    GXWARN_IND_TEX_BUMP = 12,
    GXWARN_BUMP_ACCUMULATION = 13,
    GXWARN_BUMP_ALPHA_EN = 14,
    GXWARN_IND_DIR_MASK = 15,
    GXWARN_TEV_TEX_REF = 16,
    GXWARN_TEV_INV_TEX_COORD = 17,
    GXWARN_IND_DIR_BOTH = 18,
    GXWARN_TEX_CONFIG = 19,
    GXWARN_TEX_BASE = 20,
    GXWARN_TLUT_CONFIG = 21,
    GXWARN_TEX_POW2 = 22,
    GXWARN_TEX_CLAMP = 23,
    GXWARN_TEX_MIN_FILT = 24,
    GXWARN_MIN_LOD = 25,
    GXWARN_MAX_LOD = 26,
    GXWARN_DIAG_LOD = 27,
    GXWARN_TEX_ANISO = 28,
    GXWARN_TEX_FIELD = 29,
    GXWARN_TEX_MPEG = 30,
    GXWARN_RND_CLR_INDX = 31,
    GXWARN_TEV_ENV = 32,
    GXWARN_TEV_INV_CHAN = 33,
    GXWARN_TEV_NULL_TEX = 34,
    GXWARN_TEV_NULL_TEX_A = 35,
    GXWARN_TEV_DIRTY_REG = 36,
    GXWARN_TEV_DIRTY_REG_A = 37,
    GXWARN_TEV_CLR_CLAMP = 38,
    GXWARN_TEV_A_CLAMP = 39,
    GXWARN_ZTEX_OFFSET = 40,
    GXWARN_ZTEX_INVALID = 41,
    GXWARN_TEV_LAST_CLR = 42,
    GXWARN_TEV_LAST_A = 43,
    GXWARN_TEV_LAST_CLR_WRAP = 44,
    GXWARN_TEV_LAST_A_WRAP = 45,
    GXWARN_Z_BEFORE_T_A = 46,
    GXWARN_BLEND_LOGICOP = 47,
    GXWARN_DITHER_MODE = 48,
    GXWARN_MULTISAMP0 = 49,
    GXWARN_MULTISAMP1 = 50,
    GXWARN_SAMP_ORDER = 51,
    GXWARN_INVALID_TG_TYPE = 52,
    GXWARN_XF_CTRL_UNINIT = 53,
    GXWARN_XF_CTRL_INIT = 54,
    GXWARN_INV_COLOR_TG_COMB = 55,
    GXWARN_INV_NUM_COLORS = 56,
    GXWARN_VTX_NO_GEOM = 57,
    GXWARN_CLR_XF0_CP1 = 58,
    GXWARN_CLR_XF1_CP0 = 59,
    GXWARN_CLR_XF1_CP2 = 60,
    GXWARN_CLR_XF2_CPN1 = 61,
    GXWARN_CLR_XF2_CPN2 = 62,
    GXWARN_INV_IVS_CLR = 63,
    GXWARN_NRM_XF0_CP1 = 64,
    GXWARN_NRM_XF0_CP3 = 65,
    GXWARN_NRM_XF1_CP0 = 66,
    GXWARN_NRM_XF1_CP3 = 67,
    GXWARN_NRM_XF3_CP1 = 68,
    GXWARN_NRM_XF3_CP0 = 69,
    GXWARN_INV_IVS_NRM = 70,
    GXWARN_TEX_XFN_CPM = 71,
    GXWARN_TEX_SRC_NPOS = 72,
    GXWARN_TEX_SRC_NNRM = 73,
    GXWARN_TEX_SRC_NCLR0 = 74,
    GXWARN_TEX_SRC_NCLR1 = 75,
    GXWARN_TEX_SRC_NNBT = 76,
    GXWARN_TEX_SRC_NTEX = 77,
    GXWARN_INV_TEX_SRC = 78,
    GXWARN_INV_TG_ORDER = 79,
    GXWARN_BM_INV_MTX_NDX = 80,
    GXWARN_BM_INV_TEX = 81,
    GXWARN_BM_INV_LIT_POS = 82,
    GXWARN_BM_NO_NBT = 83,
    GXWARN_INV_TEX_NUM = 84,
    GXWARN_INV_TG_SRC = 85,
    GXWARN_CLR_ADDR_UNINIT = 86,
    GXWARN_CLR_MAT_UNINIT = 87,
    GXWARN_CLR_AMB_UNINIT = 88,
    GXWARN_CLR_INV_SPEC = 89,
    GXWARN_CLR_NO_NRM = 90,
    GXWARN_CLR_INV_MTX_NDX = 91,
    GXWARN_VAL_INFINITY = 92,
    GXWARN_VAL_NAN = 93,
    GXWARN_VAL_SMALL = 94,
    GXWARN_VAL_LARGE = 95,
    GXWARN_MTX1_UNINIT = 96,
    GXWARN_GM_UNINIT = 97,
    GXWARN_TEX_XFN_SUM = 98,
    GXWARN_CLR_XFN_SUM = 99,
    GXWARN_INV_NUM_ANY_TEX = 100,
    GXWARN_INV_NUM_REG_TEX = 101,
    GXWARN_INV_NUM_BM_TEX = 102,
    GXWARN_INV_NUM_CLR_TEX = 103,
    GXWARN_INV_CLR_TEX = 104,
    GXWARN_DUP_CLR_TEX = 105,
    GXWARN_BM_INV_MTX_VAL = 106,
    GXWARN_TEX_INV_MTX_VAL = 107,
    GXWARN_LIT_INV_REG = 108,
    GXWARN_CLR_INV_MTX_VAL = 109,
    GXWARN_INV_MTX_VAL = 110,
    GXWARN_ADDR_UNINIT = 111,
    GXWARN_REG_UNINIT = 112,
    GXWARN_MAX = 113
};
```




<hr>



### typedef \_\_GXFifoObj 

```C++
typedef struct __GXFifoObj __GXFifoObj;
```




<hr>



### typedef \_\_GXVerifyData 

```C++
typedef struct __GXVerifyData __GXVerifyData;
```




<hr>
## Public Attributes Documentation




### variable \_\_GXData 

```C++
GXData* __GXData;
```




<hr>



### variable \_\_cpReg 

```C++
void* __cpReg;
```




<hr>



### variable \_\_gxVerif 

```C++
__GXVerifyData* __gxVerif;
```




<hr>



### variable \_\_gxvDummyStr 

```C++
s8 __gxvDummyStr[256];
```




<hr>



### variable \_\_gxvWarnLev 

```C++
GXWarningLevel __gxvWarnLev[];
```




<hr>



### variable \_\_gxvWarnings 

```C++
char* __gxvWarnings[125];
```




<hr>



### variable \_\_memReg 

```C++
void* __memReg;
```




<hr>



### variable \_\_peReg 

```C++
void* __peReg;
```




<hr>



### variable \_\_piReg 

```C++
void* __piReg;
```




<hr>
## Public Functions Documentation




### function \_\_GXAbort 

```C++
void __GXAbort () 
```




<hr>



### function \_\_GXBypass 

```C++
void __GXBypass (
    u32 reg
) 
```




<hr>



### function \_\_GXCleanGPFifo 

```C++
void __GXCleanGPFifo (
    void
) 
```




<hr>



### function \_\_GXFifoInit 

```C++
void __GXFifoInit (
    void
) 
```




<hr>



### function \_\_GXFlushTextureState 

```C++
void __GXFlushTextureState (
    void
) 
```




<hr>



### function \_\_GXGetSUTexSize 

```C++
void __GXGetSUTexSize (
    GXTexCoordID coord,
    u16 * width,
    u16 * height
) 
```




<hr>



### function \_\_GXInsaneWatermark 

```C++
void __GXInsaneWatermark (
    void
) 
```




<hr>



### function \_\_GXPEInit 

```C++
void __GXPEInit (
    void
) 
```




<hr>



### function \_\_GXPrintShadowState 

```C++
void __GXPrintShadowState (
    void
) 
```




<hr>



### function \_\_GXReadPEReg 

```C++
u16 __GXReadPEReg (
    u32 reg
) 
```




<hr>



### function \_\_GXSaveCPUFifoAux 

```C++
void __GXSaveCPUFifoAux (
    __GXFifoObj * realFifo
) 
```




<hr>



### function \_\_GXSendFlushPrim 

```C++
void __GXSendFlushPrim (
    void
) 
```




<hr>



### function \_\_GXSetBWDials 

```C++
void __GXSetBWDials (
    u16 cpDial,
    u16 tcDial,
    u16 peDial,
    u16 cpuRdDial,
    u16 cpuWrDial
) 
```




<hr>



### function \_\_GXSetDirtyState 

```C++
void __GXSetDirtyState (
    void
) 
```




<hr>



### function \_\_GXSetGenMode 

```C++
void __GXSetGenMode (
    void
) 
```




<hr>



### function \_\_GXSetMatrixIndex 

```C++
void __GXSetMatrixIndex (
    GXAttr matIdxAttr
) 
```




<hr>



### function \_\_GXSetProjection 

```C++
void __GXSetProjection (
    void
) 
```




<hr>



### function \_\_GXSetRange 

```C++
void __GXSetRange (
    f32 nearz,
    f32 fgSideX
) 
```




<hr>



### function \_\_GXSetSUTexRegs 

```C++
void __GXSetSUTexRegs (
    void
) 
```




<hr>



### function \_\_GXSetTmemConfig 

```C++
void __GXSetTmemConfig (
    u32 config
) 
```




<hr>



### function \_\_GXSetVAT 

```C++
void __GXSetVAT (
    void
) 
```




<hr>



### function \_\_GXSetVCD 

```C++
void __GXSetVCD (
    void
) 
```




<hr>



### function \_\_GXSetViewport 

```C++
void __GXSetViewport () 
```




<hr>



### function \_\_GXShadowDispList 

```C++
void __GXShadowDispList (
    void * list,
    u32 nbytes
) 
```




<hr>



### function \_\_GXShadowIndexState 

```C++
void __GXShadowIndexState (
    u32 idx_reg,
    u32 reg_data
) 
```




<hr>



### function \_\_GXUpdateBPMask 

```C++
void __GXUpdateBPMask (
    void
) 
```




<hr>



### function \_\_GXVerifyBUMP 

```C++
void __GXVerifyBUMP (
    void
) 
```




<hr>



### function \_\_GXVerifyCP 

```C++
void __GXVerifyCP (
    GXVtxFmt fmt
) 
```




<hr>



### function \_\_GXVerifyGlobal 

```C++
void __GXVerifyGlobal (
    void
) 
```




<hr>



### function \_\_GXVerifyPE 

```C++
void __GXVerifyPE (
    void
) 
```




<hr>



### function \_\_GXVerifySU 

```C++
void __GXVerifySU (
    void
) 
```




<hr>



### function \_\_GXVerifyState 

```C++
void __GXVerifyState (
    GXVtxFmt vtxfmt
) 
```




<hr>



### function \_\_GXVerifyTEV 

```C++
void __GXVerifyTEV (
    void
) 
```




<hr>



### function \_\_GXVerifyTEX 

```C++
void __GXVerifyTEX (
    void
) 
```




<hr>



### function \_\_GXVerifyXF 

```C++
void __GXVerifyXF (
    void
) 
```




<hr>



### function \_\_GetImageTileCount 

```C++
void __GetImageTileCount (
    GXTexFmt fmt,
    u16 wd,
    u16 ht,
    u32 * rowTiles,
    u32 * colTiles,
    u32 * cmpTiles
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_GXReadCPCounterU32 

```C++
static inline u32 __GXReadCPCounterU32 (
    u32 regAddrL,
    u32 regAddrH
) 
```




<hr>



### function \_\_GXReadMEMCounterU32 

```C++
static inline u32 __GXReadMEMCounterU32 (
    u32 regAddrL,
    u32 regAddrH
) 
```




<hr>



### function \_\_GXReadPECounterU32 

```C++
static inline u32 __GXReadPECounterU32 (
    u32 regAddrL,
    u32 regAddrH
) 
```




<hr>
## Macro Definition Documentation





### define CHECK\_GXBEGIN 

```C++
#define CHECK_GXBEGIN (
    line,
    name
) `ASSERTMSGLINE (line, ! __GXinBegin , "'" name "' is not  allowed  between  GXBegin / GXEnd" )`
```




<hr>



### define CHECK\_IN\_BEGIN 

```C++
#define CHECK_IN_BEGIN (
    line,
    f
) `ASSERTMSGLINE (line, ! __GXinBegin , "'" #f "' is not  allowed  between  GXBegin / GXEnd" )`
```




<hr>



### define GET\_REG\_FIELD 

```C++
#define GET_REG_FIELD (
    reg,
    size,
    shift
) `(( int )(( reg ) >> ( shift )) & ((1 << ( size )) - 1))`
```




<hr>



### define GX\_GET\_CP\_REG 

```C++
#define GX_GET_CP_REG (
    offset
) `( u16 ) (*( vu16 *)(( vu16 *)( __cpReg ) + (offset)))`
```




<hr>



### define GX\_GET\_MEM\_REG 

```C++
#define GX_GET_MEM_REG (
    offset
) `( u16 ) (*( vu16 *)(( vu16 *)( __memReg ) + (offset)))`
```




<hr>



### define GX\_GET\_PE\_REG 

```C++
#define GX_GET_PE_REG (
    offset
) `( u16 ) (*( vu16 *)(( vu16 *)( __peReg ) + (offset)))`
```




<hr>



### define GX\_GET\_PI\_REG 

```C++
#define GX_GET_PI_REG (
    offset
) `( u32 ) (*( vu32 *)(( vu32 *)( __piReg ) + (offset)))`
```




<hr>



### define GX\_SET\_CP\_REG 

```C++
#define GX_SET_CP_REG (
    offset,
    val
) `(*( vu16 *)(( vu16 *)( __cpReg ) + (offset)) = ( u16 )(val))`
```




<hr>



### define GX\_SET\_MEM\_REG 

```C++
#define GX_SET_MEM_REG (
    offset,
    val
) `(*( vu16 *)(( vu16 *)( __memReg ) + (offset)) = ( u16 )(val)`
```




<hr>



### define GX\_SET\_PE\_REG 

```C++
#define GX_SET_PE_REG (
    offset,
    val
) `(*( vu16 *)(( vu16 *)( __peReg ) + (offset)) = ( u16 )(val))`
```




<hr>



### define GX\_SET\_PI\_REG 

```C++
#define GX_SET_PI_REG (
    offset,
    val
) `(*( vu32 *)(( vu32 *)( __piReg ) + (offset)) = ( u32 )(val))`
```




<hr>



### define GX\_WRITE\_RAS\_REG 

```C++
#define GX_WRITE_RAS_REG (
    value
) `/* multi line expression */`
```




<hr>



### define GX\_WRITE\_SOME\_REG2 

```C++
#define GX_WRITE_SOME_REG2 (
    a,
    b,
    c,
    addr
) `/* multi line expression */`
```




<hr>



### define GX\_WRITE\_SOME\_REG3 

```C++
#define GX_WRITE_SOME_REG3 (
    a,
    b,
    c,
    addr
) `/* multi line expression */`
```




<hr>



### define GX\_WRITE\_SOME\_REG4 

```C++
#define GX_WRITE_SOME_REG4 (
    a,
    b,
    c,
    addr
) `/* multi line expression */`
```




<hr>



### define GX\_WRITE\_XF\_REG 

```C++
#define GX_WRITE_XF_REG (
    addr,
    value
) `/* multi line expression */`
```




<hr>



### define GX\_WRITE\_XF\_REG\_2 

```C++
#define GX_WRITE_XF_REG_2 (
    addr,
    value
) `/* multi line expression */`
```




<hr>



### define GX\_WRITE\_XF\_REG\_F 

```C++
#define GX_WRITE_XF_REG_F (
    addr,
    value
) `/* multi line expression */`
```




<hr>



### define SET\_REG\_FIELD 

```C++
#define SET_REG_FIELD (
    line,
    reg,
    size,
    shift,
    val
) `/* multi line expression */`
```




<hr>



### define VERIF\_RAS\_REG 

```C++
#define VERIF_RAS_REG (
    value
) `(( void )0)`
```




<hr>



### define VERIF\_XF\_REG 

```C++
#define VERIF_XF_REG (
    addr,
    value
) `(( void )0)`
```




<hr>



### define VERIF\_XF\_REG\_alt 

```C++
#define VERIF_XF_REG_alt (
    addr,
    value
) `(( void )0)`
```




<hr>



### define \_\_GX\_WARN 

```C++
#define __GX_WARN (
    id
) `( __gxVerif -> cb ( __gxvWarnLev [(id)], (id), __gxvWarnings [(id)]))`
```




<hr>



### define \_\_GX\_WARN2 

```C++
#define __GX_WARN2 (
    level,
    id
) `( __gxVerif -> cb (level, (id), __gxvWarnings [(id)]))`
```




<hr>



### define \_\_GX\_WARN2F 

```C++
#define __GX_WARN2F (
    level,
    id,
    ...
) `/* multi line expression */`
```




<hr>



### define \_\_GX\_WARNF 

```C++
#define __GX_WARNF (
    id,
    ...
) `/* multi line expression */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/gx/GXPrivate.h`

