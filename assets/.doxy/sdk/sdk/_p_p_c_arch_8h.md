

# File PPCArch.h



[**FileList**](files.md) **>** [**base**](dir_9f8de99fa7a9339568ee4ba26058c5aa.md) **>** [**PPCArch.h**](_p_p_c_arch_8h.md)

[Go to the source code of this file](_p_p_c_arch_8h_source.md)



* `#include "types.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**PPC\_DMA\_L\_t**](struct_p_p_c___d_m_a___l__t.md) <br> |
| struct | [**PPC\_DMA\_U\_t**](struct_p_p_c___d_m_a___u__t.md) <br> |
| struct | [**PPC\_GQR\_t**](struct_p_p_c___g_q_r__t.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| union  | [**PPC\_DMA\_L\_u**](#union-ppc_dma_l_u)  <br> |
| union  | [**PPC\_DMA\_U\_u**](#union-ppc_dma_u_u)  <br> |
| union  | [**PPC\_GQR\_u**](#union-ppc_gqr_u)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PMBegin**](#function-pmbegin) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PMCycles**](#function-pmcycles) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PMEnd**](#function-pmend) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PMInstructions**](#function-pminstructions) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PML1FetchMisses**](#function-pml1fetchmisses) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PML1MissCycles**](#function-pml1misscycles) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCAndCMsr**](#function-ppcandcmsr) ([**u32**](types_8h.md#typedef-u32) value) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCAndMsr**](#function-ppcandmsr) ([**u32**](types_8h.md#typedef-u32) value) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCDisableSpeculation**](#function-ppcdisablespeculation) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCEieio**](#function-ppceieio) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCEnableSpeculation**](#function-ppcenablespeculation) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCHalt**](#function-ppchalt) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfdec**](#function-ppcmfdec) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfdmaL**](#function-ppcmfdmal) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfdmaU**](#function-ppcmfdmau) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMffpscr**](#function-ppcmffpscr) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfhid0**](#function-ppcmfhid0) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfhid1**](#function-ppcmfhid1) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfhid2**](#function-ppcmfhid2) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfl2cr**](#function-ppcmfl2cr) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfmmcr0**](#function-ppcmfmmcr0) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfmmcr1**](#function-ppcmfmmcr1) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfmsr**](#function-ppcmfmsr) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfpmc1**](#function-ppcmfpmc1) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfpmc2**](#function-ppcmfpmc2) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfpmc3**](#function-ppcmfpmc3) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfpmc4**](#function-ppcmfpmc4) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfpvr**](#function-ppcmfpvr) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfsia**](#function-ppcmfsia) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCMfwpar**](#function-ppcmfwpar) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMtdec**](#function-ppcmtdec) ([**u32**](types_8h.md#typedef-u32) newDec) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMtdmaL**](#function-ppcmtdmal) ([**u32**](types_8h.md#typedef-u32) newdmal) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMtdmaU**](#function-ppcmtdmau) ([**u32**](types_8h.md#typedef-u32) newdmau) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMtfpscr**](#function-ppcmtfpscr) ([**u32**](types_8h.md#typedef-u32) newFPSCR) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMthid0**](#function-ppcmthid0) ([**u32**](types_8h.md#typedef-u32) newHID0) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMthid2**](#function-ppcmthid2) ([**u32**](types_8h.md#typedef-u32) newhid2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMtl2cr**](#function-ppcmtl2cr) ([**u32**](types_8h.md#typedef-u32) newL2cr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMtmmcr0**](#function-ppcmtmmcr0) ([**u32**](types_8h.md#typedef-u32) newMmcr0) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMtmmcr1**](#function-ppcmtmmcr1) ([**u32**](types_8h.md#typedef-u32) newMmcr0) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMtmsr**](#function-ppcmtmsr) ([**u32**](types_8h.md#typedef-u32) newMSR) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMtpmc1**](#function-ppcmtpmc1) ([**u32**](types_8h.md#typedef-u32) newPmc1) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMtpmc2**](#function-ppcmtpmc2) ([**u32**](types_8h.md#typedef-u32) newPmc1) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMtpmc3**](#function-ppcmtpmc3) ([**u32**](types_8h.md#typedef-u32) newPmc1) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMtpmc4**](#function-ppcmtpmc4) ([**u32**](types_8h.md#typedef-u32) newPmc1) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMtsia**](#function-ppcmtsia) ([**u32**](types_8h.md#typedef-u32) newSia) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCMtwpar**](#function-ppcmtwpar) ([**u32**](types_8h.md#typedef-u32) newwpar) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PPCOrMsr**](#function-ppcormsr) ([**u32**](types_8h.md#typedef-u32) value) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCSetFpIEEEMode**](#function-ppcsetfpieeemode) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCSetFpNonIEEEMode**](#function-ppcsetfpnonieeemode) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PPCSync**](#function-ppcsync) () <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**CTR**](_p_p_c_arch_8h.md#define-ctr)  `9`<br> |
| define  | [**DABR**](_p_p_c_arch_8h.md#define-dabr)  `1013`<br> |
| define  | [**DAR**](_p_p_c_arch_8h.md#define-dar)  `19`<br> |
| define  | [**DBAT0L**](_p_p_c_arch_8h.md#define-dbat0l)  `537`<br> |
| define  | [**DBAT0U**](_p_p_c_arch_8h.md#define-dbat0u)  `536`<br> |
| define  | [**DBAT1L**](_p_p_c_arch_8h.md#define-dbat1l)  `539`<br> |
| define  | [**DBAT1U**](_p_p_c_arch_8h.md#define-dbat1u)  `538`<br> |
| define  | [**DBAT2L**](_p_p_c_arch_8h.md#define-dbat2l)  `541`<br> |
| define  | [**DBAT2U**](_p_p_c_arch_8h.md#define-dbat2u)  `540`<br> |
| define  | [**DBAT3L**](_p_p_c_arch_8h.md#define-dbat3l)  `543`<br> |
| define  | [**DBAT3U**](_p_p_c_arch_8h.md#define-dbat3u)  `542`<br> |
| define  | [**DEC**](_p_p_c_arch_8h.md#define-dec)  `22`<br> |
| define  | [**DMA\_L**](_p_p_c_arch_8h.md#define-dma_l)  `923`<br> |
| define  | [**DMA\_L\_FLUSH**](_p_p_c_arch_8h.md#define-dma_l_flush)  `0x00000001`<br> |
| define  | [**DMA\_L\_LC\_ADDR\_MASK**](_p_p_c_arch_8h.md#define-dma_l_lc_addr_mask)  `0xFFFFFFE0`<br> |
| define  | [**DMA\_L\_LEN\_MASK**](_p_p_c_arch_8h.md#define-dma_l_len_mask)  `0x0000000C`<br> |
| define  | [**DMA\_L\_LOAD**](_p_p_c_arch_8h.md#define-dma_l_load)  `0x00000010`<br> |
| define  | [**DMA\_L\_STORE**](_p_p_c_arch_8h.md#define-dma_l_store)  `0x00000000`<br> |
| define  | [**DMA\_L\_TRIGGER**](_p_p_c_arch_8h.md#define-dma_l_trigger)  `0x00000002`<br> |
| define  | [**DMA\_U**](_p_p_c_arch_8h.md#define-dma_u)  `922`<br> |
| define  | [**DMA\_U\_ADDR\_MASK**](_p_p_c_arch_8h.md#define-dma_u_addr_mask)  `0xFFFFFFE0`<br> |
| define  | [**DMA\_U\_LEN\_U\_MASK**](_p_p_c_arch_8h.md#define-dma_u_len_u_mask)  `0x0000001F`<br> |
| define  | [**DSISR**](_p_p_c_arch_8h.md#define-dsisr)  `18`<br> |
| define  | [**EAR**](_p_p_c_arch_8h.md#define-ear)  `282`<br> |
| define  | [**FPSCR\_FEX**](_p_p_c_arch_8h.md#define-fpscr_fex)  `0x40000000`<br> |
| define  | [**FPSCR\_FEX\_BIT**](_p_p_c_arch_8h.md#define-fpscr_fex_bit)  `1`<br> |
| define  | [**FPSCR\_FI**](_p_p_c_arch_8h.md#define-fpscr_fi)  `0x00020000`<br> |
| define  | [**FPSCR\_FI\_BIT**](_p_p_c_arch_8h.md#define-fpscr_fi_bit)  `14`<br> |
| define  | [**FPSCR\_FR**](_p_p_c_arch_8h.md#define-fpscr_fr)  `0x00040000`<br> |
| define  | [**FPSCR\_FR\_BIT**](_p_p_c_arch_8h.md#define-fpscr_fr_bit)  `13`<br> |
| define  | [**FPSCR\_FX**](_p_p_c_arch_8h.md#define-fpscr_fx)  `0x80000000`<br> |
| define  | [**FPSCR\_FX\_BIT**](_p_p_c_arch_8h.md#define-fpscr_fx_bit)  `0`<br> |
| define  | [**FPSCR\_NI**](_p_p_c_arch_8h.md#define-fpscr_ni)  `0x00000004`<br> |
| define  | [**FPSCR\_NI\_BIT**](_p_p_c_arch_8h.md#define-fpscr_ni_bit)  `29`<br> |
| define  | [**FPSCR\_OE**](_p_p_c_arch_8h.md#define-fpscr_oe)  `0x00000040`<br> |
| define  | [**FPSCR\_OE\_BIT**](_p_p_c_arch_8h.md#define-fpscr_oe_bit)  `25`<br> |
| define  | [**FPSCR\_OX**](_p_p_c_arch_8h.md#define-fpscr_ox)  `0x10000000`<br> |
| define  | [**FPSCR\_OX\_BIT**](_p_p_c_arch_8h.md#define-fpscr_ox_bit)  `3`<br> |
| define  | [**FPSCR\_UE**](_p_p_c_arch_8h.md#define-fpscr_ue)  `0x00000020`<br> |
| define  | [**FPSCR\_UE\_BIT**](_p_p_c_arch_8h.md#define-fpscr_ue_bit)  `26`<br> |
| define  | [**FPSCR\_UX**](_p_p_c_arch_8h.md#define-fpscr_ux)  `0x08000000`<br> |
| define  | [**FPSCR\_UX\_BIT**](_p_p_c_arch_8h.md#define-fpscr_ux_bit)  `4`<br> |
| define  | [**FPSCR\_VE**](_p_p_c_arch_8h.md#define-fpscr_ve)  `0x00000080`<br> |
| define  | [**FPSCR\_VE\_BIT**](_p_p_c_arch_8h.md#define-fpscr_ve_bit)  `24`<br> |
| define  | [**FPSCR\_VX**](_p_p_c_arch_8h.md#define-fpscr_vx)  `0x20000000`<br> |
| define  | [**FPSCR\_VXCVI**](_p_p_c_arch_8h.md#define-fpscr_vxcvi)  `0x00000100`<br> |
| define  | [**FPSCR\_VXCVI\_BIT**](_p_p_c_arch_8h.md#define-fpscr_vxcvi_bit)  `23`<br> |
| define  | [**FPSCR\_VXIDI**](_p_p_c_arch_8h.md#define-fpscr_vxidi)  `0x00400000`<br> |
| define  | [**FPSCR\_VXIDI\_BIT**](_p_p_c_arch_8h.md#define-fpscr_vxidi_bit)  `9`<br> |
| define  | [**FPSCR\_VXIMZ**](_p_p_c_arch_8h.md#define-fpscr_vximz)  `0x00100000`<br> |
| define  | [**FPSCR\_VXIMZ\_BIT**](_p_p_c_arch_8h.md#define-fpscr_vximz_bit)  `11`<br> |
| define  | [**FPSCR\_VXISI**](_p_p_c_arch_8h.md#define-fpscr_vxisi)  `0x00800000`<br> |
| define  | [**FPSCR\_VXISI\_BIT**](_p_p_c_arch_8h.md#define-fpscr_vxisi_bit)  `8`<br> |
| define  | [**FPSCR\_VXSNAN**](_p_p_c_arch_8h.md#define-fpscr_vxsnan)  `0x01000000`<br> |
| define  | [**FPSCR\_VXSNAN\_BIT**](_p_p_c_arch_8h.md#define-fpscr_vxsnan_bit)  `7`<br> |
| define  | [**FPSCR\_VXSOFT**](_p_p_c_arch_8h.md#define-fpscr_vxsoft)  `0x00000400`<br> |
| define  | [**FPSCR\_VXSOFT\_BIT**](_p_p_c_arch_8h.md#define-fpscr_vxsoft_bit)  `21`<br> |
| define  | [**FPSCR\_VXSQRT**](_p_p_c_arch_8h.md#define-fpscr_vxsqrt)  `0x00000200`<br> |
| define  | [**FPSCR\_VXSQRT\_BIT**](_p_p_c_arch_8h.md#define-fpscr_vxsqrt_bit)  `22`<br> |
| define  | [**FPSCR\_VXVC**](_p_p_c_arch_8h.md#define-fpscr_vxvc)  `0x00080000`<br> |
| define  | [**FPSCR\_VXVC\_BIT**](_p_p_c_arch_8h.md#define-fpscr_vxvc_bit)  `12`<br> |
| define  | [**FPSCR\_VXZDZ**](_p_p_c_arch_8h.md#define-fpscr_vxzdz)  `0x00200000`<br> |
| define  | [**FPSCR\_VXZDZ\_BIT**](_p_p_c_arch_8h.md#define-fpscr_vxzdz_bit)  `10`<br> |
| define  | [**FPSCR\_VX\_BIT**](_p_p_c_arch_8h.md#define-fpscr_vx_bit)  `2`<br> |
| define  | [**FPSCR\_XE**](_p_p_c_arch_8h.md#define-fpscr_xe)  `0x00000008`<br> |
| define  | [**FPSCR\_XE\_BIT**](_p_p_c_arch_8h.md#define-fpscr_xe_bit)  `28`<br> |
| define  | [**FPSCR\_XX**](_p_p_c_arch_8h.md#define-fpscr_xx)  `0x02000000`<br> |
| define  | [**FPSCR\_XX\_BIT**](_p_p_c_arch_8h.md#define-fpscr_xx_bit)  `6`<br> |
| define  | [**FPSCR\_ZE**](_p_p_c_arch_8h.md#define-fpscr_ze)  `0x00000010`<br> |
| define  | [**FPSCR\_ZE\_BIT**](_p_p_c_arch_8h.md#define-fpscr_ze_bit)  `27`<br> |
| define  | [**FPSCR\_ZX**](_p_p_c_arch_8h.md#define-fpscr_zx)  `0x04000000`<br> |
| define  | [**FPSCR\_ZX\_BIT**](_p_p_c_arch_8h.md#define-fpscr_zx_bit)  `5`<br> |
| define  | [**GQR0**](_p_p_c_arch_8h.md#define-gqr0)  `912`<br> |
| define  | [**GQR1**](_p_p_c_arch_8h.md#define-gqr1)  `913`<br> |
| define  | [**GQR2**](_p_p_c_arch_8h.md#define-gqr2)  `914`<br> |
| define  | [**GQR3**](_p_p_c_arch_8h.md#define-gqr3)  `915`<br> |
| define  | [**GQR4**](_p_p_c_arch_8h.md#define-gqr4)  `916`<br> |
| define  | [**GQR5**](_p_p_c_arch_8h.md#define-gqr5)  `917`<br> |
| define  | [**GQR6**](_p_p_c_arch_8h.md#define-gqr6)  `918`<br> |
| define  | [**GQR7**](_p_p_c_arch_8h.md#define-gqr7)  `919`<br> |
| define  | [**GQR\_LOAD\_SCALE\_MASK**](_p_p_c_arch_8h.md#define-gqr_load_scale_mask)  `0x3F000000`<br> |
| define  | [**GQR\_LOAD\_TYPE\_MASK**](_p_p_c_arch_8h.md#define-gqr_load_type_mask)  `0x00070000`<br> |
| define  | [**GQR\_STORE\_SCALE\_MASK**](_p_p_c_arch_8h.md#define-gqr_store_scale_mask)  `0x00003F00`<br> |
| define  | [**GQR\_STORE\_TYPE\_MASK**](_p_p_c_arch_8h.md#define-gqr_store_type_mask)  `0x00000007`<br> |
| define  | [**HID0**](_p_p_c_arch_8h.md#define-hid0)  `1008`<br> |
| define  | [**HID0\_ABE**](_p_p_c_arch_8h.md#define-hid0_abe)  `0x00000008u`<br> |
| define  | [**HID0\_BCLK**](_p_p_c_arch_8h.md#define-hid0_bclk)  `0x08000000u`<br> |
| define  | [**HID0\_BHT**](_p_p_c_arch_8h.md#define-hid0_bht)  `0x00000004u`<br> |
| define  | [**HID0\_BTIC**](_p_p_c_arch_8h.md#define-hid0_btic)  `0x00000020u`<br> |
| define  | [**HID0\_DBP**](_p_p_c_arch_8h.md#define-hid0_dbp)  `0x40000000u`<br> |
| define  | [**HID0\_DCE**](_p_p_c_arch_8h.md#define-hid0_dce)  `0x00004000u`<br> |
| define  | [**HID0\_DCE\_BIT**](_p_p_c_arch_8h.md#define-hid0_dce_bit)  `17`<br> |
| define  | [**HID0\_DCFA**](_p_p_c_arch_8h.md#define-hid0_dcfa)  `0x00000040u`<br> |
| define  | [**HID0\_DCFI**](_p_p_c_arch_8h.md#define-hid0_dcfi)  `0x00000400u`<br> |
| define  | [**HID0\_DLOCK**](_p_p_c_arch_8h.md#define-hid0_dlock)  `0x00001000u`<br> |
| define  | [**HID0\_DLOCK\_BIT**](_p_p_c_arch_8h.md#define-hid0_dlock_bit)  `19`<br> |
| define  | [**HID0\_DOZE**](_p_p_c_arch_8h.md#define-hid0_doze)  `0x00800000u`<br> |
| define  | [**HID0\_DPM**](_p_p_c_arch_8h.md#define-hid0_dpm)  `0x00100000u`<br> |
| define  | [**HID0\_EBA**](_p_p_c_arch_8h.md#define-hid0_eba)  `0x20000000u`<br> |
| define  | [**HID0\_EBD**](_p_p_c_arch_8h.md#define-hid0_ebd)  `0x10000000u`<br> |
| define  | [**HID0\_ECLK**](_p_p_c_arch_8h.md#define-hid0_eclk)  `0x02000000u`<br> |
| define  | [**HID0\_EMCP**](_p_p_c_arch_8h.md#define-hid0_emcp)  `0x80000000u`<br> |
| define  | [**HID0\_ICE**](_p_p_c_arch_8h.md#define-hid0_ice)  `0x00008000u`<br> |
| define  | [**HID0\_ICE\_BIT**](_p_p_c_arch_8h.md#define-hid0_ice_bit)  `16`<br> |
| define  | [**HID0\_ICFI**](_p_p_c_arch_8h.md#define-hid0_icfi)  `0x00000800u`<br> |
| define  | [**HID0\_IFEM**](_p_p_c_arch_8h.md#define-hid0_ifem)  `0x00000100u`<br> |
| define  | [**HID0\_ILOCK**](_p_p_c_arch_8h.md#define-hid0_ilock)  `0x00002000u`<br> |
| define  | [**HID0\_ILOCK\_BIT**](_p_p_c_arch_8h.md#define-hid0_ilock_bit)  `18`<br> |
| define  | [**HID0\_NAP**](_p_p_c_arch_8h.md#define-hid0_nap)  `0x00400000u`<br> |
| define  | [**HID0\_NHR**](_p_p_c_arch_8h.md#define-hid0_nhr)  `0x00010000u`<br> |
| define  | [**HID0\_NOOPTI**](_p_p_c_arch_8h.md#define-hid0_noopti)  `0x00000001u`<br> |
| define  | [**HID0\_PAR**](_p_p_c_arch_8h.md#define-hid0_par)  `0x01000000u`<br> |
| define  | [**HID0\_SGE**](_p_p_c_arch_8h.md#define-hid0_sge)  `0x00000080u`<br> |
| define  | [**HID0\_SLEEP**](_p_p_c_arch_8h.md#define-hid0_sleep)  `0x00200000u`<br> |
| define  | [**HID0\_SPD**](_p_p_c_arch_8h.md#define-hid0_spd)  `0x00000200u`<br> |
| define  | [**HID1**](_p_p_c_arch_8h.md#define-hid1)  `1009`<br> |
| define  | [**HID2**](_p_p_c_arch_8h.md#define-hid2)  `920`<br> |
| define  | [**HID2\_DCHEE**](_p_p_c_arch_8h.md#define-hid2_dchee)  `0x00080000`<br> |
| define  | [**HID2\_DCHEE\_BIT**](_p_p_c_arch_8h.md#define-hid2_dchee_bit)  `12`<br> |
| define  | [**HID2\_DCHERR**](_p_p_c_arch_8h.md#define-hid2_dcherr)  `0x00800000`<br> |
| define  | [**HID2\_DCHERR\_BIT**](_p_p_c_arch_8h.md#define-hid2_dcherr_bit)  `8`<br> |
| define  | [**HID2\_DCMEE**](_p_p_c_arch_8h.md#define-hid2_dcmee)  `0x00020000`<br> |
| define  | [**HID2\_DCMEE\_BIT**](_p_p_c_arch_8h.md#define-hid2_dcmee_bit)  `14`<br> |
| define  | [**HID2\_DCMERR**](_p_p_c_arch_8h.md#define-hid2_dcmerr)  `0x00200000`<br> |
| define  | [**HID2\_DCMERR\_BIT**](_p_p_c_arch_8h.md#define-hid2_dcmerr_bit)  `10`<br> |
| define  | [**HID2\_DMAQL\_MASK**](_p_p_c_arch_8h.md#define-hid2_dmaql_mask)  `0x0F000000`<br> |
| define  | [**HID2\_DMAQL\_SHIFT**](_p_p_c_arch_8h.md#define-hid2_dmaql_shift)  `24`<br> |
| define  | [**HID2\_DNCEE**](_p_p_c_arch_8h.md#define-hid2_dncee)  `0x00040000`<br> |
| define  | [**HID2\_DNCEE\_BIT**](_p_p_c_arch_8h.md#define-hid2_dncee_bit)  `13`<br> |
| define  | [**HID2\_DNCERR**](_p_p_c_arch_8h.md#define-hid2_dncerr)  `0x00400000`<br> |
| define  | [**HID2\_DNCERR\_BIT**](_p_p_c_arch_8h.md#define-hid2_dncerr_bit)  `9`<br> |
| define  | [**HID2\_DQOEE**](_p_p_c_arch_8h.md#define-hid2_dqoee)  `0x00010000`<br> |
| define  | [**HID2\_DQOEE\_BIT**](_p_p_c_arch_8h.md#define-hid2_dqoee_bit)  `15`<br> |
| define  | [**HID2\_DQOERR**](_p_p_c_arch_8h.md#define-hid2_dqoerr)  `0x00100000`<br> |
| define  | [**HID2\_DQOERR\_BIT**](_p_p_c_arch_8h.md#define-hid2_dqoerr_bit)  `11`<br> |
| define  | [**HID2\_LCE**](_p_p_c_arch_8h.md#define-hid2_lce)  `0x10000000`<br> |
| define  | [**HID2\_LCE\_BIT**](_p_p_c_arch_8h.md#define-hid2_lce_bit)  `3`<br> |
| define  | [**HID2\_LSQE**](_p_p_c_arch_8h.md#define-hid2_lsqe)  `0x80000000`<br> |
| define  | [**HID2\_LSQE\_BIT**](_p_p_c_arch_8h.md#define-hid2_lsqe_bit)  `0`<br> |
| define  | [**HID2\_PSE**](_p_p_c_arch_8h.md#define-hid2_pse)  `0x20000000`<br> |
| define  | [**HID2\_PSE\_BIT**](_p_p_c_arch_8h.md#define-hid2_pse_bit)  `2`<br> |
| define  | [**HID2\_WPE**](_p_p_c_arch_8h.md#define-hid2_wpe)  `0x40000000`<br> |
| define  | [**HID2\_WPE\_BIT**](_p_p_c_arch_8h.md#define-hid2_wpe_bit)  `1`<br> |
| define  | [**IABR**](_p_p_c_arch_8h.md#define-iabr)  `1010`<br> |
| define  | [**IBAT0L**](_p_p_c_arch_8h.md#define-ibat0l)  `529`<br> |
| define  | [**IBAT0U**](_p_p_c_arch_8h.md#define-ibat0u)  `528`<br> |
| define  | [**IBAT1L**](_p_p_c_arch_8h.md#define-ibat1l)  `531`<br> |
| define  | [**IBAT1U**](_p_p_c_arch_8h.md#define-ibat1u)  `530`<br> |
| define  | [**IBAT2L**](_p_p_c_arch_8h.md#define-ibat2l)  `533`<br> |
| define  | [**IBAT2U**](_p_p_c_arch_8h.md#define-ibat2u)  `532`<br> |
| define  | [**IBAT3L**](_p_p_c_arch_8h.md#define-ibat3l)  `535`<br> |
| define  | [**IBAT3U**](_p_p_c_arch_8h.md#define-ibat3u)  `534`<br> |
| define  | [**ICTC**](_p_p_c_arch_8h.md#define-ictc)  `1019`<br> |
| define  | [**L2CR**](_p_p_c_arch_8h.md#define-l2cr)  `1017`<br> |
| define  | [**L2CR\_L2BYP**](_p_p_c_arch_8h.md#define-l2cr_l2byp)  `0x00002000`<br> |
| define  | [**L2CR\_L2CLK\_1\_0**](_p_p_c_arch_8h.md#define-l2cr_l2clk_1_0)  `0x02000000`<br> |
| define  | [**L2CR\_L2CLK\_1\_5**](_p_p_c_arch_8h.md#define-l2cr_l2clk_1_5)  `0x04000000`<br> |
| define  | [**L2CR\_L2CLK\_2\_0**](_p_p_c_arch_8h.md#define-l2cr_l2clk_2_0)  `0x08000000`<br> |
| define  | [**L2CR\_L2CLK\_2\_5**](_p_p_c_arch_8h.md#define-l2cr_l2clk_2_5)  `0x0A000000`<br> |
| define  | [**L2CR\_L2CLK\_3\_0**](_p_p_c_arch_8h.md#define-l2cr_l2clk_3_0)  `0x0C000000`<br> |
| define  | [**L2CR\_L2CS**](_p_p_c_arch_8h.md#define-l2cr_l2cs)  `0x00000200`<br> |
| define  | [**L2CR\_L2CTL**](_p_p_c_arch_8h.md#define-l2cr_l2ctl)  `0x00100000`<br> |
| define  | [**L2CR\_L2CTR\_MASK**](_p_p_c_arch_8h.md#define-l2cr_l2ctr_mask)  `0x000000FE`<br> |
| define  | [**L2CR\_L2DF**](_p_p_c_arch_8h.md#define-l2cr_l2df)  `0x00004000`<br> |
| define  | [**L2CR\_L2DO**](_p_p_c_arch_8h.md#define-l2cr_l2do)  `0x00400000`<br> |
| define  | [**L2CR\_L2DRO**](_p_p_c_arch_8h.md#define-l2cr_l2dro)  `0x00000100`<br> |
| define  | [**L2CR\_L2E**](_p_p_c_arch_8h.md#define-l2cr_l2e)  `0x80000000`<br> |
| define  | [**L2CR\_L2I**](_p_p_c_arch_8h.md#define-l2cr_l2i)  `0x00200000`<br> |
| define  | [**L2CR\_L2IP**](_p_p_c_arch_8h.md#define-l2cr_l2ip)  `0x00000001`<br> |
| define  | [**L2CR\_L2OH\_0\_5**](_p_p_c_arch_8h.md#define-l2cr_l2oh_0_5)  `0x00000000`<br> |
| define  | [**L2CR\_L2OH\_1\_0**](_p_p_c_arch_8h.md#define-l2cr_l2oh_1_0)  `0x00010000`<br> |
| define  | [**L2CR\_L2PE**](_p_p_c_arch_8h.md#define-l2cr_l2pe)  `0x40000000`<br> |
| define  | [**L2CR\_L2SIZ\_1M**](_p_p_c_arch_8h.md#define-l2cr_l2siz_1m)  `0x30000000`<br> |
| define  | [**L2CR\_L2SIZ\_256K**](_p_p_c_arch_8h.md#define-l2cr_l2siz_256k)  `0x10000000`<br> |
| define  | [**L2CR\_L2SIZ\_512K**](_p_p_c_arch_8h.md#define-l2cr_l2siz_512k)  `0x20000000`<br> |
| define  | [**L2CR\_L2SL**](_p_p_c_arch_8h.md#define-l2cr_l2sl)  `0x00008000`<br> |
| define  | [**L2CR\_L2TS**](_p_p_c_arch_8h.md#define-l2cr_l2ts)  `0x00040000`<br> |
| define  | [**L2CR\_L2WT**](_p_p_c_arch_8h.md#define-l2cr_l2wt)  `0x00080000`<br> |
| define  | [**L2CR\_RAM\_FLOW\_THRU\_BURST**](_p_p_c_arch_8h.md#define-l2cr_ram_flow_thru_burst)  `0x00000000`<br> |
| define  | [**L2CR\_RAM\_PIPELINE\_BURST**](_p_p_c_arch_8h.md#define-l2cr_ram_pipeline_burst)  `0x01000000`<br> |
| define  | [**L2CR\_RAM\_PIPELINE\_LATE**](_p_p_c_arch_8h.md#define-l2cr_ram_pipeline_late)  `0x01800000`<br> |
| define  | [**LR**](_p_p_c_arch_8h.md#define-lr)  `8`<br> |
| define  | [**MMCR0**](_p_p_c_arch_8h.md#define-mmcr0)  `952`<br> |
| define  | [**MMCR0\_DIS**](_p_p_c_arch_8h.md#define-mmcr0_dis)  `0x80000000`<br> |
| define  | [**MMCR0\_DISCOUNT**](_p_p_c_arch_8h.md#define-mmcr0_discount)  `0x02000000`<br> |
| define  | [**MMCR0\_DMR**](_p_p_c_arch_8h.md#define-mmcr0_dmr)  `0x08000000`<br> |
| define  | [**MMCR0\_DMS**](_p_p_c_arch_8h.md#define-mmcr0_dms)  `0x10000000`<br> |
| define  | [**MMCR0\_DP**](_p_p_c_arch_8h.md#define-mmcr0_dp)  `0x40000000`<br> |
| define  | [**MMCR0\_DU**](_p_p_c_arch_8h.md#define-mmcr0_du)  `0x20000000`<br> |
| define  | [**MMCR0\_ENINT**](_p_p_c_arch_8h.md#define-mmcr0_enint)  `0x04000000`<br> |
| define  | [**MMCR0\_INTONBITTRANS**](_p_p_c_arch_8h.md#define-mmcr0_intonbittrans)  `0x00400000`<br> |
| define  | [**MMCR0\_PMC1INTCONTROL**](_p_p_c_arch_8h.md#define-mmcr0_pmc1intcontrol)  `0x00008000`<br> |
| define  | [**MMCR0\_PMC1SELECT\_MASK**](_p_p_c_arch_8h.md#define-mmcr0_pmc1select_mask)  `0x00001FC0`<br> |
| define  | [**MMCR0\_PMC1\_Bx\_STALL\_CYCLE**](_p_p_c_arch_8h.md#define-mmcr0_pmc1_bx_stall_cycle)  `0x00000300`<br> |
| define  | [**MMCR0\_PMC1\_Bx\_UNRESOLVED**](_p_p_c_arch_8h.md#define-mmcr0_pmc1_bx_unresolved)  `0x000002C0`<br> |
| define  | [**MMCR0\_PMC1\_CYCLE**](_p_p_c_arch_8h.md#define-mmcr0_pmc1_cycle)  `0x00000040`<br> |
| define  | [**MMCR0\_PMC1\_DISPATCHED**](_p_p_c_arch_8h.md#define-mmcr0_pmc1_dispatched)  `0x00000100`<br> |
| define  | [**MMCR0\_PMC1\_EA**](_p_p_c_arch_8h.md#define-mmcr0_pmc1_ea)  `0x00000200`<br> |
| define  | [**MMCR0\_PMC1\_EIEIO**](_p_p_c_arch_8h.md#define-mmcr0_pmc1_eieio)  `0x00000140`<br> |
| define  | [**MMCR0\_PMC1\_HOLD**](_p_p_c_arch_8h.md#define-mmcr0_pmc1_hold)  `0x00000000`<br> |
| define  | [**MMCR0\_PMC1\_IABR**](_p_p_c_arch_8h.md#define-mmcr0_pmc1_iabr)  `0x00000240`<br> |
| define  | [**MMCR0\_PMC1\_IC\_FETCH\_MISS**](_p_p_c_arch_8h.md#define-mmcr0_pmc1_ic_fetch_miss)  `0x00000340`<br> |
| define  | [**MMCR0\_PMC1\_INSTRUCTION**](_p_p_c_arch_8h.md#define-mmcr0_pmc1_instruction)  `0x00000080`<br> |
| define  | [**MMCR0\_PMC1\_ITLB\_CYCLE**](_p_p_c_arch_8h.md#define-mmcr0_pmc1_itlb_cycle)  `0x00000180`<br> |
| define  | [**MMCR0\_PMC1\_L1\_MISS**](_p_p_c_arch_8h.md#define-mmcr0_pmc1_l1_miss)  `0x00000280`<br> |
| define  | [**MMCR0\_PMC1\_L2\_HIT**](_p_p_c_arch_8h.md#define-mmcr0_pmc1_l2_hit)  `0x000001C0`<br> |
| define  | [**MMCR0\_PMC1\_TRANSITION**](_p_p_c_arch_8h.md#define-mmcr0_pmc1_transition)  `0x000000C0`<br> |
| define  | [**MMCR0\_PMC2INTCONTROL**](_p_p_c_arch_8h.md#define-mmcr0_pmc2intcontrol)  `0x00004000`<br> |
| define  | [**MMCR0\_PMC2SELECT\_MASK**](_p_p_c_arch_8h.md#define-mmcr0_pmc2select_mask)  `0x0000003F`<br> |
| define  | [**MMCR0\_PMC2\_Bx\_FALL\_TROUGH**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_bx_fall_trough)  `0x00000008`<br> |
| define  | [**MMCR0\_PMC2\_Bx\_OUT\_OF\_ORDER**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_bx_out_of_order)  `0x00000010`<br> |
| define  | [**MMCR0\_PMC2\_CYCLE**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_cycle)  `0x00000001`<br> |
| define  | [**MMCR0\_PMC2\_DISPATCHED**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_dispatched)  `0x00000004`<br> |
| define  | [**MMCR0\_PMC2\_HOLD**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_hold)  `0x00000000`<br> |
| define  | [**MMCR0\_PMC2\_IC\_FETCH\_MISS**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_ic_fetch_miss)  `0x0000000F`<br> |
| define  | [**MMCR0\_PMC2\_IC\_MISS**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_ic_miss)  `0x00000005`<br> |
| define  | [**MMCR0\_PMC2\_INSTRUCTION**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_instruction)  `0x00000002`<br> |
| define  | [**MMCR0\_PMC2\_ITLB\_MISS**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_itlb_miss)  `0x00000006`<br> |
| define  | [**MMCR0\_PMC2\_L1\_CASTOUT**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_l1_castout)  `0x0000000D`<br> |
| define  | [**MMCR0\_PMC2\_L2\_I\_MISS**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_l2_i_miss)  `0x00000007`<br> |
| define  | [**MMCR0\_PMC2\_LOAD\_STORE**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_load_store)  `0x0000000B`<br> |
| define  | [**MMCR0\_PMC2\_PR\_SWITCH**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_pr_switch)  `0x00000009`<br> |
| define  | [**MMCR0\_PMC2\_RESERVED\_LOAD**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_reserved_load)  `0x0000000A`<br> |
| define  | [**MMCR0\_PMC2\_SNOOP**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_snoop)  `0x0000000C`<br> |
| define  | [**MMCR0\_PMC2\_SYSTEM**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_system)  `0x0000000E`<br> |
| define  | [**MMCR0\_PMC2\_TRANSITION**](_p_p_c_arch_8h.md#define-mmcr0_pmc2_transition)  `0x00000003`<br> |
| define  | [**MMCR0\_PMCTRIGGER**](_p_p_c_arch_8h.md#define-mmcr0_pmctrigger)  `0x00002000`<br> |
| define  | [**MMCR0\_RTCSELECT\_47**](_p_p_c_arch_8h.md#define-mmcr0_rtcselect_47)  `0x01800000`<br> |
| define  | [**MMCR0\_RTCSELECT\_51**](_p_p_c_arch_8h.md#define-mmcr0_rtcselect_51)  `0x01000000`<br> |
| define  | [**MMCR0\_RTCSELECT\_55**](_p_p_c_arch_8h.md#define-mmcr0_rtcselect_55)  `0x00800000`<br> |
| define  | [**MMCR0\_RTCSELECT\_63**](_p_p_c_arch_8h.md#define-mmcr0_rtcselect_63)  `0x00000000`<br> |
| define  | [**MMCR0\_RTCSELECT\_MASK**](_p_p_c_arch_8h.md#define-mmcr0_rtcselect_mask)  `0x01800000`<br> |
| define  | [**MMCR0\_THRESHOLD**](_p_p_c_arch_8h.md#define-mmcr0_threshold) (n) `(([**n**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) &lt;&lt; 16)`<br> |
| define  | [**MMCR0\_THRESHOLD\_MASK**](_p_p_c_arch_8h.md#define-mmcr0_threshold_mask)  `0x003F0000`<br> |
| define  | [**MMCR1**](_p_p_c_arch_8h.md#define-mmcr1)  `956`<br> |
| define  | [**MMCR1\_PMC3SELECT\_MASK**](_p_p_c_arch_8h.md#define-mmcr1_pmc3select_mask)  `0xF8000000`<br> |
| define  | [**MMCR1\_PMC3\_BPU\_LR\_CR**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_bpu_lr_cr)  `0x88000000`<br> |
| define  | [**MMCR1\_PMC3\_Bx\_SECOND**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_bx_second)  `0x80000000`<br> |
| define  | [**MMCR1\_PMC3\_Bx\_TAKEN**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_bx_taken)  `0x40000000`<br> |
| define  | [**MMCR1\_PMC3\_COND\_STORE**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_cond_store)  `0x50000000`<br> |
| define  | [**MMCR1\_PMC3\_CYCLE**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_cycle)  `0x08000000`<br> |
| define  | [**MMCR1\_PMC3\_DC\_MISS**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_dc_miss)  `0x28000000`<br> |
| define  | [**MMCR1\_PMC3\_DISPATCHED**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_dispatched)  `0x20000000`<br> |
| define  | [**MMCR1\_PMC3\_DTLB\_MISS**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_dtlb_miss)  `0x30000000`<br> |
| define  | [**MMCR1\_PMC3\_FPU**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_fpu)  `0x58000000`<br> |
| define  | [**MMCR1\_PMC3\_HOLD**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_hold)  `0x00000000`<br> |
| define  | [**MMCR1\_PMC3\_INSTRUCTION**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_instruction)  `0x10000000`<br> |
| define  | [**MMCR1\_PMC3\_L1\_MISS\_CYCLE**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_l1_miss_cycle)  `0x78000000`<br> |
| define  | [**MMCR1\_PMC3\_L2\_D\_MISS**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_l2_d_miss)  `0x38000000`<br> |
| define  | [**MMCR1\_PMC3\_L2\_HIT**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_l2_hit)  `0x68000000`<br> |
| define  | [**MMCR1\_PMC3\_L2\_SNOOP\_CASTOUT**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_l2_snoop_castout)  `0x60000000`<br> |
| define  | [**MMCR1\_PMC3\_PM\_SWITCH**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_pm_switch)  `0x48000000`<br> |
| define  | [**MMCR1\_PMC3\_TRANSITION**](_p_p_c_arch_8h.md#define-mmcr1_pmc3_transition)  `0x18000000`<br> |
| define  | [**MMCR1\_PMC4SELECT\_MASK**](_p_p_c_arch_8h.md#define-mmcr1_pmc4select_mask)  `0x07C00000`<br> |
| define  | [**MMCR1\_PMC4\_BPU\_THIRD**](_p_p_c_arch_8h.md#define-mmcr1_pmc4_bpu_third)  `0x03800000`<br> |
| define  | [**MMCR1\_PMC4\_Bx\_MISSED**](_p_p_c_arch_8h.md#define-mmcr1_pmc4_bx_missed)  `0x02000000`<br> |
| define  | [**MMCR1\_PMC4\_COND\_STORE\_INT**](_p_p_c_arch_8h.md#define-mmcr1_pmc4_cond_store_int)  `0x02800000`<br> |
| define  | [**MMCR1\_PMC4\_CYCLE**](_p_p_c_arch_8h.md#define-mmcr1_pmc4_cycle)  `0x00400000`<br> |
| define  | [**MMCR1\_PMC4\_DC\_MISS**](_p_p_c_arch_8h.md#define-mmcr1_pmc4_dc_miss)  `0x07C00000`<br> |
| define  | [**MMCR1\_PMC4\_DISPATCHED**](_p_p_c_arch_8h.md#define-mmcr1_pmc4_dispatched)  `0x01000000`<br> |
| define  | [**MMCR1\_PMC4\_DTLB\_CYCLE**](_p_p_c_arch_8h.md#define-mmcr1_pmc4_dtlb_cycle)  `0x01800000`<br> |
| define  | [**MMCR1\_PMC4\_HOLD**](_p_p_c_arch_8h.md#define-mmcr1_pmc4_hold)  `0x00000000`<br> |
| define  | [**MMCR1\_PMC4\_INSTRUCTION**](_p_p_c_arch_8h.md#define-mmcr1_pmc4_instruction)  `0x00800000`<br> |
| define  | [**MMCR1\_PMC4\_INTEGER**](_p_p_c_arch_8h.md#define-mmcr1_pmc4_integer)  `0x03400000`<br> |
| define  | [**MMCR1\_PMC4\_L2\_CASTOUT**](_p_p_c_arch_8h.md#define-mmcr1_pmc4_l2_castout)  `0x01400000`<br> |
| define  | [**MMCR1\_PMC4\_SNOOP\_RETRY**](_p_p_c_arch_8h.md#define-mmcr1_pmc4_snoop_retry)  `0x03000000`<br> |
| define  | [**MMCR1\_PMC4\_SYNC**](_p_p_c_arch_8h.md#define-mmcr1_pmc4_sync)  `0x02C00000`<br> |
| define  | [**MMCR1\_PMC4\_TRANSITION**](_p_p_c_arch_8h.md#define-mmcr1_pmc4_transition)  `0x00C00000`<br> |
| define  | [**MSR\_BE**](_p_p_c_arch_8h.md#define-msr_be)  `0x00000200`<br> |
| define  | [**MSR\_BE\_BIT**](_p_p_c_arch_8h.md#define-msr_be_bit)  `22`<br> |
| define  | [**MSR\_DR**](_p_p_c_arch_8h.md#define-msr_dr)  `0x00000010`<br> |
| define  | [**MSR\_DR\_BIT**](_p_p_c_arch_8h.md#define-msr_dr_bit)  `27`<br> |
| define  | [**MSR\_EE**](_p_p_c_arch_8h.md#define-msr_ee)  `0x00008000`<br> |
| define  | [**MSR\_EE\_BIT**](_p_p_c_arch_8h.md#define-msr_ee_bit)  `16`<br> |
| define  | [**MSR\_FE0**](_p_p_c_arch_8h.md#define-msr_fe0)  `0x00000800`<br> |
| define  | [**MSR\_FE0\_BIT**](_p_p_c_arch_8h.md#define-msr_fe0_bit)  `20`<br> |
| define  | [**MSR\_FE1**](_p_p_c_arch_8h.md#define-msr_fe1)  `0x00000100`<br> |
| define  | [**MSR\_FE1\_BIT**](_p_p_c_arch_8h.md#define-msr_fe1_bit)  `23`<br> |
| define  | [**MSR\_FP**](_p_p_c_arch_8h.md#define-msr_fp)  `0x00002000`<br> |
| define  | [**MSR\_FP\_BIT**](_p_p_c_arch_8h.md#define-msr_fp_bit)  `18`<br> |
| define  | [**MSR\_ILE**](_p_p_c_arch_8h.md#define-msr_ile)  `0x00010000`<br> |
| define  | [**MSR\_ILE\_BIT**](_p_p_c_arch_8h.md#define-msr_ile_bit)  `15`<br> |
| define  | [**MSR\_IP**](_p_p_c_arch_8h.md#define-msr_ip)  `0x00000040`<br> |
| define  | [**MSR\_IP\_BIT**](_p_p_c_arch_8h.md#define-msr_ip_bit)  `25`<br> |
| define  | [**MSR\_IR**](_p_p_c_arch_8h.md#define-msr_ir)  `0x00000020`<br> |
| define  | [**MSR\_IR\_BIT**](_p_p_c_arch_8h.md#define-msr_ir_bit)  `26`<br> |
| define  | [**MSR\_LE**](_p_p_c_arch_8h.md#define-msr_le)  `0x00000001`<br> |
| define  | [**MSR\_LE\_BIT**](_p_p_c_arch_8h.md#define-msr_le_bit)  `31`<br> |
| define  | [**MSR\_ME**](_p_p_c_arch_8h.md#define-msr_me)  `0x00001000`<br> |
| define  | [**MSR\_ME\_BIT**](_p_p_c_arch_8h.md#define-msr_me_bit)  `19`<br> |
| define  | [**MSR\_PM**](_p_p_c_arch_8h.md#define-msr_pm)  `0x00000004`<br> |
| define  | [**MSR\_PM\_BIT**](_p_p_c_arch_8h.md#define-msr_pm_bit)  `29`<br> |
| define  | [**MSR\_POW**](_p_p_c_arch_8h.md#define-msr_pow)  `0x00040000`<br> |
| define  | [**MSR\_POW\_BIT**](_p_p_c_arch_8h.md#define-msr_pow_bit)  `13`<br> |
| define  | [**MSR\_PR**](_p_p_c_arch_8h.md#define-msr_pr)  `0x00004000`<br> |
| define  | [**MSR\_PR\_BIT**](_p_p_c_arch_8h.md#define-msr_pr_bit)  `17`<br> |
| define  | [**MSR\_RI**](_p_p_c_arch_8h.md#define-msr_ri)  `0x00000002`<br> |
| define  | [**MSR\_RI\_BIT**](_p_p_c_arch_8h.md#define-msr_ri_bit)  `30`<br> |
| define  | [**MSR\_SE**](_p_p_c_arch_8h.md#define-msr_se)  `0x00000400`<br> |
| define  | [**MSR\_SE\_BIT**](_p_p_c_arch_8h.md#define-msr_se_bit)  `21`<br> |
| define  | [**PMC1**](_p_p_c_arch_8h.md#define-pmc1)  `953`<br> |
| define  | [**PMC1\_COUNTER**](_p_p_c_arch_8h.md#define-pmc1_counter)  `0x7FFFFFFF`<br> |
| define  | [**PMC1\_OV**](_p_p_c_arch_8h.md#define-pmc1_ov)  `0x80000000`<br> |
| define  | [**PMC2**](_p_p_c_arch_8h.md#define-pmc2)  `954`<br> |
| define  | [**PMC2\_COUNTER**](_p_p_c_arch_8h.md#define-pmc2_counter)  `0x7FFFFFFF`<br> |
| define  | [**PMC2\_OV**](_p_p_c_arch_8h.md#define-pmc2_ov)  `0x80000000`<br> |
| define  | [**PMC3**](_p_p_c_arch_8h.md#define-pmc3)  `957`<br> |
| define  | [**PMC3\_COUNTER**](_p_p_c_arch_8h.md#define-pmc3_counter)  `0x7FFFFFFF`<br> |
| define  | [**PMC3\_OV**](_p_p_c_arch_8h.md#define-pmc3_ov)  `0x80000000`<br> |
| define  | [**PMC4**](_p_p_c_arch_8h.md#define-pmc4)  `958`<br> |
| define  | [**PMC4\_COUNTER**](_p_p_c_arch_8h.md#define-pmc4_counter)  `0x7FFFFFFF`<br> |
| define  | [**PMC4\_OV**](_p_p_c_arch_8h.md#define-pmc4_ov)  `0x80000000`<br> |
| define  | [**PVR**](_p_p_c_arch_8h.md#define-pvr)  `287`<br> |
| define  | [**SDR1**](_p_p_c_arch_8h.md#define-sdr1)  `25`<br> |
| define  | [**SIA**](_p_p_c_arch_8h.md#define-sia)  `955`<br> |
| define  | [**SPRG0**](_p_p_c_arch_8h.md#define-sprg0)  `272`<br> |
| define  | [**SPRG1**](_p_p_c_arch_8h.md#define-sprg1)  `273`<br> |
| define  | [**SPRG2**](_p_p_c_arch_8h.md#define-sprg2)  `274`<br> |
| define  | [**SPRG3**](_p_p_c_arch_8h.md#define-sprg3)  `275`<br> |
| define  | [**SRR0**](_p_p_c_arch_8h.md#define-srr0)  `26`<br> |
| define  | [**SRR1**](_p_p_c_arch_8h.md#define-srr1)  `27`<br> |
| define  | [**SRR1\_DMA\_BIT**](_p_p_c_arch_8h.md#define-srr1_dma_bit)  `0x00200000`<br> |
| define  | [**SRR1\_L2DP\_BIT**](_p_p_c_arch_8h.md#define-srr1_l2dp_bit)  `0x00100000`<br> |
| define  | [**TBL**](_p_p_c_arch_8h.md#define-tbl)  `284`<br> |
| define  | [**TBU**](_p_p_c_arch_8h.md#define-tbu)  `285`<br> |
| define  | [**THRM1**](_p_p_c_arch_8h.md#define-thrm1)  `1020`<br> |
| define  | [**THRM2**](_p_p_c_arch_8h.md#define-thrm2)  `1021`<br> |
| define  | [**THRM3**](_p_p_c_arch_8h.md#define-thrm3)  `1022`<br> |
| define  | [**UMMCR0**](_p_p_c_arch_8h.md#define-ummcr0)  `936`<br> |
| define  | [**UMMCR1**](_p_p_c_arch_8h.md#define-ummcr1)  `940`<br> |
| define  | [**UPMC1**](_p_p_c_arch_8h.md#define-upmc1)  `937`<br> |
| define  | [**UPMC2**](_p_p_c_arch_8h.md#define-upmc2)  `938`<br> |
| define  | [**UPMC3**](_p_p_c_arch_8h.md#define-upmc3)  `941`<br> |
| define  | [**UPMC4**](_p_p_c_arch_8h.md#define-upmc4)  `942`<br> |
| define  | [**USIA**](_p_p_c_arch_8h.md#define-usia)  `939`<br> |
| define  | [**WPAR**](_p_p_c_arch_8h.md#define-wpar)  `921`<br> |
| define  | [**WPAR\_ADDR**](_p_p_c_arch_8h.md#define-wpar_addr)  `0xFFFFFFE0`<br> |
| define  | [**WPAR\_BNE**](_p_p_c_arch_8h.md#define-wpar_bne)  `0x00000001`<br> |
| define  | [**XER**](_p_p_c_arch_8h.md#define-xer)  `1`<br> |

## Public Types Documentation




### union PPC\_DMA\_L\_u 

```C++

```




<hr>



### union PPC\_DMA\_U\_u 

```C++

```




<hr>



### union PPC\_GQR\_u 

```C++

```




<hr>
## Public Functions Documentation




### function PMBegin 

```C++
void PMBegin (
    void
) 
```




<hr>



### function PMCycles 

```C++
void PMCycles (
    void
) 
```




<hr>



### function PMEnd 

```C++
void PMEnd (
    void
) 
```




<hr>



### function PMInstructions 

```C++
void PMInstructions (
    void
) 
```




<hr>



### function PML1FetchMisses 

```C++
void PML1FetchMisses (
    void
) 
```




<hr>



### function PML1MissCycles 

```C++
void PML1MissCycles (
    void
) 
```




<hr>



### function PPCAndCMsr 

```C++
u32 PPCAndCMsr (
    u32 value
) 
```




<hr>



### function PPCAndMsr 

```C++
u32 PPCAndMsr (
    u32 value
) 
```




<hr>



### function PPCDisableSpeculation 

```C++
void PPCDisableSpeculation () 
```




<hr>



### function PPCEieio 

```C++
void PPCEieio () 
```




<hr>



### function PPCEnableSpeculation 

```C++
void PPCEnableSpeculation () 
```




<hr>



### function PPCHalt 

```C++
void PPCHalt () 
```




<hr>



### function PPCMfdec 

```C++
u32 PPCMfdec (
    void
) 
```




<hr>



### function PPCMfdmaL 

```C++
u32 PPCMfdmaL () 
```




<hr>



### function PPCMfdmaU 

```C++
u32 PPCMfdmaU () 
```




<hr>



### function PPCMffpscr 

```C++
u32 PPCMffpscr () 
```




<hr>



### function PPCMfhid0 

```C++
u32 PPCMfhid0 () 
```




<hr>



### function PPCMfhid1 

```C++
u32 PPCMfhid1 () 
```




<hr>



### function PPCMfhid2 

```C++
u32 PPCMfhid2 () 
```




<hr>



### function PPCMfl2cr 

```C++
u32 PPCMfl2cr () 
```




<hr>



### function PPCMfmmcr0 

```C++
u32 PPCMfmmcr0 () 
```




<hr>



### function PPCMfmmcr1 

```C++
u32 PPCMfmmcr1 () 
```




<hr>



### function PPCMfmsr 

```C++
u32 PPCMfmsr () 
```




<hr>



### function PPCMfpmc1 

```C++
u32 PPCMfpmc1 () 
```




<hr>



### function PPCMfpmc2 

```C++
u32 PPCMfpmc2 () 
```




<hr>



### function PPCMfpmc3 

```C++
u32 PPCMfpmc3 () 
```




<hr>



### function PPCMfpmc4 

```C++
u32 PPCMfpmc4 () 
```




<hr>



### function PPCMfpvr 

```C++
u32 PPCMfpvr () 
```




<hr>



### function PPCMfsia 

```C++
u32 PPCMfsia () 
```




<hr>



### function PPCMfwpar 

```C++
u32 PPCMfwpar () 
```




<hr>



### function PPCMtdec 

```C++
void PPCMtdec (
    u32 newDec
) 
```




<hr>



### function PPCMtdmaL 

```C++
void PPCMtdmaL (
    u32 newdmal
) 
```




<hr>



### function PPCMtdmaU 

```C++
void PPCMtdmaU (
    u32 newdmau
) 
```




<hr>



### function PPCMtfpscr 

```C++
void PPCMtfpscr (
    u32 newFPSCR
) 
```




<hr>



### function PPCMthid0 

```C++
void PPCMthid0 (
    u32 newHID0
) 
```




<hr>



### function PPCMthid2 

```C++
void PPCMthid2 (
    u32 newhid2
) 
```




<hr>



### function PPCMtl2cr 

```C++
void PPCMtl2cr (
    u32 newL2cr
) 
```




<hr>



### function PPCMtmmcr0 

```C++
void PPCMtmmcr0 (
    u32 newMmcr0
) 
```




<hr>



### function PPCMtmmcr1 

```C++
void PPCMtmmcr1 (
    u32 newMmcr0
) 
```




<hr>



### function PPCMtmsr 

```C++
void PPCMtmsr (
    u32 newMSR
) 
```




<hr>



### function PPCMtpmc1 

```C++
void PPCMtpmc1 (
    u32 newPmc1
) 
```




<hr>



### function PPCMtpmc2 

```C++
void PPCMtpmc2 (
    u32 newPmc1
) 
```




<hr>



### function PPCMtpmc3 

```C++
void PPCMtpmc3 (
    u32 newPmc1
) 
```




<hr>



### function PPCMtpmc4 

```C++
void PPCMtpmc4 (
    u32 newPmc1
) 
```




<hr>



### function PPCMtsia 

```C++
void PPCMtsia (
    u32 newSia
) 
```




<hr>



### function PPCMtwpar 

```C++
void PPCMtwpar (
    u32 newwpar
) 
```




<hr>



### function PPCOrMsr 

```C++
u32 PPCOrMsr (
    u32 value
) 
```




<hr>



### function PPCSetFpIEEEMode 

```C++
void PPCSetFpIEEEMode () 
```




<hr>



### function PPCSetFpNonIEEEMode 

```C++
void PPCSetFpNonIEEEMode () 
```




<hr>



### function PPCSync 

```C++
void PPCSync () 
```




<hr>
## Macro Definition Documentation





### define CTR 

```C++
#define CTR `9`
```




<hr>



### define DABR 

```C++
#define DABR `1013`
```




<hr>



### define DAR 

```C++
#define DAR `19`
```




<hr>



### define DBAT0L 

```C++
#define DBAT0L `537`
```




<hr>



### define DBAT0U 

```C++
#define DBAT0U `536`
```




<hr>



### define DBAT1L 

```C++
#define DBAT1L `539`
```




<hr>



### define DBAT1U 

```C++
#define DBAT1U `538`
```




<hr>



### define DBAT2L 

```C++
#define DBAT2L `541`
```




<hr>



### define DBAT2U 

```C++
#define DBAT2U `540`
```




<hr>



### define DBAT3L 

```C++
#define DBAT3L `543`
```




<hr>



### define DBAT3U 

```C++
#define DBAT3U `542`
```




<hr>



### define DEC 

```C++
#define DEC `22`
```




<hr>



### define DMA\_L 

```C++
#define DMA_L `923`
```




<hr>



### define DMA\_L\_FLUSH 

```C++
#define DMA_L_FLUSH `0x00000001`
```




<hr>



### define DMA\_L\_LC\_ADDR\_MASK 

```C++
#define DMA_L_LC_ADDR_MASK `0xFFFFFFE0`
```




<hr>



### define DMA\_L\_LEN\_MASK 

```C++
#define DMA_L_LEN_MASK `0x0000000C`
```




<hr>



### define DMA\_L\_LOAD 

```C++
#define DMA_L_LOAD `0x00000010`
```




<hr>



### define DMA\_L\_STORE 

```C++
#define DMA_L_STORE `0x00000000`
```




<hr>



### define DMA\_L\_TRIGGER 

```C++
#define DMA_L_TRIGGER `0x00000002`
```




<hr>



### define DMA\_U 

```C++
#define DMA_U `922`
```




<hr>



### define DMA\_U\_ADDR\_MASK 

```C++
#define DMA_U_ADDR_MASK `0xFFFFFFE0`
```




<hr>



### define DMA\_U\_LEN\_U\_MASK 

```C++
#define DMA_U_LEN_U_MASK `0x0000001F`
```




<hr>



### define DSISR 

```C++
#define DSISR `18`
```




<hr>



### define EAR 

```C++
#define EAR `282`
```




<hr>



### define FPSCR\_FEX 

```C++
#define FPSCR_FEX `0x40000000`
```




<hr>



### define FPSCR\_FEX\_BIT 

```C++
#define FPSCR_FEX_BIT `1`
```




<hr>



### define FPSCR\_FI 

```C++
#define FPSCR_FI `0x00020000`
```




<hr>



### define FPSCR\_FI\_BIT 

```C++
#define FPSCR_FI_BIT `14`
```




<hr>



### define FPSCR\_FR 

```C++
#define FPSCR_FR `0x00040000`
```




<hr>



### define FPSCR\_FR\_BIT 

```C++
#define FPSCR_FR_BIT `13`
```




<hr>



### define FPSCR\_FX 

```C++
#define FPSCR_FX `0x80000000`
```




<hr>



### define FPSCR\_FX\_BIT 

```C++
#define FPSCR_FX_BIT `0`
```




<hr>



### define FPSCR\_NI 

```C++
#define FPSCR_NI `0x00000004`
```




<hr>



### define FPSCR\_NI\_BIT 

```C++
#define FPSCR_NI_BIT `29`
```




<hr>



### define FPSCR\_OE 

```C++
#define FPSCR_OE `0x00000040`
```




<hr>



### define FPSCR\_OE\_BIT 

```C++
#define FPSCR_OE_BIT `25`
```




<hr>



### define FPSCR\_OX 

```C++
#define FPSCR_OX `0x10000000`
```




<hr>



### define FPSCR\_OX\_BIT 

```C++
#define FPSCR_OX_BIT `3`
```




<hr>



### define FPSCR\_UE 

```C++
#define FPSCR_UE `0x00000020`
```




<hr>



### define FPSCR\_UE\_BIT 

```C++
#define FPSCR_UE_BIT `26`
```




<hr>



### define FPSCR\_UX 

```C++
#define FPSCR_UX `0x08000000`
```




<hr>



### define FPSCR\_UX\_BIT 

```C++
#define FPSCR_UX_BIT `4`
```




<hr>



### define FPSCR\_VE 

```C++
#define FPSCR_VE `0x00000080`
```




<hr>



### define FPSCR\_VE\_BIT 

```C++
#define FPSCR_VE_BIT `24`
```




<hr>



### define FPSCR\_VX 

```C++
#define FPSCR_VX `0x20000000`
```




<hr>



### define FPSCR\_VXCVI 

```C++
#define FPSCR_VXCVI `0x00000100`
```




<hr>



### define FPSCR\_VXCVI\_BIT 

```C++
#define FPSCR_VXCVI_BIT `23`
```




<hr>



### define FPSCR\_VXIDI 

```C++
#define FPSCR_VXIDI `0x00400000`
```




<hr>



### define FPSCR\_VXIDI\_BIT 

```C++
#define FPSCR_VXIDI_BIT `9`
```




<hr>



### define FPSCR\_VXIMZ 

```C++
#define FPSCR_VXIMZ `0x00100000`
```




<hr>



### define FPSCR\_VXIMZ\_BIT 

```C++
#define FPSCR_VXIMZ_BIT `11`
```




<hr>



### define FPSCR\_VXISI 

```C++
#define FPSCR_VXISI `0x00800000`
```




<hr>



### define FPSCR\_VXISI\_BIT 

```C++
#define FPSCR_VXISI_BIT `8`
```




<hr>



### define FPSCR\_VXSNAN 

```C++
#define FPSCR_VXSNAN `0x01000000`
```




<hr>



### define FPSCR\_VXSNAN\_BIT 

```C++
#define FPSCR_VXSNAN_BIT `7`
```




<hr>



### define FPSCR\_VXSOFT 

```C++
#define FPSCR_VXSOFT `0x00000400`
```




<hr>



### define FPSCR\_VXSOFT\_BIT 

```C++
#define FPSCR_VXSOFT_BIT `21`
```




<hr>



### define FPSCR\_VXSQRT 

```C++
#define FPSCR_VXSQRT `0x00000200`
```




<hr>



### define FPSCR\_VXSQRT\_BIT 

```C++
#define FPSCR_VXSQRT_BIT `22`
```




<hr>



### define FPSCR\_VXVC 

```C++
#define FPSCR_VXVC `0x00080000`
```




<hr>



### define FPSCR\_VXVC\_BIT 

```C++
#define FPSCR_VXVC_BIT `12`
```




<hr>



### define FPSCR\_VXZDZ 

```C++
#define FPSCR_VXZDZ `0x00200000`
```




<hr>



### define FPSCR\_VXZDZ\_BIT 

```C++
#define FPSCR_VXZDZ_BIT `10`
```




<hr>



### define FPSCR\_VX\_BIT 

```C++
#define FPSCR_VX_BIT `2`
```




<hr>



### define FPSCR\_XE 

```C++
#define FPSCR_XE `0x00000008`
```




<hr>



### define FPSCR\_XE\_BIT 

```C++
#define FPSCR_XE_BIT `28`
```




<hr>



### define FPSCR\_XX 

```C++
#define FPSCR_XX `0x02000000`
```




<hr>



### define FPSCR\_XX\_BIT 

```C++
#define FPSCR_XX_BIT `6`
```




<hr>



### define FPSCR\_ZE 

```C++
#define FPSCR_ZE `0x00000010`
```




<hr>



### define FPSCR\_ZE\_BIT 

```C++
#define FPSCR_ZE_BIT `27`
```




<hr>



### define FPSCR\_ZX 

```C++
#define FPSCR_ZX `0x04000000`
```




<hr>



### define FPSCR\_ZX\_BIT 

```C++
#define FPSCR_ZX_BIT `5`
```




<hr>



### define GQR0 

```C++
#define GQR0 `912`
```




<hr>



### define GQR1 

```C++
#define GQR1 `913`
```




<hr>



### define GQR2 

```C++
#define GQR2 `914`
```




<hr>



### define GQR3 

```C++
#define GQR3 `915`
```




<hr>



### define GQR4 

```C++
#define GQR4 `916`
```




<hr>



### define GQR5 

```C++
#define GQR5 `917`
```




<hr>



### define GQR6 

```C++
#define GQR6 `918`
```




<hr>



### define GQR7 

```C++
#define GQR7 `919`
```




<hr>



### define GQR\_LOAD\_SCALE\_MASK 

```C++
#define GQR_LOAD_SCALE_MASK `0x3F000000`
```




<hr>



### define GQR\_LOAD\_TYPE\_MASK 

```C++
#define GQR_LOAD_TYPE_MASK `0x00070000`
```




<hr>



### define GQR\_STORE\_SCALE\_MASK 

```C++
#define GQR_STORE_SCALE_MASK `0x00003F00`
```




<hr>



### define GQR\_STORE\_TYPE\_MASK 

```C++
#define GQR_STORE_TYPE_MASK `0x00000007`
```




<hr>



### define HID0 

```C++
#define HID0 `1008`
```




<hr>



### define HID0\_ABE 

```C++
#define HID0_ABE `0x00000008u`
```




<hr>



### define HID0\_BCLK 

```C++
#define HID0_BCLK `0x08000000u`
```




<hr>



### define HID0\_BHT 

```C++
#define HID0_BHT `0x00000004u`
```




<hr>



### define HID0\_BTIC 

```C++
#define HID0_BTIC `0x00000020u`
```




<hr>



### define HID0\_DBP 

```C++
#define HID0_DBP `0x40000000u`
```




<hr>



### define HID0\_DCE 

```C++
#define HID0_DCE `0x00004000u`
```




<hr>



### define HID0\_DCE\_BIT 

```C++
#define HID0_DCE_BIT `17`
```




<hr>



### define HID0\_DCFA 

```C++
#define HID0_DCFA `0x00000040u`
```




<hr>



### define HID0\_DCFI 

```C++
#define HID0_DCFI `0x00000400u`
```




<hr>



### define HID0\_DLOCK 

```C++
#define HID0_DLOCK `0x00001000u`
```




<hr>



### define HID0\_DLOCK\_BIT 

```C++
#define HID0_DLOCK_BIT `19`
```




<hr>



### define HID0\_DOZE 

```C++
#define HID0_DOZE `0x00800000u`
```




<hr>



### define HID0\_DPM 

```C++
#define HID0_DPM `0x00100000u`
```




<hr>



### define HID0\_EBA 

```C++
#define HID0_EBA `0x20000000u`
```




<hr>



### define HID0\_EBD 

```C++
#define HID0_EBD `0x10000000u`
```




<hr>



### define HID0\_ECLK 

```C++
#define HID0_ECLK `0x02000000u`
```




<hr>



### define HID0\_EMCP 

```C++
#define HID0_EMCP `0x80000000u`
```




<hr>



### define HID0\_ICE 

```C++
#define HID0_ICE `0x00008000u`
```




<hr>



### define HID0\_ICE\_BIT 

```C++
#define HID0_ICE_BIT `16`
```




<hr>



### define HID0\_ICFI 

```C++
#define HID0_ICFI `0x00000800u`
```




<hr>



### define HID0\_IFEM 

```C++
#define HID0_IFEM `0x00000100u`
```




<hr>



### define HID0\_ILOCK 

```C++
#define HID0_ILOCK `0x00002000u`
```




<hr>



### define HID0\_ILOCK\_BIT 

```C++
#define HID0_ILOCK_BIT `18`
```




<hr>



### define HID0\_NAP 

```C++
#define HID0_NAP `0x00400000u`
```




<hr>



### define HID0\_NHR 

```C++
#define HID0_NHR `0x00010000u`
```




<hr>



### define HID0\_NOOPTI 

```C++
#define HID0_NOOPTI `0x00000001u`
```




<hr>



### define HID0\_PAR 

```C++
#define HID0_PAR `0x01000000u`
```




<hr>



### define HID0\_SGE 

```C++
#define HID0_SGE `0x00000080u`
```




<hr>



### define HID0\_SLEEP 

```C++
#define HID0_SLEEP `0x00200000u`
```




<hr>



### define HID0\_SPD 

```C++
#define HID0_SPD `0x00000200u`
```




<hr>



### define HID1 

```C++
#define HID1 `1009`
```




<hr>



### define HID2 

```C++
#define HID2 `920`
```




<hr>



### define HID2\_DCHEE 

```C++
#define HID2_DCHEE `0x00080000`
```




<hr>



### define HID2\_DCHEE\_BIT 

```C++
#define HID2_DCHEE_BIT `12`
```




<hr>



### define HID2\_DCHERR 

```C++
#define HID2_DCHERR `0x00800000`
```




<hr>



### define HID2\_DCHERR\_BIT 

```C++
#define HID2_DCHERR_BIT `8`
```




<hr>



### define HID2\_DCMEE 

```C++
#define HID2_DCMEE `0x00020000`
```




<hr>



### define HID2\_DCMEE\_BIT 

```C++
#define HID2_DCMEE_BIT `14`
```




<hr>



### define HID2\_DCMERR 

```C++
#define HID2_DCMERR `0x00200000`
```




<hr>



### define HID2\_DCMERR\_BIT 

```C++
#define HID2_DCMERR_BIT `10`
```




<hr>



### define HID2\_DMAQL\_MASK 

```C++
#define HID2_DMAQL_MASK `0x0F000000`
```




<hr>



### define HID2\_DMAQL\_SHIFT 

```C++
#define HID2_DMAQL_SHIFT `24`
```




<hr>



### define HID2\_DNCEE 

```C++
#define HID2_DNCEE `0x00040000`
```




<hr>



### define HID2\_DNCEE\_BIT 

```C++
#define HID2_DNCEE_BIT `13`
```




<hr>



### define HID2\_DNCERR 

```C++
#define HID2_DNCERR `0x00400000`
```




<hr>



### define HID2\_DNCERR\_BIT 

```C++
#define HID2_DNCERR_BIT `9`
```




<hr>



### define HID2\_DQOEE 

```C++
#define HID2_DQOEE `0x00010000`
```




<hr>



### define HID2\_DQOEE\_BIT 

```C++
#define HID2_DQOEE_BIT `15`
```




<hr>



### define HID2\_DQOERR 

```C++
#define HID2_DQOERR `0x00100000`
```




<hr>



### define HID2\_DQOERR\_BIT 

```C++
#define HID2_DQOERR_BIT `11`
```




<hr>



### define HID2\_LCE 

```C++
#define HID2_LCE `0x10000000`
```




<hr>



### define HID2\_LCE\_BIT 

```C++
#define HID2_LCE_BIT `3`
```




<hr>



### define HID2\_LSQE 

```C++
#define HID2_LSQE `0x80000000`
```




<hr>



### define HID2\_LSQE\_BIT 

```C++
#define HID2_LSQE_BIT `0`
```




<hr>



### define HID2\_PSE 

```C++
#define HID2_PSE `0x20000000`
```




<hr>



### define HID2\_PSE\_BIT 

```C++
#define HID2_PSE_BIT `2`
```




<hr>



### define HID2\_WPE 

```C++
#define HID2_WPE `0x40000000`
```




<hr>



### define HID2\_WPE\_BIT 

```C++
#define HID2_WPE_BIT `1`
```




<hr>



### define IABR 

```C++
#define IABR `1010`
```




<hr>



### define IBAT0L 

```C++
#define IBAT0L `529`
```




<hr>



### define IBAT0U 

```C++
#define IBAT0U `528`
```




<hr>



### define IBAT1L 

```C++
#define IBAT1L `531`
```




<hr>



### define IBAT1U 

```C++
#define IBAT1U `530`
```




<hr>



### define IBAT2L 

```C++
#define IBAT2L `533`
```




<hr>



### define IBAT2U 

```C++
#define IBAT2U `532`
```




<hr>



### define IBAT3L 

```C++
#define IBAT3L `535`
```




<hr>



### define IBAT3U 

```C++
#define IBAT3U `534`
```




<hr>



### define ICTC 

```C++
#define ICTC `1019`
```




<hr>



### define L2CR 

```C++
#define L2CR `1017`
```




<hr>



### define L2CR\_L2BYP 

```C++
#define L2CR_L2BYP `0x00002000`
```




<hr>



### define L2CR\_L2CLK\_1\_0 

```C++
#define L2CR_L2CLK_1_0 `0x02000000`
```




<hr>



### define L2CR\_L2CLK\_1\_5 

```C++
#define L2CR_L2CLK_1_5 `0x04000000`
```




<hr>



### define L2CR\_L2CLK\_2\_0 

```C++
#define L2CR_L2CLK_2_0 `0x08000000`
```




<hr>



### define L2CR\_L2CLK\_2\_5 

```C++
#define L2CR_L2CLK_2_5 `0x0A000000`
```




<hr>



### define L2CR\_L2CLK\_3\_0 

```C++
#define L2CR_L2CLK_3_0 `0x0C000000`
```




<hr>



### define L2CR\_L2CS 

```C++
#define L2CR_L2CS `0x00000200`
```




<hr>



### define L2CR\_L2CTL 

```C++
#define L2CR_L2CTL `0x00100000`
```




<hr>



### define L2CR\_L2CTR\_MASK 

```C++
#define L2CR_L2CTR_MASK `0x000000FE`
```




<hr>



### define L2CR\_L2DF 

```C++
#define L2CR_L2DF `0x00004000`
```




<hr>



### define L2CR\_L2DO 

```C++
#define L2CR_L2DO `0x00400000`
```




<hr>



### define L2CR\_L2DRO 

```C++
#define L2CR_L2DRO `0x00000100`
```




<hr>



### define L2CR\_L2E 

```C++
#define L2CR_L2E `0x80000000`
```




<hr>



### define L2CR\_L2I 

```C++
#define L2CR_L2I `0x00200000`
```




<hr>



### define L2CR\_L2IP 

```C++
#define L2CR_L2IP `0x00000001`
```




<hr>



### define L2CR\_L2OH\_0\_5 

```C++
#define L2CR_L2OH_0_5 `0x00000000`
```




<hr>



### define L2CR\_L2OH\_1\_0 

```C++
#define L2CR_L2OH_1_0 `0x00010000`
```




<hr>



### define L2CR\_L2PE 

```C++
#define L2CR_L2PE `0x40000000`
```




<hr>



### define L2CR\_L2SIZ\_1M 

```C++
#define L2CR_L2SIZ_1M `0x30000000`
```




<hr>



### define L2CR\_L2SIZ\_256K 

```C++
#define L2CR_L2SIZ_256K `0x10000000`
```




<hr>



### define L2CR\_L2SIZ\_512K 

```C++
#define L2CR_L2SIZ_512K `0x20000000`
```




<hr>



### define L2CR\_L2SL 

```C++
#define L2CR_L2SL `0x00008000`
```




<hr>



### define L2CR\_L2TS 

```C++
#define L2CR_L2TS `0x00040000`
```




<hr>



### define L2CR\_L2WT 

```C++
#define L2CR_L2WT `0x00080000`
```




<hr>



### define L2CR\_RAM\_FLOW\_THRU\_BURST 

```C++
#define L2CR_RAM_FLOW_THRU_BURST `0x00000000`
```




<hr>



### define L2CR\_RAM\_PIPELINE\_BURST 

```C++
#define L2CR_RAM_PIPELINE_BURST `0x01000000`
```




<hr>



### define L2CR\_RAM\_PIPELINE\_LATE 

```C++
#define L2CR_RAM_PIPELINE_LATE `0x01800000`
```




<hr>



### define LR 

```C++
#define LR `8`
```




<hr>



### define MMCR0 

```C++
#define MMCR0 `952`
```




<hr>



### define MMCR0\_DIS 

```C++
#define MMCR0_DIS `0x80000000`
```




<hr>



### define MMCR0\_DISCOUNT 

```C++
#define MMCR0_DISCOUNT `0x02000000`
```




<hr>



### define MMCR0\_DMR 

```C++
#define MMCR0_DMR `0x08000000`
```




<hr>



### define MMCR0\_DMS 

```C++
#define MMCR0_DMS `0x10000000`
```




<hr>



### define MMCR0\_DP 

```C++
#define MMCR0_DP `0x40000000`
```




<hr>



### define MMCR0\_DU 

```C++
#define MMCR0_DU `0x20000000`
```




<hr>



### define MMCR0\_ENINT 

```C++
#define MMCR0_ENINT `0x04000000`
```




<hr>



### define MMCR0\_INTONBITTRANS 

```C++
#define MMCR0_INTONBITTRANS `0x00400000`
```




<hr>



### define MMCR0\_PMC1INTCONTROL 

```C++
#define MMCR0_PMC1INTCONTROL `0x00008000`
```




<hr>



### define MMCR0\_PMC1SELECT\_MASK 

```C++
#define MMCR0_PMC1SELECT_MASK `0x00001FC0`
```




<hr>



### define MMCR0\_PMC1\_Bx\_STALL\_CYCLE 

```C++
#define MMCR0_PMC1_Bx_STALL_CYCLE `0x00000300`
```




<hr>



### define MMCR0\_PMC1\_Bx\_UNRESOLVED 

```C++
#define MMCR0_PMC1_Bx_UNRESOLVED `0x000002C0`
```




<hr>



### define MMCR0\_PMC1\_CYCLE 

```C++
#define MMCR0_PMC1_CYCLE `0x00000040`
```




<hr>



### define MMCR0\_PMC1\_DISPATCHED 

```C++
#define MMCR0_PMC1_DISPATCHED `0x00000100`
```




<hr>



### define MMCR0\_PMC1\_EA 

```C++
#define MMCR0_PMC1_EA `0x00000200`
```




<hr>



### define MMCR0\_PMC1\_EIEIO 

```C++
#define MMCR0_PMC1_EIEIO `0x00000140`
```




<hr>



### define MMCR0\_PMC1\_HOLD 

```C++
#define MMCR0_PMC1_HOLD `0x00000000`
```




<hr>



### define MMCR0\_PMC1\_IABR 

```C++
#define MMCR0_PMC1_IABR `0x00000240`
```




<hr>



### define MMCR0\_PMC1\_IC\_FETCH\_MISS 

```C++
#define MMCR0_PMC1_IC_FETCH_MISS `0x00000340`
```




<hr>



### define MMCR0\_PMC1\_INSTRUCTION 

```C++
#define MMCR0_PMC1_INSTRUCTION `0x00000080`
```




<hr>



### define MMCR0\_PMC1\_ITLB\_CYCLE 

```C++
#define MMCR0_PMC1_ITLB_CYCLE `0x00000180`
```




<hr>



### define MMCR0\_PMC1\_L1\_MISS 

```C++
#define MMCR0_PMC1_L1_MISS `0x00000280`
```




<hr>



### define MMCR0\_PMC1\_L2\_HIT 

```C++
#define MMCR0_PMC1_L2_HIT `0x000001C0`
```




<hr>



### define MMCR0\_PMC1\_TRANSITION 

```C++
#define MMCR0_PMC1_TRANSITION `0x000000C0`
```




<hr>



### define MMCR0\_PMC2INTCONTROL 

```C++
#define MMCR0_PMC2INTCONTROL `0x00004000`
```




<hr>



### define MMCR0\_PMC2SELECT\_MASK 

```C++
#define MMCR0_PMC2SELECT_MASK `0x0000003F`
```




<hr>



### define MMCR0\_PMC2\_Bx\_FALL\_TROUGH 

```C++
#define MMCR0_PMC2_Bx_FALL_TROUGH `0x00000008`
```




<hr>



### define MMCR0\_PMC2\_Bx\_OUT\_OF\_ORDER 

```C++
#define MMCR0_PMC2_Bx_OUT_OF_ORDER `0x00000010`
```




<hr>



### define MMCR0\_PMC2\_CYCLE 

```C++
#define MMCR0_PMC2_CYCLE `0x00000001`
```




<hr>



### define MMCR0\_PMC2\_DISPATCHED 

```C++
#define MMCR0_PMC2_DISPATCHED `0x00000004`
```




<hr>



### define MMCR0\_PMC2\_HOLD 

```C++
#define MMCR0_PMC2_HOLD `0x00000000`
```




<hr>



### define MMCR0\_PMC2\_IC\_FETCH\_MISS 

```C++
#define MMCR0_PMC2_IC_FETCH_MISS `0x0000000F`
```




<hr>



### define MMCR0\_PMC2\_IC\_MISS 

```C++
#define MMCR0_PMC2_IC_MISS `0x00000005`
```




<hr>



### define MMCR0\_PMC2\_INSTRUCTION 

```C++
#define MMCR0_PMC2_INSTRUCTION `0x00000002`
```




<hr>



### define MMCR0\_PMC2\_ITLB\_MISS 

```C++
#define MMCR0_PMC2_ITLB_MISS `0x00000006`
```




<hr>



### define MMCR0\_PMC2\_L1\_CASTOUT 

```C++
#define MMCR0_PMC2_L1_CASTOUT `0x0000000D`
```




<hr>



### define MMCR0\_PMC2\_L2\_I\_MISS 

```C++
#define MMCR0_PMC2_L2_I_MISS `0x00000007`
```




<hr>



### define MMCR0\_PMC2\_LOAD\_STORE 

```C++
#define MMCR0_PMC2_LOAD_STORE `0x0000000B`
```




<hr>



### define MMCR0\_PMC2\_PR\_SWITCH 

```C++
#define MMCR0_PMC2_PR_SWITCH `0x00000009`
```




<hr>



### define MMCR0\_PMC2\_RESERVED\_LOAD 

```C++
#define MMCR0_PMC2_RESERVED_LOAD `0x0000000A`
```




<hr>



### define MMCR0\_PMC2\_SNOOP 

```C++
#define MMCR0_PMC2_SNOOP `0x0000000C`
```




<hr>



### define MMCR0\_PMC2\_SYSTEM 

```C++
#define MMCR0_PMC2_SYSTEM `0x0000000E`
```




<hr>



### define MMCR0\_PMC2\_TRANSITION 

```C++
#define MMCR0_PMC2_TRANSITION `0x00000003`
```




<hr>



### define MMCR0\_PMCTRIGGER 

```C++
#define MMCR0_PMCTRIGGER `0x00002000`
```




<hr>



### define MMCR0\_RTCSELECT\_47 

```C++
#define MMCR0_RTCSELECT_47 `0x01800000`
```




<hr>



### define MMCR0\_RTCSELECT\_51 

```C++
#define MMCR0_RTCSELECT_51 `0x01000000`
```




<hr>



### define MMCR0\_RTCSELECT\_55 

```C++
#define MMCR0_RTCSELECT_55 `0x00800000`
```




<hr>



### define MMCR0\_RTCSELECT\_63 

```C++
#define MMCR0_RTCSELECT_63 `0x00000000`
```




<hr>



### define MMCR0\_RTCSELECT\_MASK 

```C++
#define MMCR0_RTCSELECT_MASK `0x01800000`
```




<hr>



### define MMCR0\_THRESHOLD 

```C++
#define MMCR0_THRESHOLD (
    n
) `(( n ) << 16)`
```




<hr>



### define MMCR0\_THRESHOLD\_MASK 

```C++
#define MMCR0_THRESHOLD_MASK `0x003F0000`
```




<hr>



### define MMCR1 

```C++
#define MMCR1 `956`
```




<hr>



### define MMCR1\_PMC3SELECT\_MASK 

```C++
#define MMCR1_PMC3SELECT_MASK `0xF8000000`
```




<hr>



### define MMCR1\_PMC3\_BPU\_LR\_CR 

```C++
#define MMCR1_PMC3_BPU_LR_CR `0x88000000`
```




<hr>



### define MMCR1\_PMC3\_Bx\_SECOND 

```C++
#define MMCR1_PMC3_Bx_SECOND `0x80000000`
```




<hr>



### define MMCR1\_PMC3\_Bx\_TAKEN 

```C++
#define MMCR1_PMC3_Bx_TAKEN `0x40000000`
```




<hr>



### define MMCR1\_PMC3\_COND\_STORE 

```C++
#define MMCR1_PMC3_COND_STORE `0x50000000`
```




<hr>



### define MMCR1\_PMC3\_CYCLE 

```C++
#define MMCR1_PMC3_CYCLE `0x08000000`
```




<hr>



### define MMCR1\_PMC3\_DC\_MISS 

```C++
#define MMCR1_PMC3_DC_MISS `0x28000000`
```




<hr>



### define MMCR1\_PMC3\_DISPATCHED 

```C++
#define MMCR1_PMC3_DISPATCHED `0x20000000`
```




<hr>



### define MMCR1\_PMC3\_DTLB\_MISS 

```C++
#define MMCR1_PMC3_DTLB_MISS `0x30000000`
```




<hr>



### define MMCR1\_PMC3\_FPU 

```C++
#define MMCR1_PMC3_FPU `0x58000000`
```




<hr>



### define MMCR1\_PMC3\_HOLD 

```C++
#define MMCR1_PMC3_HOLD `0x00000000`
```




<hr>



### define MMCR1\_PMC3\_INSTRUCTION 

```C++
#define MMCR1_PMC3_INSTRUCTION `0x10000000`
```




<hr>



### define MMCR1\_PMC3\_L1\_MISS\_CYCLE 

```C++
#define MMCR1_PMC3_L1_MISS_CYCLE `0x78000000`
```




<hr>



### define MMCR1\_PMC3\_L2\_D\_MISS 

```C++
#define MMCR1_PMC3_L2_D_MISS `0x38000000`
```




<hr>



### define MMCR1\_PMC3\_L2\_HIT 

```C++
#define MMCR1_PMC3_L2_HIT `0x68000000`
```




<hr>



### define MMCR1\_PMC3\_L2\_SNOOP\_CASTOUT 

```C++
#define MMCR1_PMC3_L2_SNOOP_CASTOUT `0x60000000`
```




<hr>



### define MMCR1\_PMC3\_PM\_SWITCH 

```C++
#define MMCR1_PMC3_PM_SWITCH `0x48000000`
```




<hr>



### define MMCR1\_PMC3\_TRANSITION 

```C++
#define MMCR1_PMC3_TRANSITION `0x18000000`
```




<hr>



### define MMCR1\_PMC4SELECT\_MASK 

```C++
#define MMCR1_PMC4SELECT_MASK `0x07C00000`
```




<hr>



### define MMCR1\_PMC4\_BPU\_THIRD 

```C++
#define MMCR1_PMC4_BPU_THIRD `0x03800000`
```




<hr>



### define MMCR1\_PMC4\_Bx\_MISSED 

```C++
#define MMCR1_PMC4_Bx_MISSED `0x02000000`
```




<hr>



### define MMCR1\_PMC4\_COND\_STORE\_INT 

```C++
#define MMCR1_PMC4_COND_STORE_INT `0x02800000`
```




<hr>



### define MMCR1\_PMC4\_CYCLE 

```C++
#define MMCR1_PMC4_CYCLE `0x00400000`
```




<hr>



### define MMCR1\_PMC4\_DC\_MISS 

```C++
#define MMCR1_PMC4_DC_MISS `0x07C00000`
```




<hr>



### define MMCR1\_PMC4\_DISPATCHED 

```C++
#define MMCR1_PMC4_DISPATCHED `0x01000000`
```




<hr>



### define MMCR1\_PMC4\_DTLB\_CYCLE 

```C++
#define MMCR1_PMC4_DTLB_CYCLE `0x01800000`
```




<hr>



### define MMCR1\_PMC4\_HOLD 

```C++
#define MMCR1_PMC4_HOLD `0x00000000`
```




<hr>



### define MMCR1\_PMC4\_INSTRUCTION 

```C++
#define MMCR1_PMC4_INSTRUCTION `0x00800000`
```




<hr>



### define MMCR1\_PMC4\_INTEGER 

```C++
#define MMCR1_PMC4_INTEGER `0x03400000`
```




<hr>



### define MMCR1\_PMC4\_L2\_CASTOUT 

```C++
#define MMCR1_PMC4_L2_CASTOUT `0x01400000`
```




<hr>



### define MMCR1\_PMC4\_SNOOP\_RETRY 

```C++
#define MMCR1_PMC4_SNOOP_RETRY `0x03000000`
```




<hr>



### define MMCR1\_PMC4\_SYNC 

```C++
#define MMCR1_PMC4_SYNC `0x02C00000`
```




<hr>



### define MMCR1\_PMC4\_TRANSITION 

```C++
#define MMCR1_PMC4_TRANSITION `0x00C00000`
```




<hr>



### define MSR\_BE 

```C++
#define MSR_BE `0x00000200`
```




<hr>



### define MSR\_BE\_BIT 

```C++
#define MSR_BE_BIT `22`
```




<hr>



### define MSR\_DR 

```C++
#define MSR_DR `0x00000010`
```




<hr>



### define MSR\_DR\_BIT 

```C++
#define MSR_DR_BIT `27`
```




<hr>



### define MSR\_EE 

```C++
#define MSR_EE `0x00008000`
```




<hr>



### define MSR\_EE\_BIT 

```C++
#define MSR_EE_BIT `16`
```




<hr>



### define MSR\_FE0 

```C++
#define MSR_FE0 `0x00000800`
```




<hr>



### define MSR\_FE0\_BIT 

```C++
#define MSR_FE0_BIT `20`
```




<hr>



### define MSR\_FE1 

```C++
#define MSR_FE1 `0x00000100`
```




<hr>



### define MSR\_FE1\_BIT 

```C++
#define MSR_FE1_BIT `23`
```




<hr>



### define MSR\_FP 

```C++
#define MSR_FP `0x00002000`
```




<hr>



### define MSR\_FP\_BIT 

```C++
#define MSR_FP_BIT `18`
```




<hr>



### define MSR\_ILE 

```C++
#define MSR_ILE `0x00010000`
```




<hr>



### define MSR\_ILE\_BIT 

```C++
#define MSR_ILE_BIT `15`
```




<hr>



### define MSR\_IP 

```C++
#define MSR_IP `0x00000040`
```




<hr>



### define MSR\_IP\_BIT 

```C++
#define MSR_IP_BIT `25`
```




<hr>



### define MSR\_IR 

```C++
#define MSR_IR `0x00000020`
```




<hr>



### define MSR\_IR\_BIT 

```C++
#define MSR_IR_BIT `26`
```




<hr>



### define MSR\_LE 

```C++
#define MSR_LE `0x00000001`
```




<hr>



### define MSR\_LE\_BIT 

```C++
#define MSR_LE_BIT `31`
```




<hr>



### define MSR\_ME 

```C++
#define MSR_ME `0x00001000`
```




<hr>



### define MSR\_ME\_BIT 

```C++
#define MSR_ME_BIT `19`
```




<hr>



### define MSR\_PM 

```C++
#define MSR_PM `0x00000004`
```




<hr>



### define MSR\_PM\_BIT 

```C++
#define MSR_PM_BIT `29`
```




<hr>



### define MSR\_POW 

```C++
#define MSR_POW `0x00040000`
```




<hr>



### define MSR\_POW\_BIT 

```C++
#define MSR_POW_BIT `13`
```




<hr>



### define MSR\_PR 

```C++
#define MSR_PR `0x00004000`
```




<hr>



### define MSR\_PR\_BIT 

```C++
#define MSR_PR_BIT `17`
```




<hr>



### define MSR\_RI 

```C++
#define MSR_RI `0x00000002`
```




<hr>



### define MSR\_RI\_BIT 

```C++
#define MSR_RI_BIT `30`
```




<hr>



### define MSR\_SE 

```C++
#define MSR_SE `0x00000400`
```




<hr>



### define MSR\_SE\_BIT 

```C++
#define MSR_SE_BIT `21`
```




<hr>



### define PMC1 

```C++
#define PMC1 `953`
```




<hr>



### define PMC1\_COUNTER 

```C++
#define PMC1_COUNTER `0x7FFFFFFF`
```




<hr>



### define PMC1\_OV 

```C++
#define PMC1_OV `0x80000000`
```




<hr>



### define PMC2 

```C++
#define PMC2 `954`
```




<hr>



### define PMC2\_COUNTER 

```C++
#define PMC2_COUNTER `0x7FFFFFFF`
```




<hr>



### define PMC2\_OV 

```C++
#define PMC2_OV `0x80000000`
```




<hr>



### define PMC3 

```C++
#define PMC3 `957`
```




<hr>



### define PMC3\_COUNTER 

```C++
#define PMC3_COUNTER `0x7FFFFFFF`
```




<hr>



### define PMC3\_OV 

```C++
#define PMC3_OV `0x80000000`
```




<hr>



### define PMC4 

```C++
#define PMC4 `958`
```




<hr>



### define PMC4\_COUNTER 

```C++
#define PMC4_COUNTER `0x7FFFFFFF`
```




<hr>



### define PMC4\_OV 

```C++
#define PMC4_OV `0x80000000`
```




<hr>



### define PVR 

```C++
#define PVR `287`
```




<hr>



### define SDR1 

```C++
#define SDR1 `25`
```




<hr>



### define SIA 

```C++
#define SIA `955`
```




<hr>



### define SPRG0 

```C++
#define SPRG0 `272`
```




<hr>



### define SPRG1 

```C++
#define SPRG1 `273`
```




<hr>



### define SPRG2 

```C++
#define SPRG2 `274`
```




<hr>



### define SPRG3 

```C++
#define SPRG3 `275`
```




<hr>



### define SRR0 

```C++
#define SRR0 `26`
```




<hr>



### define SRR1 

```C++
#define SRR1 `27`
```




<hr>



### define SRR1\_DMA\_BIT 

```C++
#define SRR1_DMA_BIT `0x00200000`
```




<hr>



### define SRR1\_L2DP\_BIT 

```C++
#define SRR1_L2DP_BIT `0x00100000`
```




<hr>



### define TBL 

```C++
#define TBL `284`
```




<hr>



### define TBU 

```C++
#define TBU `285`
```




<hr>



### define THRM1 

```C++
#define THRM1 `1020`
```




<hr>



### define THRM2 

```C++
#define THRM2 `1021`
```




<hr>



### define THRM3 

```C++
#define THRM3 `1022`
```




<hr>



### define UMMCR0 

```C++
#define UMMCR0 `936`
```




<hr>



### define UMMCR1 

```C++
#define UMMCR1 `940`
```




<hr>



### define UPMC1 

```C++
#define UPMC1 `937`
```




<hr>



### define UPMC2 

```C++
#define UPMC2 `938`
```




<hr>



### define UPMC3 

```C++
#define UPMC3 `941`
```




<hr>



### define UPMC4 

```C++
#define UPMC4 `942`
```




<hr>



### define USIA 

```C++
#define USIA `939`
```




<hr>



### define WPAR 

```C++
#define WPAR `921`
```




<hr>



### define WPAR\_ADDR 

```C++
#define WPAR_ADDR `0xFFFFFFE0`
```




<hr>



### define WPAR\_BNE 

```C++
#define WPAR_BNE `0x00000001`
```




<hr>



### define XER 

```C++
#define XER `1`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/base/PPCArch.h`

