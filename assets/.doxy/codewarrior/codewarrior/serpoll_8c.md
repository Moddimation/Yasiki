

# File serpoll.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Portable**](dir_5cbf840bf773d4847fc83ef20b01209e.md) **>** [**serpoll.c**](serpoll_8c.md)

[Go to the source code of this file](serpoll_8c_source.md)



* `#include "Portable/serpoll.h"`
* `#include "Portable/nubevent.h"`
* `#include "Portable/msgbuf.h"`
* `#include "Portable/msghndlr.h"`
* `#include "Os/dolphin/dolphin_trk_glue.h"`
* `#include "trk.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  void \* | [**gTRKInputPendingPtr**](#variable-gtrkinputpendingptr)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**TRKFramingState**](struct_t_r_k_framing_state.md) | [**gTRKFramingState**](#variable-gtrkframingstate)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**TRKGetInput**](#function-trkgetinput) (void) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKInitializeSerialHandler**](#function-trkinitializeserialhandler) (void) <br> |
|  void | [**TRKProcessInput**](#function-trkprocessinput) (int bufferIdx) <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKTerminateSerialHandler**](#function-trkterminateserialhandler) (void) <br> |
|  [**MessageBufferID**](trk_8h.md#typedef-messagebufferid) | [**TRKTestForPacket**](#function-trktestforpacket) () <br> |




























## Public Attributes Documentation




### variable gTRKInputPendingPtr 

```C++
void* gTRKInputPendingPtr;
```




<hr>
## Public Static Attributes Documentation




### variable gTRKFramingState 

```C++
TRKFramingState gTRKFramingState;
```




<hr>
## Public Functions Documentation




### function TRKGetInput 

```C++
void TRKGetInput (
    void
) 
```




<hr>



### function TRKInitializeSerialHandler 

```C++
DSError TRKInitializeSerialHandler (
    void
) 
```




<hr>



### function TRKProcessInput 

```C++
void TRKProcessInput (
    int bufferIdx
) 
```




<hr>



### function TRKTerminateSerialHandler 

```C++
DSError TRKTerminateSerialHandler (
    void
) 
```




<hr>



### function TRKTestForPacket 

```C++
MessageBufferID TRKTestForPacket () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Src/Portable/serpoll.c`

