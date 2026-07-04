

# File OSSerial.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSSerial.c**](_o_s_serial_8c.md)

[Go to the source code of this file](_o_s_serial_8c_source.md)



* `#include <dolphin.h>`
* `#include <dolphin/os.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**SIControl**](struct_s_i_control.md) <br> |
| struct | [**SIPacket**](struct_s_i_packet.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SIControl**](struct_s_i_control.md) | [**SIControl**](#typedef-sicontrol)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SIPacket**](struct_s_i_packet.md) | [**SIPacket**](#typedef-sipacket)  <br> |






## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSAlarm**](struct_o_s_alarm.md) | [**Alarm**](#variable-alarm)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SIPacket**](struct_s_i_packet.md) | [**Packet**](#variable-packet)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SIControl**](struct_s_i_control.md) | [**Si**](#variable-si)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SIBusy**](#function-sibusy) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SIDisablePolling**](#function-sidisablepolling) ([**u32**](types_8h.md#typedef-u32) poll) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SIEnablePolling**](#function-sienablepolling) ([**u32**](types_8h.md#typedef-u32) poll) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SIGetCommand**](#function-sigetcommand) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SIGetResponse**](#function-sigetresponse) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SIGetStatus**](#function-sigetstatus) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SIInit**](#function-siinit) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SISetCommand**](#function-sisetcommand) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) command) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SISetXY**](#function-sisetxy) ([**u32**](types_8h.md#typedef-u32) x, [**u32**](types_8h.md#typedef-u32) y) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SISync**](#function-sisync) () <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**SITransfer**](#function-sitransfer) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* output, [**u32**](types_8h.md#typedef-u32) outputBytes, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* input, [**u32**](types_8h.md#typedef-u32) inputBytes, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**u32**](types_8h.md#typedef-u32), [**OSContext**](struct_o_s_context.md) \*) callback, [**s64**](types_8h.md#typedef-s64) time) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SITransferCommands**](#function-sitransfercommands) () <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AlarmHandler**](#function-alarmhandler) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSAlarm**](struct_o_s_alarm.md) \* alarm, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**CompleteTransfer**](#function-completetransfer) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SIIntrruptHandler**](#function-siintrrupthandler) ([**s16**](types_8h.md#typedef-s16) unused, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SITransferNext**](#function-sitransfernext) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SITransfer**](#function-__sitransfer) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* output, [**u32**](types_8h.md#typedef-u32) outputBytes, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* input, [**u32**](types_8h.md#typedef-u32) inputBytes, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**u32**](types_8h.md#typedef-u32), [**OSContext**](struct_o_s_context.md) \*) callback) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**CHAN\_NONE**](_o_s_serial_8c.md#define-chan_none)  `-1`<br> |
| define  | [**ROUND**](_o_s_serial_8c.md#define-round) (n, a) `((([**u32**](types_8h.md#typedef-u32))([**n**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) + (a) - 1) & ~((a) - 1))`<br> |
| define  | [**SI\_COMCSR\_CHANNEL\_MASK**](_o_s_serial_8c.md#define-si_comcsr_channel_mask)  `(1 &lt;&lt; 2) \| (1 &lt;&lt; 1)`<br> |
| define  | [**SI\_COMCSR\_COMERR\_MASK**](_o_s_serial_8c.md#define-si_comcsr_comerr_mask)  `(1 &lt;&lt; 29)`<br> |
| define  | [**SI\_COMCSR\_IDX**](_o_s_serial_8c.md#define-si_comcsr_idx)  `13`<br> |
| define  | [**SI\_COMCSR\_INLNGTH\_MASK**](_o_s_serial_8c.md#define-si_comcsr_inlngth_mask)  `(1 &lt;&lt; 14) \| (1 &lt;&lt; 13) \| (1 &lt;&lt; 12) \| (1 &lt;&lt; 11) \| (1 &lt;&lt; 10) \| (1 &lt;&lt; 9) \| (1 &lt;&lt; 8)`<br> |
| define  | [**SI\_COMCSR\_OUTLNGTH\_MASK**](_o_s_serial_8c.md#define-si_comcsr_outlngth_mask)  `(1 &lt;&lt; 22) \| (1 &lt;&lt; 21) \| (1 &lt;&lt; 20) \| (1 &lt;&lt; 19) \| (1 &lt;&lt; 18) \| (1 &lt;&lt; 17) \| (1 &lt;&lt; 16)`<br> |
| define  | [**SI\_COMCSR\_RDSTINTMSK\_MASK**](_o_s_serial_8c.md#define-si_comcsr_rdstintmsk_mask)  `(1 &lt;&lt; 27)`<br> |
| define  | [**SI\_COMCSR\_RDSTINT\_MASK**](_o_s_serial_8c.md#define-si_comcsr_rdstint_mask)  `(1 &lt;&lt; 28)`<br> |
| define  | [**SI\_COMCSR\_TCINTMSK\_MASK**](_o_s_serial_8c.md#define-si_comcsr_tcintmsk_mask)  `(1 &lt;&lt; 30)`<br> |
| define  | [**SI\_COMCSR\_TCINT\_MASK**](_o_s_serial_8c.md#define-si_comcsr_tcint_mask)  `(1 &lt;&lt; 31)`<br> |
| define  | [**SI\_COMCSR\_TSTART\_MASK**](_o_s_serial_8c.md#define-si_comcsr_tstart_mask)  `(1 &lt;&lt; 0)`<br> |
| define  | [**SI\_MAX\_CHAN**](_o_s_serial_8c.md#define-si_max_chan)  `4`<br> |
| define  | [**SI\_STATUS\_IDX**](_o_s_serial_8c.md#define-si_status_idx)  `14`<br> |

## Public Types Documentation




### typedef SIControl 

```C++
typedef struct SIControl SIControl;
```




<hr>



### typedef SIPacket 

```C++
typedef struct SIPacket SIPacket;
```




<hr>
## Public Static Attributes Documentation




### variable Alarm 

```C++
struct OSAlarm Alarm[4];
```




<hr>



### variable Packet 

```C++
struct SIPacket Packet[4];
```




<hr>



### variable Si 

```C++
struct SIControl Si;
```




<hr>
## Public Functions Documentation




### function SIBusy 

```C++
int SIBusy () 
```




<hr>



### function SIDisablePolling 

```C++
u32 SIDisablePolling (
    u32 poll
) 
```




<hr>



### function SIEnablePolling 

```C++
u32 SIEnablePolling (
    u32 poll
) 
```




<hr>



### function SIGetCommand 

```C++
u32 SIGetCommand (
    s32 chan
) 
```




<hr>



### function SIGetResponse 

```C++
void SIGetResponse (
    s32 chan,
    void * data
) 
```




<hr>



### function SIGetStatus 

```C++
u32 SIGetStatus () 
```




<hr>



### function SIInit 

```C++
void SIInit () 
```




<hr>



### function SISetCommand 

```C++
void SISetCommand (
    s32 chan,
    u32 command
) 
```




<hr>



### function SISetXY 

```C++
u32 SISetXY (
    u32 x,
    u32 y
) 
```




<hr>



### function SISync 

```C++
u32 SISync () 
```




<hr>



### function SITransfer 

```C++
BOOL SITransfer (
    s32 chan,
    void * output,
    u32 outputBytes,
    void * input,
    u32 inputBytes,
    void (*)( s32 , u32 , OSContext *) callback,
    s64 time
) 
```




<hr>



### function SITransferCommands 

```C++
void SITransferCommands () 
```




<hr>
## Public Static Functions Documentation




### function AlarmHandler 

```C++
static void AlarmHandler (
    struct  OSAlarm * alarm,
    OSContext * context
) 
```




<hr>



### function CompleteTransfer 

```C++
static u32 CompleteTransfer () 
```




<hr>



### function SIIntrruptHandler 

```C++
static void SIIntrruptHandler (
    s16 unused,
    OSContext * context
) 
```




<hr>



### function SITransferNext 

```C++
static void SITransferNext (
    s32 chan
) 
```




<hr>



### function \_\_SITransfer 

```C++
static int __SITransfer (
    s32 chan,
    void * output,
    u32 outputBytes,
    void * input,
    u32 inputBytes,
    void (*)( s32 , u32 , OSContext *) callback
) 
```




<hr>
## Macro Definition Documentation





### define CHAN\_NONE 

```C++
#define CHAN_NONE `-1`
```




<hr>



### define ROUND 

```C++
#define ROUND (
    n,
    a
) `((( u32 )( n ) + (a) - 1) & ~((a) - 1))`
```




<hr>



### define SI\_COMCSR\_CHANNEL\_MASK 

```C++
#define SI_COMCSR_CHANNEL_MASK `(1 << 2) | (1 << 1)`
```




<hr>



### define SI\_COMCSR\_COMERR\_MASK 

```C++
#define SI_COMCSR_COMERR_MASK `(1 << 29)`
```




<hr>



### define SI\_COMCSR\_IDX 

```C++
#define SI_COMCSR_IDX `13`
```




<hr>



### define SI\_COMCSR\_INLNGTH\_MASK 

```C++
#define SI_COMCSR_INLNGTH_MASK `(1 << 14) | (1 << 13) | (1 << 12) | (1 << 11) | (1 << 10) | (1 << 9) | (1 << 8)`
```




<hr>



### define SI\_COMCSR\_OUTLNGTH\_MASK 

```C++
#define SI_COMCSR_OUTLNGTH_MASK `(1 << 22) | (1 << 21) | (1 << 20) | (1 << 19) | (1 << 18) | (1 << 17) | (1 << 16)`
```




<hr>



### define SI\_COMCSR\_RDSTINTMSK\_MASK 

```C++
#define SI_COMCSR_RDSTINTMSK_MASK `(1 << 27)`
```




<hr>



### define SI\_COMCSR\_RDSTINT\_MASK 

```C++
#define SI_COMCSR_RDSTINT_MASK `(1 << 28)`
```




<hr>



### define SI\_COMCSR\_TCINTMSK\_MASK 

```C++
#define SI_COMCSR_TCINTMSK_MASK `(1 << 30)`
```




<hr>



### define SI\_COMCSR\_TCINT\_MASK 

```C++
#define SI_COMCSR_TCINT_MASK `(1 << 31)`
```




<hr>



### define SI\_COMCSR\_TSTART\_MASK 

```C++
#define SI_COMCSR_TSTART_MASK `(1 << 0)`
```




<hr>



### define SI\_MAX\_CHAN 

```C++
#define SI_MAX_CHAN `4`
```




<hr>



### define SI\_STATUS\_IDX 

```C++
#define SI_STATUS_IDX `14`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSSerial.c`

