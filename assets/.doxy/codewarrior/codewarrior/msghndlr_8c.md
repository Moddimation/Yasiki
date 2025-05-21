

# File msghndlr.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Portable**](dir_f12ab36a6648fac4ab89605ba9aeecf6.md) **>** [**msghndlr.c**](msghndlr_8c.md)

[Go to the source code of this file](msghndlr_8c_source.md)



* `#include "Portable/msghndlr.h"`
* `#include "Portable/nubevent.h"`
* `#include "Portable/msgbuf.h"`
* `#include "Portable/msg.h"`
* `#include "Os/dolphin/targcont.h"`
* `#include "Processor/ppc/Generic/targimpl.h"`
* `#include "trk.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoCPUType**](#function-trkdocputype) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoConnect**](#function-trkdoconnect) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoContinue**](#function-trkdocontinue) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoDisconnect**](#function-trkdodisconnect) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoFlushCache**](#function-trkdoflushcache) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoReadMemory**](#function-trkdoreadmemory) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoReadRegisters**](#function-trkdoreadregisters) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoReset**](#function-trkdoreset) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoStep**](#function-trkdostep) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoStop**](#function-trkdostop) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* b) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoSupportMask**](#function-trkdosupportmask) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoUnsupported**](#function-trkdounsupported) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoVersions**](#function-trkdoversions) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoWriteMemory**](#function-trkdowritememory) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoWriteRegisters**](#function-trkdowriteregisters) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKSendACK**](#function-trksendack) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKStandardACK**](#function-trkstandardack) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, [**MessageCommandID**](trk_8h.md#enum-messagecommandid) commandID, [**DSReplyError**](trk_8h.md#enum-dsreplyerror) replyError) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**TRKMessageIntoReply**](#function-trkmessageintoreply) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, u8 ackCmd, [**DSReplyError**](trk_8h.md#enum-dsreplyerror) errSentInAck) <br> |


























## Public Functions Documentation




### function TRKDoCPUType 

```C++
DSError TRKDoCPUType (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKDoConnect 

```C++
DSError TRKDoConnect (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKDoContinue 

```C++
DSError TRKDoContinue (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKDoDisconnect 

```C++
DSError TRKDoDisconnect (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKDoFlushCache 

```C++
DSError TRKDoFlushCache (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKDoReadMemory 

```C++
DSError TRKDoReadMemory (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKDoReadRegisters 

```C++
DSError TRKDoReadRegisters (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKDoReset 

```C++
DSError TRKDoReset (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKDoStep 

```C++
DSError TRKDoStep (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKDoStop 

```C++
DSError TRKDoStop (
    TRKBuffer * b
) 
```




<hr>



### function TRKDoSupportMask 

```C++
DSError TRKDoSupportMask (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKDoUnsupported 

```C++
DSError TRKDoUnsupported (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKDoVersions 

```C++
DSError TRKDoVersions (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKDoWriteMemory 

```C++
DSError TRKDoWriteMemory (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKDoWriteRegisters 

```C++
DSError TRKDoWriteRegisters (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKSendACK 

```C++
DSError TRKSendACK (
    TRKBuffer * buffer
) 
```




<hr>



### function TRKStandardACK 

```C++
DSError TRKStandardACK (
    TRKBuffer * buffer,
    MessageCommandID commandID,
    DSReplyError replyError
) 
```




<hr>
## Public Static Functions Documentation




### function TRKMessageIntoReply 

```C++
static void TRKMessageIntoReply (
    TRKBuffer * buffer,
    u8 ackCmd,
    DSReplyError errSentInAck
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/MetroTRK/Src/Portable/msghndlr.c`

