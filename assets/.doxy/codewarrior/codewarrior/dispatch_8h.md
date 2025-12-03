

# File dispatch.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**Portable**](dir_ce9d0fbd51586ee7cfe465fa88acc648.md) **>** [**dispatch.h**](dispatch_8h.md)

[Go to the source code of this file](dispatch_8h_source.md)



* `#include "dolphin/types.h"`
* `#include "trk.h"`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef struct [**TRKBuffer**](struct_t_r_k_buffer.md) | [**TRKBuffer**](#typedef-trkbuffer)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  BOOL | [**TRKDispatchMessage**](#function-trkdispatchmessage) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKInitializeDispatcher**](#function-trkinitializedispatcher) () <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**TRK\_DISPATCH\_CMD\_CONNECT**](dispatch_8h.md#define-trk_dispatch_cmd_connect)  `1  /\* Connect to the console \*/`<br> |
| define  | [**TRK\_DISPATCH\_CMD\_CONTINUE**](dispatch_8h.md#define-trk_dispatch_cmd_continue)  `24 /\* Continue debugging \*/`<br> |
| define  | [**TRK\_DISPATCH\_CMD\_DISCONNECT**](dispatch_8h.md#define-trk_dispatch_cmd_disconnect)  `2  /\* Disconnect from the console \*/`<br> |
| define  | [**TRK\_DISPATCH\_CMD\_GETSUPPORTMASK**](dispatch_8h.md#define-trk_dispatch_cmd_getsupportmask)  `5  /\* Get Support Mask \*/`<br> |
| define  | [**TRK\_DISPATCH\_CMD\_GETVERSION**](dispatch_8h.md#define-trk_dispatch_cmd_getversion)  `4  /\* Get debugger version \*/`<br> |
| define  | [**TRK\_DISPATCH\_CMD\_OVERRIDE**](dispatch_8h.md#define-trk_dispatch_cmd_override)  `7  /\* Override? \*/`<br> |
| define  | [**TRK\_DISPATCH\_CMD\_READMEM**](dispatch_8h.md#define-trk_dispatch_cmd_readmem)  `16 /\* Reading from memory \*/`<br> |
| define  | [**TRK\_DISPATCH\_CMD\_READREGS**](dispatch_8h.md#define-trk_dispatch_cmd_readregs)  `18 /\* Read a register value \*/`<br> |
| define  | [**TRK\_DISPATCH\_CMD\_RESET**](dispatch_8h.md#define-trk_dispatch_cmd_reset)  `3  /\* Reset the debugger \*/`<br> |
| define  | [**TRK\_DISPATCH\_CMD\_SETOPTION**](dispatch_8h.md#define-trk_dispatch_cmd_setoption)  `23 /\* Set an option? \*/`<br> |
| define  | [**TRK\_DISPATCH\_CMD\_STEP**](dispatch_8h.md#define-trk_dispatch_cmd_step)  `25 /\* Step through an instruction \*/`<br> |
| define  | [**TRK\_DISPATCH\_CMD\_STOP**](dispatch_8h.md#define-trk_dispatch_cmd_stop)  `26 /\* Stop the debugger \*/`<br> |
| define  | [**TRK\_DISPATCH\_CMD\_WRITEMEM**](dispatch_8h.md#define-trk_dispatch_cmd_writemem)  `17 /\* Writing to memory \*/`<br> |
| define  | [**TRK\_DISPATCH\_CMD\_WRITEREGS**](dispatch_8h.md#define-trk_dispatch_cmd_writeregs)  `19 /\* Set a register \*/`<br> |

## Public Types Documentation




### typedef TRKBuffer 

```C++
typedef struct TRKBuffer TRKBuffer;
```




<hr>
## Public Functions Documentation




### function TRKDispatchMessage 

```C++
BOOL TRKDispatchMessage (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKInitializeDispatcher 

```C++
DSError TRKInitializeDispatcher () 
```




<hr>
## Macro Definition Documentation





### define TRK\_DISPATCH\_CMD\_CONNECT 

```C++
#define TRK_DISPATCH_CMD_CONNECT `1  /* Connect to the console */`
```




<hr>



### define TRK\_DISPATCH\_CMD\_CONTINUE 

```C++
#define TRK_DISPATCH_CMD_CONTINUE `24 /* Continue debugging */`
```




<hr>



### define TRK\_DISPATCH\_CMD\_DISCONNECT 

```C++
#define TRK_DISPATCH_CMD_DISCONNECT `2  /* Disconnect from the console */`
```




<hr>



### define TRK\_DISPATCH\_CMD\_GETSUPPORTMASK 

```C++
#define TRK_DISPATCH_CMD_GETSUPPORTMASK `5  /* Get Support Mask */`
```




<hr>



### define TRK\_DISPATCH\_CMD\_GETVERSION 

```C++
#define TRK_DISPATCH_CMD_GETVERSION `4  /* Get debugger version */`
```




<hr>



### define TRK\_DISPATCH\_CMD\_OVERRIDE 

```C++
#define TRK_DISPATCH_CMD_OVERRIDE `7  /* Override? */`
```




<hr>



### define TRK\_DISPATCH\_CMD\_READMEM 

```C++
#define TRK_DISPATCH_CMD_READMEM `16 /* Reading from memory */`
```




<hr>



### define TRK\_DISPATCH\_CMD\_READREGS 

```C++
#define TRK_DISPATCH_CMD_READREGS `18 /* Read a register value */`
```




<hr>



### define TRK\_DISPATCH\_CMD\_RESET 

```C++
#define TRK_DISPATCH_CMD_RESET `3  /* Reset the debugger */`
```




<hr>



### define TRK\_DISPATCH\_CMD\_SETOPTION 

```C++
#define TRK_DISPATCH_CMD_SETOPTION `23 /* Set an option? */`
```




<hr>



### define TRK\_DISPATCH\_CMD\_STEP 

```C++
#define TRK_DISPATCH_CMD_STEP `25 /* Step through an instruction */`
```




<hr>



### define TRK\_DISPATCH\_CMD\_STOP 

```C++
#define TRK_DISPATCH_CMD_STOP `26 /* Stop the debugger */`
```




<hr>



### define TRK\_DISPATCH\_CMD\_WRITEMEM 

```C++
#define TRK_DISPATCH_CMD_WRITEMEM `17 /* Writing to memory */`
```




<hr>



### define TRK\_DISPATCH\_CMD\_WRITEREGS 

```C++
#define TRK_DISPATCH_CMD_WRITEREGS `19 /* Set a register */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Priv/Portable/dispatch.h`

