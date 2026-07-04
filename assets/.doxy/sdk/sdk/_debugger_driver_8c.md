

# File DebuggerDriver.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**OdemuExi2**](dir_3db02da560834236de46d8d627abd3de.md) **>** [**DebuggerDriver.c**](_debugger_driver_8c.md)

[Go to the source code of this file](_debugger_driver_8c_source.md)



* `#include <dolphin/db.h>`
* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include <types.h>`
* `#include "macros.h"`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**DBGCallbackType**](#typedef-dbgcallbacktype)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**DBGCallbackType**](_debugger_driver_8c.md#typedef-dbgcallbacktype) | [**DBGCallback**](#variable-dbgcallback)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**EXIInputFlag**](#variable-exiinputflag)  <br> |
|  [**MTRCallbackType**](_d_b_interface_8h.md#typedef-mtrcallbacktype) | [**MTRCallback**](#variable-mtrcallback)  <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**RecvDataLeng**](#variable-recvdataleng)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SendMailData**](#variable-sendmaildata)  <br> |
|  [**u8**](types_8h.md#typedef-u8) \* | [**pEXIInputFlag**](#variable-pexiinputflag)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**CheckMailBox**](#function-checkmailbox) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBClose**](#function-dbclose) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBGEXIClearInterrupts**](#function-dbgexiclearinterrupts) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DBGEXIDeselect**](#function-dbgexideselect) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DBGEXIImm**](#function-dbgexiimm) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data, [**s32**](types_8h.md#typedef-s32) size, [**u32**](types_8h.md#typedef-u32) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBGEXIInit**](#function-dbgexiinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DBGEXISelect**](#function-dbgexiselect) ([**u32**](types_8h.md#typedef-u32) v) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DBGEXISync**](#function-dbgexisync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBGHandler**](#function-dbghandler) ([**s16**](types_8h.md#typedef-s16) a, [**OSContext**](struct_o_s_context.md) \* b) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DBGRead**](#function-dbgread) ([**u32**](types_8h.md#typedef-u32) addr, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) \* data, [**s32**](types_8h.md#typedef-s32) byte\_size) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DBGReadMailbox**](#function-dbgreadmailbox) ([**u32**](types_8h.md#typedef-u32) \* v) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DBGReadStatus**](#function-dbgreadstatus) ([**u32**](types_8h.md#typedef-u32) \* status) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DBGWrite**](#function-dbgwrite) ([**u32**](types_8h.md#typedef-u32) addr, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data, [**s32**](types_8h.md#typedef-s32) size) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DBGWriteMailbox**](#function-dbgwritemailbox) ([**u32**](types_8h.md#typedef-u32) v) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBInitComm**](#function-dbinitcomm) ([**u8**](types_8h.md#typedef-u8) \*\* a, [**MTRCallbackType**](_d_b_interface_8h.md#typedef-mtrcallbacktype) b) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBInitInterrupts**](#function-dbinitinterrupts) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBOpen**](#function-dbopen) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DBQueryData**](#function-dbquerydata) () <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DBRead**](#function-dbread) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) \* data, [**s32**](types_8h.md#typedef-s32) size) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DBWrite**](#function-dbwrite) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**s32**](types_8h.md#typedef-s32) \* data, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MWCallback**](#function-mwcallback) ([**u32**](types_8h.md#typedef-u32) a, [**OSContext**](struct_o_s_context.md) \* b) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**DB\_NO\_ERROR**](_debugger_driver_8c.md#define-db_no_error)  `0x0`<br> |
| define  | [**DB\_STAT\_RECIEVE**](_debugger_driver_8c.md#define-db_stat_recieve)  `0x2`<br> |
| define  | [**DB\_STAT\_SEND**](_debugger_driver_8c.md#define-db_stat_send)  `0x1`<br> |
| define  | [**ODEMU\_ADDR\_RECV**](_debugger_driver_8c.md#define-odemu_addr_recv)  `0x0001E000`<br> |
| define  | [**ODEMU\_ERROR**](_debugger_driver_8c.md#define-odemu_error)  `1;`<br> |
| define  | [**ODEMU\_ERROR**](_debugger_driver_8c.md#define-odemu_error)  `1;`<br> |
| define  | [**ODEMU\_MAIL\_MAGIC**](_debugger_driver_8c.md#define-odemu_mail_magic)  `0x1F000000`<br> |
| define  | [**ODEMU\_MAIL\_MASK**](_debugger_driver_8c.md#define-odemu_mail_mask)  `0x1fffffff`<br> |
| define  | [**ODEMU\_NO\_ERROR**](_debugger_driver_8c.md#define-odemu_no_error)  `1;`<br> |
| define  | [**ODEMU\_OFFSET\_RECV**](_debugger_driver_8c.md#define-odemu_offset_recv)  `0x00001000`<br> |

## Public Types Documentation




### typedef DBGCallbackType 

```C++
typedef void(* DBGCallbackType) (u32, OSContext *);
```




<hr>
## Public Attributes Documentation




### variable DBGCallback 

```C++
DBGCallbackType DBGCallback;
```




<hr>



### variable EXIInputFlag 

```C++
u8 EXIInputFlag;
```




<hr>



### variable MTRCallback 

```C++
MTRCallbackType MTRCallback;
```




<hr>



### variable RecvDataLeng 

```C++
s32 RecvDataLeng;
```




<hr>



### variable SendMailData 

```C++
u32 SendMailData;
```




<hr>



### variable pEXIInputFlag 

```C++
u8* pEXIInputFlag;
```




<hr>
## Public Functions Documentation




### function CheckMailBox 

```C++
void CheckMailBox (
    void
) 
```




<hr>



### function DBClose 

```C++
void DBClose (
    void
) 
```




<hr>



### function DBGEXIClearInterrupts 

```C++
void DBGEXIClearInterrupts (
    void
) 
```




<hr>



### function DBGEXIDeselect 

```C++
BOOL DBGEXIDeselect (
    void
) 
```




<hr>



### function DBGEXIImm 

```C++
BOOL DBGEXIImm (
    const  void * data,
    s32 size,
    u32 mode
) 
```




<hr>



### function DBGEXIInit 

```C++
void DBGEXIInit (
    void
) 
```




<hr>



### function DBGEXISelect 

```C++
BOOL DBGEXISelect (
    u32 v
) 
```




<hr>



### function DBGEXISync 

```C++
BOOL DBGEXISync (
    void
) 
```




<hr>



### function DBGHandler 

```C++
void DBGHandler (
    s16 a,
    OSContext * b
) 
```




<hr>



### function DBGRead 

```C++
BOOL DBGRead (
    u32 addr,
    const  u32 * data,
    s32 byte_size
) 
```




<hr>



### function DBGReadMailbox 

```C++
BOOL DBGReadMailbox (
    u32 * v
) 
```




<hr>



### function DBGReadStatus 

```C++
BOOL DBGReadStatus (
    u32 * status
) 
```




<hr>



### function DBGWrite 

```C++
BOOL DBGWrite (
    u32 addr,
    const  void * data,
    s32 size
) 
```




<hr>



### function DBGWriteMailbox 

```C++
BOOL DBGWriteMailbox (
    u32 v
) 
```




<hr>



### function DBInitComm 

```C++
void DBInitComm (
    u8 ** a,
    MTRCallbackType b
) 
```




<hr>



### function DBInitInterrupts 

```C++
void DBInitInterrupts (
    void
) 
```




<hr>



### function DBOpen 

```C++
void DBOpen (
    void
) 
```




<hr>



### function DBQueryData 

```C++
s32 DBQueryData () 
```




<hr>



### function DBRead 

```C++
BOOL DBRead (
    const  u32 * data,
    s32 size
) 
```




<hr>



### function DBWrite 

```C++
BOOL DBWrite (
    const  s32 * data,
    u32 size
) 
```




<hr>



### function MWCallback 

```C++
void MWCallback (
    u32 a,
    OSContext * b
) 
```




<hr>
## Macro Definition Documentation





### define DB\_NO\_ERROR 

```C++
#define DB_NO_ERROR `0x0`
```




<hr>



### define DB\_STAT\_RECIEVE 

```C++
#define DB_STAT_RECIEVE `0x2`
```




<hr>



### define DB\_STAT\_SEND 

```C++
#define DB_STAT_SEND `0x1`
```




<hr>



### define ODEMU\_ADDR\_RECV 

```C++
#define ODEMU_ADDR_RECV `0x0001E000`
```




<hr>



### define ODEMU\_ERROR 

```C++
#define ODEMU_ERROR `1;`
```




<hr>



### define ODEMU\_ERROR 

```C++
#define ODEMU_ERROR `1;`
```




<hr>



### define ODEMU\_MAIL\_MAGIC 

```C++
#define ODEMU_MAIL_MAGIC `0x1F000000`
```




<hr>



### define ODEMU\_MAIL\_MASK 

```C++
#define ODEMU_MAIL_MASK `0x1fffffff`
```




<hr>



### define ODEMU\_NO\_ERROR 

```C++
#define ODEMU_NO_ERROR `1;`
```




<hr>



### define ODEMU\_OFFSET\_RECV 

```C++
#define ODEMU_OFFSET_RECV `0x00001000`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/OdemuExi2/DebuggerDriver.c`

