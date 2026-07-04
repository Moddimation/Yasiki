

# File OSLink.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSLink.c**](_o_s_link_8c.md)

[Go to the source code of this file](_o_s_link_8c_source.md)



* `#include <dolphin/os.h>`
* `#include <string.h>`
* `#include "dolphin/types.h"`
* `#include "OSPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**OSModuleQueue**](struct_o_s_module_queue.md) [**\_\_OSModuleInfoList**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AT\_ADDRESS**](#function-at_address) ([**OS\_BASE\_CACHED**](os_8h.md#define-os_base_cached)\| 0x30C8) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSLink**](#function-oslink) ([**OSModuleInfo**](struct_o_s_module_info.md) \* newModule, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* bss) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSNotifyLink**](#function-osnotifylink) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSNotifyUnlink**](#function-osnotifyunlink) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetStringTable**](#function-ossetstringtable) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* stringTable) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSUnlink**](#function-osunlink) ([**OSModuleInfo**](struct_o_s_module_info.md) \* oldModule) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSModuleInit**](#function-__osmoduleinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**Relocate**](#function-relocate) ([**OSModuleHeader**](struct_o_s_module_header.md) \* newModule, [**OSModuleHeader**](struct_o_s_module_header.md) \* module) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**Undo**](#function-undo) ([**OSModuleHeader**](struct_o_s_module_header.md) \* newModule, [**OSModuleHeader**](struct_o_s_module_header.md) \* module) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**DEQUEUE\_INFO**](_o_s_link_8c.md#define-dequeue_info) (info, queue, link) `/* multi line expression */`<br> |
| define  | [**ELF32\_R\_INFO**](_o_s_link_8c.md#define-elf32_r_info) (s, t) `(((s) &lt;&lt; 8) + ([**u16**](types_8h.md#typedef-u16))([**t**](_c_a_r_d_private_8h.md#define-card_max_mount_step)))`<br> |
| define  | [**ELF32\_R\_SYM**](_o_s_link_8c.md#define-elf32_r_sym) (i) `(([**i**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) &gt;&gt; 8)`<br> |
| define  | [**ELF32\_R\_TYPE**](_o_s_link_8c.md#define-elf32_r_type) (i) `(([**u16**](types_8h.md#typedef-u16))([**i**](_c_a_r_d_private_8h.md#define-card_max_mount_step)))`<br> |
| define  | [**ENQUEUE\_INFO**](_o_s_link_8c.md#define-enqueue_info) (queue, info, link) `/* multi line expression */`<br> |
| define  | [**R\_PPC\_ADDR14**](_o_s_link_8c.md#define-r_ppc_addr14)  `7`<br> |
| define  | [**R\_PPC\_ADDR14\_BRNTAKEN**](_o_s_link_8c.md#define-r_ppc_addr14_brntaken)  `9`<br> |
| define  | [**R\_PPC\_ADDR14\_BRTAKEN**](_o_s_link_8c.md#define-r_ppc_addr14_brtaken)  `8`<br> |
| define  | [**R\_PPC\_ADDR16**](_o_s_link_8c.md#define-r_ppc_addr16)  `3`<br> |
| define  | [**R\_PPC\_ADDR16\_HA**](_o_s_link_8c.md#define-r_ppc_addr16_ha)  `6`<br> |
| define  | [**R\_PPC\_ADDR16\_HI**](_o_s_link_8c.md#define-r_ppc_addr16_hi)  `5`<br> |
| define  | [**R\_PPC\_ADDR16\_LO**](_o_s_link_8c.md#define-r_ppc_addr16_lo)  `4`<br> |
| define  | [**R\_PPC\_ADDR24**](_o_s_link_8c.md#define-r_ppc_addr24)  `2`<br> |
| define  | [**R\_PPC\_ADDR30**](_o_s_link_8c.md#define-r_ppc_addr30)  `37`<br> |
| define  | [**R\_PPC\_ADDR32**](_o_s_link_8c.md#define-r_ppc_addr32)  `1`<br> |
| define  | [**R\_PPC\_COPY**](_o_s_link_8c.md#define-r_ppc_copy)  `19`<br> |
| define  | [**R\_PPC\_EMB\_BIT\_FLD**](_o_s_link_8c.md#define-r_ppc_emb_bit_fld)  `115`<br> |
| define  | [**R\_PPC\_EMB\_MRKREF**](_o_s_link_8c.md#define-r_ppc_emb_mrkref)  `110`<br> |
| define  | [**R\_PPC\_EMB\_NADDR16**](_o_s_link_8c.md#define-r_ppc_emb_naddr16)  `102`<br> |
| define  | [**R\_PPC\_EMB\_NADDR16\_HA**](_o_s_link_8c.md#define-r_ppc_emb_naddr16_ha)  `105`<br> |
| define  | [**R\_PPC\_EMB\_NADDR16\_HI**](_o_s_link_8c.md#define-r_ppc_emb_naddr16_hi)  `104`<br> |
| define  | [**R\_PPC\_EMB\_NADDR16\_LO**](_o_s_link_8c.md#define-r_ppc_emb_naddr16_lo)  `103`<br> |
| define  | [**R\_PPC\_EMB\_NADDR32**](_o_s_link_8c.md#define-r_ppc_emb_naddr32)  `101`<br> |
| define  | [**R\_PPC\_EMB\_RELSDA**](_o_s_link_8c.md#define-r_ppc_emb_relsda)  `116`<br> |
| define  | [**R\_PPC\_EMB\_RELSEC16**](_o_s_link_8c.md#define-r_ppc_emb_relsec16)  `111`<br> |
| define  | [**R\_PPC\_EMB\_RELST\_HA**](_o_s_link_8c.md#define-r_ppc_emb_relst_ha)  `114`<br> |
| define  | [**R\_PPC\_EMB\_RELST\_HI**](_o_s_link_8c.md#define-r_ppc_emb_relst_hi)  `113`<br> |
| define  | [**R\_PPC\_EMB\_RELST\_LO**](_o_s_link_8c.md#define-r_ppc_emb_relst_lo)  `112`<br> |
| define  | [**R\_PPC\_EMB\_SDA21**](_o_s_link_8c.md#define-r_ppc_emb_sda21)  `109`<br> |
| define  | [**R\_PPC\_EMB\_SDA2I16**](_o_s_link_8c.md#define-r_ppc_emb_sda2i16)  `107`<br> |
| define  | [**R\_PPC\_EMB\_SDA2REL**](_o_s_link_8c.md#define-r_ppc_emb_sda2rel)  `108`<br> |
| define  | [**R\_PPC\_EMB\_SDAI16**](_o_s_link_8c.md#define-r_ppc_emb_sdai16)  `106`<br> |
| define  | [**R\_PPC\_GLOB\_DAT**](_o_s_link_8c.md#define-r_ppc_glob_dat)  `20`<br> |
| define  | [**R\_PPC\_GOT16**](_o_s_link_8c.md#define-r_ppc_got16)  `14`<br> |
| define  | [**R\_PPC\_GOT16\_HA**](_o_s_link_8c.md#define-r_ppc_got16_ha)  `17`<br> |
| define  | [**R\_PPC\_GOT16\_HI**](_o_s_link_8c.md#define-r_ppc_got16_hi)  `16`<br> |
| define  | [**R\_PPC\_GOT16\_LO**](_o_s_link_8c.md#define-r_ppc_got16_lo)  `15`<br> |
| define  | [**R\_PPC\_JMP\_SLOT**](_o_s_link_8c.md#define-r_ppc_jmp_slot)  `21`<br> |
| define  | [**R\_PPC\_LOCAL24PC**](_o_s_link_8c.md#define-r_ppc_local24pc)  `23`<br> |
| define  | [**R\_PPC\_NONE**](_o_s_link_8c.md#define-r_ppc_none)  `0`<br> |
| define  | [**R\_PPC\_PLT16\_HA**](_o_s_link_8c.md#define-r_ppc_plt16_ha)  `31`<br> |
| define  | [**R\_PPC\_PLT16\_LO**](_o_s_link_8c.md#define-r_ppc_plt16_lo)  `29`<br> |
| define  | [**R\_PPC\_PLT32**](_o_s_link_8c.md#define-r_ppc_plt32)  `27`<br> |
| define  | [**R\_PPC\_PLTREL24**](_o_s_link_8c.md#define-r_ppc_pltrel24)  `18`<br> |
| define  | [**R\_PPC\_PLTREL32**](_o_s_link_8c.md#define-r_ppc_pltrel32)  `28`<br> |
| define  | [**R\_PPC\_REL14**](_o_s_link_8c.md#define-r_ppc_rel14)  `11`<br> |
| define  | [**R\_PPC\_REL14\_BRNTAKEN**](_o_s_link_8c.md#define-r_ppc_rel14_brntaken)  `13`<br> |
| define  | [**R\_PPC\_REL14\_BRTAKEN**](_o_s_link_8c.md#define-r_ppc_rel14_brtaken)  `12`<br> |
| define  | [**R\_PPC\_REL24**](_o_s_link_8c.md#define-r_ppc_rel24)  `10`<br> |
| define  | [**R\_PPC\_REL32**](_o_s_link_8c.md#define-r_ppc_rel32)  `26`<br> |
| define  | [**R\_PPC\_RELATIVE**](_o_s_link_8c.md#define-r_ppc_relative)  `22`<br> |
| define  | [**R\_PPC\_SDAREL16**](_o_s_link_8c.md#define-r_ppc_sdarel16)  `32`<br> |
| define  | [**R\_PPC\_SECTOFF**](_o_s_link_8c.md#define-r_ppc_sectoff)  `33`<br> |
| define  | [**R\_PPC\_SECTOFF\_HA**](_o_s_link_8c.md#define-r_ppc_sectoff_ha)  `36`<br> |
| define  | [**R\_PPC\_SECTOFF\_HI**](_o_s_link_8c.md#define-r_ppc_sectoff_hi)  `35`<br> |
| define  | [**R\_PPC\_SECTOFF\_LO**](_o_s_link_8c.md#define-r_ppc_sectoff_lo)  `34`<br> |
| define  | [**R\_PPC\_UADDR16**](_o_s_link_8c.md#define-r_ppc_uaddr16)  `25`<br> |
| define  | [**R\_PPC\_UADDR32**](_o_s_link_8c.md#define-r_ppc_uaddr32)  `24`<br> |
| define  | [**R\_PPL\_PLT16\_HI**](_o_s_link_8c.md#define-r_ppl_plt16_hi)  `30`<br> |
| define  | [**SHN\_ABS**](_o_s_link_8c.md#define-shn_abs)  `0xfff1`<br> |
| define  | [**SHN\_COMMON**](_o_s_link_8c.md#define-shn_common)  `0xfff2`<br> |
| define  | [**SHN\_HIPROC**](_o_s_link_8c.md#define-shn_hiproc)  `0xff1f`<br> |
| define  | [**SHN\_HIRESERVE**](_o_s_link_8c.md#define-shn_hireserve)  `0xffff`<br> |
| define  | [**SHN\_LOPROC**](_o_s_link_8c.md#define-shn_loproc)  `0xff00`<br> |
| define  | [**SHN\_LORESERVE**](_o_s_link_8c.md#define-shn_loreserve)  `0xff00`<br> |
| define  | [**SHN\_UNDEF**](_o_s_link_8c.md#define-shn_undef)  `0`<br> |

## Public Functions Documentation




### function AT\_ADDRESS 

```C++
OSModuleQueue  __OSModuleInfoList AT_ADDRESS (
    OS_BASE_CACHED | 0x30C8
) 
```




<hr>



### function OSLink 

```C++
BOOL OSLink (
    OSModuleInfo * newModule,
    void * bss
) 
```




<hr>



### function OSNotifyLink 

```C++
void OSNotifyLink () 
```




<hr>



### function OSNotifyUnlink 

```C++
void OSNotifyUnlink () 
```




<hr>



### function OSSetStringTable 

```C++
void OSSetStringTable (
    const  void * stringTable
) 
```




<hr>



### function OSUnlink 

```C++
BOOL OSUnlink (
    OSModuleInfo * oldModule
) 
```




<hr>



### function \_\_OSModuleInit 

```C++
void __OSModuleInit (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function Relocate 

```C++
static BOOL Relocate (
    OSModuleHeader * newModule,
    OSModuleHeader * module
) 
```




<hr>



### function Undo 

```C++
static BOOL Undo (
    OSModuleHeader * newModule,
    OSModuleHeader * module
) 
```




<hr>
## Macro Definition Documentation





### define DEQUEUE\_INFO 

```C++
#define DEQUEUE_INFO (
    info,
    queue,
    link
) `/* multi line expression */`
```




<hr>



### define ELF32\_R\_INFO 

```C++
#define ELF32_R_INFO (
    s,
    t
) `(((s) << 8) + ( u16 )( t ))`
```




<hr>



### define ELF32\_R\_SYM 

```C++
#define ELF32_R_SYM (
    i
) `(( i ) >> 8)`
```




<hr>



### define ELF32\_R\_TYPE 

```C++
#define ELF32_R_TYPE (
    i
) `(( u16 )( i ))`
```




<hr>



### define ENQUEUE\_INFO 

```C++
#define ENQUEUE_INFO (
    queue,
    info,
    link
) `/* multi line expression */`
```




<hr>



### define R\_PPC\_ADDR14 

```C++
#define R_PPC_ADDR14 `7`
```




<hr>



### define R\_PPC\_ADDR14\_BRNTAKEN 

```C++
#define R_PPC_ADDR14_BRNTAKEN `9`
```




<hr>



### define R\_PPC\_ADDR14\_BRTAKEN 

```C++
#define R_PPC_ADDR14_BRTAKEN `8`
```




<hr>



### define R\_PPC\_ADDR16 

```C++
#define R_PPC_ADDR16 `3`
```




<hr>



### define R\_PPC\_ADDR16\_HA 

```C++
#define R_PPC_ADDR16_HA `6`
```




<hr>



### define R\_PPC\_ADDR16\_HI 

```C++
#define R_PPC_ADDR16_HI `5`
```




<hr>



### define R\_PPC\_ADDR16\_LO 

```C++
#define R_PPC_ADDR16_LO `4`
```




<hr>



### define R\_PPC\_ADDR24 

```C++
#define R_PPC_ADDR24 `2`
```




<hr>



### define R\_PPC\_ADDR30 

```C++
#define R_PPC_ADDR30 `37`
```




<hr>



### define R\_PPC\_ADDR32 

```C++
#define R_PPC_ADDR32 `1`
```




<hr>



### define R\_PPC\_COPY 

```C++
#define R_PPC_COPY `19`
```




<hr>



### define R\_PPC\_EMB\_BIT\_FLD 

```C++
#define R_PPC_EMB_BIT_FLD `115`
```




<hr>



### define R\_PPC\_EMB\_MRKREF 

```C++
#define R_PPC_EMB_MRKREF `110`
```




<hr>



### define R\_PPC\_EMB\_NADDR16 

```C++
#define R_PPC_EMB_NADDR16 `102`
```




<hr>



### define R\_PPC\_EMB\_NADDR16\_HA 

```C++
#define R_PPC_EMB_NADDR16_HA `105`
```




<hr>



### define R\_PPC\_EMB\_NADDR16\_HI 

```C++
#define R_PPC_EMB_NADDR16_HI `104`
```




<hr>



### define R\_PPC\_EMB\_NADDR16\_LO 

```C++
#define R_PPC_EMB_NADDR16_LO `103`
```




<hr>



### define R\_PPC\_EMB\_NADDR32 

```C++
#define R_PPC_EMB_NADDR32 `101`
```




<hr>



### define R\_PPC\_EMB\_RELSDA 

```C++
#define R_PPC_EMB_RELSDA `116`
```




<hr>



### define R\_PPC\_EMB\_RELSEC16 

```C++
#define R_PPC_EMB_RELSEC16 `111`
```




<hr>



### define R\_PPC\_EMB\_RELST\_HA 

```C++
#define R_PPC_EMB_RELST_HA `114`
```




<hr>



### define R\_PPC\_EMB\_RELST\_HI 

```C++
#define R_PPC_EMB_RELST_HI `113`
```




<hr>



### define R\_PPC\_EMB\_RELST\_LO 

```C++
#define R_PPC_EMB_RELST_LO `112`
```




<hr>



### define R\_PPC\_EMB\_SDA21 

```C++
#define R_PPC_EMB_SDA21 `109`
```




<hr>



### define R\_PPC\_EMB\_SDA2I16 

```C++
#define R_PPC_EMB_SDA2I16 `107`
```




<hr>



### define R\_PPC\_EMB\_SDA2REL 

```C++
#define R_PPC_EMB_SDA2REL `108`
```




<hr>



### define R\_PPC\_EMB\_SDAI16 

```C++
#define R_PPC_EMB_SDAI16 `106`
```




<hr>



### define R\_PPC\_GLOB\_DAT 

```C++
#define R_PPC_GLOB_DAT `20`
```




<hr>



### define R\_PPC\_GOT16 

```C++
#define R_PPC_GOT16 `14`
```




<hr>



### define R\_PPC\_GOT16\_HA 

```C++
#define R_PPC_GOT16_HA `17`
```




<hr>



### define R\_PPC\_GOT16\_HI 

```C++
#define R_PPC_GOT16_HI `16`
```




<hr>



### define R\_PPC\_GOT16\_LO 

```C++
#define R_PPC_GOT16_LO `15`
```




<hr>



### define R\_PPC\_JMP\_SLOT 

```C++
#define R_PPC_JMP_SLOT `21`
```




<hr>



### define R\_PPC\_LOCAL24PC 

```C++
#define R_PPC_LOCAL24PC `23`
```




<hr>



### define R\_PPC\_NONE 

```C++
#define R_PPC_NONE `0`
```




<hr>



### define R\_PPC\_PLT16\_HA 

```C++
#define R_PPC_PLT16_HA `31`
```




<hr>



### define R\_PPC\_PLT16\_LO 

```C++
#define R_PPC_PLT16_LO `29`
```




<hr>



### define R\_PPC\_PLT32 

```C++
#define R_PPC_PLT32 `27`
```




<hr>



### define R\_PPC\_PLTREL24 

```C++
#define R_PPC_PLTREL24 `18`
```




<hr>



### define R\_PPC\_PLTREL32 

```C++
#define R_PPC_PLTREL32 `28`
```




<hr>



### define R\_PPC\_REL14 

```C++
#define R_PPC_REL14 `11`
```




<hr>



### define R\_PPC\_REL14\_BRNTAKEN 

```C++
#define R_PPC_REL14_BRNTAKEN `13`
```




<hr>



### define R\_PPC\_REL14\_BRTAKEN 

```C++
#define R_PPC_REL14_BRTAKEN `12`
```




<hr>



### define R\_PPC\_REL24 

```C++
#define R_PPC_REL24 `10`
```




<hr>



### define R\_PPC\_REL32 

```C++
#define R_PPC_REL32 `26`
```




<hr>



### define R\_PPC\_RELATIVE 

```C++
#define R_PPC_RELATIVE `22`
```




<hr>



### define R\_PPC\_SDAREL16 

```C++
#define R_PPC_SDAREL16 `32`
```




<hr>



### define R\_PPC\_SECTOFF 

```C++
#define R_PPC_SECTOFF `33`
```




<hr>



### define R\_PPC\_SECTOFF\_HA 

```C++
#define R_PPC_SECTOFF_HA `36`
```




<hr>



### define R\_PPC\_SECTOFF\_HI 

```C++
#define R_PPC_SECTOFF_HI `35`
```




<hr>



### define R\_PPC\_SECTOFF\_LO 

```C++
#define R_PPC_SECTOFF_LO `34`
```




<hr>



### define R\_PPC\_UADDR16 

```C++
#define R_PPC_UADDR16 `25`
```




<hr>



### define R\_PPC\_UADDR32 

```C++
#define R_PPC_UADDR32 `24`
```




<hr>



### define R\_PPL\_PLT16\_HI 

```C++
#define R_PPL_PLT16_HI `30`
```




<hr>



### define SHN\_ABS 

```C++
#define SHN_ABS `0xfff1`
```




<hr>



### define SHN\_COMMON 

```C++
#define SHN_COMMON `0xfff2`
```




<hr>



### define SHN\_HIPROC 

```C++
#define SHN_HIPROC `0xff1f`
```




<hr>



### define SHN\_HIRESERVE 

```C++
#define SHN_HIRESERVE `0xffff`
```




<hr>



### define SHN\_LOPROC 

```C++
#define SHN_LOPROC `0xff00`
```




<hr>



### define SHN\_LORESERVE 

```C++
#define SHN_LORESERVE `0xff00`
```




<hr>



### define SHN\_UNDEF 

```C++
#define SHN_UNDEF `0`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSLink.c`

