

# File trk.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**trk.h**](trk_8h.md)

[Go to the source code of this file](trk_8h_source.md)



* `#include "dolphin/types.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**CommandReply**](struct_command_reply.md) <br> |
| struct | [**ProcessorRestoreFlags\_PPC**](struct_processor_restore_flags___p_p_c.md) <br> |
| struct | [**TRKBuffer**](struct_t_r_k_buffer.md) <br> |
| struct | [**TRKFramingState**](struct_t_r_k_framing_state.md) <br> |
| struct | [**TRKState\_PPC**](struct_t_r_k_state___p_p_c.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef struct [**CommandReply**](struct_command_reply.md) | [**CommandReply**](#typedef-commandreply)  <br> |
| typedef int | [**DSError**](#typedef-dserror)  <br> |
| enum  | [**DSFileHandle**](#enum-dsfilehandle)  <br> |
| enum  | [**DSIOResult**](#enum-dsioresult)  <br> |
| enum  | [**DSMessageRegisterOptions**](#enum-dsmessageregisteroptions)  <br> |
| enum  | [**DSMessageStepOptions**](#enum-dsmessagestepoptions)  <br> |
| enum  | [**DSReplyError**](#enum-dsreplyerror)  <br> |
| enum  | [**HardwareType**](#enum-hardwaretype)  <br> |
| enum  | [**MemoryAccessOptions**](#enum-memoryaccessoptions)  <br> |
| typedef int | [**MessageBufferID**](#typedef-messagebufferid)  <br> |
| enum  | [**MessageCommandID**](#enum-messagecommandid)  <br> |
| enum  | [**NubEventType**](#enum-nubeventtype)  <br> |
| typedef struct [**ProcessorRestoreFlags\_PPC**](struct_processor_restore_flags___p_p_c.md) | [**ProcessorRestoreFlags\_PPC**](#typedef-processorrestoreflags_ppc)  <br> |
| enum  | [**ReceiverState**](#enum-receiverstate)  <br> |
| typedef struct [**TRKBuffer**](struct_t_r_k_buffer.md) | [**TRKBuffer**](#typedef-trkbuffer)  <br> |
| typedef struct [**TRKFramingState**](struct_t_r_k_framing_state.md) | [**TRKFramingState**](#typedef-trkframingstate)  <br> |
| typedef struct [**TRKState\_PPC**](struct_t_r_k_state___p_p_c.md) | [**TRKState\_PPC**](#typedef-trkstate_ppc)  <br> |
| enum  | [**UARTBaudRate**](#enum-uartbaudrate)  <br> |
| typedef int | [**UARTError**](#typedef-uarterror)  <br> |
| enum  | [**UARTErrorOptions**](#enum-uarterroroptions)  <br> |
| enum  | [**ValidMemoryOptions**](#enum-validmemoryoptions)  <br> |
| enum  | [**trk\_8h\_1a06fc87d81c62e9abb8790b6e5713c55b**](#enum-trk_8h_1a06fc87d81c62e9abb8790b6e5713c55b)  <br> |
| enum  | [**trk\_8h\_1adf764cbdea00d65edcd07bb9953ad2b7**](#enum-trk_8h_1adf764cbdea00d65edcd07bb9953ad2b7)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**TRKSaveExtended1Block**](#function-trksaveextended1block) () <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**PPC\_1800Exception**](trk_8h.md#define-ppc_1800exception)  `0x1800`<br> |
| define  | [**PPC\_1900Exception**](trk_8h.md#define-ppc_1900exception)  `0x1900`<br> |
| define  | [**PPC\_1A00Exception**](trk_8h.md#define-ppc_1a00exception)  `0x1A00`<br> |
| define  | [**PPC\_1B00Exception**](trk_8h.md#define-ppc_1b00exception)  `0x1B00`<br> |
| define  | [**PPC\_1C00Exception**](trk_8h.md#define-ppc_1c00exception)  `0x1C00`<br> |
| define  | [**PPC\_1D00Exception**](trk_8h.md#define-ppc_1d00exception)  `0x1D00`<br> |
| define  | [**PPC\_1E00Exception**](trk_8h.md#define-ppc_1e00exception)  `0x1E00`<br> |
| define  | [**PPC\_1F00Exception**](trk_8h.md#define-ppc_1f00exception)  `0x1F00`<br> |
| define  | [**PPC\_2000Exception**](trk_8h.md#define-ppc_2000exception)  `0x2000`<br> |
| define  | [**PPC\_Alignment**](trk_8h.md#define-ppc_alignment)  `0x600`<br> |
| define  | [**PPC\_DataStorage**](trk_8h.md#define-ppc_datastorage)  `0x300`<br> |
| define  | [**PPC\_Decrementer**](trk_8h.md#define-ppc_decrementer)  `0x900`<br> |
| define  | [**PPC\_ExternalInterrupt**](trk_8h.md#define-ppc_externalinterrupt)  `0x500`<br> |
| define  | [**PPC\_FloatingPointAssist**](trk_8h.md#define-ppc_floatingpointassist)  `0xE00`<br> |
| define  | [**PPC\_FloatingPointUnavaiable**](trk_8h.md#define-ppc_floatingpointunavaiable)  `0x800`<br> |
| define  | [**PPC\_InstructionAddressBreakpoint**](trk_8h.md#define-ppc_instructionaddressbreakpoint)  `0x1300`<br> |
| define  | [**PPC\_InstructionStorage**](trk_8h.md#define-ppc_instructionstorage)  `0x400`<br> |
| define  | [**PPC\_MachineCheck**](trk_8h.md#define-ppc_machinecheck)  `0x200`<br> |
| define  | [**PPC\_PerformanceMonitor**](trk_8h.md#define-ppc_performancemonitor)  `0xF00`<br> |
| define  | [**PPC\_Program**](trk_8h.md#define-ppc_program)  `0x700`<br> |
| define  | [**PPC\_SystemCall**](trk_8h.md#define-ppc_systemcall)  `0xC00`<br> |
| define  | [**PPC\_SystemManagementInterrupt**](trk_8h.md#define-ppc_systemmanagementinterrupt)  `0x1400`<br> |
| define  | [**PPC\_SystemReset**](trk_8h.md#define-ppc_systemreset)  `0x100`<br> |
| define  | [**PPC\_ThermalManagementInterrupt**](trk_8h.md#define-ppc_thermalmanagementinterrupt)  `0x1700`<br> |
| define  | [**PPC\_Trace**](trk_8h.md#define-ppc_trace)  `0xD00`<br> |
| define  | [**SPR\_CTR**](trk_8h.md#define-spr_ctr)  `9`<br> |
| define  | [**SPR\_DABR**](trk_8h.md#define-spr_dabr)  `1013`<br> |
| define  | [**SPR\_DAR**](trk_8h.md#define-spr_dar)  `19`<br> |
| define  | [**SPR\_DBAT0L**](trk_8h.md#define-spr_dbat0l)  `537`<br> |
| define  | [**SPR\_DBAT0U**](trk_8h.md#define-spr_dbat0u)  `536`<br> |
| define  | [**SPR\_DBAT1L**](trk_8h.md#define-spr_dbat1l)  `539`<br> |
| define  | [**SPR\_DBAT1U**](trk_8h.md#define-spr_dbat1u)  `538`<br> |
| define  | [**SPR\_DBAT2L**](trk_8h.md#define-spr_dbat2l)  `541`<br> |
| define  | [**SPR\_DBAT2U**](trk_8h.md#define-spr_dbat2u)  `540`<br> |
| define  | [**SPR\_DBAT3L**](trk_8h.md#define-spr_dbat3l)  `543`<br> |
| define  | [**SPR\_DBAT3U**](trk_8h.md#define-spr_dbat3u)  `542`<br> |
| define  | [**SPR\_DBAT4L**](trk_8h.md#define-spr_dbat4l)  `569`<br> |
| define  | [**SPR\_DBAT4U**](trk_8h.md#define-spr_dbat4u)  `568`<br> |
| define  | [**SPR\_DBAT5L**](trk_8h.md#define-spr_dbat5l)  `571`<br> |
| define  | [**SPR\_DBAT5U**](trk_8h.md#define-spr_dbat5u)  `570`<br> |
| define  | [**SPR\_DBAT6L**](trk_8h.md#define-spr_dbat6l)  `573`<br> |
| define  | [**SPR\_DBAT6U**](trk_8h.md#define-spr_dbat6u)  `572`<br> |
| define  | [**SPR\_DBAT7L**](trk_8h.md#define-spr_dbat7l)  `575`<br> |
| define  | [**SPR\_DBAT7U**](trk_8h.md#define-spr_dbat7u)  `574`<br> |
| define  | [**SPR\_DEC**](trk_8h.md#define-spr_dec)  `22`<br> |
| define  | [**SPR\_DMA\_L**](trk_8h.md#define-spr_dma_l)  `923`<br> |
| define  | [**SPR\_DMA\_U**](trk_8h.md#define-spr_dma_u)  `922`<br> |
| define  | [**SPR\_DSISR**](trk_8h.md#define-spr_dsisr)  `18`<br> |
| define  | [**SPR\_EAR**](trk_8h.md#define-spr_ear)  `282`<br> |
| define  | [**SPR\_FPECR**](trk_8h.md#define-spr_fpecr)  `1022`<br> |
| define  | [**SPR\_GQR0**](trk_8h.md#define-spr_gqr0)  `912`<br> |
| define  | [**SPR\_GQR1**](trk_8h.md#define-spr_gqr1)  `913`<br> |
| define  | [**SPR\_GQR2**](trk_8h.md#define-spr_gqr2)  `914`<br> |
| define  | [**SPR\_GQR3**](trk_8h.md#define-spr_gqr3)  `915`<br> |
| define  | [**SPR\_GQR4**](trk_8h.md#define-spr_gqr4)  `916`<br> |
| define  | [**SPR\_GQR5**](trk_8h.md#define-spr_gqr5)  `917`<br> |
| define  | [**SPR\_GQR6**](trk_8h.md#define-spr_gqr6)  `918`<br> |
| define  | [**SPR\_GQR7**](trk_8h.md#define-spr_gqr7)  `919`<br> |
| define  | [**SPR\_HID0**](trk_8h.md#define-spr_hid0)  `1008`<br> |
| define  | [**SPR\_HID1**](trk_8h.md#define-spr_hid1)  `1009`<br> |
| define  | [**SPR\_HID2**](trk_8h.md#define-spr_hid2)  `920`<br> |
| define  | [**SPR\_HID4**](trk_8h.md#define-spr_hid4)  `1011`<br> |
| define  | [**SPR\_IABR**](trk_8h.md#define-spr_iabr)  `1010`<br> |
| define  | [**SPR\_IBAT0L**](trk_8h.md#define-spr_ibat0l)  `529`<br> |
| define  | [**SPR\_IBAT0U**](trk_8h.md#define-spr_ibat0u)  `528`<br> |
| define  | [**SPR\_IBAT1L**](trk_8h.md#define-spr_ibat1l)  `531`<br> |
| define  | [**SPR\_IBAT1U**](trk_8h.md#define-spr_ibat1u)  `530`<br> |
| define  | [**SPR\_IBAT2L**](trk_8h.md#define-spr_ibat2l)  `533`<br> |
| define  | [**SPR\_IBAT2U**](trk_8h.md#define-spr_ibat2u)  `532`<br> |
| define  | [**SPR\_IBAT3L**](trk_8h.md#define-spr_ibat3l)  `535`<br> |
| define  | [**SPR\_IBAT3U**](trk_8h.md#define-spr_ibat3u)  `534`<br> |
| define  | [**SPR\_IBAT4L**](trk_8h.md#define-spr_ibat4l)  `561`<br> |
| define  | [**SPR\_IBAT4U**](trk_8h.md#define-spr_ibat4u)  `560`<br> |
| define  | [**SPR\_IBAT5L**](trk_8h.md#define-spr_ibat5l)  `563`<br> |
| define  | [**SPR\_IBAT5U**](trk_8h.md#define-spr_ibat5u)  `562`<br> |
| define  | [**SPR\_IBAT6L**](trk_8h.md#define-spr_ibat6l)  `565`<br> |
| define  | [**SPR\_IBAT6U**](trk_8h.md#define-spr_ibat6u)  `564`<br> |
| define  | [**SPR\_IBAT7L**](trk_8h.md#define-spr_ibat7l)  `567`<br> |
| define  | [**SPR\_IBAT7U**](trk_8h.md#define-spr_ibat7u)  `566`<br> |
| define  | [**SPR\_ICTC**](trk_8h.md#define-spr_ictc)  `1019`<br> |
| define  | [**SPR\_L2CR**](trk_8h.md#define-spr_l2cr)  `1017`<br> |
| define  | [**SPR\_LR**](trk_8h.md#define-spr_lr)  `8`<br> |
| define  | [**SPR\_MMCR0**](trk_8h.md#define-spr_mmcr0)  `952`<br> |
| define  | [**SPR\_MMCR1**](trk_8h.md#define-spr_mmcr1)  `956`<br> |
| define  | [**SPR\_PMC1**](trk_8h.md#define-spr_pmc1)  `953`<br> |
| define  | [**SPR\_PMC2**](trk_8h.md#define-spr_pmc2)  `954`<br> |
| define  | [**SPR\_PMC3**](trk_8h.md#define-spr_pmc3)  `957`<br> |
| define  | [**SPR\_PMC4**](trk_8h.md#define-spr_pmc4)  `958`<br> |
| define  | [**SPR\_PVR**](trk_8h.md#define-spr_pvr)  `287`<br> |
| define  | [**SPR\_SDA**](trk_8h.md#define-spr_sda)  `959`<br> |
| define  | [**SPR\_SDR1**](trk_8h.md#define-spr_sdr1)  `25`<br> |
| define  | [**SPR\_SIA**](trk_8h.md#define-spr_sia)  `955`<br> |
| define  | [**SPR\_SPRG0**](trk_8h.md#define-spr_sprg0)  `272`<br> |
| define  | [**SPR\_SPRG1**](trk_8h.md#define-spr_sprg1)  `273`<br> |
| define  | [**SPR\_SPRG2**](trk_8h.md#define-spr_sprg2)  `274`<br> |
| define  | [**SPR\_SPRG3**](trk_8h.md#define-spr_sprg3)  `275`<br> |
| define  | [**SPR\_SRR0**](trk_8h.md#define-spr_srr0)  `26`<br> |
| define  | [**SPR\_SRR1**](trk_8h.md#define-spr_srr1)  `27`<br> |
| define  | [**SPR\_TBL**](trk_8h.md#define-spr_tbl)  `284`<br> |
| define  | [**SPR\_TBU**](trk_8h.md#define-spr_tbu)  `285`<br> |
| define  | [**SPR\_THRM1**](trk_8h.md#define-spr_thrm1)  `1020`<br> |
| define  | [**SPR\_THRM2**](trk_8h.md#define-spr_thrm2)  `1021`<br> |
| define  | [**SPR\_UMMCR0**](trk_8h.md#define-spr_ummcr0)  `936`<br> |
| define  | [**SPR\_UMMCR1**](trk_8h.md#define-spr_ummcr1)  `940`<br> |
| define  | [**SPR\_UPMC1**](trk_8h.md#define-spr_upmc1)  `937`<br> |
| define  | [**SPR\_UPMC2**](trk_8h.md#define-spr_upmc2)  `938`<br> |
| define  | [**SPR\_UPMC3**](trk_8h.md#define-spr_upmc3)  `941`<br> |
| define  | [**SPR\_UPMC4**](trk_8h.md#define-spr_upmc4)  `942`<br> |
| define  | [**SPR\_USDA**](trk_8h.md#define-spr_usda)  `943`<br> |
| define  | [**SPR\_USIA**](trk_8h.md#define-spr_usia)  `939`<br> |
| define  | [**SPR\_WPAR**](trk_8h.md#define-spr_wpar)  `921`<br> |
| define  | [**SPR\_XER**](trk_8h.md#define-spr_xer)  `1`<br> |
| define  | [**TRKMSGBUF\_SIZE**](trk_8h.md#define-trkmsgbuf_size)  `(0x800 + 0x80)`<br> |

## Public Types Documentation




### typedef CommandReply 

```C++
typedef struct CommandReply CommandReply;
```




<hr>



### typedef DSError 

```C++
typedef int DSError;
```




<hr>



### enum DSFileHandle 

```C++
enum DSFileHandle {
    DS_Stdin = 0,
    DS_Stdout = 1,
    DS_Stderr = 2
};
```




<hr>



### enum DSIOResult 

```C++
enum DSIOResult {
    DS_IONoError = 0,
    DS_IOError = 1,
    DS_IOEOF = 2
};
```




<hr>



### enum DSMessageRegisterOptions 

```C++
enum DSMessageRegisterOptions {
    DSREG_Default = 0,
    DSREG_FP = 1,
    DSREG_Extended1 = 2,
    DSREG_Extended2 = 3
};
```




<hr>



### enum DSMessageStepOptions 

```C++
enum DSMessageStepOptions {
    DSSTEP_IntoCount = 0x0,
    DSSTEP_IntoRange = 0x1,
    DSSTEP_OverCount = 0x10,
    DSSTEP_OverRange = 0x11
};
```




<hr>



### enum DSReplyError 

```C++
enum DSReplyError {
    DSREPLY_NoError = 0x0,
    DSREPLY_Error = 0x1,
    DSREPLY_PacketSizeError = 0x2,
    DSREPLY_CWDSError = 0x3,
    DSREPLY_EscapeError = 0x4,
    DSREPLY_BadFCS = 0x5,
    DSREPLY_Overflow = 0x6,
    DSREPLY_SequenceMissing = 0x7,
    DSREPLY_UnsupportedCommandError = 0x10,
    DSREPLY_ParameterError = 0x11,
    DSREPLY_UnsupportedOptionError = 0x12,
    DSREPLY_InvalidMemoryRange = 0x13,
    DSREPLY_InvalidRegisterRange = 0x14,
    DSREPLY_CWDSException = 0x15,
    DSREPLY_NotStopped = 0x16,
    DSREPLY_BreakpointsFull = 0x17,
    DSREPLY_BreakpointConflict = 0x18,
    DSREPLY_OSError = 0x20,
    DSREPLY_InvalidProcessID = 0x21,
    DSREPLY_InvalidThreadID = 0x22,
    DSREPLY_DebugSecurityError = 0x23
};
```




<hr>



### enum HardwareType 

```C++
enum HardwareType {
    HARDWARE_AMC_DDH = 0,
    HARDWARE_GDEV = 1,
    HARDWARE_BBA = 2
};
```




<hr>



### enum MemoryAccessOptions 

```C++
enum MemoryAccessOptions {
    MEMACCESS_UserMemory = 0,
    MEMACCESS_DebuggerMemory = 1
};
```




<hr>



### typedef MessageBufferID 

```C++
typedef int MessageBufferID;
```




<hr>



### enum MessageCommandID 

```C++
enum MessageCommandID {
    DSMSG_Ping = 0x0,
    DSMSG_Connect = 0x1,
    DSMSG_Disconnect = 0x2,
    DSMSG_Reset = 0x3,
    DSMSG_Versions = 0x4,
    DSMSG_SupportMask = 0x5,
    DSMSG_Override = 0x7,
    DSMSG_ReadMemory = 0x10,
    DSMSG_WriteMemory = 0x11,
    DSMSG_ReadRegisters = 0x12,
    DSMSG_WriteRegisters = 0x13,
    DSMSG_SetOption = 0x17,
    DSMSG_Continue = 0x18,
    DSMSG_Step = 0x19,
    DSMSG_Stop = 0x1A,
    DSMSG_ReplyACK = 0x80,
    DSMSG_NotifyStopped = 0x90,
    DSMSG_NotifyException = 0x91,
    DSMSG_WriteFile = 0xD0,
    DSMSG_ReadFile = 0xD1,
    DSMSG_OpenFile = 0xD2,
    DSMSG_CloseFile = 0xD3,
    DSMSG_PositionFile = 0xD4,
    DSMSG_ReplyNAK = 0xFF
};
```




<hr>



### enum NubEventType 

```C++
enum NubEventType {
    NUBEVENT_Null = 0,
    NUBEVENT_Shutdown = 1,
    NUBEVENT_Request = 2,
    NUBEVENT_Breakpoint = 3,
    NUBEVENT_Exception = 4,
    NUBEVENT_Support = 5
};
```




<hr>



### typedef ProcessorRestoreFlags\_PPC 

```C++
typedef struct ProcessorRestoreFlags_PPC ProcessorRestoreFlags_PPC;
```




<hr>



### enum ReceiverState 

```C++
enum ReceiverState {
    DSRECV_Wait = 0,
    DSRECV_Found = 1,
    DSRECV_InFrame = 2,
    DSRECV_FrameOverflow = 3
};
```




<hr>



### typedef TRKBuffer 

```C++
typedef struct TRKBuffer TRKBuffer;
```




<hr>



### typedef TRKFramingState 

```C++
typedef struct TRKFramingState TRKFramingState;
```




<hr>



### typedef TRKState\_PPC 

```C++
typedef struct TRKState_PPC TRKState_PPC;
```




<hr>



### enum UARTBaudRate 

```C++
enum UARTBaudRate {
    kBaudHWSet = -1,
    kBaud300 = 300,
    kBaud600 = 600,
    kBaud1200 = 1200,
    kBaud1800 = 1800,
    kBaud2000 = 2000,
    kBaud2400 = 2400,
    kBaud3600 = 3600,
    kBaud4800 = 4800,
    kBaud7200 = 7200,
    kBaud9600 = 9600,
    kBaud19200 = 19200,
    kBaud38400 = 38400,
    kBaud57600 = 57600,
    kBaud115200 = 115200,
    kBaud230400 = 230400
};
```




<hr>



### typedef UARTError 

```C++
typedef int UARTError;
```




<hr>



### enum UARTErrorOptions 

```C++
enum UARTErrorOptions {
    UART_NoError = 0,
    UART_UnknownBaudRate = 1,
    UART_ConfigurationError = 2,
    UART_BufferOverflow = 3,
    UART_NoData = 4
};
```




<hr>



### enum ValidMemoryOptions 

```C++
enum ValidMemoryOptions {
    VALIDMEM_Readable = 0,
    VALIDMEM_Writeable = 1
};
```




<hr>



### enum trk\_8h\_1a06fc87d81c62e9abb8790b6e5713c55b 

```C++
enum trk_8h_1a06fc87d81c62e9abb8790b6e5713c55b {
    DS_NoError = 0x0,
    DS_StepError = 0x1,
    DS_ParameterError = 0x2,
    DS_EventQueueFull = 0x100,
    DS_NoMessageBufferAvailable = 0x300,
    DS_MessageBufferOverflow = 0x301,
    DS_MessageBufferReadError = 0x302,
    DS_DispatchError = 0x500,
    DS_InvalidMemory = 0x700,
    DS_InvalidRegister = 0x701,
    DS_CWDSException = 0x702,
    DS_UnsupportedError = 0x703,
    DS_InvalidProcessID = 0x704,
    DS_InvalidThreadID = 0x705,
    DS_OSError = 0x706,
    DS_Error800 = 0x800
};
```




<hr>



### enum trk\_8h\_1adf764cbdea00d65edcd07bb9953ad2b7 

```C++
enum trk_8h_1adf764cbdea00d65edcd07bb9953ad2b7 {
    DSMSGMEMORY_Segmented = 0x01,
    DSMSGMEMORY_Extended = 0x02,
    DSMSGMEMORY_Protected = 0x04,
    DSMSGMEMORY_Userview = 0x08,
    DSMSGMEMORY_Space_program = 0x00,
    DSMSGMEMORY_Space_data = 0x40,
    DSMSGMEMORY_Space_io = 0x80
};
```




<hr>
## Public Functions Documentation




### function TRKSaveExtended1Block 

```C++
void TRKSaveExtended1Block () 
```




<hr>
## Macro Definition Documentation





### define PPC\_1800Exception 

```C++
#define PPC_1800Exception `0x1800`
```




<hr>



### define PPC\_1900Exception 

```C++
#define PPC_1900Exception `0x1900`
```




<hr>



### define PPC\_1A00Exception 

```C++
#define PPC_1A00Exception `0x1A00`
```




<hr>



### define PPC\_1B00Exception 

```C++
#define PPC_1B00Exception `0x1B00`
```




<hr>



### define PPC\_1C00Exception 

```C++
#define PPC_1C00Exception `0x1C00`
```




<hr>



### define PPC\_1D00Exception 

```C++
#define PPC_1D00Exception `0x1D00`
```




<hr>



### define PPC\_1E00Exception 

```C++
#define PPC_1E00Exception `0x1E00`
```




<hr>



### define PPC\_1F00Exception 

```C++
#define PPC_1F00Exception `0x1F00`
```




<hr>



### define PPC\_2000Exception 

```C++
#define PPC_2000Exception `0x2000`
```




<hr>



### define PPC\_Alignment 

```C++
#define PPC_Alignment `0x600`
```




<hr>



### define PPC\_DataStorage 

```C++
#define PPC_DataStorage `0x300`
```




<hr>



### define PPC\_Decrementer 

```C++
#define PPC_Decrementer `0x900`
```




<hr>



### define PPC\_ExternalInterrupt 

```C++
#define PPC_ExternalInterrupt `0x500`
```




<hr>



### define PPC\_FloatingPointAssist 

```C++
#define PPC_FloatingPointAssist `0xE00`
```




<hr>



### define PPC\_FloatingPointUnavaiable 

```C++
#define PPC_FloatingPointUnavaiable `0x800`
```




<hr>



### define PPC\_InstructionAddressBreakpoint 

```C++
#define PPC_InstructionAddressBreakpoint `0x1300`
```




<hr>



### define PPC\_InstructionStorage 

```C++
#define PPC_InstructionStorage `0x400`
```




<hr>



### define PPC\_MachineCheck 

```C++
#define PPC_MachineCheck `0x200`
```




<hr>



### define PPC\_PerformanceMonitor 

```C++
#define PPC_PerformanceMonitor `0xF00`
```




<hr>



### define PPC\_Program 

```C++
#define PPC_Program `0x700`
```




<hr>



### define PPC\_SystemCall 

```C++
#define PPC_SystemCall `0xC00`
```




<hr>



### define PPC\_SystemManagementInterrupt 

```C++
#define PPC_SystemManagementInterrupt `0x1400`
```




<hr>



### define PPC\_SystemReset 

```C++
#define PPC_SystemReset `0x100`
```




<hr>



### define PPC\_ThermalManagementInterrupt 

```C++
#define PPC_ThermalManagementInterrupt `0x1700`
```




<hr>



### define PPC\_Trace 

```C++
#define PPC_Trace `0xD00`
```




<hr>



### define SPR\_CTR 

```C++
#define SPR_CTR `9`
```




<hr>



### define SPR\_DABR 

```C++
#define SPR_DABR `1013`
```




<hr>



### define SPR\_DAR 

```C++
#define SPR_DAR `19`
```




<hr>



### define SPR\_DBAT0L 

```C++
#define SPR_DBAT0L `537`
```




<hr>



### define SPR\_DBAT0U 

```C++
#define SPR_DBAT0U `536`
```




<hr>



### define SPR\_DBAT1L 

```C++
#define SPR_DBAT1L `539`
```




<hr>



### define SPR\_DBAT1U 

```C++
#define SPR_DBAT1U `538`
```




<hr>



### define SPR\_DBAT2L 

```C++
#define SPR_DBAT2L `541`
```




<hr>



### define SPR\_DBAT2U 

```C++
#define SPR_DBAT2U `540`
```




<hr>



### define SPR\_DBAT3L 

```C++
#define SPR_DBAT3L `543`
```




<hr>



### define SPR\_DBAT3U 

```C++
#define SPR_DBAT3U `542`
```




<hr>



### define SPR\_DBAT4L 

```C++
#define SPR_DBAT4L `569`
```




<hr>



### define SPR\_DBAT4U 

```C++
#define SPR_DBAT4U `568`
```




<hr>



### define SPR\_DBAT5L 

```C++
#define SPR_DBAT5L `571`
```




<hr>



### define SPR\_DBAT5U 

```C++
#define SPR_DBAT5U `570`
```




<hr>



### define SPR\_DBAT6L 

```C++
#define SPR_DBAT6L `573`
```




<hr>



### define SPR\_DBAT6U 

```C++
#define SPR_DBAT6U `572`
```




<hr>



### define SPR\_DBAT7L 

```C++
#define SPR_DBAT7L `575`
```




<hr>



### define SPR\_DBAT7U 

```C++
#define SPR_DBAT7U `574`
```




<hr>



### define SPR\_DEC 

```C++
#define SPR_DEC `22`
```




<hr>



### define SPR\_DMA\_L 

```C++
#define SPR_DMA_L `923`
```




<hr>



### define SPR\_DMA\_U 

```C++
#define SPR_DMA_U `922`
```




<hr>



### define SPR\_DSISR 

```C++
#define SPR_DSISR `18`
```




<hr>



### define SPR\_EAR 

```C++
#define SPR_EAR `282`
```




<hr>



### define SPR\_FPECR 

```C++
#define SPR_FPECR `1022`
```




<hr>



### define SPR\_GQR0 

```C++
#define SPR_GQR0 `912`
```




<hr>



### define SPR\_GQR1 

```C++
#define SPR_GQR1 `913`
```




<hr>



### define SPR\_GQR2 

```C++
#define SPR_GQR2 `914`
```




<hr>



### define SPR\_GQR3 

```C++
#define SPR_GQR3 `915`
```




<hr>



### define SPR\_GQR4 

```C++
#define SPR_GQR4 `916`
```




<hr>



### define SPR\_GQR5 

```C++
#define SPR_GQR5 `917`
```




<hr>



### define SPR\_GQR6 

```C++
#define SPR_GQR6 `918`
```




<hr>



### define SPR\_GQR7 

```C++
#define SPR_GQR7 `919`
```




<hr>



### define SPR\_HID0 

```C++
#define SPR_HID0 `1008`
```




<hr>



### define SPR\_HID1 

```C++
#define SPR_HID1 `1009`
```




<hr>



### define SPR\_HID2 

```C++
#define SPR_HID2 `920`
```




<hr>



### define SPR\_HID4 

```C++
#define SPR_HID4 `1011`
```




<hr>



### define SPR\_IABR 

```C++
#define SPR_IABR `1010`
```




<hr>



### define SPR\_IBAT0L 

```C++
#define SPR_IBAT0L `529`
```




<hr>



### define SPR\_IBAT0U 

```C++
#define SPR_IBAT0U `528`
```




<hr>



### define SPR\_IBAT1L 

```C++
#define SPR_IBAT1L `531`
```




<hr>



### define SPR\_IBAT1U 

```C++
#define SPR_IBAT1U `530`
```




<hr>



### define SPR\_IBAT2L 

```C++
#define SPR_IBAT2L `533`
```




<hr>



### define SPR\_IBAT2U 

```C++
#define SPR_IBAT2U `532`
```




<hr>



### define SPR\_IBAT3L 

```C++
#define SPR_IBAT3L `535`
```




<hr>



### define SPR\_IBAT3U 

```C++
#define SPR_IBAT3U `534`
```




<hr>



### define SPR\_IBAT4L 

```C++
#define SPR_IBAT4L `561`
```




<hr>



### define SPR\_IBAT4U 

```C++
#define SPR_IBAT4U `560`
```




<hr>



### define SPR\_IBAT5L 

```C++
#define SPR_IBAT5L `563`
```




<hr>



### define SPR\_IBAT5U 

```C++
#define SPR_IBAT5U `562`
```




<hr>



### define SPR\_IBAT6L 

```C++
#define SPR_IBAT6L `565`
```




<hr>



### define SPR\_IBAT6U 

```C++
#define SPR_IBAT6U `564`
```




<hr>



### define SPR\_IBAT7L 

```C++
#define SPR_IBAT7L `567`
```




<hr>



### define SPR\_IBAT7U 

```C++
#define SPR_IBAT7U `566`
```




<hr>



### define SPR\_ICTC 

```C++
#define SPR_ICTC `1019`
```




<hr>



### define SPR\_L2CR 

```C++
#define SPR_L2CR `1017`
```




<hr>



### define SPR\_LR 

```C++
#define SPR_LR `8`
```




<hr>



### define SPR\_MMCR0 

```C++
#define SPR_MMCR0 `952`
```




<hr>



### define SPR\_MMCR1 

```C++
#define SPR_MMCR1 `956`
```




<hr>



### define SPR\_PMC1 

```C++
#define SPR_PMC1 `953`
```




<hr>



### define SPR\_PMC2 

```C++
#define SPR_PMC2 `954`
```




<hr>



### define SPR\_PMC3 

```C++
#define SPR_PMC3 `957`
```




<hr>



### define SPR\_PMC4 

```C++
#define SPR_PMC4 `958`
```




<hr>



### define SPR\_PVR 

```C++
#define SPR_PVR `287`
```




<hr>



### define SPR\_SDA 

```C++
#define SPR_SDA `959`
```




<hr>



### define SPR\_SDR1 

```C++
#define SPR_SDR1 `25`
```




<hr>



### define SPR\_SIA 

```C++
#define SPR_SIA `955`
```




<hr>



### define SPR\_SPRG0 

```C++
#define SPR_SPRG0 `272`
```




<hr>



### define SPR\_SPRG1 

```C++
#define SPR_SPRG1 `273`
```




<hr>



### define SPR\_SPRG2 

```C++
#define SPR_SPRG2 `274`
```




<hr>



### define SPR\_SPRG3 

```C++
#define SPR_SPRG3 `275`
```




<hr>



### define SPR\_SRR0 

```C++
#define SPR_SRR0 `26`
```




<hr>



### define SPR\_SRR1 

```C++
#define SPR_SRR1 `27`
```




<hr>



### define SPR\_TBL 

```C++
#define SPR_TBL `284`
```




<hr>



### define SPR\_TBU 

```C++
#define SPR_TBU `285`
```




<hr>



### define SPR\_THRM1 

```C++
#define SPR_THRM1 `1020`
```




<hr>



### define SPR\_THRM2 

```C++
#define SPR_THRM2 `1021`
```




<hr>



### define SPR\_UMMCR0 

```C++
#define SPR_UMMCR0 `936`
```




<hr>



### define SPR\_UMMCR1 

```C++
#define SPR_UMMCR1 `940`
```




<hr>



### define SPR\_UPMC1 

```C++
#define SPR_UPMC1 `937`
```




<hr>



### define SPR\_UPMC2 

```C++
#define SPR_UPMC2 `938`
```




<hr>



### define SPR\_UPMC3 

```C++
#define SPR_UPMC3 `941`
```




<hr>



### define SPR\_UPMC4 

```C++
#define SPR_UPMC4 `942`
```




<hr>



### define SPR\_USDA 

```C++
#define SPR_USDA `943`
```




<hr>



### define SPR\_USIA 

```C++
#define SPR_USIA `939`
```




<hr>



### define SPR\_WPAR 

```C++
#define SPR_WPAR `921`
```




<hr>



### define SPR\_XER 

```C++
#define SPR_XER `1`
```




<hr>



### define TRKMSGBUF\_SIZE 

```C++
#define TRKMSGBUF_SIZE `(0x800 + 0x80)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Priv/trk.h`

