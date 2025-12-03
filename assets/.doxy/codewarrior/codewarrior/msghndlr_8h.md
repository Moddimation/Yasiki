

# File msghndlr.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**Portable**](dir_ce9d0fbd51586ee7cfe465fa88acc648.md) **>** [**msghndlr.h**](msghndlr_8h.md)

[Go to the source code of this file](msghndlr_8h_source.md)



* `#include "trk.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  BOOL | [**GetTRKConnected**](#function-gettrkconnected) (void) <br> |
|  void | [**OutputData**](#function-outputdata) (void \* data, int length) <br> |
|  void | [**SetTRKConnected**](#function-settrkconnected) (BOOL) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoCPUType**](#function-trkdocputype) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoConnect**](#function-trkdoconnect) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoContinue**](#function-trkdocontinue) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoDisconnect**](#function-trkdodisconnect) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoFlushCache**](#function-trkdoflushcache) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoOverride**](#function-trkdooverride) ([**TRKBuffer**](struct_t_r_k_buffer.md) \*) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoReadMemory**](#function-trkdoreadmemory) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoReadRegisters**](#function-trkdoreadregisters) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoReset**](#function-trkdoreset) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoSetOption**](#function-trkdosetoption) ([**TRKBuffer**](struct_t_r_k_buffer.md) \*) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoStep**](#function-trkdostep) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoStop**](#function-trkdostop) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* b) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoSupportMask**](#function-trkdosupportmask) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoUnsupported**](#function-trkdounsupported) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoVersions**](#function-trkdoversions) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoWriteMemory**](#function-trkdowritememory) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKDoWriteRegisters**](#function-trkdowriteregisters) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKStandardACK**](#function-trkstandardack) ([**TRKBuffer**](struct_t_r_k_buffer.md) \* buffer, [**MessageCommandID**](trk_8h.md#enum-messagecommandid) commandID, [**DSReplyError**](trk_8h.md#enum-dsreplyerror) replyError) <br> |




























## Public Functions Documentation




### function GetTRKConnected 

```C++
BOOL GetTRKConnected (
    void
) 
```




<hr>



### function OutputData 

```C++
void OutputData (
    void * data,
    int length
) 
```




<hr>



### function SetTRKConnected 

```C++
void SetTRKConnected (
    BOOL
) 
```




<hr>



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



### function TRKDoOverride 

```C++
DSError TRKDoOverride (
    TRKBuffer *
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



### function TRKDoSetOption 

```C++
DSError TRKDoSetOption (
    TRKBuffer *
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



### function TRKStandardACK 

```C++
DSError TRKStandardACK (
    TRKBuffer * buffer,
    MessageCommandID commandID,
    DSReplyError replyError
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Priv/Portable/msghndlr.h`

